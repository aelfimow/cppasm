#ifdef INSTRUCTION_ADX_H
#error Already included
#else
#define INSTRUCTION_ADX_H

class Instruction_ADX
{
    public:
        Instruction_ADX(asmstream &s, const std::string mnem);

        Instruction_ADX() = delete;
        Instruction_ADX(const Instruction_ADX &instance) = delete;
        Instruction_ADX(const Instruction_ADX &&instance) = delete;
        Instruction_ADX &operator=(const Instruction_ADX &instance) = delete;
        Instruction_ADX &operator=(const Instruction_ADX &&instance) = delete;

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r32 &op1, const m &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const r64 &op1, const m &op2);

        ~Instruction_ADX();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
