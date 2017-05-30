#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r64.h"
#include "mm.h"
#include "r64_mm.h"

r64_mm::r64_mm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void r64_mm::operator()(mm &op1, r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

r64_mm::~r64_mm()
{
}
