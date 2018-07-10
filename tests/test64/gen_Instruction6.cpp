#include "cppasm.h"

static void gen_Instruction6_Type1(Instruction6_Type1 &instr)
{
    m64 addr1 { RAX };
    m128 addr2 { RBX };
    imm8 mask { 255 };
    instr(MM0, MM1);
    instr(MM0, addr1);
    instr(XMM0, XMM1);
    instr(XMM0, addr2);
    instr(MM0, mask);
    instr(XMM0, mask);
}

static void gen_Instruction6_Type2(Instruction6_Type2 &instr)
{
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    m64 addr3 { RCX };
    instr(AX, BX);
    instr(AX, addr1);
    instr(EAX, EBX);
    instr(EAX, addr2);
    instr(RAX, RBX);
    instr(RAX, addr3);
}

static void gen_Instruction6_Type3(Instruction6_Type3 &instr)
{
    imm8 addr { 0 };
    instr(AL, addr);
    instr(AX, addr);
    instr(EAX, addr);
    instr(AL, DX);
    instr(AX, DX);
    instr(EAX, DX);
}

static void gen_Instruction6_Type4(Instruction6_Type4 &instr)
{
    imm8 addr { 0 };
    instr(addr, AL);
    instr(addr, AX);
    instr(addr, EAX);
    instr(DX, AL);
    instr(DX, AX);
    instr(DX, EAX);
}

static void gen_Instruction6_Type5(Instruction6_Type5 &instr)
{
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, XMM1);
    instr(XMM0, addr1);
    instr(addr1, XMM0);
    instr(YMM0, YMM2);
    instr(YMM0, addr2);
    instr(addr2, YMM0);
}

static void gen_Instruction6_Type6(Instruction6_Type6 &instr)
{
    m32 addr { RBX };
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0, XMM1);
    instr(YMM0, XMM1);
    instr(ZMM0, XMM1);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1, XMM1);
    instr(YMM0.k1, XMM1);
    instr(ZMM0.k1, XMM1);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
    instr(XMM0.k1.z, XMM1);
    instr(YMM0.k1.z, XMM1);
    instr(ZMM0.k1.z, XMM1);
}

static void gen_Instruction6_Type7(Instruction6_Type7 &instr)
{
    m64 addr { EBX };
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0, XMM1);
    instr(YMM0, XMM1);
    instr(ZMM0, XMM1);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1, XMM1);
    instr(YMM0.k1, XMM1);
    instr(ZMM0.k1, XMM1);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
    instr(XMM0.k1.z, XMM1);
    instr(YMM0.k1.z, XMM1);
    instr(ZMM0.k1.z, XMM1);
}

void gen_Instruction6()
{
    gen_Instruction6_Type1(PSLLW);
    gen_Instruction6_Type1(PSLLD);
    gen_Instruction6_Type1(PSLLQ);
    gen_Instruction6_Type1(PSRLW);
    gen_Instruction6_Type1(PSRLD);
    gen_Instruction6_Type1(PSRLQ);
    gen_Instruction6_Type1(PSRAW);
    gen_Instruction6_Type1(PSRAD);

    gen_Instruction6_Type2(CMOVA);
    gen_Instruction6_Type2(CMOVAE);
    gen_Instruction6_Type2(CMOVB);
    gen_Instruction6_Type2(CMOVBE);
    gen_Instruction6_Type2(CMOVC);
    gen_Instruction6_Type2(CMOVE);
    gen_Instruction6_Type2(CMOVG);
    gen_Instruction6_Type2(CMOVGE);
    gen_Instruction6_Type2(CMOVL);
    gen_Instruction6_Type2(CMOVLE);
    gen_Instruction6_Type2(CMOVNA);
    gen_Instruction6_Type2(CMOVNAE);
    gen_Instruction6_Type2(CMOVNBE);
    gen_Instruction6_Type2(CMOVNC);
    gen_Instruction6_Type2(CMOVNE);
    gen_Instruction6_Type2(CMOVNG);
    gen_Instruction6_Type2(CMOVNGE);
    gen_Instruction6_Type2(CMOVNL);
    gen_Instruction6_Type2(CMOVNLE);
    gen_Instruction6_Type2(CMOVNO);
    gen_Instruction6_Type2(CMOVNP);
    gen_Instruction6_Type2(CMOVNS);
    gen_Instruction6_Type2(CMOVNZ);
    gen_Instruction6_Type2(CMOVO);
    gen_Instruction6_Type2(CMOVP);
    gen_Instruction6_Type2(CMOVPE);
    gen_Instruction6_Type2(CMOVPO);
    gen_Instruction6_Type2(CMOVS);
    gen_Instruction6_Type2(CMOVZ);
    gen_Instruction6_Type2(BSF);
    gen_Instruction6_Type2(BSR);
    gen_Instruction6_Type2(POPCNT);

    gen_Instruction6_Type3(IN);

    gen_Instruction6_Type4(OUT);

    gen_Instruction6_Type5(VMOVAPS);
    gen_Instruction6_Type5(VMOVAPD);
    gen_Instruction6_Type5(VMOVDQA);
    gen_Instruction6_Type5(VMOVUPS);
    gen_Instruction6_Type5(VMOVUPD);
    gen_Instruction6_Type5(VMOVDQU);

    gen_Instruction6_Type6(VBROADCASTSS);

    gen_Instruction6_Type7(VBROADCASTI32X2);
}
