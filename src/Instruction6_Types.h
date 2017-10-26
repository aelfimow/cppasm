/*! \file Instruction6_Types.h
    \brief Types for instructions with six operands combinations.
*/
#ifdef INSTRUCTION6_TYPES_H
#error Already included
#else
#define INSTRUCTION6_TYPES_H

using Instruction6_Type1 = Instruction_6
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_imm<mm, imm8>,
    Operands_reg_imm<xmm, imm8>
>;

using Instruction6_Type2 = Instruction_6
<
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction6_Type3 = Instruction_6
<
    Operands_reg_imm<r8, imm8>,
    Operands_reg_imm<r16, imm8>,
    Operands_reg_imm<r32, imm8>,
    Operands_reg_reg<r8, r16, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_reg_reg<r32, r16, no_suffix>
>;

using Instruction_OUT = Instruction_6
<
    Operands_imm_reg<imm8, r8>,
    Operands_imm_reg<imm8, r16>,
    Operands_imm_reg<imm8, r32>,
    Operands_reg_reg<r16, r8, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_reg_reg<r16, r32, no_suffix>
>;

using Instruction_AVX_Type8 = Instruction_6
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_mem_reg<m128, xmm, no_suffix>,
    Operands_reg_reg<ymm, ymm, no_suffix>,
    Operands_reg_mem<ymm, m256, no_suffix>,
    Operands_mem_reg<m256, ymm, no_suffix>
>;

#endif
