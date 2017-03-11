#ifdef INSTRUCTION_STI_H
#error Already included
#else
#define INSTRUCTION_STI_H

class Instruction_STI
{
    public:
        Instruction_STI(asmstream &s);

        Instruction_STI() = delete;
        Instruction_STI(const Instruction_STI &instance) = delete;
        Instruction_STI(const Instruction_STI &&instance) = delete;
        Instruction_STI &operator=(const Instruction_STI &instance) = delete;
        Instruction_STI &operator=(const Instruction_STI &&instance) = delete;

        void operator()();

        ~Instruction_STI();

    private:
        asmstream &m_asmout;
};

#endif
