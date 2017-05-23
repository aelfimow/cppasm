#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "imm8.h"
#include "Instruction_OUT.h"

Instruction_OUT::Instruction_OUT(asmstream &s) :
    m_asmout { s },
    m_mnem { "out" }
{
}

void Instruction_OUT::operator()(uint8_t addr, const r8 &op2)
{
    imm8 tmp { addr };
    Instruction instr { m_mnem + " " + op2.name() + ", " + tmp.to_str() };
    m_asmout << instr;
}

void Instruction_OUT::operator()(uint8_t addr, const r16 &op2)
{
    imm8 tmp { addr };
    Instruction instr { m_mnem + " " + op2.name() + ", " + tmp.to_str() };
    m_asmout << instr;
}

void Instruction_OUT::operator()(uint8_t addr, const r32 &op2)
{
    imm8 tmp { addr };
    Instruction instr { m_mnem + " " + op2.name() + ", " + tmp.to_str() };
    m_asmout << instr;
}

void Instruction_OUT::operator()(const r16 &op1, const r8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_OUT::operator()(const r16 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_OUT::operator()(const r16 &op1, const r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

Instruction_OUT::~Instruction_OUT()
{
}
