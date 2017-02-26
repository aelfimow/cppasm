#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_CPUID.h"

Instruction_CPUID::Instruction_CPUID(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_CPUID::operator()()
{
    Instruction instr { "cpuid" };
    m_asmout << instr;
}

Instruction_CPUID::~Instruction_CPUID()
{
}
