#ifdef INSTRUCTION_ADC_H
#error Already included
#else
#define INSTRUCTION_ADC_H

class Instruction_ADC
{
    public:
        Instruction_ADC(asmstream &s);

        Instruction_ADC() = delete;
        Instruction_ADC(const Instruction_ADC &instance) = delete;
        Instruction_ADC(const Instruction_ADC &&instance) = delete;
        Instruction_ADC &operator=(const Instruction_ADC &instance) = delete;
        Instruction_ADC &operator=(const Instruction_ADC &&instance) = delete;

        void operator()(const r16 &op1, const imm16 &op2);
        void operator()(const m16 &op1, const imm16 &op2);

        void operator()(const r32 &op1, const imm32 &op2);
        void operator()(const m32 &op1, const imm32 &op2);

        void operator()(const r64 &op1, const imm32 &op2);
        void operator()(const m64 &op1, const imm32 &op2);

        void operator()(const reg &op1, const imm8 &op2);
        void operator()(const m &op1, const imm8 &op2);

        void operator()(const m &op1, const reg &op2);
        void operator()(const reg &op1, const m &op2);
        void operator()(const reg &op1, const reg &op2);

        ~Instruction_ADC();

    private:
        asmstream &m_asmout;
};

#endif
