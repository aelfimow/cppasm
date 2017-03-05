#ifdef INSTRUCTION_ADD_H
#error Already included
#else
#define INSTRUCTION_ADD_H

class Instruction_ADD
{
    public:
        Instruction_ADD(asmstream &s);

        Instruction_ADD() = delete;
        Instruction_ADD(const Instruction_ADD &instance) = delete;
        Instruction_ADD(const Instruction_ADD &&instance) = delete;
        Instruction_ADD &operator=(const Instruction_ADD &instance) = delete;
        Instruction_ADD &operator=(const Instruction_ADD &&instance) = delete;

        void operator()(const r16 &op1, const imm16 &op2);
        void operator()(const m16 &op1, const imm16 &op2);

        void operator()(const r32 &op1, const imm32 &op2);
        void operator()(const m32 &op1, const imm32 &op2);

        void operator()(const r64 &op1, const imm32 &op2);
        void operator()(const m64 &op1, const imm32 &op2);

        void operator()(const reg &op1, const imm8 &op2);
        void operator()(const m &op1, const imm8 &op2);

        void operator()(const m &op1, const reg &op2);
        void operator()(const reg &op1, const m &op2);
        void operator()(const reg &op1, const reg &op2);

        ~Instruction_ADD();

    private:
        asmstream &m_asmout;
};

#endif
