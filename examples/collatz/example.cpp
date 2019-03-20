#include <iostream>
#include <cstdlib>
#include <stdexcept>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");

extern "C" size_t collatz_length(size_t value);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    auto len = collatz_length(19);

    if (len != 20)
    {
        std::cerr << "Error, unexpected length: " << len << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
