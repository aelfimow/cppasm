#ifdef INSTRUCTION_VMOVQ_H
#error Already included
#else
#define INSTRUCTION_VMOVQ_H

class Instruction_VMOVQ
{
    public:
        Instruction_VMOVQ(asmstream &s, const std::string mnem);

        Instruction_VMOVQ() = delete;
        Instruction_VMOVQ(const Instruction_VMOVQ &instance) = delete;
        Instruction_VMOVQ(const Instruction_VMOVQ &&instance) = delete;
        Instruction_VMOVQ &operator=(const Instruction_VMOVQ &instance) = delete;
        Instruction_VMOVQ &operator=(const Instruction_VMOVQ &&instance) = delete;

        void operator()(const xmm &op1, const r64 &op2);
        void operator()(const xmm &op1, const m64 &op2);

        void operator()(const r64 &op1, const xmm &op2);
        void operator()(const m64 &op1, const xmm &op2);

        ~Instruction_VMOVQ();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
