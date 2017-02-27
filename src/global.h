#ifdef GLOBAL_H
#error Already included
#else
#define GLOBAL_H

class Keyword_global
{
    public:
        Keyword_global();

        Keyword_global(const Keyword_global &instance) = delete;
        Keyword_global(const Keyword_global &&instance) = delete;
        Keyword_global &operator=(const Keyword_global &instance) = delete;
        Keyword_global &operator=(const Keyword_global &&instance) = delete;

        void operator()(const std::string &name);

        ~Keyword_global();
};

#endif
