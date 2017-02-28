#ifdef COMMENT_H
#error Already included
#else
#define COMMENT_H

class Keyword_comment
{
    public:
        Keyword_comment();

        Keyword_comment(const Keyword_comment &instance) = delete;
        Keyword_comment(const Keyword_comment &&instance) = delete;
        Keyword_comment &operator=(const Keyword_comment &instance) = delete;
        Keyword_comment &operator=(const Keyword_comment &&instance) = delete;

        void operator()(const std::string &name);

        ~Keyword_comment();
};

#endif
