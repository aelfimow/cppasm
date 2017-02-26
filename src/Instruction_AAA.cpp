#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_AAA.h"

Instruction_AAA::Instruction_AAA(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_AAA::operator()()
{
    Instruction instr { "aaa" };
    m_asmout << instr;
}

Instruction_AAA::~Instruction_AAA()
{
}
