#ifdef INSTRUCTION_VMOVD_H
#error Already included
#else
#define INSTRUCTION_VMOVD_H

class Instruction_VMOVD
{
    public:
        Instruction_VMOVD(asmstream &s, const std::string mnem);

        Instruction_VMOVD() = delete;
        Instruction_VMOVD(const Instruction_VMOVD &instance) = delete;
        Instruction_VMOVD(const Instruction_VMOVD &&instance) = delete;
        Instruction_VMOVD &operator=(const Instruction_VMOVD &instance) = delete;
        Instruction_VMOVD &operator=(const Instruction_VMOVD &&instance) = delete;

        void operator()(const xmm &op1, const r32 &op2);
        void operator()(const xmm &op1, const m32 &op2);

        void operator()(const r32 &op1, const xmm &op2);
        void operator()(const m32 &op1, const xmm &op2);

        ~Instruction_VMOVD();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
