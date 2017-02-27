#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "imm16.h"
#include "Instruction_RET.h"

Instruction_RET::Instruction_RET(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_RET::operator()()
{
    Instruction instr { "retq" };
    m_asmout << instr;
}

void Instruction_RET::operator()(const imm16 &op1)
{
    Instruction instr { "retq", op1.to_str() };
    m_asmout << instr;
}

void Instruction_RET::far()
{
    Instruction instr { "lret" };
    m_asmout << instr;
}

void Instruction_RET::far(const imm16 &op1)
{
    Instruction instr { "lret", op1.to_str() };
    m_asmout << instr;
}

Instruction_RET::~Instruction_RET()
{
}
