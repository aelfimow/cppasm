#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_Jcc.h"

Instruction_Jcc::Instruction_Jcc(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_Jcc::operator()(std::string label_str)
{
    Instruction instr { m_mnem, label_str };
    m_asmout << instr;
}

Instruction_Jcc::~Instruction_Jcc()
{
}
