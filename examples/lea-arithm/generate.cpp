#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    // Function name to be generated
    const std::string func_name { "lea_base_index" };
    comment("size_t lea_base_index(size_t a, size_t b)");
    comment("a is in %rcx");
    comment("b is in %rdx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    m64 addr { RCX, RDX };

    LEA(RAX, addr);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
