/*! \file keyword.h
    \brief Class for assembler keywords.
*/
#ifdef KEYWORD_H
#error Already included
#else
#define KEYWORD_H

class keyword
{
    public:
        keyword();
        keyword(const std::string str);

        void operator()(const std::string &name);

        ~keyword();

    private:
        const std::string m_str;

    public:
        keyword(const keyword &instance) = delete;
        keyword(const keyword &&instance) = delete;
        keyword &operator=(const keyword &instance) = delete;
        keyword &operator=(const keyword &&instance) = delete;
};

#endif
