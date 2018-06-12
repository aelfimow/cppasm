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
    class T
>
class opmask_reg_template : public reg
{
    public:
        explicit opmask_reg_template(const std::string &name) :
            reg { },
            m_name { name },
            m_base_name { },
            m_p { nullptr }
        {
        }

        explicit opmask_reg_template(const std::string &base_name, const std::string &name) :
            reg { },
            m_name { name },
            m_base_name { base_name },
            m_p { nullptr }
        {
        }

        ~opmask_reg_template()
        {
            delete m_p;
        }

        std::string name() const override
        {
            if (0 != m_base_name.length())
            {
                const std::string str = m_base_name + m_name;

                return str;
            }

            return m_name;
        }

        operator T&()
        {
            if (m_p == nullptr)
            {
                m_p = new T { name() };
            }

            return *m_p;
        }

    private:
        const std::string m_name;
        const std::string m_base_name;
        T *m_p;

    public:
        opmask_reg_template() = delete;
        opmask_reg_template(const opmask_reg_template &instance) = delete;
        opmask_reg_template(const opmask_reg_template &&instance) = delete;
        opmask_reg_template &operator=(const opmask_reg_template &instance) = delete;
        opmask_reg_template &operator=(const opmask_reg_template &&instance) = delete;
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
            k0 { name, "{%k0}" },
            k1 { name, "{%k1}" },
            k2 { name, "{%k2}" },
            k3 { name, "{%k3}" },
            k4 { name, "{%k4}" },
            k5 { name, "{%k5}" },
            k6 { name, "{%k6}" },
            k7 { name, "{%k7}" },
            m_name { name },
            m_bit_width { bit_width }
        {
        }

        ~reg_template() { }

        std::string name() const override
        {
            return m_name;
        }

    public:
        opmask_reg_template<reg_template<bit_width>> k0;
        opmask_reg_template<reg_template<bit_width>> k1;
        opmask_reg_template<reg_template<bit_width>> k2;
        opmask_reg_template<reg_template<bit_width>> k3;
        opmask_reg_template<reg_template<bit_width>> k4;
        opmask_reg_template<reg_template<bit_width>> k5;
        opmask_reg_template<reg_template<bit_width>> k6;
        opmask_reg_template<reg_template<bit_width>> k7;

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

using r8 = reg_template<8>;
using r16 = reg_template<16>;
using r32 = reg_template<32>;
using r64 = reg_template<64>;
using xmm = reg_template<128>;
using ymm = reg_template<256>;
using zmm = reg_template<512>;
using opmask_reg = opmask_reg_template<std::string>;

#endif
