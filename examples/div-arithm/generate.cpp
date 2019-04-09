#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    // Function name to be generated
    const std::string func_name { "div_arithm" };
    comment("void " + func_name + "(struct div_param *p)");
    comment("p is in %rcx");

    global(func_name);

    label(func_name);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
