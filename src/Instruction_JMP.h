#ifdef INSTRUCTION_JMP_H
#error Already included
#else
#define INSTRUCTION_JMP_H

class Instruction_JMP
{
    public:
        Instruction_JMP(asmstream &s, std::string mnem);

        Instruction_JMP() = delete;
        Instruction_JMP(const Instruction_JMP &instance) = delete;
        Instruction_JMP(const Instruction_JMP &&instance) = delete;
        Instruction_JMP &operator=(const Instruction_JMP &instance) = delete;
        Instruction_JMP &operator=(const Instruction_JMP &&instance) = delete;

        void operator()(std::string label_str);

        ~Instruction_JMP();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
