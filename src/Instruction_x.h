/*! \file Instruction_x.h
    \brief A template class representing instructions.
*/
#ifdef INSTRUCTION_X_H
#error Already included
#else
#define INSTRUCTION_X_H

template
<
    class ... Ts
>
class Instruction_x:
    public Ts ...
{
    public:
        Instruction_x(asmstream &s, const std::string mnem) :
            Ts { s, mnem } ...
        {
        }

        ~Instruction_x() { }

        using Ts::operator() ...;
};

#endif
