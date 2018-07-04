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

static void gen_Instruction7_Type1(Instruction7_Type1 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    std::string loc { "gen_Instruction7_Type1_label" };
    instr(loc);
    instr(AX);
    instr(EAX);
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction7_Type2(Instruction7_Type2 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    instr(AX);
    instr(addr1);
    instr(EBX);
    instr(addr2);
    instr(DS);
}

static void gen_Instruction7_Type3(Instruction7_Type3 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    std::string loc { "gen_Instruction7_Type3_label" };
    instr(loc);
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction8_Type1(Instruction8_Type1 &instr)
{
    m32 addr { EDX };
    instr(MM0, EAX);
    instr(MM0, addr);
    instr(EAX, MM0);
    instr(addr, MM0);
    instr(XMM0, EAX);
    instr(XMM0, addr);
    instr(EAX, XMM0);
    instr(addr, XMM0);
}

static void gen_Instruction8_Type2(Instruction8_Type2 &instr)
{
    m64 addr { EDX };
    instr(MM0, addr);
    instr(addr, MM0);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction8_Type3(Instruction8_Type3 &instr)
{
    instr(AL);
    instr(AX);
    instr(EAX);

    m8  addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(addr1);
    instr(addr2);
    instr(addr3);
}

static void gen_Instruction8_Type4(Instruction8_Type4 &instr)
{
    m8  addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, BL);
    instr(addr1, CL);
    instr(AX, BX);
    instr(addr2, CX);
    instr(EAX, EBX);
    instr(addr3, ECX);
}

static void gen_Instruction8_Type5(Instruction8_Type5 &instr)
{
    m128 addr1 { EDX };
    m256 addr2 { EDX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr1);
    instr(YMM0, YMM1, YMM2);
    instr(YMM0, YMM1, addr2);
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr1, mask);
    instr(YMM0, YMM1, mask);
    instr(YMM0, addr2, mask);
}

static void gen_Instruction9_Type1(Instruction9_Type1 &instr)
{
    m8 addr { EBX };
    instr(XMM0, EAX);
    instr(YMM0, EAX);
    instr(ZMM0, EAX);
    instr(XMM0.k1, EAX);
    instr(YMM0.k1, EAX);
    instr(ZMM0.k1, EAX);
    instr(XMM0.k1.z, EAX);
    instr(YMM0.k1.z, EAX);
    instr(ZMM0.k1.z, EAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction9_Type2(Instruction9_Type2 &instr)
{
    m16 addr { EBX };
    instr(XMM0, EAX);
    instr(YMM0, EAX);
    instr(ZMM0, EAX);
    instr(XMM0.k1, EAX);
    instr(YMM0.k1, EAX);
    instr(ZMM0.k1, EAX);
    instr(XMM0.k1.z, EAX);
    instr(YMM0.k1.z, EAX);
    instr(ZMM0.k1.z, EAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction9_Type3(Instruction9_Type3 &instr)
{
    m32 addr { EBX };
    instr(XMM0, EAX);
    instr(YMM0, EAX);
    instr(ZMM0, EAX);
    instr(XMM0.k1, EAX);
    instr(YMM0.k1, EAX);
    instr(ZMM0.k1, EAX);
    instr(XMM0.k1.z, EAX);
    instr(YMM0.k1.z, EAX);
    instr(ZMM0.k1.z, EAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

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

static void gen_Instruction16_Type1(Instruction16_Type1 &instr)
{
    imm8 value1 { 0xAA };
    imm16 value2 { 0xAABB };
    imm32 value3 { 0xAABBCCDD };
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    instr(AL, AH);
    instr(addr1, AL);
    instr(AX, BX);
    instr(addr2, AX);
    instr(EAX, EBX);
    instr(addr3, EAX);
}

static void gen_Instruction16_Type2(Instruction16_Type2 &instr)
{
    imm8 value { 1 };
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
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
}

static void gen_Instruction26_Type1(Instruction26_Type1 &instr)
{
    imm8 value1 { 1 };
    imm16 value2 { 2 };
    imm32 value3 { 3 };
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    instr(AX, value1);
    instr(addr2, value1);
    instr(EAX, value1);
    instr(addr3, value1);
    instr(AL, BL);
    instr(addr1, BL);
    instr(AX, BX);
    instr(addr2, BX);
    instr(EAX, EBX);
    instr(addr3, EBX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
}

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

    label("gen_Instruction7_Type1_label");
    gen_Instruction7_Type1(JMP);
    gen_Instruction7_Type1(CALL);

    gen_Instruction7_Type2(POP);

    label("gen_Instruction7_Type3_label");
    gen_Instruction7_Type3(JMP_FAR);
    gen_Instruction7_Type3(CALL_FAR);

    gen_Instruction8_Type1(MOVD);

    gen_Instruction8_Type2(MOVQ);

    gen_Instruction8_Type3(MUL);
    gen_Instruction8_Type3(IMUL);
    gen_Instruction8_Type3(DIV);
    gen_Instruction8_Type3(IDIV);
    gen_Instruction8_Type3(NEG);
    gen_Instruction8_Type3(INC);
    gen_Instruction8_Type3(DEC);
    gen_Instruction8_Type3(NOT);

    gen_Instruction8_Type4(XADD);
    gen_Instruction8_Type4(CMPXCHG);

    gen_Instruction8_Type5(VPERMILPD);
    gen_Instruction8_Type5(VPERMILPS);

    gen_Instruction9_Type1(VPBROADCASTB);
    gen_Instruction9_Type2(VPBROADCASTW);
    gen_Instruction9_Type3(VPBROADCASTD);

    gen_Instruction10_Type1(PUSH);

    gen_Instruction10_Type2(CRC32);

    gen_Instruction12_Type1(BT);
    gen_Instruction12_Type1(BTC);
    gen_Instruction12_Type1(BTR);
    gen_Instruction12_Type1(BTS);

    gen_Instruction12_Type2(XCHG);

    gen_Instruction12_Type3(MOVSX);
    gen_Instruction12_Type3(MOVZX);

    gen_Instruction12_Type4(SHLD);
    gen_Instruction12_Type4(SHRD);

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
