#ifdef INSTRUCTION_BIT_TEST_H
#error Already included
#else
#define INSTRUCTION_BIT_TEST_H

class Instruction_BitTest
{
    public:
        Instruction_BitTest(asmstream &s, const std::string mnem);

        Instruction_BitTest() = delete;
        Instruction_BitTest(const Instruction_BitTest &instance) = delete;
        Instruction_BitTest(const Instruction_BitTest &&instance) = delete;
        Instruction_BitTest &operator=(const Instruction_BitTest &instance) = delete;
        Instruction_BitTest &operator=(const Instruction_BitTest &&instance) = delete;

        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const m16 &op1, const r16 &op2);
        void operator()(const r16 &op1, uint8_t op2);
        void operator()(const m16 &op1, uint8_t op2);

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const m32 &op1, const r32 &op2);
        void operator()(const r32 &op1, uint8_t op2);
        void operator()(const m32 &op1, uint8_t op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const m64 &op1, const r64 &op2);
        void operator()(const r64 &op1, uint8_t op2);
        void operator()(const m64 &op1, uint8_t op2);

        ~Instruction_BitTest();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
