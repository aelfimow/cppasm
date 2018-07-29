/*! \file asmstream.h
    \brief Class for Assembly Stream.
*/
#ifdef ASM_STREAM_H
#error Already included
#else
#define ASM_STREAM_H

class Instruction;

/*! \class Assembly stream */
class asmstream
{
    public:
        explicit asmstream(char indent);

        void operator<<(const Instruction &instr);

        void operator<<(const std::string &str);

        void prefix(const std::string &str);

        ~asmstream();

    private:
        const char m_indent;
        bool m_prefix;

    public:
        asmstream() = delete;
        asmstream(const asmstream &instance) = delete;
        asmstream(const asmstream &&instance) = delete;
        asmstream &operator=(const asmstream &instance) = delete;
        asmstream &operator=(const asmstream &&instance) = delete;
};

#endif
