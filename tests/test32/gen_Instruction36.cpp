#include "cppasm.h"

static void gen_Instruction36_Type1(Instruction36_Type1 &instr)
{
    imm8 value1 { 0x42 };
    imm16 value2 { 0x4242 };
    imm32 value3 { 0x42424242 };
    m8  addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };

    instr(AL, CL);
    instr(addr1, CL);
    instr(AX, CX);
    instr(addr2, CX);
    instr(EAX, ECX);
    instr(addr3, ECX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
    instr(AX, DS);
    instr(addr2, DS);
    instr(DS, CX);
    instr(DS, addr2);
    instr(AL, value1);
    instr(AX, value2);
    instr(EAX, value3);
    instr(addr1, value1);
    instr(addr2, value2);
    instr(addr3, value3);
    instr(EAX, CR0);
    instr(CR0, ECX);
    instr(EAX, DR0);
    instr(DR0, ECX);
}

void gen_Instruction36()
{
    gen_Instruction36_Type1(MOV);
}
