#ifdef INSTRUCTION_XCHG_H
#error Already included
#else
#define INSTRUCTION_XCHG_H

class Instruction_XCHG
{
    public:
        Instruction_XCHG(asmstream &s);

        Instruction_XCHG() = delete;
        Instruction_XCHG(const Instruction_XCHG &instance) = delete;
        Instruction_XCHG(const Instruction_XCHG &&instance) = delete;
        Instruction_XCHG &operator=(const Instruction_XCHG &instance) = delete;
        Instruction_XCHG &operator=(const Instruction_XCHG &&instance) = delete;

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

        ~Instruction_XCHG();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
