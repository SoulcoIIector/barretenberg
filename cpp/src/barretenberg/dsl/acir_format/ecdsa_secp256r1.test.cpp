#include "acir_format.hpp"
#include "ecdsa_secp256r1.hpp"
#include "barretenberg/plonk/proof_system/types/proof.hpp"
#include "barretenberg/plonk/proof_system/verification_key/verification_key.hpp"
#include "barretenberg/crypto/ecdsa/ecdsa.hpp"

#include <gtest/gtest.h>
#include <vector>

using curve = proof_system::plonk::stdlib::secp256r1<acir_format::Composer>;

// todo: name
size_t gen(acir_format::EcdsaSecp256r1Constraint& ecdsa_r1_constraint,
           std::vector<fr>& witness_values,
           uint256_t pub_x_value,
           uint256_t pub_y_value,
           std::array<uint8_t, 32> hashed_message,
           crypto::ecdsa::signature signature)
{

    std::vector<uint32_t> message_in;
    std::vector<uint32_t> pub_x_indices_in;
    std::vector<uint32_t> pub_y_indices_in;
    std::vector<uint32_t> signature_in;
    size_t offset = 1;
    for (size_t i = 0; i < hashed_message.size(); ++i) {
        message_in.emplace_back(i + offset);
        const auto byte = static_cast<uint8_t>(hashed_message[i]);
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

    ecdsa_r1_constraint = acir_format::EcdsaSecp256r1Constraint{
        .hashed_message = message_in,
        .pub_x_indices = pub_x_indices_in,
        .pub_y_indices = pub_y_indices_in,
        .result = result_in,
        .signature = signature_in,
    };
    return offset;
}

size_t generate_ecdsa_constraint(acir_format::EcdsaSecp256r1Constraint& ecdsa_r1_constraint,
                                 std::vector<fr>& witness_values)
{

    std::string message_string = "Instructions unclear, ask again later.";

    // hash the message since the dsl ecdsa gadget uses the prehashed message
    // NOTE: If the hash being used outputs more than 32 bytes, then big-field will panic
    std::vector<uint8_t> message_buffer;
    std::copy(message_string.begin(), message_string.end(), std::back_inserter(message_buffer));
    auto hashed_message = sha256::sha256(message_buffer);

    crypto::ecdsa::key_pair<curve::fr, curve::g1> account;
    account.private_key = curve::fr::random_element();
    account.public_key = curve::g1::one * account.private_key;

    crypto::ecdsa::signature signature =
        crypto::ecdsa::construct_signature<Sha256Hasher, curve::fq, curve::fr, curve::g1>(message_string, account);

    return gen(
        ecdsa_r1_constraint, witness_values, account.public_key.x, account.public_key.y, hashed_message, signature);
}

TEST(ECDSASecp256r1, test_hardcoded)
{
    acir_format::EcdsaSecp256r1Constraint ecdsa_r1_constraint;
    std::vector<fr> witness_values;

    std::string message = "ECDSA proves knowledge of a secret number in the context of a single message";
    std::array<uint8_t, 32> hashed_message = {
        84,  112, 91,  163, 186, 175, 219, 223, 186, 140, 95,  154, 112, 247, 168, 155,
        238, 152, 217, 6,   181, 62,  49,  7,   77,  167, 186, 236, 220, 13,  169, 173,
    };

    uint256_t pub_key_x = uint256_t("550f471003f3df97c3df506ac797f6721fb1a1fb7b8f6f83d224498a65c88e24");
    uint256_t pub_key_y = uint256_t("136093d7012e509a73715cbd0b00a3cc0ff4b5c01b3ffa196ab1fb327036b8e6");

    // 0x2c70a8d084b62bfc5ce03641caf9f72ad4da8c81bfe6ec9487bb5e1bef62a13218ad9ee29eaf351fdc50f1520c425e9b908a07278b43b0ec7b872778c14e0784
    crypto::ecdsa::signature signature = {
        .r = { 44,  112, 168, 208, 132, 182, 43,  252, 92,  224, 54, 65, 202, 249, 247, 42,
               212, 218, 140, 129, 191, 230, 236, 148, 135, 187, 94, 27, 239, 98,  161, 50 },
        .s = { 24,  173, 158, 226, 158, 175, 53,  31,  220, 80,  241, 82,  12,  66, 94, 155,
               144, 138, 7,   39,  139, 67,  176, 236, 123, 135, 39,  120, 193, 78, 7,  132 },
        .v = 0
    };

    crypto::ecdsa::key_pair<curve::fr, curve::g1> account;
    account.private_key = curve::fr(uint256_t("020202020202020202020202020202020202020202020202020202020202020202"));

    account.public_key = curve::g1::one * account.private_key;

    size_t num_variables = gen(ecdsa_r1_constraint, witness_values, pub_key_x, pub_key_y, hashed_message, signature);
    acir_format::acir_format constraint_system{
        .varnum = static_cast<uint32_t>(num_variables),
        .public_inputs = {},
        .fixed_base_scalar_mul_constraints = {},
        .logic_constraints = {},
        .range_constraints = {},
        .schnorr_constraints = {},
        .ecdsa_k1_constraints = {},
        .ecdsa_r1_constraints = { ecdsa_r1_constraint },
        .sha256_constraints = {},
        .blake2s_constraints = {},
        .keccak_constraints = {},
        .keccak_var_constraints = {},
        .hash_to_field_constraints = {},
        .pedersen_constraints = {},
        .block_constraints = {},
        .recursion_constraints = {},
        .constraints = {},
    };

    secp256r1::g1::affine_element pub_key = { pub_key_x, pub_key_y };
    bool we_ballin = crypto::ecdsa::verify_signature<Sha256Hasher, secp256r1::fq, secp256r1::fr, secp256r1::g1>(
        message, pub_key, signature);
    EXPECT_EQ(we_ballin, true);

    auto composer = acir_format::create_circuit_with_witness(constraint_system, witness_values);

    EXPECT_EQ(composer.get_variable(ecdsa_r1_constraint.result), 1);
    auto prover = composer.create_prover();

    auto proof = prover.construct_proof();
    auto verifier = composer.create_verifier();
    EXPECT_EQ(verifier.verify_proof(proof), true);
}

TEST(ECDSASecp256r1, TestECDSAConstraintSucceed)
{
    acir_format::EcdsaSecp256r1Constraint ecdsa_r1_constraint;
    std::vector<fr> witness_values;
    size_t num_variables = generate_ecdsa_constraint(ecdsa_r1_constraint, witness_values);
    acir_format::acir_format constraint_system{
        .varnum = static_cast<uint32_t>(num_variables),
        .public_inputs = {},
        .fixed_base_scalar_mul_constraints = {},
        .logic_constraints = {},
        .range_constraints = {},
        .schnorr_constraints = {},
        .ecdsa_k1_constraints = {},
        .ecdsa_r1_constraints = { ecdsa_r1_constraint },
        .sha256_constraints = {},
        .blake2s_constraints = {},
        .keccak_constraints = {},
        .keccak_var_constraints = {},
        .hash_to_field_constraints = {},
        .pedersen_constraints = {},
        .block_constraints = {},
        .recursion_constraints = {},
        .constraints = {},
    };

    auto composer = acir_format::create_circuit_with_witness(constraint_system, witness_values);

    EXPECT_EQ(composer.get_variable(ecdsa_r1_constraint.result), 1);
    auto prover = composer.create_prover();

    auto proof = prover.construct_proof();
    auto verifier = composer.create_verifier();
    EXPECT_EQ(verifier.verify_proof(proof), true);
}

// Test that the verifier can create an ECDSA circuit.
// The ECDSA circuit requires that certain dummy data is valid
// even though we are just building the circuit.
TEST(ECDSASecp256r1, TestECDSACompilesForVerifier)
{
    acir_format::EcdsaSecp256r1Constraint ecdsa_r1_constraint;
    std::vector<fr> witness_values;
    size_t num_variables = generate_ecdsa_constraint(ecdsa_r1_constraint, witness_values);
    acir_format::acir_format constraint_system{
        .varnum = static_cast<uint32_t>(num_variables),
        .public_inputs = {},
        .fixed_base_scalar_mul_constraints = {},
        .logic_constraints = {},
        .range_constraints = {},
        .schnorr_constraints = {},
        .ecdsa_k1_constraints = {},
        .ecdsa_r1_constraints = { ecdsa_r1_constraint },
        .sha256_constraints = {},
        .blake2s_constraints = {},
        .keccak_constraints = {},
        .keccak_var_constraints = {},
        .hash_to_field_constraints = {},
        .pedersen_constraints = {},
        .block_constraints = {},
        .recursion_constraints = {},
        .constraints = {},
    };
    auto crs_factory = std::make_unique<proof_system::ReferenceStringFactory>();
    auto composer = create_circuit(constraint_system, std::move(crs_factory));
}

TEST(ECDSASecp256r1, TestECDSAConstraintFail)
{
    acir_format::EcdsaSecp256r1Constraint ecdsa_r1_constraint;
    std::vector<fr> witness_values;
    size_t num_variables = generate_ecdsa_constraint(ecdsa_r1_constraint, witness_values);

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
        .ecdsa_k1_constraints = {},
        .ecdsa_r1_constraints = { ecdsa_r1_constraint },
        .sha256_constraints = {},
        .blake2s_constraints = {},
        .keccak_constraints = {},
        .keccak_var_constraints = {},
        .hash_to_field_constraints = {},
        .pedersen_constraints = {},
        .block_constraints = {},
        .recursion_constraints = {},
        .constraints = {},
    };

    auto composer = acir_format::create_circuit_with_witness(constraint_system, witness_values);

    EXPECT_EQ(composer.get_variable(ecdsa_r1_constraint.result), 0);
    auto prover = composer.create_prover();

    auto proof = prover.construct_proof();
    auto verifier = composer.create_verifier();
    EXPECT_EQ(verifier.verify_proof(proof), true);
}
