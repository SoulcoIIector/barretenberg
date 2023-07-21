#include "./global_crs.hpp"
#include "./factories/file_crs_factory.hpp"
#include "./factories/mem_crs_factory.hpp"
#include "barretenberg/common/throw_or_abort.hpp"

namespace {
// This is a globar variable that we don't touch and we want another one for grumpkin
std::shared_ptr<barretenberg::srs::factories::CrsFactory<curve::BN254>> crs_factory;
std::shared_ptr<barretenberg::srs::factories::CrsFactory<curve::Grumpkin>> grumpkin_crs_factory;
} // namespace

namespace barretenberg::srs {

// MemCrsFactory is only loaded in the web so no point parameterising for now, we don't wanna touch cbinds
// Initialises the crs using the memory buffers, we can avoid touching i believe it's a wasm thing :-?
void init_crs_factory(std::vector<g1::affine_element> const& points, g2::affine_element const g2_point)
{
    crs_factory = std::make_shared<factories::MemCrsFactory>(points, g2_point);
}

// for now let's just have two stupid methods for initialising this for grumpkin

// Initialises crs from a file path this we use in the entire codebase
void init_crs_factory(std::string crs_path)
{
    crs_factory = std::make_shared<factories::FileCrsFactory<curve::BN254>>(crs_path);
}

void init_grumpkin_crs_factory(std::string crs_path)
{
    grumpkin_crs_factory = std::make_shared<factories::FileCrsFactory<curve::Grumpkin>>(crs_path);
}

std::shared_ptr<factories::CrsFactory<curve::BN254>> get_crs_factory()
{
    if (!crs_factory) {
        throw_or_abort("You need vto initalize the global CRS with a call to init_crs_factory(...)!");
    }
    return crs_factory;
}

std::shared_ptr<factories::CrsFactory<curve::Grumpkin>> get_grumpkin_crs_factory()
{
    if (!grumpkin_crs_factory) {
        throw_or_abort("You need vto initalize the global CRS with a call to init_grumpkin_crs_factory(...)!");
    }
    return grumpkin_crs_factory;
}
} // namespace barretenberg::srs