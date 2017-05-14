#ifdef INSTRUCTION_LEA_H
#error Already included
#else
#define INSTRUCTION_LEA_H

class Instruction_LEA
{
    public:
        Instruction_LEA(asmstream &s);

        Instruction_LEA() = delete;
        Instruction_LEA(const Instruction_LEA &instance) = delete;
        Instruction_LEA(const Instruction_LEA &&instance) = delete;
        Instruction_LEA &operator=(const Instruction_LEA &instance) = delete;
        Instruction_LEA &operator=(const Instruction_LEA &&instance) = delete;

        void operator()(const r16 &op1, const m &op2);
        void operator()(const r32 &op1, const m &op2);
        void operator()(const r64 &op1, const m &op2);

        ~Instruction_LEA();

    private:
        asmstream &m_asmout;
};

#endif
