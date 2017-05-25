#ifdef INSTRUCTION_STRING_OP_H
#error Already included
#else
#define INSTRUCTION_STRING_OP_H

class Instruction_StringOp
{
    public:
        Instruction_StringOp(asmstream &s, const std::string mnem);

        Instruction_StringOp() = delete;
        Instruction_StringOp(const Instruction_StringOp &instance) = delete;
        Instruction_StringOp(const Instruction_StringOp &&instance) = delete;
        Instruction_StringOp &operator=(const Instruction_StringOp &instance) = delete;
        Instruction_StringOp &operator=(const Instruction_StringOp &&instance) = delete;

        void operator()();

        ~Instruction_StringOp();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
