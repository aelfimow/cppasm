#ifdef INSTRUCTION_PUSH_H
#error Already included
#else
#define INSTRUCTION_PUSH_H

class Instruction_PUSH
{
    public:
        Instruction_PUSH(asmstream &s);

        Instruction_PUSH() = delete;
        Instruction_PUSH(const Instruction_PUSH &instance) = delete;
        Instruction_PUSH(const Instruction_PUSH &&instance) = delete;
        Instruction_PUSH &operator=(const Instruction_PUSH &instance) = delete;
        Instruction_PUSH &operator=(const Instruction_PUSH &&instance) = delete;

        void operator()(const r16 &op1);
        void operator()(const r32 &op1);
        void operator()(const r64 &op1);

        void operator()(const m16 &op1);
        void operator()(const m32 &op1);
        void operator()(const m64 &op1);

        void operator()(const imm8 &op1);
        void operator()(const imm16 &op1);
        void operator()(const imm32 &op1);

        void operator()(const Sreg &op1);

        ~Instruction_PUSH();

    private:
        asmstream &m_asmout;
};

#endif
