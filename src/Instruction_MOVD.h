#ifdef INSTRUCTION_MOVD_H
#error Already included
#else
#define INSTRUCTION_MOVD_H

class Instruction_MOVD
{
    public:
        Instruction_MOVD(asmstream &s, const std::string mnem);

        Instruction_MOVD() = delete;
        Instruction_MOVD(const Instruction_MOVD &instance) = delete;
        Instruction_MOVD(const Instruction_MOVD &&instance) = delete;
        Instruction_MOVD &operator=(const Instruction_MOVD &instance) = delete;
        Instruction_MOVD &operator=(const Instruction_MOVD &&instance) = delete;

        void operator()(const mm &op1, const r32 &op2);
        void operator()(const mm &op1, const m32 &op2);

        void operator()(const r32 &op1, const mm &op2);
        void operator()(const m32 &op1, const mm &op2);

        void operator()(const xmm &op1, const r32 &op2);
        void operator()(const xmm &op1, const m32 &op2);

        void operator()(const r32 &op1, const xmm &op2);
        void operator()(const m32 &op1, const xmm &op2);

        ~Instruction_MOVD();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
