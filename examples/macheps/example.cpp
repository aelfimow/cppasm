#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "macheps.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    struct fp32_params param;

    macheps_fp32_init(&param);
    std::cout << "Init: " <<
        "value: " << param.value << "; " <<
        "epsilon: " << param.epsilon << "; " <<
        "sum: " << param.sum << std::endl;

    for (auto cnt = 0; cnt < 10; ++cnt)
    {
        macheps_fp32_compute(&param);
        std::cout << "Compute: " <<
            "value: " << param.value << "; " <<
            "epsilon: " << param.epsilon << "; " <<
            "sum: " << param.sum << std::endl;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
