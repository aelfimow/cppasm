#include <iostream>
#include "Instruction.h"
#include "asmstream.h"

asmstream::asmstream() :
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
        std::cout << "\t";
    }

    std::cout << instr.to_str().c_str() << std::endl;
}

void asmstream::prefix(std::string str)
{
    std::cout << "\t" << str.c_str();
    m_prefix = true;
}

asmstream::~asmstream()
{
}
