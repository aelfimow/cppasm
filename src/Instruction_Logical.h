#ifdef INSTRUCTION_LOGICAL_H
#error Already included
#else
#define INSTRUCTION_LOGICAL_H

class Instruction_Logical
{
    public:
        Instruction_Logical(asmstream &s, const std::string mnem);

        Instruction_Logical() = delete;
        Instruction_Logical(const Instruction_Logical &instance) = delete;
        Instruction_Logical(const Instruction_Logical &&instance) = delete;
        Instruction_Logical &operator=(const Instruction_Logical &instance) = delete;
        Instruction_Logical &operator=(const Instruction_Logical &&instance) = delete;

        void operator()(const r8 &op1, const imm8 &op2);
        void operator()(const r16 &op1, const imm16 &op2);
        void operator()(const r32 &op1, const imm32 &op2);
        void operator()(const r64 &op1, const imm32 &op2);

        void operator()(const r16 &op1, const imm8 &op2);
        void operator()(const r32 &op1, const imm8 &op2);
        void operator()(const r64 &op1, const imm8 &op2);

        void operator()(const m8 &op1, const imm8 &op2);
        void operator()(const m16 &op1, const imm16 &op2);
        void operator()(const m32 &op1, const imm32 &op2);
        void operator()(const m64 &op1, const imm32 &op2);

        void operator()(const m16 &op1, const imm8 &op2);
        void operator()(const m32 &op1, const imm8 &op2);
        void operator()(const m64 &op1, const imm8 &op2);

        void operator()(const r8 &op1, const r8 &op2);
        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r64 &op1, const r64 &op2);

        void operator()(const m8 &op1, const r8 &op2);
        void operator()(const m16 &op1, const r16 &op2);
        void operator()(const m32 &op1, const r32 &op2);
        void operator()(const m64 &op1, const r64 &op2);

        void operator()(const r8 &op1, const m8 &op2);
        void operator()(const r16 &op1, const m16 &op2);
        void operator()(const r32 &op1, const m32 &op2);
        void operator()(const r64 &op1, const m64 &op2);

        ~Instruction_Logical();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
