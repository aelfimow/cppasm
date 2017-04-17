#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" uint64_t rdtsc_func(void);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    auto t0 = rdtsc_func();
    auto t1 = rdtsc_func();

    auto diff = (t1 - t0);

    std::cout << "T0: " << t0 << std::endl;
    std::cout << "T1: " << t1 << std::endl;
    std::cout << "Diff: " << diff << std::endl;

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
