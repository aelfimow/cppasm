/*! \file Instruction7_Types.h
    \brief Types for instructions with seven operands combinations.
*/
#ifdef INSTRUCTION7_TYPES_H
#error Already included
#else
#define INSTRUCTION7_TYPES_H

extern const std::string prefix_star;

using r16_star = reg_template<16, prefix_star>;
using r32_star = reg_template<32, prefix_star>;
using r64_star = reg_template<64, prefix_star>;

using Instruction7_Type1 = Instruction_7
<
    Operands_string,
    Operands_reg<r16_star>,
    Operands_mem<m16, no_suffix>,
    Operands_reg<r32_star>,
    Operands_mem<m32, no_suffix>,
    Operands_reg<r64_star>,
    Operands_mem<m64, no_suffix>
>;

using Instruction7_Type2 = Instruction_7
<
    Operands_reg<r16>,
    Operands_mem<m16, suffix_m16>,
    Operands_reg<r32>,
    Operands_mem<m32, suffix_m32>,
    Operands_reg<r64>,
    Operands_mem<m64, suffix_m64>,
    Operands_reg<Sreg>
>;

#endif
