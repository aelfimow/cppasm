#ifdef INSTRUCTION_LOOP_CC_H
#error Already included
#else
#define INSTRUCTION_LOOP_CC_H

class Instruction_LOOPcc
{
    public:
        Instruction_LOOPcc(asmstream &s, std::string mnem);

        Instruction_LOOPcc() = delete;
        Instruction_LOOPcc(const Instruction_LOOPcc &instance) = delete;
        Instruction_LOOPcc(const Instruction_LOOPcc &&instance) = delete;
        Instruction_LOOPcc &operator=(const Instruction_LOOPcc &instance) = delete;
        Instruction_LOOPcc &operator=(const Instruction_LOOPcc &&instance) = delete;

        void operator()(std::string label_str);

        ~Instruction_LOOPcc();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;
};

#endif
