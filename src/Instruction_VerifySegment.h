#ifdef INSTRUCTION_VERIFY_SEGMENT_H
#error Already included
#else
#define INSTRUCTION_VERIFY_SEGMENT_H

class Instruction_VerifySegment
{
    public:
        Instruction_VerifySegment(asmstream &s, const std::string mnem);

        Instruction_VerifySegment() = delete;
        Instruction_VerifySegment(const Instruction_VerifySegment &instance) = delete;
        Instruction_VerifySegment(const Instruction_VerifySegment &&instance) = delete;
        Instruction_VerifySegment &operator=(const Instruction_VerifySegment &instance) = delete;
        Instruction_VerifySegment &operator=(const Instruction_VerifySegment &&instance) = delete;

        void operator()(const r16 &op1);
        void operator()(const m16 &op1);

        ~Instruction_VerifySegment();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
