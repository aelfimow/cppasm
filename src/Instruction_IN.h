#ifdef INSTRUCTION_IN_H
#error Already included
#else
#define INSTRUCTION_IN_H

class Instruction_IN
{
    public:
        Instruction_IN(asmstream &s);

        Instruction_IN() = delete;
        Instruction_IN(const Instruction_IN &instance) = delete;
        Instruction_IN(const Instruction_IN &&instance) = delete;
        Instruction_IN &operator=(const Instruction_IN &instance) = delete;
        Instruction_IN &operator=(const Instruction_IN &&instance) = delete;

        void operator()(const r8 &op1, uint8_t addr);
        void operator()(const r16 &op1, uint8_t addr);
        void operator()(const r32 &op1, uint8_t addr);

        void operator()(const r8 &op1, const r16 &op2);
        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r32 &op1, const r16 &op2);

        ~Instruction_IN();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
