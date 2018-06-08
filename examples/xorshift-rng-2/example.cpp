#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "xorshift_func.h"

static uint64_t make_triple(size_t a, size_t b, size_t c)
{
    const auto result = (1 * a) + (256 * b) + (65536 * c);

    return result;
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const auto triple = make_triple(1, 1, 54);

    uint64_t state = 1;

    state = xorshift_func1(triple, state);
    state = xorshift_func2(triple, state);
    state = xorshift_func3(triple, state);
    state = xorshift_func4(triple, state);

    if (state == 0)
    {
        throw std::runtime_error("state is 0");
    }

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
