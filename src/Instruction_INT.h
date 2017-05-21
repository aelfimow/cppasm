#ifdef INSTRUCTION_INT_H
#error Already included
#else
#define INSTRUCTION_INT_H

class Instruction_INT
{
    public:
        Instruction_INT(asmstream &s);

        Instruction_INT() = delete;
        Instruction_INT(const Instruction_INT &instance) = delete;
        Instruction_INT(const Instruction_INT &&instance) = delete;
        Instruction_INT &operator=(const Instruction_INT &instance) = delete;
        Instruction_INT &operator=(const Instruction_INT &&instance) = delete;

        void operator()(uint8_t value);

        ~Instruction_INT();

    private:
        asmstream &m_asmout;
};

#endif
