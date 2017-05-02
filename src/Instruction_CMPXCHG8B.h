#ifdef INSTRUCTION_CMPXCHG8B_H
#error Already included
#else
#define INSTRUCTION_CMPXCHG8B_H

class Instruction_CMPXCHG8B
{
    public:
        Instruction_CMPXCHG8B(asmstream &s);

        Instruction_CMPXCHG8B() = delete;
        Instruction_CMPXCHG8B(const Instruction_CMPXCHG8B &instance) = delete;
        Instruction_CMPXCHG8B(const Instruction_CMPXCHG8B &&instance) = delete;
        Instruction_CMPXCHG8B &operator=(const Instruction_CMPXCHG8B &instance) = delete;
        Instruction_CMPXCHG8B &operator=(const Instruction_CMPXCHG8B &&instance) = delete;

        void operator()(const m64 &op1);

        ~Instruction_CMPXCHG8B();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
