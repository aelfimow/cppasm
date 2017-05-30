#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "op_none.h"

op_none::op_none(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void op_none::operator()()
{
    Instruction instr { m_mnem };
    m_asmout << instr;
}

op_none::~op_none()
{
}
