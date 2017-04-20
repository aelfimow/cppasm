#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "m.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "Instruction_CMOVx.h"

Instruction_CMOVx::Instruction_CMOVx(asmstream &s, std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_CMOVx::operator()(const r16 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_CMOVx::operator()(const r16 &op1, const m16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_CMOVx::operator()(const r32 &op1, const r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_CMOVx::operator()(const r32 &op1, const m32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_CMOVx::operator()(const r64 &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_CMOVx::operator()(const r64 &op1, const m64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_CMOVx::~Instruction_CMOVx()
{
}
