#ifdef INSTRUCTION_LOAD_FAR_POINTER_H
#error Already included
#else
#define INSTRUCTION_LOAD_FAR_POINTER_H

class Instruction_LoadFarPointer
{
    public:
        Instruction_LoadFarPointer(asmstream &s, const std::string mnem);

        Instruction_LoadFarPointer() = delete;
        Instruction_LoadFarPointer(const Instruction_LoadFarPointer &instance) = delete;
        Instruction_LoadFarPointer(const Instruction_LoadFarPointer &&instance) = delete;
        Instruction_LoadFarPointer &operator=(const Instruction_LoadFarPointer &instance) = delete;
        Instruction_LoadFarPointer &operator=(const Instruction_LoadFarPointer &&instance) = delete;

        void operator()(const r16 &op1, const m &op2);
        void operator()(const r32 &op1, const m &op2);
        void operator()(const r64 &op1, const m &op2);

        ~Instruction_LoadFarPointer();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
