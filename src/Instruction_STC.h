#ifdef INSTRUCTION_STC_H
#error Already included
#else
#define INSTRUCTION_STC_H

class Instruction_STC
{
    public:
        Instruction_STC(asmstream &s);

        Instruction_STC() = delete;
        Instruction_STC(const Instruction_STC &instance) = delete;
        Instruction_STC(const Instruction_STC &&instance) = delete;
        Instruction_STC &operator=(const Instruction_STC &instance) = delete;
        Instruction_STC &operator=(const Instruction_STC &&instance) = delete;

        void operator()();

        ~Instruction_STC();

    private:
        asmstream &m_asmout;
};

#endif
