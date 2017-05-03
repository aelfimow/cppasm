#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" void thousand_nops(void);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    thousand_nops();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
