#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "xorshift_func.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    return EXIT_SUCCESS;
}
catch (std::runtime_error &ex)
{
    std::cerr << "Error, exception: " << ex.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
