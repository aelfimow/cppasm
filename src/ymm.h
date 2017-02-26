#ifdef YMM_H
#error Already included
#else
#define YMM_H

class ymm
{
    public:
        explicit ymm(const std::string &name);

        ymm() = delete;
        ymm(const ymm &instance) = delete;
        ymm(const ymm &&instance) = delete;
        ymm &operator=(const ymm &instance) = delete;
        ymm &operator=(const ymm &&instance) = delete;

        ~ymm();

        std::string name() const;

    private:
        const std::string m_name;
};

#endif
