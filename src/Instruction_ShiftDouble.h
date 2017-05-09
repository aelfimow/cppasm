#ifdef INSTRUCTION_SHIFT_DOUBLE_H
#error Already included
#else
#define INSTRUCTION_SHIFT_DOUBLE_H

class Instruction_ShiftDouble
{
    public:
        Instruction_ShiftDouble(asmstream &s, std::string mnem);

        Instruction_ShiftDouble() = delete;
        Instruction_ShiftDouble(const Instruction_ShiftDouble &instance) = delete;
        Instruction_ShiftDouble(const Instruction_ShiftDouble &&instance) = delete;
        Instruction_ShiftDouble &operator=(const Instruction_ShiftDouble &instance) = delete;
        Instruction_ShiftDouble &operator=(const Instruction_ShiftDouble &&instance) = delete;

        void operator()(const r16 &op1, const r16 &op2, const imm8 &op3);
        void operator()(const r32 &op1, const r32 &op2, const imm8 &op3);
        void operator()(const r64 &op1, const r64 &op2, const imm8 &op3);

        void operator()(const r16 &op1, const r16 &op2, const r8 &op3);
        void operator()(const r32 &op1, const r32 &op2, const r8 &op3);
        void operator()(const r64 &op1, const r64 &op2, const r8 &op3);

        void operator()(const m16 &op1, const r16 &op2, const imm8 &op3);
        void operator()(const m32 &op1, const r32 &op2, const imm8 &op3);
        void operator()(const m64 &op1, const r64 &op2, const imm8 &op3);

        void operator()(const m16 &op1, const r16 &op2, const r8 &op3);
        void operator()(const m32 &op1, const r32 &op2, const r8 &op3);
        void operator()(const m64 &op1, const r64 &op2, const r8 &op3);

        ~Instruction_ShiftDouble();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
