#ifdef OPERANDS_X_H
#error Already included
#else
#define OPERANDS_X_H

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

#endif
