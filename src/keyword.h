/*! \file keyword.h
    \brief Class for assembler keywords.
*/
#ifdef KEYWORD_H
#error Already included
#else
#define KEYWORD_H

class asmstream;

class keyword
{
    public:
        keyword(asmstream &s);
        keyword(asmstream &s, const std::string str);

        void operator()(const std::string &name);

        ~keyword();

    private:
        asmstream &m_asmout;
        const std::string m_str;

    public:
        keyword() = delete;
        keyword(const keyword &instance) = delete;
        keyword(const keyword &&instance) = delete;
        keyword &operator=(const keyword &instance) = delete;
        keyword &operator=(const keyword &&instance) = delete;
};

#endif
