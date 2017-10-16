/*! \file m.h
    \brief Classes representing operand in memory.
*/
#ifdef M_H
#error Already included
#else
#define M_H

#include <string>
#include <sstream>

class m
{
    public:
        m() { }
        virtual ~m() { }

        virtual std::string to_str() const = 0;

    public:
        m(const m &instance) = delete;
        m(const m &&instance) = delete;
        m &operator=(const m &instance) = delete;
        m &operator=(const m &&instance) = delete;
};

template
<
    int bit_width
>
class m_template : public m
{
    public:
        m_template() :
            m { },
            m_bit_width { bit_width },
            m_base { },
            m_index { },
            m_scale { },
            m_disp { }
        {
        }

        explicit m_template(reg &base) :
            m { },
            m_bit_width { bit_width },
            m_base { base.name() },
            m_index { },
            m_scale { },
            m_disp { }
        {
        }

        explicit m_template(reg &base, reg &index) :
            m { },
            m_bit_width { bit_width },
            m_base { base.name() },
            m_index { index.name() },
            m_scale { },
            m_disp { }
        {
        }

        explicit m_template(reg &base, reg &index, size_t scale) :
            m { },
            m_bit_width { bit_width },
            m_base { base.name() },
            m_index { index.name() },
            m_scale { },
            m_disp { }
        {
            std::ostringstream ss;
            ss << scale;
            m_scale = ss.str();
        }

        ~m_template() { }

        std::string to_str() const override
        {
            std::string str;

            str.append("(");
            str.append(m_base);

            if (0 != m_index.length())
            {
                str.append(", " + m_index);

                if (0 != m_scale.length())
                {
                    str.append(", " + m_scale);
                }
            }
            else
            {
                // No index register, expect scale to be empty, if not, error
                if (0 != m_scale.length())
                {
                    throw std::logic_error("No index register, but scale is set");
                }
            }

            str.append(")");

            return { m_disp + str };
        }

        m_template<bit_width> &base(reg &b)
        {
            m_base = b.name();
            return *this;
        }

        m_template<bit_width> &index(reg &i)
        {
            m_index = i.name();
            return *this;
        }

        m_template<bit_width> &scale(size_t value)
        {
            std::ostringstream ss;
            ss << value;
            m_scale = ss.str();
            return *this;
        }

        m_template<bit_width> &disp(size_t value)
        {
            if (0 == value)
            {
                m_disp.clear();
            }
            else
            {
                std::ostringstream ss;
                ss << value;
                m_disp = ss.str();
            }
            return *this;
        }

    private:
        const int m_bit_width;
        std::string m_base;
        std::string m_index;
        std::string m_scale;
        std::string m_disp;

    public:
        m_template(const m_template &instance) = delete;
        m_template(const m_template &&instance) = delete;
        m_template &operator=(const m_template &instance) = delete;
        m_template &operator=(const m_template &&instance) = delete;
};

using m8 = m_template<8>;
using m16 = m_template<16>;
using m32 = m_template<32>;
using m64 = m_template<64>;
using m128 = m_template<128>;
using m256 = m_template<256>;
using m32fp = m_template<32>;
using m64fp = m_template<64>;
using m80fp = m_template<80>;
using m80bcd = m_template<80>;

#endif
