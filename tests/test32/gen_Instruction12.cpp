#include "cppasm.h"

static void gen_Instruction12_Type1(Instruction12_Type1 &instr)
{
    m16 addr1 { EDX };
    m32 addr2 { EDX };
    imm8 value { 1 };
    instr(AX, BX);
    instr(addr1, AX);
    instr(EAX, EBX);
    instr(addr2, EAX);
    instr(AX, value);
    instr(EAX, value);
    instr(addr1, value);
    instr(addr2, value);
}

static void gen_Instruction12_Type2(Instruction12_Type2 &instr)
{
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, BL);
    instr(addr1, CL);
    instr(CL, addr1);
    instr(AX, BX);
    instr(addr2, CX);
    instr(CX, addr2);
    instr(EAX, EBX);
    instr(addr3, ECX);
    instr(ECX, addr3);
}

static void gen_Instruction12_Type3(Instruction12_Type3 &instr)
{
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    instr(AX, BL);
    instr(AX, addr1);
    instr(EAX, BL);
    instr(EAX, addr1);
    instr(EAX, AX);
    instr(EAX, addr2);
}

static void gen_Instruction12_Type4(Instruction12_Type4 &instr)
{
    imm8 value { 1 };
    m16 addr1 { EDX };
    m32 addr2 { EDX };
    instr(AX, BX, value);
    instr(addr1, BX, value);
    instr(AX, BX, CL);
    instr(addr1, BX, CL);
    instr(EAX, EBX, value);
    instr(addr2, EBX, value);
    instr(EAX, EBX, CL);
    instr(addr2, EBX, CL);
}

static void gen_Instruction12_Type5(Instruction12_Type5 &instr)
{
    imm8 mask { 255 };
    m256 addr1 { EDX };
    m64 addr2 { ECX };
    m512 addr3 { EBX };

    instr(YMM2, YMM1, mask);
    instr(YMM2, addr1, mask);
    instr(YMM2, addr2.broadcast(1, 4), mask);
    instr(ZMM2, ZMM1, mask);
    instr(ZMM2, addr3, mask);
    instr(ZMM2, addr2.broadcast(1, 8), mask);
    instr(YMM2, YMM1, YMM7);
    instr(YMM2, YMM1, addr1);
    instr(YMM2, YMM1, addr2.broadcast(1, 4));
    instr(ZMM2, ZMM1, ZMM7);
    instr(ZMM2, ZMM1, addr3);
    instr(ZMM2, ZMM1, addr2.broadcast(1, 8));
}

void gen_Instruction12()
{
    comment("gen_Instruction12");

    gen_Instruction12_Type1(BT);
    gen_Instruction12_Type1(BTC);
    gen_Instruction12_Type1(BTR);
    gen_Instruction12_Type1(BTS);

    gen_Instruction12_Type2(XCHG);

    gen_Instruction12_Type3(MOVSX);
    gen_Instruction12_Type3(MOVZX);

    gen_Instruction12_Type4(SHLD);
    gen_Instruction12_Type4(SHRD);

    gen_Instruction12_Type5(VPERMPD);
}
