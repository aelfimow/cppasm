#ifdef INSTRUCTION_AAM_H
#error Already included
#else
#define INSTRUCTION_AAM_H

class Instruction_AAM
{
    public:
        Instruction_AAM(asmstream &s);

        Instruction_AAM() = delete;
        Instruction_AAM(const Instruction_AAM &instance) = delete;
        Instruction_AAM(const Instruction_AAM &&instance) = delete;
        Instruction_AAM &operator=(const Instruction_AAM &instance) = delete;
        Instruction_AAM &operator=(const Instruction_AAM &&instance) = delete;

        void operator()();
        void operator()(const imm8 &op1);

        ~Instruction_AAM();

    private:
        asmstream &m_asmout;
};

#endif
