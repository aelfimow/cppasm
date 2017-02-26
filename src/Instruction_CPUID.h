#ifdef INSTRUCTION_CPUID_H
#error Already included
#else
#define INSTRUCTION_CPUID_H

class Instruction_CPUID
{
    public:
        Instruction_CPUID(asmstream &s);

        Instruction_CPUID() = delete;
        Instruction_CPUID(const Instruction_CPUID &instance) = delete;
        Instruction_CPUID(const Instruction_CPUID &&instance) = delete;
        Instruction_CPUID &operator=(const Instruction_CPUID &instance) = delete;
        Instruction_CPUID &operator=(const Instruction_CPUID &&instance) = delete;

        void operator()();

        ~Instruction_CPUID();

    private:
        asmstream &m_asmout;
};

#endif
