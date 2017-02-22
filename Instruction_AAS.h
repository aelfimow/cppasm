#ifdef INSTRUCTION_AAS_H
#error Already included
#else
#define INSTRUCTION_AAS_H

class Instruction_AAS
{
    public:
        Instruction_AAS(asmstream &s);

        Instruction_AAS() = delete;
        Instruction_AAS(const Instruction_AAS &instance) = delete;
        Instruction_AAS(const Instruction_AAS &&instance) = delete;
        Instruction_AAS &operator=(const Instruction_AAS &instance) = delete;
        Instruction_AAS &operator=(const Instruction_AAS &&instance) = delete;

        void operator()();

        ~Instruction_AAS();

    private:
        asmstream &m_asmout;
};

#endif
