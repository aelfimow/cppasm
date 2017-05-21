#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "imm8.h"
#include "Instruction_INT.h"

Instruction_INT::Instruction_INT(asmstream &s) :
    m_asmout { s }
{
}

void Instruction_INT::operator()(uint8_t value)
{
    imm8 op { value };
    Instruction instr { "int", op.to_str() };
    m_asmout << instr;
}

Instruction_INT::~Instruction_INT()
{
}
