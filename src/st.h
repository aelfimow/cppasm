/*! \file st.h
    \brief Class representing FPU's ST register.
*/
#ifdef ST_H
#error Already included
#else
#define ST_H

class st
{
    public:
        st();
        ~st();

        st operator()(size_t i);

        std::string name() const;

    private:
        explicit st(size_t i);

        std::string m_name;

    public:
        st(const st &instance) = default;
        st(st &&instance) = default;
        st &operator=(const st &instance) = delete;
        st &operator=(const st &&instance) = delete;
};

#endif
