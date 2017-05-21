#ifdef INSTRUCTION_BRANCH_H
#error Already included
#else
#define INSTRUCTION_BRANCH_H

class Instruction_Branch
{
    public:
        Instruction_Branch(asmstream &s, std::string mnem);

        Instruction_Branch() = delete;
        Instruction_Branch(const Instruction_Branch &instance) = delete;
        Instruction_Branch(const Instruction_Branch &&instance) = delete;
        Instruction_Branch &operator=(const Instruction_Branch &instance) = delete;
        Instruction_Branch &operator=(const Instruction_Branch &&instance) = delete;

        void operator()(std::string label_str);

        void operator()(const r16 &op1);
        void operator()(const m16 &op1);

        void operator()(const r32 &op1);
        void operator()(const m32 &op1);

        void operator()(const r64 &op1);
        void operator()(const m64 &op1);

        ~Instruction_Branch();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
