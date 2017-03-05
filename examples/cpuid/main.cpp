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
    const std::string execute_cpuid { "execute_cpuid" };

    global(execute_cpuid);

    section code { ".text" };
    code.start();

    label(execute_cpuid);

    PUSH(RBX);      // this register must be saved (and restored later)

    MOV(EAX, ECX);  // cmd1
    MOV(ECX, EDX);  // cmd2

    CPUID();

    /*
    mov %eax, (%r8)     # save result in p_output
    mov %ebx, 4(%r8)
    mov %ecx, 8(%r8)
    mov %edx, 12(%r8)

    POP(RBX);       // restore register
    */

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
