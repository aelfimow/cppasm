#ifdef SREG_H
#error Already included
#else
#define SREG_H

class Sreg
{
    public:
        explicit Sreg(const std::string &name);

        Sreg() = delete;
        Sreg(const Sreg &instance) = delete;
        Sreg(const Sreg &&instance) = delete;
        Sreg &operator=(const Sreg &instance) = delete;
        Sreg &operator=(const Sreg &&instance) = delete;

        ~Sreg();

        std::string name() const;

    private:
        const std::string m_name;
};

#endif
