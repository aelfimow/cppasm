/*! \file asmstream.h
    \brief Class for Assembly Stream.
*/
#ifdef ASM_STREAM_H
#error Already included
#else
#define ASM_STREAM_H

class Instruction;
class streamdest;

/*! \class Assembly stream */
class asmstream
{
    public:
        asmstream();

        void operator<<(const Instruction &instr);

        void operator<<(const std::string &str);

        void prefix(const std::string &str);

        ~asmstream();

    private:
        streamdest *m_streamdest;
        bool m_prefix;

    public:
        asmstream(const asmstream &instance) = delete;
        asmstream(const asmstream &&instance) = delete;
        asmstream &operator=(const asmstream &instance) = delete;
        asmstream &operator=(const asmstream &&instance) = delete;
};

#endif
