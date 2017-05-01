#ifdef INSTRUCTION_MOV_WITH_EXT_H
#error Already included
#else
#define INSTRUCTION_MOV_WITH_EXT_H

class Instruction_MovWithExt
{
    public:
        Instruction_MovWithExt(asmstream &s, const std::string mnem);

        Instruction_MovWithExt() = delete;
        Instruction_MovWithExt(const Instruction_MovWithExt &instance) = delete;
        Instruction_MovWithExt(const Instruction_MovWithExt &&instance) = delete;
        Instruction_MovWithExt &operator=(const Instruction_MovWithExt &instance) = delete;
        Instruction_MovWithExt &operator=(const Instruction_MovWithExt &&instance) = delete;

        void operator()(const r16 &op1, const r8 &op2);
        void operator()(const r16 &op1, const m8 &op2);

        void operator()(const r32 &op1, const r8 &op2);
        void operator()(const r32 &op1, const m8 &op2);

        void operator()(const r64 &op1, const r8 &op2);
        void operator()(const r64 &op1, const m8 &op2);

        void operator()(const r32 &op1, const r16 &op2);
        void operator()(const r32 &op1, const m16 &op2);

        void operator()(const r64 &op1, const r16 &op2);
        void operator()(const r64 &op1, const m16 &op2);

        void operator()(const r64 &op1, const m32 &op2);

        ~Instruction_MovWithExt();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
