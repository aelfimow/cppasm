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

        Instruction() = delete;
        Instruction(const Instruction &instance) = delete;
        Instruction(const Instruction &&instance) = delete;
        Instruction &operator=(const Instruction &instance) = delete;
        Instruction &operator=(const Instruction &&instance) = delete;

        std::string to_str() const;

        ~Instruction();

    private:
        std::string m_str;
};

#endif
