#ifdef INSTRUCTION_BOUND_H
#error Already included
#else
#define INSTRUCTION_BOUND_H

class Instruction_BOUND
{
    public:
        Instruction_BOUND(asmstream &s);

        Instruction_BOUND() = delete;
        Instruction_BOUND(const Instruction_BOUND &instance) = delete;
        Instruction_BOUND(const Instruction_BOUND &&instance) = delete;
        Instruction_BOUND &operator=(const Instruction_BOUND &instance) = delete;
        Instruction_BOUND &operator=(const Instruction_BOUND &&instance) = delete;

        void operator()(const r16 &op1, const m16 &op2);
        void operator()(const r32 &op1, const m32 &op2);

        ~Instruction_BOUND();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
