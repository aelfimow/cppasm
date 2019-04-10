#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

#include "div_arithm.h"

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    if (argc != 4)
    {
        throw std::invalid_argument("Usage: example Z1 Z2 N");
    }

    size_t Z1 = 0;
    {
        std::stringstream ss;
        ss << std::dec << argv[1];
        ss >> Z1;
    }

    size_t Z2 = 0;
    {
        std::stringstream ss;
        ss << std::dec << argv[2];
        ss >> Z2;
    }

    size_t N = 0;
    {
        std::stringstream ss;
        ss << std::dec << argv[3];
        ss >> N;
    }

    div_param dp;

    dp.with_Z1(Z1).with_Z2(Z2).with_N(N);

    div_arithm(&dp);

    if ((dp.div_result != 3) || (dp.mod_result != 1))
    {
        std::cerr << "Wrong result: " << dp.div_result << ", " << dp.mod_result << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
catch (std::exception &exc)
{
    std::cerr << "Exception: " << exc.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
