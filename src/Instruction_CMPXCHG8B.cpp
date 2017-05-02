#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m64.h"
#include "Instruction_CMPXCHG8B.h"

Instruction_CMPXCHG8B::Instruction_CMPXCHG8B(asmstream &s) :
    m_asmout { s },
    m_mnem { "cmpxchg8b" }
{
}

void Instruction_CMPXCHG8B::operator()(const m64 &op1)
{
    Instruction instr { m_mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_CMPXCHG8B::~Instruction_CMPXCHG8B()
{
}
