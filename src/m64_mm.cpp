#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m64.h"
#include "mm.h"
#include "m64_mm.h"

m64_mm::m64_mm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void m64_mm::operator()(mm &op1, m64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

m64_mm::~m64_mm()
{
}
