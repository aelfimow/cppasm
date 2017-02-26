#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "imm8.h"
#include "imm16.h"
#include "imm32.h"
#include "imm64.h"
#include "m.h"
#include "m8.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "Instruction_XOR.h"

Instruction_XOR::Instruction_XOR(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_XOR::operator()(const r8 &op1, const imm8 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r16 &op1, const imm16 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r32 &op1, const imm32 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r64 &op1, const imm32 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r16 &op1, const imm8 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r32 &op1, const imm8 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r64 &op1, const imm8 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m8 &op1, const imm8 &op2)
{
    Instruction instr { "xorb", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m16 &op1, const imm16 &op2)
{
    Instruction instr { "xorw", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m32 &op1, const imm32 &op2)
{
    Instruction instr { "xorl", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m64 &op1, const imm32 &op2)
{
    Instruction instr { "xorq", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m16 &op1, const imm8 &op2)
{
    Instruction instr { "xorw", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m32 &op1, const imm8 &op2)
{
    Instruction instr { "xorl", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m64 &op1, const imm8 &op2)
{
    Instruction instr { "xorq", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r8 &op1, const r8 &op2)
{
    Instruction instr { "xor", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r16 &op1, const r16 &op2)
{
    Instruction instr { "xor", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r32 &op1, const r32 &op2)
{
    Instruction instr { "xor", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r64 &op1, const r64 &op2)
{
    Instruction instr { "xor", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m8 &op1, const r8 &op2)
{
    Instruction instr { "xor", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m16 &op1, const r16 &op2)
{
    Instruction instr { "xor", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m32 &op1, const r32 &op2)
{
    Instruction instr { "xor", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const m64 &op1, const r64 &op2)
{
    Instruction instr { "xor", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r8 &op1, const m8 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r16 &op1, const m16 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r32 &op1, const m32 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_XOR::operator()(const r64 &op1, const m64 &op2)
{
    Instruction instr { "xor", op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_XOR::~Instruction_XOR()
{
}
