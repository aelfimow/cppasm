#include <iostream>
#include <cstdlib>
#include <stdexcept>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");

extern "C" size_t collatz_length(size_t value);
extern "C" size_t collatz_calc(size_t value);

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

    auto result = collatz_calc(1);

    if (result != 4)
    {
        std::cerr << "Error, unexpected result (1): " << result << std::endl;
        return EXIT_FAILURE;
    }

    result = collatz_calc(2);

    if (result != 1)
    {
        std::cerr << "Error, unexpected result (2): " << result << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
