/*! \file Instruction_x.h
    \brief A template class representing instructions.
*/
#ifdef INSTRUCTION_X_H
#error Already included
#else
#define INSTRUCTION_X_H

template
<
    class ... OperandOps
>
class Instruction_x:
    public OperandOps ...
{
    public:
        Instruction_x(asmstream &s, const std::string mnem) :
            OperandOps { s, mnem } ...
        {
        }

        ~Instruction_x() { }

        using OperandOps::operator() ...;
};

template
<
    class Op1
>
using Instruction_1 = Instruction_x
<
    Op1
>;

template
<
    class Op1,
    class Op2
>
using Instruction_2 = Instruction_x
<
    Op1,
    Op2
>;

template
<
    class Op1,
    class Op2,
    class Op3
>
using Instruction_3 = Instruction_x
<
    Op1,
    Op2,
    Op3
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4
>
using Instruction_4 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5
>
using Instruction_5 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6
>
using Instruction_6 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5,
    Op6
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6,
    class Op7
>
using Instruction_7 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5,
    Op6,
    Op7
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6,
    class Op7,
    class Op8
>
using Instruction_8 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5,
    Op6,
    Op7,
    Op8
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6,
    class Op7,
    class Op8,
    class Op9
>
using Instruction_9 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5,
    Op6,
    Op7,
    Op8,
    Op9
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6,
    class Op7,
    class Op8,
    class Op9,
    class Op10
>
using Instruction_10 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5,
    Op6,
    Op7,
    Op8,
    Op9,
    Op10
>;

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6,
    class Op7,
    class Op8,
    class Op9,
    class Op10,
    class Op11,
    class Op12
>
using Instruction_12 = Instruction_x
<
    Op1,
    Op2,
    Op3,
    Op4,
    Op5,
    Op6,
    Op7,
    Op8,
    Op9,
    Op10,
    Op11,
    Op12
>;

#endif
