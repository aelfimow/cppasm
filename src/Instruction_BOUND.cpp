#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "m.h"
#include "m16.h"
#include "m32.h"
#include "Instruction_BOUND.h"

Instruction_BOUND::Instruction_BOUND(asmstream &s, std::string mnem) :
    m_asmout { s },
    m_mnem { "BOUND" }
{
}

void Instruction_BOUND::operator()(const r16 &op1, const m16 &op2)
{
    Instruction instr { m_mnem + " " + op1.name() + ", " + op2.to_str() };
    m_asmout << instr;
}

void Instruction_BOUND::operator()(const r32 &op1, const m32 &op2)
{
    Instruction instr { m_mnem + " " + op1.name() + ", " + op2.to_str() };
    m_asmout << instr;
}

Instruction_BOUND::~Instruction_BOUND()
{
}
