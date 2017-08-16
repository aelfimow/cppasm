#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_WindowsFunc()
{
    // Function name to be generated
    const std::string func_name { "execute_cpuid" };
    comment("void " + func_name + "(size_t RAX_value, size_t RCX_value, size_t *pOut)");
    comment("RAX_value is in %rcx");
    comment("RCX_value is in %rdx");
    comment("pOut is in %r8");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    r64 &reg_to_save = RBX;
    PUSH(reg_to_save);  // this register must be saved (and restored later)

    MOV(RAX, RCX);  // RAX_value
    MOV(RCX, RDX);  // RCX_value

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
}

static void gen_LinuxFunc()
{
    // Function name to be generated
    const std::string func_name { "execute_cpuid" };
    comment("void " + func_name + "(size_t RAX_value, size_t RCX_value, size_t *pOut)");
    comment("RAX_value is in %rdi");
    comment("RCX_value is in %rsi");
    comment("pOut is in %rdx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    r64 &reg_to_save = RBX;
    PUSH(reg_to_save);  // this register must be saved (and restored later)

    MOV(R8, RDX);   // move pOut, because RDX will be overwritten by CPUID
    MOV(RAX, RDI);  // RAX_value
    MOV(RCX, RSI);  // RCX_value

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
}

int main(int argc, char *argv[])
try
{
    const std::string usageStr { "Usage: generate windows|linux" };

    if (argc != 2)
    {
        throw std::invalid_argument(usageStr);
    }

    std::string os { argv[1] };

    bool forWindows { os == "windows" };
    bool forLinux { os == "linux" };

    if (!forWindows && !forLinux)
    {
        throw std::invalid_argument(usageStr);
    }

    if (forWindows)
    {
        gen_WindowsFunc();
    }

    if (forLinux)
    {
        gen_LinuxFunc();
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
