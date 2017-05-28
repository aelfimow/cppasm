#ifdef INSTRUCTION_PREFIX_H
#error Already included
#else
#define INSTRUCTION_PREFIX_H

class Instruction_Prefix
{
    public:
        Instruction_Prefix(asmstream &s, const std::string mnem);

        Instruction_Prefix() = delete;
        Instruction_Prefix(const Instruction_Prefix &instance) = delete;
        Instruction_Prefix(const Instruction_Prefix &&instance) = delete;
        Instruction_Prefix &operator=(const Instruction_Prefix &instance) = delete;
        Instruction_Prefix &operator=(const Instruction_Prefix &&instance) = delete;

        void operator()();

        ~Instruction_Prefix();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
