/*! \file asmstream.cpp
    \brief Class for Assembly Stream.
*/
#include <iostream>
#include "Instruction.h"
#include "asmstream.h"

asmstream::asmstream(char indent) :
    m_indent { indent },
    m_prefix { false }
{
}

void asmstream::operator<<(const Instruction &instr)
{
    if (m_prefix)
    {
        std::cout << " ";
        m_prefix = false;
    }
    else
    {
        std::cout << m_indent;
    }

    std::cout << instr.to_str().c_str() << std::endl;
}

void asmstream::prefix(const std::string &str)
{
    std::cout << m_indent << str.c_str();
    m_prefix = true;
}

asmstream::~asmstream()
{
}
