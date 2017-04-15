#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" void clflush_func(void *p1, void *p2);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    uint64_t a = 0;
    uint64_t b = 0;

    clflush_func(&a, &b);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
