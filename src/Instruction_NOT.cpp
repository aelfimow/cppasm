#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "Instruction_NOT.h"

Instruction_NOT::Instruction_NOT(asmstream &s) :
    m_asmout { s }
{
}

void Instruction_NOT::operator()(const reg &op1)
{
    Instruction instr { "not", op1.name() };
    m_asmout << instr;
}

void Instruction_NOT::operator()(const m &op1)
{
    const std::string mnem { "not" + op1.postfix() };
    Instruction instr { mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_NOT::~Instruction_NOT()
{
}
