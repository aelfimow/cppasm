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
    const std::string func_name { "isbn13" };
    comment("uint8_t isbn13(const void *p)");
    comment("p is in %rcx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    r64 &param_reg { RCX };

    m64 p { param_reg };

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
