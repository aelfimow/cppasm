#ifdef INSTRUCTION_PUSHF_H
#error Already included
#else
#define INSTRUCTION_PUSHF_H

class Instruction_PUSHF
{
    public:
        Instruction_PUSHF(asmstream &s);

        Instruction_PUSHF() = delete;
        Instruction_PUSHF(const Instruction_PUSHF &instance) = delete;
        Instruction_PUSHF(const Instruction_PUSHF &&instance) = delete;
        Instruction_PUSHF &operator=(const Instruction_PUSHF &instance) = delete;
        Instruction_PUSHF &operator=(const Instruction_PUSHF &&instance) = delete;

        void operator()();

        ~Instruction_PUSHF();

    private:
        asmstream &m_asmout;
};

#endif
