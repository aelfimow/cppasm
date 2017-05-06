#ifdef INSTRUCTION_ENTER_H
#error Already included
#else
#define INSTRUCTION_ENTER_H

class Instruction_ENTER
{
    public:
        Instruction_ENTER(asmstream &s);

        Instruction_ENTER() = delete;
        Instruction_ENTER(const Instruction_ENTER &instance) = delete;
        Instruction_ENTER(const Instruction_ENTER &&instance) = delete;
        Instruction_ENTER &operator=(const Instruction_ENTER &instance) = delete;
        Instruction_ENTER &operator=(const Instruction_ENTER &&instance) = delete;

        void operator()(const imm16 &op1, const imm8 &op2);

        ~Instruction_ENTER();

    private:
        asmstream &m_asmout;
};

#endif
