/*! \file Instruction5_Types.h
    \brief Types for instructions with five operands combinations.
*/
#ifdef INSTRUCTION5_TYPES_H
#error Already included
#else
#define INSTRUCTION5_TYPES_H

using Instruction_NOP = Instruction_5
<
    Operands_none,
    Operands_reg<r16>,
    Operands_mem<m16, suffix_m16>,
    Operands_reg<r32>,
    Operands_mem<m32, suffix_m32>
>;

using Instruction_PEXTRW = Instruction_5
<
    Operands_reg_reg_imm<r32, mm, imm8>,
    Operands_reg_reg_imm<r64, mm, imm8>,
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m16, xmm, imm8>
>;

#endif
