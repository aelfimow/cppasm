#ifdef INSTRUCTION_RM16_H
#error Already included
#else
#define INSTRUCTION_RM16_H

class Instruction_rm16
{
    public:
        Instruction_rm16(asmstream &s, const std::string mnem);

        Instruction_rm16() = delete;
        Instruction_rm16(const Instruction_rm16 &instance) = delete;
        Instruction_rm16(const Instruction_rm16 &&instance) = delete;
        Instruction_rm16 &operator=(const Instruction_rm16 &instance) = delete;
        Instruction_rm16 &operator=(const Instruction_rm16 &&instance) = delete;

        void operator()(const r16 &op1);
        void operator()(const m16 &op1);

        ~Instruction_rm16();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
