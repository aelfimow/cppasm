#ifdef INSTRUCTION_NOP_H
#error Already included
#else
#define INSTRUCTION_NOP_H

class Instruction_NOP
{
    public:
        Instruction_NOP(asmstream &s);

        Instruction_NOP() = delete;
        Instruction_NOP(const Instruction_NOP &instance) = delete;
        Instruction_NOP(const Instruction_NOP &&instance) = delete;
        Instruction_NOP &operator=(const Instruction_NOP &instance) = delete;
        Instruction_NOP &operator=(const Instruction_NOP &&instance) = delete;

        void operator()();
        void operator()(size_t bytes);
        void operator()(const r16 &op1);
        void operator()(const m16 &op1);
        void operator()(const r32 &op1);
        void operator()(const m32 &op1);

        ~Instruction_NOP();

    private:
        asmstream &m_asmout;
};

#endif
