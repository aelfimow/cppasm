/*! \file Instruction.cpp
    \brief Class representing Instruction.
*/
#include <string>
#include "Instruction.h"

Instruction::Instruction(const std::string &mnem) :
    m_mnem { mnem },
    m_op1 { },
    m_op2 { },
    m_op3 { },
    m_op4 { }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op) :
    m_mnem { mnem },
    m_op1 { op },
    m_op2 { },
    m_op3 { },
    m_op4 { }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2) :
    m_mnem { mnem },
    m_op1 { op1 },
    m_op2 { op2 },
    m_op3 { },
    m_op4 { }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2, const std::string &op3) :
    m_mnem { mnem },
    m_op1 { op1 },
    m_op2 { op2 },
    m_op3 { op3 },
    m_op4 { }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2, const std::string &op3, const std::string &op4) :
    m_mnem { mnem },
    m_op1 { op1 },
    m_op2 { op2 },
    m_op3 { op3 },
    m_op4 { op4 }
{
}

std::string Instruction::to_str() const
{
    if (0 != m_op4.length())
    {
        const std::string str { m_mnem + " " + m_op4 + ", " + m_op3 + ", " + m_op2 + ", " + m_op1 };
        return str;
    }

    if (0 != m_op3.length())
    {
        const std::string str { m_mnem + " " + m_op3 + ", " + m_op2 + ", " + m_op1 };
        return str;
    }

    if (0 != m_op2.length())
    {
        const std::string str { m_mnem + " " + m_op2 + ", " + m_op1 };
        return str;
    }

    if (0 != m_op1.length())
    {
        const std::string str { m_mnem + " " + m_op1 };
        return str;
    }

    return m_mnem;
}

Instruction::~Instruction()
{
}
