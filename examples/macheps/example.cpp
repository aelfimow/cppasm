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

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    fp32_params param;
    macheps_fp32_init(&param);

    std::cout << "Init: " << param << std::endl;

    for (auto cnt = 0; cnt < 10; ++cnt)
    {
        macheps_fp32_compute(&param);

        std::cout << "Compute: " << param << std::endl;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
