#include <string>
#include "imm8.h"
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_AAD.h"

Instruction_AAD::Instruction_AAD(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_AAD::operator()()
{
    Instruction instr { "aad" };
    m_asmout << instr;
}

void Instruction_AAD::operator()(const imm8 &op1)
{
    Instruction instr { "aad", op1.to_str() };
    m_asmout << instr;
}

Instruction_AAD::~Instruction_AAD()
{
}
