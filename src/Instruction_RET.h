#ifdef INSTRUCTION_RET_H
#error Already included
#else
#define INSTRUCTION_RET_H

class Instruction_RET
{
    public:
        Instruction_RET(asmstream &s);

        Instruction_RET() = delete;
        Instruction_RET(const Instruction_RET &instance) = delete;
        Instruction_RET(const Instruction_RET &&instance) = delete;
        Instruction_RET &operator=(const Instruction_RET &instance) = delete;
        Instruction_RET &operator=(const Instruction_RET &&instance) = delete;

        void operator()();
        void operator()(const imm16 &op1);

        void far();
        void far(const imm16 &op1);

        ~Instruction_RET();

    private:
        asmstream &m_asmout;
};

#endif
