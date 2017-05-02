#ifdef INSTRUCTION_CMPXCHG_H
#error Already included
#else
#define INSTRUCTION_CMPXCHG_H

class Instruction_CMPXCHG
{
    public:
        Instruction_CMPXCHG(asmstream &s);

        Instruction_CMPXCHG() = delete;
        Instruction_CMPXCHG(const Instruction_CMPXCHG &instance) = delete;
        Instruction_CMPXCHG(const Instruction_CMPXCHG &&instance) = delete;
        Instruction_CMPXCHG &operator=(const Instruction_CMPXCHG &instance) = delete;
        Instruction_CMPXCHG &operator=(const Instruction_CMPXCHG &&instance) = delete;

        void operator()(const r8 &op1, const r8 &op2);
        void operator()(const m8 &op1, const r8 &op2);

        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const m16 &op1, const r16 &op2);

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const m32 &op1, const r32 &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const m64 &op1, const r64 &op2);

        ~Instruction_CMPXCHG();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
