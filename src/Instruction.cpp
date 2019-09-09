/*! \file Instruction.cpp
    \brief Class representing Instruction.
*/
#include <string>
#include <string_view>
#include "Instruction.h"

Instruction::Instruction(const std::string &mnem) :
    m_mnem { mnem },
    m_op1 { },
    m_op2 { },
    m_op3 { },
    m_op4 { },
    m_suffix { },
    m_op_prefix { },
    m_keep_args_sequence { false }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op) :
    m_mnem { mnem },
    m_op1 { op },
    m_op2 { },
    m_op3 { },
    m_op4 { },
    m_suffix { },
    m_op_prefix { },
    m_keep_args_sequence { false }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2) :
    m_mnem { mnem },
    m_op1 { op1 },
    m_op2 { op2 },
    m_op3 { },
    m_op4 { },
    m_suffix { },
    m_op_prefix { },
    m_keep_args_sequence { false }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2, const std::string &op3) :
    m_mnem { mnem },
    m_op1 { op1 },
    m_op2 { op2 },
    m_op3 { op3 },
    m_op4 { },
    m_suffix { },
    m_op_prefix { },
    m_keep_args_sequence { false }
{
}

Instruction::Instruction(const std::string &mnem, const std::string &op1, const std::string &op2, const std::string &op3, const std::string &op4) :
    m_mnem { mnem },
    m_op1 { op1 },
    m_op2 { op2 },
    m_op3 { op3 },
    m_op4 { op4 },
    m_suffix { },
    m_op_prefix { },
    m_keep_args_sequence { false }
{
}

void Instruction::suffix(const std::string sfx)
{
    m_suffix = sfx;
}

void Instruction::suffix(const std::string_view sfx)
{
    m_suffix = sfx;
}

void Instruction::keep_args_sequence()
{
    m_keep_args_sequence = true;
}

void Instruction::op_prefix(const std::string prefix)
{
    m_op_prefix = prefix;
}

std::string Instruction::to_str() const
{
    std::string mnem { m_mnem };

    if (0 != m_suffix.length())
    {
        mnem += m_suffix;
    }

    if (0 != m_op4.length())
    {
        const std::string &op1 = m_keep_args_sequence ? m_op1 : m_op4;
        const std::string &op2 = m_keep_args_sequence ? m_op2 : m_op3;
        const std::string &op3 = m_keep_args_sequence ? m_op3 : m_op2;
        const std::string &op4 = m_keep_args_sequence ? m_op4 : m_op1;

        const std::string str { mnem + " " + op1 + ", " + op2 + ", " + op3 + ", " + op4 };

        return str;
    }

    if (0 != m_op3.length())
    {
        const std::string &op1 = m_keep_args_sequence ? m_op1 : m_op3;
        const std::string &op2 = m_keep_args_sequence ? m_op2 : m_op2;
        const std::string &op3 = m_keep_args_sequence ? m_op3 : m_op1;

        const std::string str { mnem + " " + op1 + ", " + op2 + ", " + op3 };

        return str;
    }

    if (0 != m_op2.length())
    {
        const std::string &op1 = m_keep_args_sequence ? m_op1 : m_op2;
        const std::string &op2 = m_keep_args_sequence ? m_op2 : m_op1;

        const std::string str { mnem + " " + op1 + ", " + op2 };

        return str;
    }

    if (0 != m_op1.length())
    {
        const std::string str { mnem + " " + m_op_prefix + m_op1 };
        return str;
    }

    return mnem;
}

Instruction::~Instruction()
{
}
