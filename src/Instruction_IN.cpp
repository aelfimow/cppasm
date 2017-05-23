#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "imm8.h"
#include "Instruction_IN.h"

Instruction_IN::Instruction_IN(asmstream &s) :
    m_asmout { s },
    m_mnem { "in" }
{
}

void Instruction_IN::operator()(const r8 &op1, uint8_t addr)
{
    imm8 tmp { addr };
    Instruction instr { m_mnem + " " + tmp.to_str() + ", " + op1.name() };
    m_asmout << instr;
}

void Instruction_IN::operator()(const r16 &op1, uint8_t addr)
{
    imm8 tmp { addr };
    Instruction instr { m_mnem + " " + tmp.to_str() + ", " + op1.name() };
    m_asmout << instr;
}

void Instruction_IN::operator()(const r32 &op1, uint8_t addr)
{
    imm8 tmp { addr };
    Instruction instr { m_mnem + " " + tmp.to_str() + ", " + op1.name() };
    m_asmout << instr;
}

void Instruction_IN::operator()(const r8 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_IN::operator()(const r16 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_IN::operator()(const r32 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

Instruction_IN::~Instruction_IN()
{
}
