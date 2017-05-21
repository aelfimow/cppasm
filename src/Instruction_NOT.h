#ifdef INSTRUCTION_NOT_H
#error Already included
#else
#define INSTRUCTION_NOT_H

class Instruction_NOT
{
    public:
        Instruction_NOT(asmstream &s);

        Instruction_NOT() = delete;
        Instruction_NOT(const Instruction_NOT &instance) = delete;
        Instruction_NOT(const Instruction_NOT &&instance) = delete;
        Instruction_NOT &operator=(const Instruction_NOT &instance) = delete;
        Instruction_NOT &operator=(const Instruction_NOT &&instance) = delete;

        void operator()(const reg &op1);
        void operator()(const m &op1);

        ~Instruction_NOT();

    private:
        asmstream &m_asmout;
};

#endif
