#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m32.h"
#include "mm.h"
#include "m32_mm.h"

m32_mm::m32_mm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void m32_mm::operator()(mm &op1, m32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

m32_mm::~m32_mm()
{
}
