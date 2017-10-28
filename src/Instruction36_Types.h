/*! \file Instruction36_Types.h
    \brief Types for instructions with 36 operands combinations.
*/
#ifdef INSTRUCTION36_TYPES_H
#error Already included
#else
#define INSTRUCTION36_TYPES_H

using Instruction36_Type1 = Instruction_36
<
    Operands_reg_reg<r8, r8, no_suffix>,
    Operands_mem_reg<m8, r8, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_mem_reg<m16, r16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>,
    Operands_reg_mem<r8, m8, no_suffix>,
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>,
    Operands_reg_reg<r16, Sreg, no_suffix>,
    Operands_mem_reg<m16, Sreg, no_suffix>,
    Operands_reg_reg<r64, Sreg, no_suffix>,
    Operands_mem_reg<m64, Sreg, no_suffix>,
    Operands_reg_reg<Sreg, r16, no_suffix>,
    Operands_reg_mem<Sreg, m16, no_suffix>,
    Operands_reg_reg<Sreg, r64, no_suffix>,
    Operands_reg_mem<Sreg, m64, no_suffix>,
    Operands_reg_imm<r8, imm8>,
    Operands_reg_imm<r16, imm16>,
    Operands_reg_imm<r32, imm32>,
    Operands_reg_imm<r64, imm64>,
    Operands_mem_imm<m8, imm8, suffix_m8>,
    Operands_mem_imm<m16, imm16, suffix_m16>,
    Operands_mem_imm<m32, imm32, suffix_m32>,
    Operands_mem_imm<m64, imm32, suffix_m64>,
    Operands_reg_reg<r32, cr, no_suffix>,
    Operands_reg_reg<r64, cr, no_suffix>,
    Operands_reg_reg<cr, r32, no_suffix>,
    Operands_reg_reg<cr, r64, no_suffix>,
    Operands_reg_reg<r32, dr, no_suffix>,
    Operands_reg_reg<r64, dr, no_suffix>,
    Operands_reg_reg<dr, r32, no_suffix>,
    Operands_reg_reg<dr, r64, no_suffix>
>;

#endif
