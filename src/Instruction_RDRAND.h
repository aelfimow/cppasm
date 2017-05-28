#ifdef INSTRUCTION_RDRAND_H
#error Already included
#else
#define INSTRUCTION_RDRAND_H

class Instruction_RDRAND
{
    public:
        Instruction_RDRAND(asmstream &s, const std::string mnem);

        Instruction_RDRAND() = delete;
        Instruction_RDRAND(const Instruction_RDRAND &instance) = delete;
        Instruction_RDRAND(const Instruction_RDRAND &&instance) = delete;
        Instruction_RDRAND &operator=(const Instruction_RDRAND &instance) = delete;
        Instruction_RDRAND &operator=(const Instruction_RDRAND &&instance) = delete;

        void operator()(const r16 &op1);
        void operator()(const r32 &op1);
        void operator()(const r64 &op1);

        ~Instruction_RDRAND();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
