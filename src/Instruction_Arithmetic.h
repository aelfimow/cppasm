#ifdef INSTRUCTION_ARITHMETIC_H
#error Already included
#else
#define INSTRUCTION_ARITHMETIC_H

class Instruction_Arithmetic
{
    public:
        Instruction_Arithmetic(asmstream &s, const std::string mnem);

        Instruction_Arithmetic() = delete;
        Instruction_Arithmetic(const Instruction_Arithmetic &instance) = delete;
        Instruction_Arithmetic(const Instruction_Arithmetic &&instance) = delete;
        Instruction_Arithmetic &operator=(const Instruction_Arithmetic &instance) = delete;
        Instruction_Arithmetic &operator=(const Instruction_Arithmetic &&instance) = delete;

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

        ~Instruction_Arithmetic();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
