/*! \file Instruction7_Types.h
    \brief Types for instructions with seven operands combinations.
*/
#ifdef INSTRUCTION7_TYPES_H
#error Already included
#else
#define INSTRUCTION7_TYPES_H

using Instruction7_Type1 = Instruction_7
<
    Operands_string,
    Operands_reg<r16>,
    Operands_mem<m16, no_suffix>,
    Operands_reg<r32>,
    Operands_mem<m32, no_suffix>,
    Operands_reg<r64>,
    Operands_mem<m64, no_suffix>
>;

using Instruction_POP = Instruction_7
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
