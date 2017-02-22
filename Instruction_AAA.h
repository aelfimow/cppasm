#ifdef INSTRUCTION_AAA_H
#error Already included
#else
#define INSTRUCTION_AAA_H

class Instruction_AAA
{
    public:
        Instruction_AAA(asmstream &s);

        Instruction_AAA() = delete;
        Instruction_AAA(const Instruction_AAA &instance) = delete;
        Instruction_AAA(const Instruction_AAA &&instance) = delete;
        Instruction_AAA &operator=(const Instruction_AAA &instance) = delete;
        Instruction_AAA &operator=(const Instruction_AAA &&instance) = delete;

        void operator()();

        ~Instruction_AAA();

    private:
        asmstream &m_asmout;
};

#endif
