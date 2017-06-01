#ifdef OPERANDS_X_H
#error Already included
#else
#define OPERANDS_X_H

template
<
    class RegType1,
    class RegType2
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
    class RegType,
    class MemType
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
    class MemType,
    class RegType
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

#endif
