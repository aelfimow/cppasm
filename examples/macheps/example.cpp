#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "macheps.h"

std::ostream &operator<<(std::ostream &os, const fp32_params &param)
{
    os << "value: " << param.value;
    os << "; ";
    os << "epsilon: " << param.epsilon;
    os << "; ";
    os << "sum: " << param.sum;

    return os;
}

std::ostream &operator<<(std::ostream &os, const fp64_params &param)
{
    os << "value: " << param.value;
    os << "; ";
    os << "epsilon: " << param.epsilon;
    os << "; ";
    os << "sum: " << param.sum;

    return os;
}

std::ostream &operator<<(std::ostream &os, const fp80_params &param)
{
    os << "value: " << param.value;
    os << "; ";
    os << "epsilon: " << param.epsilon;
    os << "; ";
    os << "sum: " << param.sum;

    return os;
}

static void use_fp32()
{
    fp32_params param;
    macheps_fp32_init(&param);

    std::cout << "Init (fp32): " << param << std::endl;

    for (auto cnt = 0; cnt < 3; ++cnt)
    {
        macheps_fp32_compute(&param);

        std::cout << "Compute (fp32): " << param << std::endl;
    }
}

static void use_fp64()
{
    fp64_params param;
    macheps_fp64_init(&param);

    std::cout << "Init (fp64): " << param << std::endl;

    for (auto cnt = 0; cnt < 3; ++cnt)
    {
        macheps_fp64_compute(&param);

        std::cout << "Compute (fp64): " << param << std::endl;
    }
}

static void use_fp80()
{
    fp80_params param;
    macheps_fp80_init(&param);

    std::cout << "Init (fp80): " << param << std::endl;

    for (auto cnt = 0; cnt < 3; ++cnt)
    {
        macheps_fp80_compute(&param);

        std::cout << "Compute (fp80): " << param << std::endl;
    }
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    use_fp32();
    use_fp64();
    use_fp80();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
