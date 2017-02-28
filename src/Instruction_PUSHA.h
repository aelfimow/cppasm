#ifdef INSTRUCTION_PUSHA_H
#error Already included
#else
#define INSTRUCTION_PUSHA_H

class Instruction_PUSHA
{
    public:
        Instruction_PUSHA(asmstream &s);

        Instruction_PUSHA() = delete;
        Instruction_PUSHA(const Instruction_PUSHA &instance) = delete;
        Instruction_PUSHA(const Instruction_PUSHA &&instance) = delete;
        Instruction_PUSHA &operator=(const Instruction_PUSHA &instance) = delete;
        Instruction_PUSHA &operator=(const Instruction_PUSHA &&instance) = delete;

        void operator()();

        ~Instruction_PUSHA();

    private:
        asmstream &m_asmout;
};

#endif
