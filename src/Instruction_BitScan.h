#ifdef INSTRUCTION_BIT_SCAN_H
#error Already included
#else
#define INSTRUCTION_BIT_SCAN_H

class Instruction_BitScan
{
    public:
        Instruction_BitScan(asmstream &s, const std::string mnem);

        Instruction_BitScan() = delete;
        Instruction_BitScan(const Instruction_BitScan &instance) = delete;
        Instruction_BitScan(const Instruction_BitScan &&instance) = delete;
        Instruction_BitScan &operator=(const Instruction_BitScan &instance) = delete;
        Instruction_BitScan &operator=(const Instruction_BitScan &&instance) = delete;

        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r16 &op1, const m16 &op2);

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r32 &op1, const m32 &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const r64 &op1, const m64 &op2);

        ~Instruction_BitScan();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
