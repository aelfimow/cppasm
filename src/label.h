#ifdef LABEL_H
#error Already included
#else
#define LABEL_H

class Keyword_label
{
    public:
        Keyword_label();

        void operator()(const std::string &name);

        ~Keyword_label();

    public:
        Keyword_label(const Keyword_label &instance) = delete;
        Keyword_label(const Keyword_label &&instance) = delete;
        Keyword_label &operator=(const Keyword_label &instance) = delete;
        Keyword_label &operator=(const Keyword_label &&instance) = delete;
};

#endif
