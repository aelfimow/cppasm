#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_PUSHA.h"

Instruction_PUSHA::Instruction_PUSHA(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_PUSHA::operator()()
{
    Instruction instr { "pusha" };
    m_asmout << instr;
}

Instruction_PUSHA::~Instruction_PUSHA()
{
}
