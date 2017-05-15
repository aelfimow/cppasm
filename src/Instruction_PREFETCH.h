#ifdef INSTRUCTION_PREFETCH_H
#error Already included
#else
#define INSTRUCTION_PREFETCH_H

class Instruction_PREFETCH
{
    public:
        Instruction_PREFETCH(asmstream &s, const std::string mnem);

        Instruction_PREFETCH() = delete;
        Instruction_PREFETCH(const Instruction_PREFETCH &instance) = delete;
        Instruction_PREFETCH(const Instruction_PREFETCH &&instance) = delete;
        Instruction_PREFETCH &operator=(const Instruction_PREFETCH &instance) = delete;
        Instruction_PREFETCH &operator=(const Instruction_PREFETCH &&instance) = delete;

        void operator()(const m &op1);

        ~Instruction_PREFETCH();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
