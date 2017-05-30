#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m32.h"
#include "mm.h"
#include "mm_m32.h"

mm_m32::mm_m32(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void mm_m32::operator()(mm &op1, m32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

mm_m32::~mm_m32()
{
}
