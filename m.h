#ifdef M_H
#error Already included
#else
#define M_H

class m
{
    public:
        m() { }

        m(const m &instance) = delete;
        m(const m &&instance) = delete;
        m &operator=(const m &instance) = delete;
        m &operator=(const m &&instance) = delete;

        virtual ~m() { }

        virtual std::string to_str() const = 0;
        virtual std::string postfix() const = 0;
};

#endif
