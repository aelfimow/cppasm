#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "mm.h"
#include "mm_r32.h"

mm_r32::mm_r32(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void mm_r32::operator()(mm &op1, r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

mm_r32::~mm_r32()
{
}
