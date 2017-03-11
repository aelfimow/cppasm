#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_STD.h"

Instruction_STD::Instruction_STD(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_STD::operator()()
{
    Instruction instr { "std" };
    m_asmout << instr;
}

Instruction_STD::~Instruction_STD()
{
}
