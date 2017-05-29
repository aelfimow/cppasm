#ifdef INSTRUCTION_MOVQ_H
#error Already included
#else
#define INSTRUCTION_MOVQ_H

class Instruction_MOVQ
{
    public:
        Instruction_MOVQ(asmstream &s, const std::string mnem);

        Instruction_MOVQ() = delete;
        Instruction_MOVQ(const Instruction_MOVQ &instance) = delete;
        Instruction_MOVQ(const Instruction_MOVQ &&instance) = delete;
        Instruction_MOVQ &operator=(const Instruction_MOVQ &instance) = delete;
        Instruction_MOVQ &operator=(const Instruction_MOVQ &&instance) = delete;

        void operator()(const mm &op1, const r64 &op2);
        void operator()(const mm &op1, const m64 &op2);

        void operator()(const r64 &op1, const mm &op2);
        void operator()(const m64 &op1, const mm &op2);

        void operator()(const xmm &op1, const r64 &op2);
        void operator()(const xmm &op1, const m64 &op2);

        void operator()(const r64 &op1, const xmm &op2);
        void operator()(const m64 &op1, const xmm &op2);

        ~Instruction_MOVQ();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
