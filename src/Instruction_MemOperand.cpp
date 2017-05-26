#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "m.h"
#include "Instruction_MemOperand.h"

Instruction_MemOperand::Instruction_MemOperand(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_MemOperand::operator()(const m &op1)
{
    std::string mnem { m_mnem + op1.postfix() };
    Instruction instr { mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_MemOperand::~Instruction_MemOperand()
{
}
