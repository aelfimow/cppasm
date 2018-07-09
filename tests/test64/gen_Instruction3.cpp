#include "cppasm.h"

static void gen_Instruction3_Type1(Instruction3_Type1 &instr)
{
    m64 addr { RAX };
    instr(AX, addr);
    instr(EAX, addr);
    instr(RAX, addr);
}

static void gen_Instruction3_Type2(Instruction3_Type2 &instr)
{
    instr(AX);
    instr(EAX);
    instr(RAX);
}

static void gen_Instruction3_Type3(Instruction3_Type3 &instr)
{
    m32 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction3_Type4(Instruction3_Type4 &instr)
{
    m64 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction3_Type5(Instruction3_Type5 &instr)
{
    m128 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction3_Type6(Instruction3_Type6 &instr)
{
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    m64 addr3 { RCX };
    instr(addr1);
    instr(addr2);
    instr(addr3);
}

static void gen_Instruction3_Type7(Instruction3_Type7 &instr)
{
    m32fp addr1 { RAX };
    m64fp addr2 { RBX };
    instr(addr1);
    instr(addr2);
    instr(ST(0));
}

static void gen_Instruction3_Type8(Instruction3_Type8 &instr)
{
    m32fp addr1 { RAX };
    m64fp addr2 { RBX };
    instr(addr1);
    instr(addr2);
    instr(ST(1), ST(0));
}

static void gen_Instruction3_Type9(Instruction3_Type9 &instr)
{
    imm8 mask { 255 };
    m8 addr { RAX };
    instr(EAX, XMM0, mask);
    instr(RAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction3_Type10(Instruction3_Type10 &instr)
{
    imm8 mask { 255 };
    m32 addr { RAX };
    instr(EAX, XMM0, mask);
    instr(RAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

void gen_Instruction3()
{
    gen_Instruction3_Type1(LFS);
    gen_Instruction3_Type1(LGS);
    gen_Instruction3_Type1(LSS);
    gen_Instruction3_Type1(LEA);

    gen_Instruction3_Type2(RDRAND);
    gen_Instruction3_Type2(RDSEED);

    gen_Instruction3_Type3(MOVSS);

    gen_Instruction3_Type4(MOVSD_SSE2);

    gen_Instruction3_Type5(MOVAPS);
    gen_Instruction3_Type5(MOVUPS);
    gen_Instruction3_Type5(MOVAPD);
    gen_Instruction3_Type5(MOVUPD);
    gen_Instruction3_Type5(MOVDQA);
    gen_Instruction3_Type5(MOVDQU);

    gen_Instruction3_Type6(FILD);
    gen_Instruction3_Type6(FISTP);
    gen_Instruction3_Type6(FISTTP);

    gen_Instruction3_Type7(FST);

    gen_Instruction3_Type8(FADD);
    gen_Instruction3_Type8(FSUB);
    gen_Instruction3_Type8(FSUBR);
    gen_Instruction3_Type8(FMUL);
    gen_Instruction3_Type8(FDIV);
    gen_Instruction3_Type8(FDIVR);

    gen_Instruction3_Type9(PEXTRB);

    gen_Instruction3_Type10(EXTRACTPS);
    gen_Instruction3_Type10(VEXTRACTPS);
}
