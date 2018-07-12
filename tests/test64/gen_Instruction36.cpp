#include "cppasm.h"

static void gen_Instruction36_Type1(Instruction36_Type1 &instr)
{
    imm8 value1 { 0x42 };
    imm16 value2 { 0x4242 };
    imm32 value3 { 0x42424242 };
    imm64 value4 { 0x4242424242424242 };
    m8  addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };

    instr(AL, CL);
    instr(addr1, CL);
    instr(AX, CX);
    instr(addr2, CX);
    instr(EAX, ECX);
    instr(addr3, ECX);
    instr(RAX, RCX);
    instr(addr4, RCX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
    instr(RAX, addr4);
    instr(AX, DS);
    instr(addr2, DS);
    instr(RAX, DS);
    instr(addr4, DS);
    instr(DS, CX);
    instr(DS, addr2);
    instr(DS, RCX);
    instr(DS, addr4);
    instr(AL, value1);
    instr(AX, value2);
    instr(EAX, value3);
    instr(RAX, value4);
    instr(addr1, value1);
    instr(addr2, value2);
    instr(addr3, value3);
    instr(addr4, value3);
    instr(RAX, CR0);
    instr(CR0, RCX);
    instr(RAX, DR0);
    instr(DR0, RCX);
}

void gen_Instruction36()
{
    gen_Instruction36_Type1(MOV);
}
