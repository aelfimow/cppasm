/*! \file reg.h
    \brief Classes representing general purpose registers.
*/
#ifdef REG_H
#error Already included
#else
#define REG_H

class reg
{
    public:
        reg() { }
        virtual ~reg() { }

        virtual std::string name() const = 0;

    public:
        reg(const reg &instance) = delete;
        reg(const reg &&instance) = delete;
        reg &operator=(const reg &instance) = delete;
        reg &operator=(const reg &&instance) = delete;
};

template
<
    int bit_width
>
class reg_template : public reg
{
    public:
        explicit reg_template(const std::string &name) :
            reg { },
            m_name { name },
            m_bit_width { bit_width }
        {
        }

        ~reg_template() { }

        std::string name() const override
        {
            return m_name;
        }

    private:
        const std::string m_name;
        const int m_bit_width;

    public:
        reg_template() = delete;
        reg_template(const reg_template &instance) = delete;
        reg_template(const reg_template &&instance) = delete;
        reg_template &operator=(const reg_template &instance) = delete;
        reg_template &operator=(const reg_template &&instance) = delete;
};

#endif
