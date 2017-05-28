#ifdef INSTRUCTION_FSGSBASE_H
#error Already included
#else
#define INSTRUCTION_FSGSBASE_H

class Instruction_FSGSBASE
{
    public:
        Instruction_FSGSBASE(asmstream &s, const std::string mnem);

        Instruction_FSGSBASE() = delete;
        Instruction_FSGSBASE(const Instruction_FSGSBASE &instance) = delete;
        Instruction_FSGSBASE(const Instruction_FSGSBASE &&instance) = delete;
        Instruction_FSGSBASE &operator=(const Instruction_FSGSBASE &instance) = delete;
        Instruction_FSGSBASE &operator=(const Instruction_FSGSBASE &&instance) = delete;

        void operator()(const r32 &op1);
        void operator()(const r64 &op1);

        ~Instruction_FSGSBASE();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
