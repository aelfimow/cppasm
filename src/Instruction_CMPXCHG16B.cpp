#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m128.h"
#include "Instruction_CMPXCHG16B.h"

Instruction_CMPXCHG16B::Instruction_CMPXCHG16B(asmstream &s) :
    m_asmout { s },
    m_mnem { "cmpxchg16b" }
{
}

void Instruction_CMPXCHG16B::operator()(const m128 &op1)
{
    Instruction instr { m_mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_CMPXCHG16B::~Instruction_CMPXCHG16B()
{
}
