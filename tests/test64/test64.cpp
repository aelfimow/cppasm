#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "cppasm.h"

extern void gen_Instruction1();
extern void gen_Instruction2();
extern void gen_Instruction3();
extern void gen_Instruction4();
extern void gen_Instruction5();
extern void gen_Instruction6();
extern void gen_Instruction7();
extern void gen_Instruction8();
extern void gen_Instruction9();
extern void gen_Instruction10();
extern void gen_Instruction12();

static void gen_Instruction16_Type1(Instruction16_Type1 &instr)
{
    imm8 value1 { 0xAA };
    imm16 value2 { 0xAABB };
    imm32 value3 { 0xAABBCCDD };
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    //instr(RAX, value3);
    //instr(addr4, value3);
    instr(AL, AH);
    instr(addr1, AL);
    instr(AX, BX);
    instr(addr2, AX);
    instr(EAX, EBX);
    instr(addr3, EAX);
    instr(RAX, RBX);
    instr(addr4, RAX);
}

static void gen_Instruction16_Type2(Instruction16_Type2 &instr)
{
    imm8 value { 1 };
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, value);
    instr(addr1, value);
    instr(AL, CL);
    instr(addr1, CL);
    instr(AX, value);
    instr(addr2, value);
    instr(AX, CL);
    instr(addr2, CL);
    instr(EAX, value);
    instr(addr3, value);
    instr(EAX, CL);
    instr(addr3, CL);
    instr(RAX, value);
    instr(addr4, value);
    instr(RAX, CL);
    instr(addr4, CL);
}

static void gen_Instruction26_Type1(Instruction26_Type1 &instr)
{
    imm8 value1 { 1 };
    imm16 value2 { 2 };
    imm32 value3 { 3 };
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    instr(RAX, value3);
    instr(addr4, value3);
    instr(AX, value1);
    instr(addr2, value1);
    instr(EAX, value1);
    instr(addr3, value1);
    instr(RAX, value1);
    instr(addr4, value1);
    instr(AL, BL);
    instr(addr1, BL);
    instr(AX, BX);
    instr(addr2, BX);
    instr(EAX, EBX);
    instr(addr3, EBX);
    instr(RAX, RCX);
    instr(addr4, RCX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
    instr(RAX, addr4);
}

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

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };

    code.start();

    gen_Instruction1();
    gen_Instruction2();
    gen_Instruction3();
    gen_Instruction4();
    gen_Instruction5();
    gen_Instruction6();
    gen_Instruction7();
    gen_Instruction8();
    gen_Instruction9();
    gen_Instruction10();
    gen_Instruction12();

    gen_Instruction16_Type1(TEST);

    gen_Instruction16_Type2(SAL);
    gen_Instruction16_Type2(SAR);
    gen_Instruction16_Type2(SHL);
    gen_Instruction16_Type2(SHR);
    gen_Instruction16_Type2(RCL);
    gen_Instruction16_Type2(RCR);
    gen_Instruction16_Type2(ROL);
    gen_Instruction16_Type2(ROR);

    gen_Instruction26_Type1(ADD);
    gen_Instruction26_Type1(ADC);
    gen_Instruction26_Type1(SUB);
    gen_Instruction26_Type1(SBB);
    gen_Instruction26_Type1(CMP);
    gen_Instruction26_Type1(AND);
    gen_Instruction26_Type1(OR);
    gen_Instruction26_Type1(XOR);

    gen_Instruction36_Type1(MOV);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
