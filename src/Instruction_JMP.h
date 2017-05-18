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

        void operator()(const r16 &op1);
        void operator()(const m16 &op1);

        void operator()(const r32 &op1);
        void operator()(const m32 &op1);

        void operator()(const r64 &op1);
        void operator()(const m64 &op1);

        ~Instruction_JMP();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
