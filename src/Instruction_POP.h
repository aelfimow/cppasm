#ifdef INSTRUCTION_POP_H
#error Already included
#else
#define INSTRUCTION_POP_H

class Instruction_POP
{
    public:
        Instruction_POP(asmstream &s);

        Instruction_POP() = delete;
        Instruction_POP(const Instruction_POP &instance) = delete;
        Instruction_POP(const Instruction_POP &&instance) = delete;
        Instruction_POP &operator=(const Instruction_POP &instance) = delete;
        Instruction_POP &operator=(const Instruction_POP &&instance) = delete;

        void operator()(const r16 &op1);
        void operator()(const r32 &op1);
        void operator()(const r64 &op1);

        void operator()(const m16 &op1);
        void operator()(const m32 &op1);
        void operator()(const m64 &op1);

        void operator()(const Sreg &op1);

        ~Instruction_POP();

    private:
        asmstream &m_asmout;
};

#endif
