#include "acir_format.hpp"
#include "ecdsa_secp256k1.hpp"
#include "barretenberg/plonk/proof_system/types/proof.hpp"
#include "barretenberg/plonk/proof_system/verification_key/verification_key.hpp"
#include "barretenberg/crypto/ecdsa/ecdsa.hpp"

#include <gtest/gtest.h>
#include <vector>

using namespace proof_system::plonk::stdlib::types;
using curve = stdlib::secp256k1<Composer>;

size_t generate_ecdsa_constraint(acir_format::EcdsaSecp256k1Constraint& ecdsa_constraint,
                                 std::vector<fr>& witness_values)
{
    std::string message_string = "Instructions unclear, ask again later.";

    crypto::ecdsa::key_pair<curve::fr, curve::g1> account;
    account.private_key = curve::fr::random_element();
    account.public_key = curve::g1::one * account.private_key;

    crypto::ecdsa::signature signature =
        crypto::ecdsa::construct_signature<Sha256Hasher, curve::fq, curve::fr, curve::g1>(message_string, account);

    uint256_t pub_x_value = account.public_key.x;
    uint256_t pub_y_value = account.public_key.y;

    std::vector<uint32_t> message_in;
    std::vector<uint32_t> pub_x_indices_in;
    std::vector<uint32_t> pub_y_indices_in;
    std::vector<uint32_t> signature_in;
    size_t offset = 1;
    for (size_t i = 0; i < message_string.size(); ++i) {
        message_in.emplace_back(i + offset);
        const auto byte = static_cast<uint8_t>(message_string[i]);
        witness_values.emplace_back(byte);
    }
    offset += message_in.size();

    for (size_t i = 0; i < 32; ++i) {
        pub_x_indices_in.emplace_back(i + offset);
        witness_values.emplace_back(pub_x_value.slice(248 - i * 8, 256 - i * 8));
    }
    offset += pub_x_indices_in.size();
    for (size_t i = 0; i < 32; ++i) {
        pub_y_indices_in.emplace_back(i + offset);
        witness_values.emplace_back(pub_y_value.slice(248 - i * 8, 256 - i * 8));
    }
    offset += pub_y_indices_in.size();
    for (size_t i = 0; i < 32; ++i) {
        signature_in.emplace_back(i + offset);
        witness_values.emplace_back(signature.r[i]);
    }
    offset += signature.r.size();
    for (size_t i = 0; i < 32; ++i) {
        signature_in.emplace_back(i + offset);
        witness_values.emplace_back(signature.s[i]);
    }
    offset += signature.s.size();

    witness_values.emplace_back(1);
    const auto result_in = static_cast<uint32_t>(offset);
    offset += 1;
    witness_values.emplace_back(1);

    ecdsa_constraint = acir_format::EcdsaSecp256k1Constraint{
        .message = message_in,
        .pub_x_indices = pub_x_indices_in,
        .pub_y_indices = pub_y_indices_in,
        .result = result_in,
        .signature = signature_in,
    };
    return offset;
}

TEST(ECDSASecp256k1, TestECDSAConstraintSucceed)
{
    acir_format::EcdsaSecp256k1Constraint ecdsa_constraint;
    std::vector<fr> witness_values;
    size_t num_variables = generate_ecdsa_constraint(ecdsa_constraint, witness_values);
    acir_format::acir_format constraint_system{
        .varnum = static_cast<uint32_t>(num_variables),
        .public_inputs = {},
        .fixed_base_scalar_mul_constraints = {},
        .logic_constraints = {},
        .range_constraints = {},
        .schnorr_constraints = {},
        .ecdsa_constraints = { ecdsa_constraint },
        .sha256_constraints = {},
        .blake2s_constraints = {},
        .hash_to_field_constraints = {},
        .pedersen_constraints = {},
        .merkle_membership_constraints = {},
        .recursion_constraints = {},
        .constraints = {},
    };

    auto composer = acir_format::create_circuit_with_witness(constraint_system, witness_values);

    EXPECT_EQ(composer.get_variable(ecdsa_constraint.result), 1);
    auto prover = composer.create_prover();

    auto proof = prover.construct_proof();
    auto verifier = composer.create_verifier();
    EXPECT_EQ(verifier.verify_proof(proof), true);
}

TEST(ECDSASecp256k1, TestECDSAConstraintFail)
{
    acir_format::EcdsaSecp256k1Constraint ecdsa_constraint;
    std::vector<fr> witness_values;
    size_t num_variables = generate_ecdsa_constraint(ecdsa_constraint, witness_values);

    // set result value to be false
    witness_values[witness_values.size() - 1] = 0;

    // tamper with signature
    witness_values[witness_values.size() - 20] += 1;

    acir_format::acir_format constraint_system{
        .varnum = static_cast<uint32_t>(num_variables),
        .public_inputs = {},
        .fixed_base_scalar_mul_constraints = {},
        .logic_constraints = {},
        .range_constraints = {},
        .schnorr_constraints = {},
        .ecdsa_constraints = { ecdsa_constraint },
        .sha256_constraints = {},
        .blake2s_constraints = {},
        .hash_to_field_constraints = {},
        .pedersen_constraints = {},
        .merkle_membership_constraints = {},
        .recursion_constraints = {},
        .constraints = {},
    };

    auto composer = acir_format::create_circuit_with_witness(constraint_system, witness_values);

    EXPECT_EQ(composer.get_variable(ecdsa_constraint.result), 0);
    auto prover = composer.create_prover();

    auto proof = prover.construct_proof();
    auto verifier = composer.create_verifier();
    EXPECT_EQ(verifier.verify_proof(proof), true);
}
