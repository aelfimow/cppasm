/*! \file Instruction_x.h
    \brief A set of template classes representing instructions.
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

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6
>
class Instruction_6 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6
{
    public:
        Instruction_6(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem }
        {
        }

        ~Instruction_6() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6,
    class T7
>
class Instruction_7 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6,
    public T7
{
    public:
        Instruction_7(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem },
            T7 { s, mnem }
        {
        }

        ~Instruction_7() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6,
    class T7,
    class T8
>
class Instruction_8 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6,
    public T7,
    public T8
{
    public:
        Instruction_8(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem },
            T7 { s, mnem },
            T8 { s, mnem }
        {
        }

        ~Instruction_8() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
        using T8::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6,
    class T7,
    class T8,
    class T9
>
class Instruction_9 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6,
    public T7,
    public T8,
    public T9
{
    public:
        Instruction_9(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem },
            T7 { s, mnem },
            T8 { s, mnem },
            T9 { s, mnem }
        {
        }

        ~Instruction_9() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
        using T8::operator();
        using T9::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6,
    class T7,
    class T8,
    class T9,
    class T10
>
class Instruction_10 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6,
    public T7,
    public T8,
    public T9,
    public T10
{
    public:
        Instruction_10(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem },
            T7 { s, mnem },
            T8 { s, mnem },
            T9 { s, mnem },
            T10 { s, mnem }
        {
        }

        ~Instruction_10() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
        using T8::operator();
        using T9::operator();
        using T10::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6,
    class T7,
    class T8,
    class T9,
    class T10,
    class T11,
    class T12
>
class Instruction_12 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6,
    public T7,
    public T8,
    public T9,
    public T10,
    public T11,
    public T12
{
    public:
        Instruction_12(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem },
            T7 { s, mnem },
            T8 { s, mnem },
            T9 { s, mnem },
            T10 { s, mnem },
            T11 { s, mnem },
            T12 { s, mnem }
        {
        }

        ~Instruction_12() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
        using T8::operator();
        using T9::operator();
        using T10::operator();
        using T11::operator();
        using T12::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4,
    class T5,
    class T6,
    class T7,
    class T8,
    class T9,
    class T10,
    class T11,
    class T12,
    class T13,
    class T14,
    class T15,
    class T16
>
class Instruction_16 :
    public T1,
    public T2,
    public T3,
    public T4,
    public T5,
    public T6,
    public T7,
    public T8,
    public T9,
    public T10,
    public T11,
    public T12,
    public T13,
    public T14,
    public T15,
    public T16
{
    public:
        Instruction_16(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem },
            T5 { s, mnem },
            T6 { s, mnem },
            T7 { s, mnem },
            T8 { s, mnem },
            T9 { s, mnem },
            T10 { s, mnem },
            T11 { s, mnem },
            T12 { s, mnem },
            T13 { s, mnem },
            T14 { s, mnem },
            T15 { s, mnem },
            T16 { s, mnem }
        {
        }

        ~Instruction_16() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
        using T8::operator();
        using T9::operator();
        using T10::operator();
        using T11::operator();
        using T12::operator();
        using T13::operator();
        using T14::operator();
        using T15::operator();
        using T16::operator();
};

#endif
