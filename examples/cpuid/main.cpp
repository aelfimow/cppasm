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

    r64 &reg_to_save = RBX;
    PUSH(reg_to_save);  // this register must be saved (and restored later)

    MOV(EAX, ECX);  // cmd1
    MOV(ECX, EDX);  // cmd2

    CPUID();

    r64 &buffer_reg = R8;
    imm8 step { 8 };
    m64 buffer(buffer_reg);

    MOV(buffer, RAX);
    ADD(buffer_reg, step);

    MOV(buffer, RBX);
    ADD(buffer_reg, step);

    MOV(buffer, RCX);
    ADD(buffer_reg, step);

    MOV(buffer, RDX);

    POP(reg_to_save);   // restore register

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
