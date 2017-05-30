#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m64.h"
#include "mm.h"
#include "mm_m64.h"

mm_m64::mm_m64(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void mm_m64::operator()(mm &op1, m64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

mm_m64::~mm_m64()
{
}
