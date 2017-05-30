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

        ~Instruction_1() { };

        using T1::operator();
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

        ~Instruction_4() { };

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

        ~Instruction_8() { };

        using T1::operator();
        using T2::operator();
        using T3::operator();
        using T4::operator();
        using T5::operator();
        using T6::operator();
        using T7::operator();
        using T8::operator();
};

#endif
