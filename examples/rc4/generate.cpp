#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_rc4init()
{
    const std::string func_name { "rc4init" };
    global(func_name);
    label(func_name);
    comment("void " + func_name + "(const char key[], size_t L, char sbox[])");

    r64 &key_reg { RCX };
    r64 &L_reg { RDX };
    r64 &sbox_reg { R8 };

    comment("key: " + key_reg.name());
    comment("L: " + L_reg.name());
    comment("sbox: " + sbox_reg.name());

    comment("Initialize sbox[]");
    comment("for i = 0 to 255");
    comment("   sbox[i] := i");
    {
        imm64 init_values { 0x0706050403020100 };
        imm64 inc_values { 0x0808080808080808 };

        r64 &count_reg { RAX };
        XOR(count_reg, count_reg);

        r64 &maxCount_reg { R11 };
        imm64 maxCount { (256 / 8) };
        MOV(maxCount_reg, maxCount);

        r64 &inc_reg { R9 };
        r64 &values_reg { R10 };
        MOV(inc_reg, inc_values);
        MOV(values_reg, init_values);

        std::string loop_start { "loop1_s" };
        std::string loop_end   { "loop1_e" };
        label(loop_start);
        {
            CMP(count_reg, maxCount_reg);
            JE(loop_end);

            m64 sbox_addr { sbox_reg };
            sbox_addr.index(count_reg).scale(8);

            MOV(sbox_addr, values_reg);
            ADD(values_reg, inc_reg);
            INC(count_reg);
            JMP(loop_start);
        }
        label(loop_end);
    }

    comment("Scramble sbox[]");
    comment("j := 0");
    comment("for i = 0 to 255");
    comment("   j := (j + s[i] + k[i mod L]) mod 256");
    comment("   swap s[i] with s[j]");
    {
        r64 &i_reg { RAX };
        r8 &ii_reg { AL };
        XOR(i_reg, i_reg);

        std::string loop_start("loop2_s");
        label(loop_start);
        {
            INC(i_reg);
            TEST(ii_reg, ii_reg);
            JNZ(loop_start);
        }
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
