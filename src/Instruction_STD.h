#ifdef INSTRUCTION_STD_H
#error Already included
#else
#define INSTRUCTION_STD_H

class Instruction_STD
{
    public:
        Instruction_STD(asmstream &s);

        Instruction_STD() = delete;
        Instruction_STD(const Instruction_STD &instance) = delete;
        Instruction_STD(const Instruction_STD &&instance) = delete;
        Instruction_STD &operator=(const Instruction_STD &instance) = delete;
        Instruction_STD &operator=(const Instruction_STD &&instance) = delete;

        void operator()();

        ~Instruction_STD();

    private:
        asmstream &m_asmout;
};

#endif
