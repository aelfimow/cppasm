#ifdef DR_H
#error Already included
#else
#define DR_H

class dr
{
    public:
        explicit dr(const std::string &name);

        dr() = delete;
        dr(const dr &instance) = delete;
        dr(const dr &&instance) = delete;
        dr &operator=(const dr &instance) = delete;
        dr &operator=(const dr &&instance) = delete;

        ~dr();

        std::string name() const;

    private:
        const std::string m_name;
};

#endif
