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
    int bit_width,
    const std::string &prefix
>
class reg_template : public reg
{
    public:
        explicit reg_template(const std::string &name) :
            reg { },
            m_name { name },
            m_prefix { prefix },
            m_bit_width { bit_width }
        {
        }

        ~reg_template() { }

        std::string name() const override
        {
            const std::string name { m_prefix + m_name };
            return name;
        }

    private:
        const std::string m_name;
        const std::string m_prefix;
        const int m_bit_width;

    public:
        reg_template() = delete;
        reg_template(const reg_template &instance) = delete;
        reg_template(const reg_template &&instance) = delete;
        reg_template &operator=(const reg_template &instance) = delete;
        reg_template &operator=(const reg_template &&instance) = delete;
};

extern const std::string no_prefix;

using r8 = reg_template<8, no_prefix>;
using r16 = reg_template<16, no_prefix>;
using r32 = reg_template<32, no_prefix>;
using r64 = reg_template<64, no_prefix>;
using xmm = reg_template<128, no_prefix>;
using ymm = reg_template<256, no_prefix>;
using zmm = reg_template<512, no_prefix>;

#endif
