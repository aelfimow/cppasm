#ifdef INSTRUCTION_NO_OPERANDS_H
#error Already included
#else
#define INSTRUCTION_NO_OPERANDS_H

class Instruction_NoOperands
{
    public:
        Instruction_NoOperands(asmstream &s, const std::string mnem);

        Instruction_NoOperands() = delete;
        Instruction_NoOperands(const Instruction_NoOperands &instance) = delete;
        Instruction_NoOperands(const Instruction_NoOperands &&instance) = delete;
        Instruction_NoOperands &operator=(const Instruction_NoOperands &instance) = delete;
        Instruction_NoOperands &operator=(const Instruction_NoOperands &&instance) = delete;

        void operator()();

        ~Instruction_NoOperands();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
