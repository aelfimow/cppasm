#ifdef ASM_STREAM_H
#error Already included
#else
#define ASM_STREAM_H

class asmstream
{
    public:
        asmstream();

        asmstream(const asmstream &instance) = delete;
        asmstream(const asmstream &&instance) = delete;
        asmstream &operator=(const asmstream &instance) = delete;
        asmstream &operator=(const asmstream &&instance) = delete;

        void operator<<(const Instruction &instr);

        ~asmstream();
};

#endif
