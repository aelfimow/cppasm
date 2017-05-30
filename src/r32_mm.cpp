#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "mm.h"
#include "r32_mm.h"

r32_mm::r32_mm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void r32_mm::operator()(mm &op1, r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

r32_mm::~r32_mm()
{
}
