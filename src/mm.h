#ifdef MM_H
#error Already included
#else
#define MM_H

class mm
{
    public:
        explicit mm(const std::string &name);

        mm() = delete;
        mm(const mm &instance) = delete;
        mm(const mm &&instance) = delete;
        mm &operator=(const mm &instance) = delete;
        mm &operator=(const mm &&instance) = delete;

        ~mm();

        std::string name() const;

    private:
        const std::string m_name;
};

#endif
