#ifdef INSTRUCTION_CMOVX_H
#error Already included
#else
#define INSTRUCTION_CMOVX_H

class Instruction_CMOVx
{
    public:
        Instruction_CMOVx(asmstream &s, std::string mnem);

        Instruction_CMOVx() = delete;
        Instruction_CMOVx(const Instruction_CMOVx &instance) = delete;
        Instruction_CMOVx(const Instruction_CMOVx &&instance) = delete;
        Instruction_CMOVx &operator=(const Instruction_CMOVx &instance) = delete;
        Instruction_CMOVx &operator=(const Instruction_CMOVx &&instance) = delete;

        void operator()(const r16 &op1, const r16 &op2);
        void operator()(const r16 &op1, const m16 &op2);

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r32 &op1, const m32 &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const r64 &op1, const m64 &op2);

        ~Instruction_CMOVx();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
