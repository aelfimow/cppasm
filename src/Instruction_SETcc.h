#ifdef INSTRUCTION_SET_CC_H
#error Already included
#else
#define INSTRUCTION_SET_CC_H

class Instruction_SETcc
{
    public:
        Instruction_SETcc(asmstream &s, std::string mnem);

        Instruction_SETcc() = delete;
        Instruction_SETcc(const Instruction_SETcc &instance) = delete;
        Instruction_SETcc(const Instruction_SETcc &&instance) = delete;
        Instruction_SETcc &operator=(const Instruction_SETcc &instance) = delete;
        Instruction_SETcc &operator=(const Instruction_SETcc &&instance) = delete;

        void operator()(const r8 &op1);
        void operator()(const m8 &op1);

        ~Instruction_SETcc();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
