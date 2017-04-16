#ifdef INSTRUCTION_TEST_H
#error Already included
#else
#define INSTRUCTION_TEST_H

class Instruction_TEST
{
    public:
        Instruction_TEST(asmstream &s);

        Instruction_TEST() = delete;
        Instruction_TEST(const Instruction_TEST &instance) = delete;
        Instruction_TEST(const Instruction_TEST &&instance) = delete;
        Instruction_TEST &operator=(const Instruction_TEST &instance) = delete;
        Instruction_TEST &operator=(const Instruction_TEST &&instance) = delete;

        void operator()(const m8 &op1, const imm8 &op2);
        void operator()(const m16 &op1, const imm16 &op2);
        void operator()(const m32 &op1, const imm32 &op2);
        void operator()(const m64 &op1, const imm32 &op2);

        void operator()(const r8 &op1, const imm8 &op2);
        void operator()(const r16 &op1, const imm16 &op2);
        void operator()(const r32 &op1, const imm32 &op2);
        void operator()(const r64 &op1, const imm32 &op2);

        void operator()(const m8 &op1, const r8 &op2);
        void operator()(const m16 &op1, const r16 &op2);
        void operator()(const m32 &op1, const r32 &op2);
        void operator()(const m64 &op1, const r64 &op2);

        void operator()(const r8 &op1, const r8 &op2);
        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r64 &op1, const r64 &op2);

        ~Instruction_TEST();

    private:
        asmstream &m_asmout;
};

#endif
