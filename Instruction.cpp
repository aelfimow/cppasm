#include <string>
#include "Instruction.h"

Instruction::Instruction(const std::string &mnem) :
    m_str { "" }
{
    m_str = mnem;
}

Instruction::Instruction(const std::string &mnem, const std::string &op) :
    m_str { "" }
{
    m_str = mnem + " " + op;
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2) :
    m_str { "" }
{
    m_str = mnem + " " + op2 + ", " + op1;
}

std::string Instruction::to_str() const
{
    return m_str;
}

Instruction::~Instruction()
{
}
