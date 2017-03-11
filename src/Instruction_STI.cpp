#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_STI.h"

Instruction_STI::Instruction_STI(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_STI::operator()()
{
    Instruction instr { "sti" };
    m_asmout << instr;
}

Instruction_STI::~Instruction_STI()
{
}
