#ifdef INSTRUCTION_MONITOR_H
#error Already included
#else
#define INSTRUCTION_MONITOR_H

class Instruction_MONITOR
{
    public:
        Instruction_MONITOR(asmstream &s);

        Instruction_MONITOR() = delete;
        Instruction_MONITOR(const Instruction_MONITOR &instance) = delete;
        Instruction_MONITOR(const Instruction_MONITOR &&instance) = delete;
        Instruction_MONITOR &operator=(const Instruction_MONITOR &instance) = delete;
        Instruction_MONITOR &operator=(const Instruction_MONITOR &&instance) = delete;

        void operator()();

        ~Instruction_MONITOR();

    private:
        asmstream &m_asmout;
};

#endif
