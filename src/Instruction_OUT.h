#ifdef INSTRUCTION_OUT_H
#error Already included
#else
#define INSTRUCTION_OUT_H

class Instruction_OUT
{
    public:
        Instruction_OUT(asmstream &s);

        Instruction_OUT() = delete;
        Instruction_OUT(const Instruction_OUT &instance) = delete;
        Instruction_OUT(const Instruction_OUT &&instance) = delete;
        Instruction_OUT &operator=(const Instruction_OUT &instance) = delete;
        Instruction_OUT &operator=(const Instruction_OUT &&instance) = delete;

        void operator()(uint8_t addr, const r8 &op2);
        void operator()(uint8_t addr, const r16 &op2);
        void operator()(uint8_t addr, const r32 &op2);

        void operator()(const r16 &op1, const r8 &op2);
        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r16 &op1, const r32 &op2);

        ~Instruction_OUT();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
