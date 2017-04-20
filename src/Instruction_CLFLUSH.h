#ifdef INSTRUCTION_CLFLUSH_H
#error Already included
#else
#define INSTRUCTION_CLFLUSH_H

class Instruction_CLFLUSH
{
    public:
        Instruction_CLFLUSH(asmstream &s, const std::string mnem);

        Instruction_CLFLUSH() = delete;
        Instruction_CLFLUSH(const Instruction_CLFLUSH &instance) = delete;
        Instruction_CLFLUSH(const Instruction_CLFLUSH &&instance) = delete;
        Instruction_CLFLUSH &operator=(const Instruction_CLFLUSH &instance) = delete;
        Instruction_CLFLUSH &operator=(const Instruction_CLFLUSH &&instance) = delete;

        void operator()(const m &op1);

        ~Instruction_CLFLUSH();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
