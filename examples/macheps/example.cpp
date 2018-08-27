#include <iostream>
#include <cstdlib>
#include <stdexcept>

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
