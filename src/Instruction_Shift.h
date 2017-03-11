#ifdef INSTRUCTION_SHIFT_H
#error Already included
#else
#define INSTRUCTION_SHIFT_H

class Instruction_Shift
{
    public:
        Instruction_Shift(asmstream &s, std::string mnem);

        Instruction_Shift() = delete;
        Instruction_Shift(const Instruction_Shift &instance) = delete;
        Instruction_Shift(const Instruction_Shift &&instance) = delete;
        Instruction_Shift &operator=(const Instruction_Shift &instance) = delete;
        Instruction_Shift &operator=(const Instruction_Shift &&instance) = delete;

        void operator()(const r8 &op1, const imm8 &op2);
        void operator()(const r16 &op1, const imm8 &op2);
        void operator()(const r32 &op1, const imm8 &op2);
        void operator()(const r64 &op1, const imm8 &op2);

        void operator()(const r8 &op1, const r8 &op2);
        void operator()(const r16 &op1, const r8 &op2);
        void operator()(const r32 &op1, const r8 &op2);
        void operator()(const r64 &op1, const r8 &op2);

        void operator()(const m8 &op1, const imm8 &op2);
        void operator()(const m16 &op1, const imm8 &op2);
        void operator()(const m32 &op1, const imm8 &op2);
        void operator()(const m64 &op1, const imm8 &op2);

        void operator()(const m8 &op1, const r8 &op2);
        void operator()(const m16 &op1, const r8 &op2);
        void operator()(const m32 &op1, const r8 &op2);
        void operator()(const m64 &op1, const r8 &op2);

        ~Instruction_Shift();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
