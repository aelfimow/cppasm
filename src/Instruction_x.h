#ifdef INSTRUCTION_X_H
#error Already included
#else
#define INSTRUCTION_X_H

template
<
    class T1
>
class Instruction_1 :
    public T1
{
    public:
        Instruction_1(asmstream &s, const std::string mnem) :
            T1 { s, mnem }
        {
        }

        ~Instruction_1() { }

        using T1::operator();
};

template
<
    class T1,
    class T2
>
class Instruction_2 :
    public T1,
    public T2
{
    public:
        Instruction_2(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem }
        {
        }

        ~Instruction_2() { }

        using T1::operator();
        using T2::operator();
};

template
<
    class T1,
    class T2,
    class T3
>
class Instruction_3 :
    public T1,
    public T2,
    public T3
{
    public:
        Instruction_3(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem }
        {
        }

        ~Instruction_3() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
};

template
<
    class T1,
    class T2,
    class T3,
    class T4
>
class Instruction_4 :
    public T1,
    public T2,
    public T3,
    public T4
{
    public:
        Instruction_4(asmstream &s, const std::string mnem) :
            T1 { s, mnem },
            T2 { s, mnem },
            T3 { s, mnem },
            T4 { s, mnem }
        {
        }

        ~Instruction_4() { }

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
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
    class T12,
    class T13,
    class T14,
    class T15,
    class T16,
    class T17,
    class T18,
    class T19,
    class T20,
    class T21,
    class T22,
    class T23,
    class T24,
    class T25,
    class T26
>
class Instruction_26 :
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
    public T16,
    public T17,
    public T18,
    public T19,
    public T20,
    public T21,
    public T22,
    public T23,
    public T24,
    public T25,
    public T26
{
    public:
        Instruction_26(asmstream &s, const std::string mnem) :
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
            T16 { s, mnem },
            T17 { s, mnem },
            T18 { s, mnem },
            T19 { s, mnem },
            T20 { s, mnem },
            T21 { s, mnem },
            T22 { s, mnem },
            T23 { s, mnem },
            T24 { s, mnem },
            T25 { s, mnem },
            T26 { s, mnem }
        {
        }

        ~Instruction_26() { }

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
        using T17::operator();
        using T18::operator();
        using T19::operator();
        using T20::operator();
        using T21::operator();
        using T22::operator();
        using T23::operator();
        using T24::operator();
        using T25::operator();
        using T26::operator();
};

#endif
