#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_JMP.h"

Instruction_JMP::Instruction_JMP(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_JMP::operator()(std::string label_str)
{
    Instruction instr { m_mnem, label_str };
    m_asmout << instr;
}

Instruction_JMP::~Instruction_JMP()
{
}
