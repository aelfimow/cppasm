#ifdef CR_H
#error Already included
#else
#define CR_H

class cr
{
    public:
        explicit cr(const std::string &name);

        ~cr();

        std::string name() const;

    private:
        const std::string m_name;

    public:
        cr() = delete;
        cr(const cr &instance) = delete;
        cr(const cr &&instance) = delete;
        cr &operator=(const cr &instance) = delete;
        cr &operator=(const cr &&instance) = delete;
};

#endif
