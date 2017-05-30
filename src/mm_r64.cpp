#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r64.h"
#include "mm.h"
#include "mm_r64.h"

mm_r64::mm_r64(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void mm_r64::operator()(mm &op1, r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

mm_r64::~mm_r64()
{
}
