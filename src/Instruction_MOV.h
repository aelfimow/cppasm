#ifdef INSTRUCTION_MOV_H
#error Already included
#else
#define INSTRUCTION_MOV_H

class Instruction_MOV
{
    public:
        Instruction_MOV(asmstream &s);

        Instruction_MOV() = delete;
        Instruction_MOV(const Instruction_MOV &instance) = delete;
        Instruction_MOV(const Instruction_MOV &&instance) = delete;
        Instruction_MOV &operator=(const Instruction_MOV &instance) = delete;
        Instruction_MOV &operator=(const Instruction_MOV &&instance) = delete;

        void operator()(const r8 &op1, const r8 &op2);
        void operator()(const r8 &op1, const m8 &op2);
        void operator()(const m8 &op1, const r8 &op2);

        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r16 &op1, const m16 &op2);
        void operator()(const m16 &op1, const r16 &op2);

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r32 &op1, const m32 &op2);
        void operator()(const m32 &op1, const r32 &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const r64 &op1, const m64 &op2);
        void operator()(const m64 &op1, const r64 &op2);

        void operator()(const r8 &op1, const imm8 &op2);
        void operator()(const r16 &op1, const imm16 &op2);
        void operator()(const r32 &op1, const imm32 &op2);
        void operator()(const r64 &op1, const imm64 &op2);

        void operator()(const Sreg &op1, const r16 &op2);
        void operator()(const Sreg &op1, const m16 &op2);
        void operator()(const Sreg &op1, const r64 &op2);
        void operator()(const Sreg &op1, const m64 &op2);

        void operator()(const r32 &op1, const cr &op2);
        void operator()(const r64 &op1, const cr &op2);
        void operator()(const cr &op1, const r32 &op2);
        void operator()(const cr &op1, const r64 &op2);

        void operator()(const r32 &op1, const dr &op2);
        void operator()(const r64 &op1, const dr &op2);
        void operator()(const dr &op1, const r32 &op2);
        void operator()(const dr &op1, const r64 &op2);

        ~Instruction_MOV();

    private:
        asmstream &m_asmout;
};

#endif
