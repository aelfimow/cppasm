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

class opmask_reg : public reg
{
    public:
        explicit opmask_reg(const std::string &name) :
            reg { },
            m_name { name }
        {
        }

        ~opmask_reg() { }

        std::string name() const override
        {
            return m_name;
        }

    private:
        const std::string m_name;

    public:
        opmask_reg() = delete;
        opmask_reg(const opmask_reg &instance) = delete;
        opmask_reg(const opmask_reg &&instance) = delete;
        opmask_reg &operator=(const opmask_reg &instance) = delete;
        opmask_reg &operator=(const opmask_reg &&instance) = delete;
};

using r8 = reg_template<8>;
using r16 = reg_template<16>;
using r32 = reg_template<32>;
using r64 = reg_template<64>;
using xmm = reg_template<128>;
using ymm = reg_template<256>;
using zmm = reg_template<512>;

#endif
