/*! \file Instruction10_Types.h
    \brief Types for instructions with 10 operands combinations.
*/
#ifdef INSTRUCTION10_TYPES_H
#error Already included
#else
#define INSTRUCTION10_TYPES_H

using Instruction10_Type1 = Instruction_10
<
    Operands_reg<r16>,
    Operands_reg<r32>,
    Operands_reg<r64>,
    Operands_mem<m16, suffix_m16>,
    Operands_mem<m32, suffix_m32>,
    Operands_mem<m64, suffix_m64>,
    Operands_imm<imm8>,
    Operands_imm<imm16>,
    Operands_imm<imm32>,
    Operands_reg<Sreg>
>;

using Instruction10_Type2 = Instruction_10
<
    Operands_reg_reg<r32, r8, no_suffix>,
    Operands_reg_mem<r32, m8, suffix_m8>,
    Operands_reg_reg<r32, r16, no_suffix>,
    Operands_reg_mem<r32, m16, suffix_m16>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, suffix_m32>,
    Operands_reg_reg<r64, r8, no_suffix>,
    Operands_reg_mem<r64, m8, suffix_m8>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, suffix_m64>
>;

#endif
