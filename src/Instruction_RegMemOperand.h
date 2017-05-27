#ifdef INSTRUCTION_REG_MEM_OPERAND_H
#error Already included
#else
#define INSTRUCTION_REG_MEM_OPERAND_H

class Instruction_RegMemOperand
{
    public:
        Instruction_RegMemOperand(asmstream &s, const std::string mnem);

        Instruction_RegMemOperand() = delete;
        Instruction_RegMemOperand(const Instruction_RegMemOperand &instance) = delete;
        Instruction_RegMemOperand(const Instruction_RegMemOperand &&instance) = delete;
        Instruction_RegMemOperand &operator=(const Instruction_RegMemOperand &instance) = delete;
        Instruction_RegMemOperand &operator=(const Instruction_RegMemOperand &&instance) = delete;

        void operator()(const reg &op1);
        void operator()(const m &op1);

        ~Instruction_RegMemOperand();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
