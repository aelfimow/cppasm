#ifdef INSTRUCTION_JMP_CC_H
#error Already included
#else
#define INSTRUCTION_JMP_CC_H

class Instruction_Jcc
{
    public:
        Instruction_Jcc(asmstream &s, std::string mnem);

        Instruction_Jcc() = delete;
        Instruction_Jcc(const Instruction_Jcc &instance) = delete;
        Instruction_Jcc(const Instruction_Jcc &&instance) = delete;
        Instruction_Jcc &operator=(const Instruction_Jcc &instance) = delete;
        Instruction_Jcc &operator=(const Instruction_Jcc &&instance) = delete;

        void operator()(std::string label_str);

        ~Instruction_Jcc();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
