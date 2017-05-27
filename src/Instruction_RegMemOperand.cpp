#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "Instruction_RegMemOperand.h"

Instruction_RegMemOperand::Instruction_RegMemOperand(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_RegMemOperand::operator()(const reg &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_RegMemOperand::operator()(const m &op1)
{
    std::string mnem { m_mnem + op1.postfix() };
    Instruction instr { mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_RegMemOperand::~Instruction_RegMemOperand()
{
}
