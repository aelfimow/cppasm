#ifdef INSTRUCTION_REP_H
#error Already included
#else
#define INSTRUCTION_REP_H

class Instruction_StringOp;

class Instruction_REP
{
    public:
        Instruction_REP(asmstream &s, const std::string mnem);

        Instruction_REP() = delete;
        Instruction_REP(const Instruction_REP &instance) = delete;
        Instruction_REP(const Instruction_REP &&instance) = delete;
        Instruction_REP &operator=(const Instruction_REP &instance) = delete;
        Instruction_REP &operator=(const Instruction_REP &&instance) = delete;

        void operator()(Instruction_StringOp &StrOp);

        ~Instruction_REP();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
