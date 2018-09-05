/*! \file Instruction_x.h
    \brief A template class representing instructions.
*/
#ifdef INSTRUCTION_X_H
#error Already included
#else
#define INSTRUCTION_X_H


#define INSTRUCTION_X_WITH_PACK_EXP


#ifdef INSTRUCTION_X_WITH_PACK_EXP

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
    class Op12,
    class Op13,
    class Op14,
    class Op15,
    class Op16
>
using Instruction_16 = Instruction_x
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
    Op12,
    Op13,
    Op14,
    Op15,
    Op16
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
    class Op12,
    class Op13,
    class Op14,
    class Op15,
    class Op16,
    class Op17,
    class Op18,
    class Op19,
    class Op20,
    class Op21,
    class Op22,
    class Op23,
    class Op24,
    class Op25,
    class Op26
>
using Instruction_26 = Instruction_x
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
    Op12,
    Op13,
    Op14,
    Op15,
    Op16,
    Op17,
    Op18,
    Op19,
    Op20,
    Op21,
    Op22,
    Op23,
    Op24,
    Op25,
    Op26
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
    class Op12,
    class Op13,
    class Op14,
    class Op15,
    class Op16,
    class Op17,
    class Op18,
    class Op19,
    class Op20,
    class Op21,
    class Op22,
    class Op23,
    class Op24,
    class Op25,
    class Op26,
    class Op27,
    class Op28,
    class Op29,
    class Op30,
    class Op31,
    class Op32,
    class Op33,
    class Op34,
    class Op35,
    class Op36
>
using Instruction_36 = Instruction_x
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
    Op12,
    Op13,
    Op14,
    Op15,
    Op16,
    Op17,
    Op18,
    Op19,
    Op20,
    Op21,
    Op22,
    Op23,
    Op24,
    Op25,
    Op26,
    Op27,
    Op28,
    Op29,
    Op30,
    Op31,
    Op32,
    Op33,
    Op34,
    Op35,
    Op36
>;

#else

template
<
    class Op1
>
class Instruction_1 :
    public Op1
{
    public:
        Instruction_1(asmstream &s, const std::string mnem) :
            Op1 { s, mnem }
        {
        }

        ~Instruction_1() { }

        using Op1::operator();
};

template
<
    class Op1,
    class Op2
>
class Instruction_2 :
    public Op1,
    public Op2
{
    public:
        Instruction_2(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem }
        {
        }

        ~Instruction_2() { }

        using Op1::operator();
        using Op2::operator();
};

template
<
    class Op1,
    class Op2,
    class Op3
>
class Instruction_3 :
    public Op1,
    public Op2,
    public Op3
{
    public:
        Instruction_3(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem }
        {
        }

        ~Instruction_3() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
};

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4
>
class Instruction_4 :
    public Op1,
    public Op2,
    public Op3,
    public Op4
{
    public:
        Instruction_4(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem },
            Op4 { s, mnem }
        {
        }

        ~Instruction_4() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
        using Op4::operator();
};

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5
>
class Instruction_5 :
    public Op1,
    public Op2,
    public Op3,
    public Op4,
    public Op5
{
    public:
        Instruction_5(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem },
            Op4 { s, mnem },
            Op5 { s, mnem }
        {
        }

        ~Instruction_5() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
        using Op4::operator();
        using Op5::operator();
};

template
<
    class Op1,
    class Op2,
    class Op3,
    class Op4,
    class Op5,
    class Op6
>
class Instruction_6 :
    public Op1,
    public Op2,
    public Op3,
    public Op4,
    public Op5,
    public Op6
{
    public:
        Instruction_6(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem },
            Op4 { s, mnem },
            Op5 { s, mnem },
            Op6 { s, mnem }
        {
        }

        ~Instruction_6() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
        using Op4::operator();
        using Op5::operator();
        using Op6::operator();
};

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
class Instruction_7 :
    public Op1,
    public Op2,
    public Op3,
    public Op4,
    public Op5,
    public Op6,
    public Op7
{
    public:
        Instruction_7(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem },
            Op4 { s, mnem },
            Op5 { s, mnem },
            Op6 { s, mnem },
            Op7 { s, mnem }
        {
        }

        ~Instruction_7() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
        using Op4::operator();
        using Op5::operator();
        using Op6::operator();
        using Op7::operator();
};

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
class Instruction_8 :
    public Op1,
    public Op2,
    public Op3,
    public Op4,
    public Op5,
    public Op6,
    public Op7,
    public Op8
{
    public:
        Instruction_8(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem },
            Op4 { s, mnem },
            Op5 { s, mnem },
            Op6 { s, mnem },
            Op7 { s, mnem },
            Op8 { s, mnem }
        {
        }

        ~Instruction_8() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
        using Op4::operator();
        using Op5::operator();
        using Op6::operator();
        using Op7::operator();
        using Op8::operator();
};

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
class Instruction_9 :
    public Op1,
    public Op2,
    public Op3,
    public Op4,
    public Op5,
    public Op6,
    public Op7,
    public Op8,
    public Op9
{
    public:
        Instruction_9(asmstream &s, const std::string mnem) :
            Op1 { s, mnem },
            Op2 { s, mnem },
            Op3 { s, mnem },
            Op4 { s, mnem },
            Op5 { s, mnem },
            Op6 { s, mnem },
            Op7 { s, mnem },
            Op8 { s, mnem },
            Op9 { s, mnem }
        {
        }

        ~Instruction_9() { }

        using Op1::operator();
        using Op2::operator();
        using Op3::operator();
        using Op4::operator();
        using Op5::operator();
        using Op6::operator();
        using Op7::operator();
        using Op8::operator();
        using Op9::operator();
};

#endif

#endif
