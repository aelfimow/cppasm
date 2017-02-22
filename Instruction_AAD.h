#ifdef INSTRUCTION_AAD_H
#error Already included
#else
#define INSTRUCTION_AAD_H

class Instruction_AAD
{
    public:
        Instruction_AAD(asmstream &s);

        Instruction_AAD() = delete;
        Instruction_AAD(const Instruction_AAD &instance) = delete;
        Instruction_AAD(const Instruction_AAD &&instance) = delete;
        Instruction_AAD &operator=(const Instruction_AAD &instance) = delete;
        Instruction_AAD &operator=(const Instruction_AAD &&instance) = delete;

        void operator()();
        void operator()(const imm8 &op1);

        ~Instruction_AAD();

    private:
        asmstream &m_asmout;
};

#endif
