/*! \file Instruction.h
    \brief Class representing Instruction.
*/
#ifdef INSTRUCTION_H
#error Already included
#else
#define INSTRUCTION_H

class Instruction
{
    public:
        explicit Instruction(const std::string &mnem);
        explicit Instruction(const std::string &mnem, const std::string &op);
        explicit Instruction(const std::string &mnem, const std::string &op1, const std::string &op2);
        explicit Instruction(const std::string &mnem, const std::string &op1, const std::string &op2, const std::string &op3);
        explicit Instruction(const std::string &mnem, const std::string &op1, const std::string &op2, const std::string &op3, const std::string &op4);

        void suffix(const std::string sfx);
        void keep_args_sequence();

        std::string to_str() const;

        ~Instruction();

    private:
        const std::string m_mnem;
        const std::string m_op1;
        const std::string m_op2;
        const std::string m_op3;
        const std::string m_op4;

        std::string m_suffix;
        bool m_keep_args_sequence;

    public:
        Instruction() = delete;
        Instruction(const Instruction &instance) = delete;
        Instruction(const Instruction &&instance) = delete;
        Instruction &operator=(const Instruction &instance) = delete;
        Instruction &operator=(const Instruction &&instance) = delete;
};

#endif
