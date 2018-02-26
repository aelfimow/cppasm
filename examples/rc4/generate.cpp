#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_rc4init()
{
    const std::string func_name { "rc4init" };
    comment("void " + func_name + "(const void *key, size_t L, void *sbox)");
    global(func_name);
    label(func_name);

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

        r64 &j_reg { R9 };
        r8 &jj_reg { R9L };
        XOR(j_reg, j_reg);

        r64 &ki_reg { R10 };
        XOR(ki_reg, ki_reg);

        r64 &t_reg { R11 };
        r8 &tt_reg { R11L };

        std::string loop_start("loop2_s");
        label(loop_start);
        {
            comment("Compute (j += s[i])");
            m8 si_addr { sbox_reg, i_reg };
            MOVZX(t_reg, si_addr);
            ADD(j_reg, t_reg);

            xmm &saved_si_reg { XMM0 };
            MOVQ(saved_si_reg, t_reg);

            comment("Compute (j += k[i mod L])");
            m8 key_addr { key_reg, ki_reg };
            MOVZX(t_reg, key_addr);
            ADD(j_reg, t_reg);

            comment("Compute (j mod 256)");
            XOR(t_reg, t_reg);
            MOV(tt_reg, jj_reg);
            XCHG(j_reg, t_reg);

            comment("Swap s[i] with s[j]");
            m8 sj_addr { sbox_reg, j_reg };
            MOVZX(t_reg, sj_addr);
            MOV(si_addr, tt_reg);
            MOVQ(t_reg, saved_si_reg);
            MOV(sj_addr, tt_reg);

            comment("Compute (i mod L)");
            INC(ki_reg);
            XOR(t_reg, t_reg);
            CMP(L_reg, ki_reg);
            CMOVE(ki_reg, t_reg);

            comment("Next i");
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
    comment("void " + func_name + "(const void *buf_in, size_t len, void *buf_out, void *sbox)");
    global(func_name);
    label(func_name);

    r64 &buf_in_reg { RCX };
    r64 &len_reg { RDX };
    r64 &buf_out_reg { R8 };
    r64 &sbox_reg { R9 };

    comment("buf_in: " + buf_in_reg.name());
    comment("len: " + len_reg.name());
    comment("buf_out: " + buf_out_reg.name());
    comment("sbox: " + sbox_reg.name());

    r64 &n_reg { RAX };
    XOR(n_reg, n_reg);

    xmm &saved_i_reg { XMM0 };
    xmm &saved_j_reg { XMM1 };
    xmm &saved_si_reg { XMM2 };
    xmm &saved_sj_reg { XMM3 };

    r64 &t_reg { R10 };
    r8 &tt_reg { R10L };
    r64 &u_reg { R11 };
    r8 &uu_reg { R11L };
    XOR(t_reg, t_reg);
    MOVQ(saved_i_reg, t_reg);
    MOVQ(saved_j_reg, t_reg);

    std::string loop_start { "rc4run_loop1_s" };
    std::string loop_end   { "rc4run_loop1_e" };

    label(loop_start);
    {
        CMP(len_reg, n_reg);
        JE(loop_end);

        comment("i := (i + 1) mod 256");
        MOVQ(t_reg, saved_i_reg);
        INC(t_reg);
        XOR(u_reg, u_reg);
        MOV(uu_reg, tt_reg);
        MOVQ(saved_i_reg, u_reg);

        comment("Load s[i]");
        m8 sbox_addr { sbox_reg };
        sbox_addr.index(u_reg);
        MOVZX(t_reg, sbox_addr);

        comment("j := (j + s[i]) mod 256");
        MOVQ(u_reg, saved_j_reg);
        MOVQ(saved_si_reg, t_reg);
        ADD(t_reg, u_reg);
        XOR(u_reg, u_reg);
        MOV(uu_reg, tt_reg);
        MOVQ(saved_j_reg, u_reg);

        comment("Load s[j] and save it in s[i]");
        sbox_addr.index(u_reg);
        MOVZX(t_reg, sbox_addr);
        MOVQ(saved_sj_reg, t_reg);
        MOVQ(u_reg, saved_i_reg);
        sbox_addr.index(u_reg);
        MOV(sbox_addr, tt_reg);

        comment("Save s[i] in s[j]");
        MOVQ(u_reg, saved_j_reg);
        sbox_addr.index(u_reg);
        MOVQ(t_reg, saved_si_reg);
        MOV(sbox_addr, tt_reg);

        comment("Compute (s[i] + s[j]) mod 256");
        MOVQ(u_reg, saved_sj_reg);
        ADD(t_reg, u_reg);
        XOR(u_reg, u_reg);
        MOV(uu_reg, tt_reg);

        comment("Load s[(s[i] + s[j]) mod 256]");
        sbox_addr.index(u_reg);
        MOVZX(t_reg, sbox_addr);

        comment("Load buf_in[n]");
        m8 buf_in_addr { buf_in_reg };
        buf_in_addr.index(n_reg);
        MOVZX(u_reg, buf_in_addr);

        comment("Encrypt");
        XOR(t_reg, u_reg);

        comment("Save encrypted value");
        m8 buf_out_addr { buf_out_reg };
        buf_out_addr.index(n_reg);
        MOV(buf_out_addr, tt_reg);

        comment("Next n");
        INC(n_reg);
        JMP(loop_start);
    }
    label(loop_end);

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
