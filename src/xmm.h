#ifdef XMM_H
#error Already included
#else
#define XMM_H

class xmm
{
    public:
        explicit xmm(const std::string &name);

        xmm() = delete;
        xmm(const xmm &instance) = delete;
        xmm(const xmm &&instance) = delete;
        xmm &operator=(const xmm &instance) = delete;
        xmm &operator=(const xmm &&instance) = delete;

        ~xmm();

        std::string name() const;

    private:
        const std::string m_name;
};

#endif
