#ifdef INSTRUCTION_CMPXCHG16B_H
#error Already included
#else
#define INSTRUCTION_CMPXCHG16B_H

class Instruction_CMPXCHG16B
{
    public:
        Instruction_CMPXCHG16B(asmstream &s);

        Instruction_CMPXCHG16B() = delete;
        Instruction_CMPXCHG16B(const Instruction_CMPXCHG16B &instance) = delete;
        Instruction_CMPXCHG16B(const Instruction_CMPXCHG16B &&instance) = delete;
        Instruction_CMPXCHG16B &operator=(const Instruction_CMPXCHG16B &instance) = delete;
        Instruction_CMPXCHG16B &operator=(const Instruction_CMPXCHG16B &&instance) = delete;

        void operator()(const m128 &op1);

        ~Instruction_CMPXCHG16B();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
