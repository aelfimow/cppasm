#ifdef INSTRUCTION_XOR_H
#error Already included
#else
#define INSTRUCTION_XOR_H

class Instruction_XOR
{
    public:
        Instruction_XOR(asmstream &s);

        Instruction_XOR() = delete;
        Instruction_XOR(const Instruction_XOR &instance) = delete;
        Instruction_XOR(const Instruction_XOR &&instance) = delete;
        Instruction_XOR &operator=(const Instruction_XOR &instance) = delete;
        Instruction_XOR &operator=(const Instruction_XOR &&instance) = delete;

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

        ~Instruction_XOR();

    private:
        asmstream &m_asmout;
};

#endif
