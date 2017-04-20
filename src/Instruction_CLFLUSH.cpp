#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "Instruction_CLFLUSH.h"

Instruction_CLFLUSH::Instruction_CLFLUSH(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_CLFLUSH::operator()(const m &op1)
{
    Instruction instr { m_mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_CLFLUSH::~Instruction_CLFLUSH()
{
}
