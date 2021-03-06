#include "cppasm.h"

static void gen_Instruction5_Type1(Instruction5_Type1 &instr)
{
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    instr();
    instr(AX);
    instr(addr1);
    instr(EAX);
    instr(addr2);
}

static void gen_Instruction5_Type2(Instruction5_Type2 &instr)
{
    imm8 mask { 255 };
    m16 addr { EAX };
    instr(EAX, MM0, mask);
    instr(RAX, MM0, mask);
    instr(EAX, XMM0, mask);
    instr(RAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction5_Type3(Instruction5_Type3 &instr)
{
    m8 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type4(Instruction5_Type4 &instr)
{
    m16 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type5(Instruction5_Type5 &instr)
{
    m32 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type6(Instruction5_Type6 &instr)
{
    m64 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, RAX);
    instr(RAX, k2);
}

void gen_Instruction5()
{
    comment("gen_Instruction5");

    gen_Instruction5_Type1(NOP);

    gen_Instruction5_Type2(PEXTRW);

    gen_Instruction5_Type3(KMOVB);
    gen_Instruction5_Type4(KMOVW);
    gen_Instruction5_Type5(KMOVD);
    gen_Instruction5_Type6(KMOVQ);
}
