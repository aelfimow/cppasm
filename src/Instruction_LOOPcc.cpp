#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_LOOPcc.h"

Instruction_LOOPcc::Instruction_LOOPcc(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_LOOPcc::operator()(std::string label_str)
{
    Instruction instr { m_mnem, label_str };
    m_asmout << instr;
}

Instruction_LOOPcc::~Instruction_LOOPcc()
{
}
