#include "cppasm.h"

static void gen_Instruction10_Type1(Instruction10_Type1 &instr)
{
    instr(AX);
    instr(EAX);
    m16 addr1 { EDX };
    m32 addr2 { EDX };
    instr(addr1);
    instr(addr2);
    imm8 v1 { 0xAA };
    imm16 v2 { 0xAABB };
    imm32 v3 { 0xAABBCCDD };
    instr(v1);
    instr(v2);
    instr(v3);
    instr(GS);
}

static void gen_Instruction10_Type2(Instruction10_Type2 &instr)
{
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(ECX, AL);
    instr(ECX, addr1);
    instr(ECX, AX);
    instr(ECX, addr2);
    instr(ECX, EAX);
    instr(ECX, addr3);
}

void gen_Instruction10()
{
    comment("gen_Instruction10");

    gen_Instruction10_Type1(PUSH);

    gen_Instruction10_Type2(CRC32);
}
