#include "cppasm.h"

static void gen_Instruction10_Type1(Instruction10_Type1 &instr)
{
    instr(AX);
    instr(RAX);
    m16 addr1 { RDX };
    m64 addr3 { RDX };
    instr(addr1);
    instr(addr3);
    imm8 v1 { 0xAA };
    imm16 v2 { 0xAABB };
    instr(v1);
    instr(v2);
    instr(GS);
}

static void gen_Instruction10_Type2(Instruction10_Type2 &instr)
{
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(ECX, AL);
    instr(ECX, addr1);
    instr(ECX, AX);
    instr(ECX, addr2);
    instr(ECX, EAX);
    instr(ECX, addr3);
    instr(RCX, AL);
    instr(RCX, addr1);
    instr(RCX, RAX);
    instr(RCX, addr4);
}

void gen_Instruction10()
{
    comment("gen_Instruction10");

    gen_Instruction10_Type1(PUSH);

    gen_Instruction10_Type2(CRC32);
}
