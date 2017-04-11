#ifdef INSTRUCTION_FST_H
#error Already included
#else
#define INSTRUCTION_FST_H

class Instruction_FST
{
    public:
        Instruction_FST(asmstream &s, std::string mnem);

        Instruction_FST() = delete;
        Instruction_FST(const Instruction_FST &instance) = delete;
        Instruction_FST(const Instruction_FST &&instance) = delete;
        Instruction_FST &operator=(const Instruction_FST &instance) = delete;
        Instruction_FST &operator=(const Instruction_FST &&instance) = delete;

        void operator()(const m32 &op);
        void operator()(const m64 &op);
        void operator()(const m80 &op);
        void operator()(const st &op);

        ~Instruction_FST();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
