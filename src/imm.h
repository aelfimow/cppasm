#ifdef IMM_H
#error Already included
#else
#define IMM_H

#include <string>
#include <sstream>
#include <iomanip>

template
<
    typename T,
    int total_chars
>
class imm
{
    public:
        explicit imm(T value) :
            m_value { value }
        {
        }

        ~imm()
        {
        }

        std::string to_str() const
        {
            std::ostringstream ss;

            ss << "$0x" << std::setfill('0') << std::setw(total_chars) << std::hex << std::uppercase;

            if (sizeof(T) == sizeof(uint8_t))
            {
                ss << static_cast<size_t>(m_value);
            }
            else
            {
                ss << m_value;
            }

            return ss.str();
        }

    private:
        const T m_value;

    public:
        imm() = delete;
        imm(const imm &instance) = delete;
        imm(const imm &&instance) = delete;
        imm &operator=(const imm &instance) = delete;
        imm &operator=(const imm &&instance) = delete;
};

#endif
