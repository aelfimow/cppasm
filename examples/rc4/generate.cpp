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

    r64 &zero_reg { R9 };
    XOR(zero_reg, zero_reg);

    r64 &j_reg { R10 };
    r8 &j_reg_low { R10L };
    XOR(j_reg, j_reg);

    for (size_t offset = 0; offset < 256; ++offset)
    {
        m8 sbox_addr { sbox_reg };
        r64 &tmp_reg { R11 };
        r8 &tmp_reg_low { R11L };

        MOVZX(tmp_reg, sbox_addr.disp(offset));
        ADD(tmp_reg, j_reg);

        imm64 offset_value { offset };
        MOV(RAX, offset_value);
        CMP(L_reg, RAX);
        CMOVE(RAX, zero_reg);

        m8 key_addr { key_reg };
        MOVZX(RAX, key_addr.index(RAX));
        ADD(tmp_reg, RAX);

        MOV(j_reg_low, tmp_reg_low);

        comment("swap sbox[i] with sbox[j]");
        m8 sbox_i_addr { sbox_reg };
        sbox_i_addr.disp(offset);
        m8 sbox_j_addr { sbox_reg };
        sbox_j_addr.index(j_reg);
        MOVZX(RAX, sbox_j_addr);
        MOVZX(tmp_reg, sbox_i_addr);
        MOV(sbox_i_addr, AL);
        MOV(sbox_j_addr, tmp_reg_low);
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
