#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_rc4init()
{
    const std::string func_name { "rc4init" };
    global(func_name);
    label(func_name);
    comment("ssize_t " + func_name + "(const char key[], size_t L, char sbox[])");

    r64 &key_reg { RCX };
    r64 &L_reg { RDX };
    r64 &sbox_reg { R8 };

    comment("key: " + key_reg.name());
    comment("L: " + L_reg.name());
    comment("sbox: " + sbox_reg.name());

    imm64 init_values { 0x0706050403020100 };
    imm64 inc_values { 0x0808080808080808 };

    r64 &inc_reg { R9 };
    MOV(inc_reg, inc_values);
    MOV(RAX, init_values);

    comment("Initialize sbox");
    for (size_t offset = 0; offset < 256; offset += 8)
    {
        m64 sbox_addr { sbox_reg };
        MOV(sbox_addr.disp(offset), RAX);
        ADD(RAX, inc_reg);
    }

    RET();
}

static void gen_rc4run()
{
    const std::string func_name { "rc4run" };
    global(func_name);
    label(func_name);
    comment("ssize_t " + func_name + "(const char buf_in[], size_t len, char buf_out[], char sbox[])");

    r64 &buf_in_reg { RCX };
    r64 &len_reg { RDX };
    r64 &buf_out_reg { R8 };
    r64 &sbox_reg { R9 };

    comment("buf_in: " + buf_in_reg.name());
    comment("len: " + len_reg.name());
    comment("buf_out: " + buf_out_reg.name());
    comment("sbox: " + sbox_reg.name());

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    gen_rc4init();

    gen_rc4run();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
