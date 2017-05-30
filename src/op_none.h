#ifdef OP_NONE_H
#error Already included
#else
#define OP_NONE_H

class op_none
{
    public:
        op_none(asmstream &s, const std::string mnem);

        void operator()();

        virtual ~op_none();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        op_none() = delete;
        op_none(const op_none &instance) = delete;
        op_none(const op_none &&instance) = delete;
        op_none &operator=(const op_none &instance) = delete;
        op_none &operator=(const op_none &&instance) = delete;

};

#endif
