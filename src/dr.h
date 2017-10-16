/*! \file dr.h
    \brief Class representing Debug Register.
*/
#ifdef DR_H
#error Already included
#else
#define DR_H

class dr
{
    public:
        explicit dr(const std::string &name);

        ~dr();

        std::string name() const;

    private:
        const std::string m_name;

    public:
        dr() = delete;
        dr(const dr &instance) = delete;
        dr(const dr &&instance) = delete;
        dr &operator=(const dr &instance) = delete;
        dr &operator=(const dr &&instance) = delete;
};

#endif
