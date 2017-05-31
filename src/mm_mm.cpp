#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "mm.h"
#include "mm_mm.h"

mm_mm::mm_mm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void mm_mm::operator()(mm &op1, mm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

mm_mm::~mm_mm()
{
}
