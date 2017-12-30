/*! \file Operands_x.h
    \brief A set of template classes representing operands.
*/
#ifdef OPERANDS_X_H
#error Already included
#else
#define OPERANDS_X_H

class Operands_none
{
    public:
        Operands_none(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()()
        {
            Instruction instr { m_mnem };
            m_asmout << instr;
        }

        virtual ~Operands_none() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_none() = delete;
        Operands_none(const Operands_none &instance) = delete;
        Operands_none(const Operands_none &&instance) = delete;
        Operands_none &operator=(const Operands_none &instance) = delete;
        Operands_none &operator=(const Operands_none &&instance) = delete;
};

class Operands_prefix
{
    public:
        Operands_prefix(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()()
        {
            m_asmout.prefix(m_mnem);
        }

        virtual ~Operands_prefix() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_prefix() = delete;
        Operands_prefix(const Operands_prefix &instance) = delete;
        Operands_prefix(const Operands_prefix &&instance) = delete;
        Operands_prefix &operator=(const Operands_prefix &instance) = delete;
        Operands_prefix &operator=(const Operands_prefix &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    const std::string &suffix
>
class Operands_reg_reg
{
    public:
        Operands_reg_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2)
        {
            Instruction instr { m_mnem, op1.name(), op2.name() };
            instr.suffix(suffix);
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg() = delete;
        Operands_reg_reg(const Operands_reg_reg &instance) = delete;
        Operands_reg_reg(const Operands_reg_reg &&instance) = delete;
        Operands_reg_reg &operator=(const Operands_reg_reg &instance) = delete;
        Operands_reg_reg &operator=(const Operands_reg_reg &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class RegType3
>
class Operands_reg_reg_reg
{
    public:
        Operands_reg_reg_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, RegType3 &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.name() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_reg() = delete;
        Operands_reg_reg_reg(const Operands_reg_reg_reg &instance) = delete;
        Operands_reg_reg_reg(const Operands_reg_reg_reg &&instance) = delete;
        Operands_reg_reg_reg &operator=(const Operands_reg_reg_reg &instance) = delete;
        Operands_reg_reg_reg &operator=(const Operands_reg_reg_reg &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class RegType3
>
class Operands_reg_reg_reg2
{
    public:
        Operands_reg_reg_reg2(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, RegType3 &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.name() };
            instr.keep_args_sequence();
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_reg2() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_reg2() = delete;
        Operands_reg_reg_reg2(const Operands_reg_reg_reg2 &instance) = delete;
        Operands_reg_reg_reg2(const Operands_reg_reg_reg2 &&instance) = delete;
        Operands_reg_reg_reg2 &operator=(const Operands_reg_reg_reg2 &instance) = delete;
        Operands_reg_reg_reg2 &operator=(const Operands_reg_reg_reg2 &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class RegType3,
    class RegType4
>
class Operands_reg_reg_reg_reg
{
    public:
        Operands_reg_reg_reg_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, RegType3 &op3, RegType4 &op4)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.name(), op4.name() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_reg_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_reg_reg() = delete;
        Operands_reg_reg_reg_reg(const Operands_reg_reg_reg_reg &instance) = delete;
        Operands_reg_reg_reg_reg(const Operands_reg_reg_reg_reg &&instance) = delete;
        Operands_reg_reg_reg_reg &operator=(const Operands_reg_reg_reg_reg &instance) = delete;
        Operands_reg_reg_reg_reg &operator=(const Operands_reg_reg_reg_reg &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class RegType3,
    class ImmType
>
class Operands_reg_reg_reg_imm
{
    public:
        Operands_reg_reg_reg_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, RegType3 &op3, ImmType &op4)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.name(), op4.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_reg_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_reg_imm() = delete;
        Operands_reg_reg_reg_imm(const Operands_reg_reg_reg_imm &instance) = delete;
        Operands_reg_reg_reg_imm(const Operands_reg_reg_reg_imm &&instance) = delete;
        Operands_reg_reg_reg_imm &operator=(const Operands_reg_reg_reg_imm &instance) = delete;
        Operands_reg_reg_reg_imm &operator=(const Operands_reg_reg_reg_imm &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class MemType
>
class Operands_reg_reg_mem
{
    public:
        Operands_reg_reg_mem(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, MemType &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_mem() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_mem() = delete;
        Operands_reg_reg_mem(const Operands_reg_reg_mem &instance) = delete;
        Operands_reg_reg_mem(const Operands_reg_reg_mem &&instance) = delete;
        Operands_reg_reg_mem &operator=(const Operands_reg_reg_mem &instance) = delete;
        Operands_reg_reg_mem &operator=(const Operands_reg_reg_mem &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class MemType,
    class RegType3
>
class Operands_reg_reg_mem_reg
{
    public:
        Operands_reg_reg_mem_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, MemType &op3, RegType3 &op4)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str(), op4.name() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_mem_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_mem_reg() = delete;
        Operands_reg_reg_mem_reg(const Operands_reg_reg_mem_reg &instance) = delete;
        Operands_reg_reg_mem_reg(const Operands_reg_reg_mem_reg &&instance) = delete;
        Operands_reg_reg_mem_reg &operator=(const Operands_reg_reg_mem_reg &instance) = delete;
        Operands_reg_reg_mem_reg &operator=(const Operands_reg_reg_mem_reg &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class MemType,
    class ImmType
>
class Operands_reg_reg_mem_imm
{
    public:
        Operands_reg_reg_mem_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, MemType &op3, ImmType &op4)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str(), op4.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_mem_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_mem_imm() = delete;
        Operands_reg_reg_mem_imm(const Operands_reg_reg_mem_imm &instance) = delete;
        Operands_reg_reg_mem_imm(const Operands_reg_reg_mem_imm &&instance) = delete;
        Operands_reg_reg_mem_imm &operator=(const Operands_reg_reg_mem_imm &instance) = delete;
        Operands_reg_reg_mem_imm &operator=(const Operands_reg_reg_mem_imm &&instance) = delete;
};

template
<
    class RegType1,
    class RegType2,
    class ImmType
>
class Operands_reg_reg_imm
{
    public:
        Operands_reg_reg_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, RegType2 &op2, ImmType &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_reg_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_reg_imm() = delete;
        Operands_reg_reg_imm(const Operands_reg_reg_imm &instance) = delete;
        Operands_reg_reg_imm(const Operands_reg_reg_imm &&instance) = delete;
        Operands_reg_reg_imm &operator=(const Operands_reg_reg_imm &instance) = delete;
        Operands_reg_reg_imm &operator=(const Operands_reg_reg_imm &&instance) = delete;
};

template
<
    class MemType,
    class RegType,
    class ImmType
>
class Operands_mem_reg_imm
{
    public:
        Operands_mem_reg_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(MemType &op1, RegType &op2, ImmType &op3)
        {
            Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_mem_reg_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_mem_reg_imm() = delete;
        Operands_mem_reg_imm(const Operands_mem_reg_imm &instance) = delete;
        Operands_mem_reg_imm(const Operands_mem_reg_imm &&instance) = delete;
        Operands_mem_reg_imm &operator=(const Operands_mem_reg_imm &instance) = delete;
        Operands_mem_reg_imm &operator=(const Operands_mem_reg_imm &&instance) = delete;
};

template
<
    class MemType,
    class RegType1,
    class RegType2
>
class Operands_mem_reg_reg
{
    public:
        Operands_mem_reg_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(MemType &op1, RegType1 &op2, RegType2 &op3)
        {
            Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.name() };
            m_asmout << instr;
        }

        virtual ~Operands_mem_reg_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_mem_reg_reg() = delete;
        Operands_mem_reg_reg(const Operands_mem_reg_reg &instance) = delete;
        Operands_mem_reg_reg(const Operands_mem_reg_reg &&instance) = delete;
        Operands_mem_reg_reg &operator=(const Operands_mem_reg_reg &instance) = delete;
        Operands_mem_reg_reg &operator=(const Operands_mem_reg_reg &&instance) = delete;
};

template
<
    class ImmType
>
class Operands_imm
{
    public:
        Operands_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(ImmType &op1)
        {
            Instruction instr { m_mnem, op1.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_imm() = delete;
        Operands_imm(const Operands_imm &instance) = delete;
        Operands_imm(const Operands_imm &&instance) = delete;
        Operands_imm &operator=(const Operands_imm &instance) = delete;
        Operands_imm &operator=(const Operands_imm &&instance) = delete;
};

template
<
    class ImmType,
    class RegType
>
class Operands_imm_reg
{
    public:
        Operands_imm_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(ImmType &op1, RegType &op2)
        {
            Instruction instr { m_mnem, op1.to_str(), op2.name() };
            m_asmout << instr;
        }

        virtual ~Operands_imm_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_imm_reg() = delete;
        Operands_imm_reg(const Operands_imm_reg &instance) = delete;
        Operands_imm_reg(const Operands_imm_reg &&instance) = delete;
        Operands_imm_reg &operator=(const Operands_imm_reg &instance) = delete;
        Operands_imm_reg &operator=(const Operands_imm_reg &&instance) = delete;
};


template
<
    class ImmType1,
    class ImmType2
>
class Operands_imm_imm
{
    public:
        Operands_imm_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(ImmType1 &op1, ImmType2 &op2)
        {
            const std::string str { m_mnem + " " + op1.to_str() + ", " + op2.to_str() } ;
            Instruction instr { str };
            m_asmout << instr;
        }

        virtual ~Operands_imm_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_imm_imm() = delete;
        Operands_imm_imm(const Operands_imm_imm &instance) = delete;
        Operands_imm_imm(const Operands_imm_imm &&instance) = delete;
        Operands_imm_imm &operator=(const Operands_imm_imm &instance) = delete;
        Operands_imm_imm &operator=(const Operands_imm_imm &&instance) = delete;
};

template
<
    class RegType,
    class ImmType
>
class Operands_reg_imm
{
    public:
        Operands_reg_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType &op1, ImmType &op2)
        {
            Instruction instr { m_mnem, op1.name(), op2.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_imm() = delete;
        Operands_reg_imm(const Operands_reg_imm &instance) = delete;
        Operands_reg_imm(const Operands_reg_imm &&instance) = delete;
        Operands_reg_imm &operator=(const Operands_reg_imm &instance) = delete;
        Operands_reg_imm &operator=(const Operands_reg_imm &&instance) = delete;
};

template
<
    class RegType1,
    class MemType,
    class RegType2
>
class Operands_reg_mem_reg
{
    public:
        Operands_reg_mem_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, MemType &op2, RegType2 &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.to_str(), op3.name() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_mem_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_mem_reg() = delete;
        Operands_reg_mem_reg(const Operands_reg_mem_reg &instance) = delete;
        Operands_reg_mem_reg(const Operands_reg_mem_reg &&instance) = delete;
        Operands_reg_mem_reg &operator=(const Operands_reg_mem_reg &instance) = delete;
        Operands_reg_mem_reg &operator=(const Operands_reg_mem_reg &&instance) = delete;
};

template
<
    class RegType1,
    class MemType,
    class RegType2
>
class Operands_reg_mem_reg2
{
    public:
        Operands_reg_mem_reg2(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType1 &op1, MemType &op2, RegType2 &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.to_str(), op3.name() };
            instr.keep_args_sequence();
            m_asmout << instr;
        }

        virtual ~Operands_reg_mem_reg2() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_mem_reg2() = delete;
        Operands_reg_mem_reg2(const Operands_reg_mem_reg2 &instance) = delete;
        Operands_reg_mem_reg2(const Operands_reg_mem_reg2 &&instance) = delete;
        Operands_reg_mem_reg2 &operator=(const Operands_reg_mem_reg2 &instance) = delete;
        Operands_reg_mem_reg2 &operator=(const Operands_reg_mem_reg2 &&instance) = delete;
};

template
<
    class RegType,
    class MemType,
    class ImmType
>
class Operands_reg_mem_imm
{
    public:
        Operands_reg_mem_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType &op1, MemType &op2, ImmType &op3)
        {
            Instruction instr { m_mnem, op1.name(), op2.to_str(), op3.to_str() };
            m_asmout << instr;
        }

        virtual ~Operands_reg_mem_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_mem_imm() = delete;
        Operands_reg_mem_imm(const Operands_reg_mem_imm &instance) = delete;
        Operands_reg_mem_imm(const Operands_reg_mem_imm &&instance) = delete;
        Operands_reg_mem_imm &operator=(const Operands_reg_mem_imm &instance) = delete;
        Operands_reg_mem_imm &operator=(const Operands_reg_mem_imm &&instance) = delete;
};

template
<
    class RegType,
    class MemType,
    const std::string &suffix
>
class Operands_reg_mem
{
    public:
        Operands_reg_mem(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType &op1, MemType &op2)
        {
            Instruction instr { m_mnem, op1.name(), op2.to_str() };
            instr.suffix(suffix);
            m_asmout << instr;
        }

        virtual ~Operands_reg_mem() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_mem() = delete;
        Operands_reg_mem(const Operands_reg_mem &instance) = delete;
        Operands_reg_mem(const Operands_reg_mem &&instance) = delete;
        Operands_reg_mem &operator=(const Operands_reg_mem &instance) = delete;
        Operands_reg_mem &operator=(const Operands_reg_mem &&instance) = delete;
};

template
<
    class RegType,
    class MemType
>
class Operands_reg_mem2
{
    public:
        Operands_reg_mem2(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType &op1, MemType &op2)
        {
            const std::string str { m_mnem + " " + op1.name() + ", " + op2.to_str() } ;
            Instruction instr { str };
            m_asmout << instr;
        }

        virtual ~Operands_reg_mem2() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg_mem2() = delete;
        Operands_reg_mem2(const Operands_reg_mem2 &instance) = delete;
        Operands_reg_mem2(const Operands_reg_mem2 &&instance) = delete;
        Operands_reg_mem2 &operator=(const Operands_reg_mem2 &instance) = delete;
        Operands_reg_mem2 &operator=(const Operands_reg_mem2 &&instance) = delete;
};

template
<
    class MemType,
    class RegType,
    const std::string &suffix
>
class Operands_mem_reg
{
    public:
        Operands_mem_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(MemType &op1, RegType &op2)
        {
            Instruction instr { m_mnem, op1.to_str(), op2.name() };
            instr.suffix(suffix);
            m_asmout << instr;
        }

        virtual ~Operands_mem_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_mem_reg() = delete;
        Operands_mem_reg(const Operands_mem_reg &instance) = delete;
        Operands_mem_reg(const Operands_mem_reg &&instance) = delete;
        Operands_mem_reg &operator=(const Operands_mem_reg &instance) = delete;
        Operands_mem_reg &operator=(const Operands_mem_reg &&instance) = delete;
};

template
<
    class MemType,
    const std::string &suffix
>
class Operands_mem
{
    public:
        Operands_mem(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(MemType &op1)
        {
            Instruction instr { m_mnem, op1.to_str() };
            instr.suffix(suffix);
            m_asmout << instr;
        }

        virtual ~Operands_mem() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_mem() = delete;
        Operands_mem(const Operands_mem &instance) = delete;
        Operands_mem(const Operands_mem &&instance) = delete;
        Operands_mem &operator=(const Operands_mem &instance) = delete;
        Operands_mem &operator=(const Operands_mem &&instance) = delete;
};

template
<
    class MemType,
    class ImmType,
    const std::string &suffix
>
class Operands_mem_imm
{
    public:
        Operands_mem_imm(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(MemType &op1, ImmType &op2)
        {
            Instruction instr { m_mnem, op1.to_str(), op2.to_str() };
            instr.suffix(suffix);
            m_asmout << instr;
        }

        virtual ~Operands_mem_imm() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_mem_imm() = delete;
        Operands_mem_imm(const Operands_mem_imm &instance) = delete;
        Operands_mem_imm(const Operands_mem_imm &&instance) = delete;
        Operands_mem_imm &operator=(const Operands_mem_imm &instance) = delete;
        Operands_mem_imm &operator=(const Operands_mem_imm &&instance) = delete;
};

template
<
    class RegType
>
class Operands_reg
{
    public:
        Operands_reg(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(RegType &op1)
        {
            Instruction instr { m_mnem, op1.name() };
            m_asmout << instr;
        }

        virtual ~Operands_reg() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_reg() = delete;
        Operands_reg(const Operands_reg &instance) = delete;
        Operands_reg(const Operands_reg &&instance) = delete;
        Operands_reg &operator=(const Operands_reg &instance) = delete;
        Operands_reg &operator=(const Operands_reg &&instance) = delete;
};

class Operands_string
{
    public:
        Operands_string(asmstream &s, const std::string mnem) :
            m_asmout { s },
            m_mnem { mnem }
        {
        }

        void operator()(std::string &op1)
        {
            Instruction instr { m_mnem, op1 };
            m_asmout << instr;
        }

        virtual ~Operands_string() { }

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        Operands_string() = delete;
        Operands_string(const Operands_string &instance) = delete;
        Operands_string(const Operands_string &&instance) = delete;
        Operands_string &operator=(const Operands_string &instance) = delete;
        Operands_string &operator=(const Operands_string &&instance) = delete;
};

#endif
