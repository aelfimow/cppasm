#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "r64.h"
#include "m.h"
#include "Instruction_ADX.h"

Instruction_ADX::Instruction_ADX(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_ADX::operator()(const r32 &op1, const r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_ADX::operator()(const r32 &op1, const m &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADX::operator()(const r64 &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_ADX::operator()(const r64 &op1, const m &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_ADX::~Instruction_ADX()
{
}
