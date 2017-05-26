#ifdef INSTRUCTION_MEM_OPERAND_H
#error Already included
#else
#define INSTRUCTION_MEM_OPERAND_H

class Instruction_MemOperand
{
    public:
        Instruction_MemOperand(asmstream &s, const std::string mnem);

        Instruction_MemOperand() = delete;
        Instruction_MemOperand(const Instruction_MemOperand &instance) = delete;
        Instruction_MemOperand(const Instruction_MemOperand &&instance) = delete;
        Instruction_MemOperand &operator=(const Instruction_MemOperand &instance) = delete;
        Instruction_MemOperand &operator=(const Instruction_MemOperand &&instance) = delete;

        void operator()(const m &op1);

        ~Instruction_MemOperand();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
