#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_MONITOR.h"

Instruction_MONITOR::Instruction_MONITOR(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_MONITOR::operator()()
{
    Instruction instr { "monitor" };
    m_asmout << instr;
}

Instruction_MONITOR::~Instruction_MONITOR()
{
}
