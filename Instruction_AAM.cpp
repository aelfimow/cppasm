#include <string>
#include "imm8.h"
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_AAM.h"

Instruction_AAM::Instruction_AAM(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_AAM::operator()()
{
    Instruction instr { "aam" };
    m_asmout << instr;
}

void Instruction_AAM::operator()(const imm8 &op1)
{
    Instruction instr { "aam", op1.to_str() };
    m_asmout << instr;
}

Instruction_AAM::~Instruction_AAM()
{
}
