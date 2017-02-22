#include <iostream>
#include "Instruction.h"
#include "asmstream.h"

asmstream::asmstream()
{
}

void asmstream::operator<<(const Instruction &instr)
{
    std::cout << "\t" << instr.to_str() << std::endl;
}

asmstream::~asmstream()
{
}
