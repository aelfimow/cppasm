/*! \file label.h
    \brief Class for assembler labels.
*/
#ifdef LABEL_H
#error Already included
#else
#define LABEL_H

class asmstream;

class Keyword_label
{
    public:
        explicit Keyword_label(asmstream &s);

        void operator()(const std::string &name);

        ~Keyword_label();

    private:
        asmstream &m_asmout;

    public:
        Keyword_label();
        Keyword_label(const Keyword_label &instance) = delete;
        Keyword_label(const Keyword_label &&instance) = delete;
        Keyword_label &operator=(const Keyword_label &instance) = delete;
        Keyword_label &operator=(const Keyword_label &&instance) = delete;
};

#endif
