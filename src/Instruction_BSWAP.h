#ifdef INSTRUCTION_BSWAP_H
#error Already included
#else
#define INSTRUCTION_BSWAP_H

class Instruction_BSWAP
{
    public:
        Instruction_BSWAP(asmstream &s);

        Instruction_BSWAP() = delete;
        Instruction_BSWAP(const Instruction_BSWAP &instance) = delete;
        Instruction_BSWAP(const Instruction_BSWAP &&instance) = delete;
        Instruction_BSWAP &operator=(const Instruction_BSWAP &instance) = delete;
        Instruction_BSWAP &operator=(const Instruction_BSWAP &&instance) = delete;

        void operator()(const r32 &op1);
        void operator()(const r64 &op1);

        ~Instruction_BSWAP();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
