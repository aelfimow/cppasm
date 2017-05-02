#ifdef INSTRUCTION_XADD_H
#error Already included
#else
#define INSTRUCTION_XADD_H

class Instruction_XADD
{
    public:
        Instruction_XADD(asmstream &s);

        Instruction_XADD() = delete;
        Instruction_XADD(const Instruction_XADD &instance) = delete;
        Instruction_XADD(const Instruction_XADD &&instance) = delete;
        Instruction_XADD &operator=(const Instruction_XADD &instance) = delete;
        Instruction_XADD &operator=(const Instruction_XADD &&instance) = delete;

        void operator()(const r8 &op1, const r8 &op2);
        void operator()(const m8 &op1, const r8 &op2);

        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const m16 &op1, const r16 &op2);

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const m32 &op1, const r32 &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const m64 &op1, const r64 &op2);

        ~Instruction_XADD();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
