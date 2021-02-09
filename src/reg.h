/*! \file reg.h
    \brief Classes representing general purpose registers.
*/
#ifdef REG_H
#error Already included
#else
#define REG_H

enum RegisterType
{
    GENERAL_PURPOSE_REG,
    MMX_REG,
    XMM_REG,
    YMM_REG,
    ZMM_REG,
    SEGMENT_REG,
    DEBUG_REG,
    CONTROL_REG
};

class reg
{
    public:
        reg() { }
        virtual ~reg() = default;

        virtual std::string name() const = 0;
};

template
<
    class T
>
class evex_z: public reg
{
    public:
        explicit evex_z(const std::string &base_name, const std::string &name) :
            reg { },
            m_name { base_name + name },
            m_p { nullptr }
        {
        }

        ~evex_z()
        {
            delete m_p;
        }

        std::string name() const override
        {
            return m_name;
        }

        operator T&()
        {
            if (m_p == nullptr)
            {
                m_p = new T { m_name };
            }

            return *m_p;
        }

    private:
        const std::string m_name;
        T *m_p;

    public:
        evex_z() = delete;
        evex_z(const evex_z &instance) = delete;
        evex_z(const evex_z &&instance) = delete;
        evex_z &operator=(const evex_z &instance) = delete;
        evex_z &operator=(const evex_z &&instance) = delete;
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
            z { name, "{z}" },
            m_name { name },
            m_p { nullptr }
        {
        }

        explicit opmask_reg_template(const std::string &base_name, const std::string &name) :
            reg { },
            z { base_name + name, "{z}" },
            m_name { base_name + name },
            m_p { nullptr }
        {
        }

        ~opmask_reg_template()
        {
            delete m_p;
        }

        std::string name() const override
        {
            return m_name;
        }

        operator T&()
        {
            if (m_p == nullptr)
            {
                m_p = new T { m_name };
            }

            return *m_p;
        }

    public:
        evex_z<T> z;

    private:
        const std::string m_name;
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
    enum RegisterType reg_type,
    int bit_width
>
class reg_template final: public reg
{
    public:
        using reg_template_type = reg_template<reg_type, bit_width>;

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
            z { name, "{z}" },
            m_name { name },
            m_reg_type { reg_type },
            m_bit_width { bit_width }
        {
        }

        ~reg_template() = default;

        std::string name() const override
        {
            return m_name;
        }

    public:
        opmask_reg_template<reg_template_type> k0;
        opmask_reg_template<reg_template_type> k1;
        opmask_reg_template<reg_template_type> k2;
        opmask_reg_template<reg_template_type> k3;
        opmask_reg_template<reg_template_type> k4;
        opmask_reg_template<reg_template_type> k5;
        opmask_reg_template<reg_template_type> k6;
        opmask_reg_template<reg_template_type> k7;

        evex_z<reg_template_type> z;

    private:
        const std::string m_name;
        const enum RegisterType m_reg_type;
        const int m_bit_width;

    public:
        reg_template() = delete;
        reg_template(const reg_template &instance) = delete;
        reg_template(const reg_template &&instance) = delete;
        reg_template &operator=(const reg_template &instance) = delete;
        reg_template &operator=(const reg_template &&instance) = delete;
};

using r8 = reg_template<GENERAL_PURPOSE_REG, 8>;
using r16 = reg_template<GENERAL_PURPOSE_REG, 16>;
using r32 = reg_template<GENERAL_PURPOSE_REG, 32>;
using r64 = reg_template<GENERAL_PURPOSE_REG, 64>;
using xmm = reg_template<XMM_REG, 128>;
using ymm = reg_template<YMM_REG, 256>;
using zmm = reg_template<ZMM_REG, 512>;
using opmask_reg = opmask_reg_template<std::string>;
using mm = reg_template<MMX_REG, 64>;
using Sreg = reg_template<SEGMENT_REG, 16>;
using dr = reg_template<DEBUG_REG, 64>;
using cr = reg_template<CONTROL_REG, 64>;

#endif
