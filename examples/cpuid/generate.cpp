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
    const std::string func_name { "execute_cpuid" };
    comment("void " + func_name + "(uint32_t cmd1, uint32_t cmd2, uint32_t *p_output)");
    comment("cmd1 is in %ecx");
    comment("cmd2 is in %edx");
    comment("p_output is in %r8");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    r64 &reg_to_save = RBX;
    PUSH(reg_to_save);  // this register must be saved (and restored later)

    MOV(EAX, ECX);  // cmd1
    MOV(ECX, EDX);  // cmd2

    CPUID();

    size_t offset { 0 };
    size_t step { 8 };
    m64 buffer { R8 };

    buffer.disp(offset);
    MOV(buffer, RAX);

    offset += step;
    buffer.disp(offset);
    MOV(buffer, RBX);

    offset += step;
    buffer.disp(offset);
    MOV(buffer, RCX);

    offset += step;
    buffer.disp(offset);
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
