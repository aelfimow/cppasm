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

    {
        const std::string func_name { "rc4init" };
        global(func_name);
        label(func_name);
        RET();
    }

    {
        const std::string func_name { "rc4run" };
        global(func_name);
        label(func_name);
        RET();
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
