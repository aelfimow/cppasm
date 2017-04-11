#ifdef ST_H
#error Already included
#else
#define ST_H

class st
{
    public:
        st();

        st(const st &instance) = delete;
        st(const st &&instance) = delete;
        st &operator=(const st &instance) = delete;
        st &operator=(const st &&instance) = delete;

        ~st();

        st &operator()(size_t i);

        std::string name() const;

    private:
        std::string m_name;
};

#endif
