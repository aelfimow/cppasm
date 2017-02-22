#ifdef INSTRUCTION_ADCX_H
#error Already included
#else
#define INSTRUCTION_ADCX_H

class Instruction_ADCX
{
    public:
        Instruction_ADCX(asmstream &s);

        Instruction_ADCX() = delete;
        Instruction_ADCX(const Instruction_ADCX &instance) = delete;
        Instruction_ADCX(const Instruction_ADCX &&instance) = delete;
        Instruction_ADCX &operator=(const Instruction_ADCX &instance) = delete;
        Instruction_ADCX &operator=(const Instruction_ADCX &&instance) = delete;

        void operator()(const r32 &op1, const r32 &op2);
        void operator()(const r32 &op1, const m &op2);

        void operator()(const r64 &op1, const r64 &op2);
        void operator()(const r64 &op1, const m &op2);

        ~Instruction_ADCX();

    private:
        asmstream &m_asmout;
};

#endif
