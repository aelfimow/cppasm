/*! \file Instruction2_Types.h
    \brief Types for instructions with two operands combinations.
*/
#ifdef INSTRUCTION2_TYPES_H
#error Already included
#else
#define INSTRUCTION2_TYPES_H

using Instruction2_Type1 = Instruction_2
<
    Operands_none,
    Operands_imm<imm8>
>;

using Instruction2_Type2 = Instruction_2
<
    Operands_none,
    Operands_imm<imm16>
>;

using Instruction2_Type3 = Instruction_2
<
    Operands_reg<r32>,
    Operands_reg<r64>
>;

using Instruction2_Type4 = Instruction_2
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>
>;

using Instruction2_Type5 = Instruction_2
<
    Operands_none,
    Operands_reg<st>
>;

using Instruction2_Type6 = Instruction_2
<
    Operands_reg<r16>,
    Operands_mem<m16, no_suffix>
>;

using Instruction2_Type7 = Instruction_2
<
    Operands_reg<r8>,
    Operands_mem<m8, no_suffix>
>;

using Instruction2_Type8 = Instruction_2
<
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>
>;

using Instruction2_Type9 = Instruction_2
<
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_mem_reg<m64, xmm, no_suffix>
>;

using Instruction2_Type10 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction2_Type11 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>
>;

using Instruction2_Type12 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction2_Type13 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m32, imm8>
>;

using Instruction2_Type14 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction2_Type15 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m64, imm8>
>;

using Instruction2_Type16 = Instruction_2
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>
>;

using Instruction2_Type17 = Instruction_2
<
    Operands_reg_reg<xmm, mm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction2_Type18 = Instruction_2
<
    Operands_reg_reg<mm, xmm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>
>;

using Instruction2_Type19 = Instruction_2
<
    Operands_reg_reg<mm, xmm, no_suffix>,
    Operands_reg_mem<mm, m128, no_suffix>
>;

using Instruction2_Type20 = Instruction_2
<
    Operands_reg_reg<st, st, no_suffix>,
    Operands_none
>;

using Instruction2_Type21 = Instruction_2
<
    Operands_reg_reg_imm<mm, mm, imm8>,
    Operands_reg_mem_imm<mm, m64, imm8>
>;

using Instruction2_Type22 = Instruction_2
<
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>
>;

using Instruction2_Type23 = Instruction_2
<
    Operands_reg_reg_imm<xmm, r32, imm8>,
    Operands_reg_mem_imm<xmm, m8, imm8>
>;

using Instruction2_Type24 = Instruction_2
<
    Operands_reg_reg_imm<xmm, r32, imm8>,
    Operands_reg_mem_imm<xmm, m32, imm8>
>;

using Instruction2_Type25 = Instruction_2
<
    Operands_reg_reg_imm<xmm, r64, imm8>,
    Operands_reg_mem_imm<xmm, m64, imm8>
>;

using Instruction2_Type26 = Instruction_2
<
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m64, xmm, imm8>
>;

using Instruction2_Type27 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m16, no_suffix>
>;

using Instruction2_Type28 = Instruction_2
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m64>
>;

using Instruction2_Type29 = Instruction_2
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m32>
>;

using Instruction2_Type30 = Instruction_2
<
    Operands_reg_reg_reg_imm<xmm, xmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m128, imm8>
>;

using Instruction2_Type31 = Instruction_2
<
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_mem<ymm, m256, no_suffix>
>;

using Instruction2_Type32 = Instruction_2
<
    Operands_mem_reg<m128, xmm, no_suffix>,
    Operands_mem_reg<m256, ymm, no_suffix>
>;

using Instruction_AVX_Type13 = Instruction_2
<
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_mem<ymm, m32, no_suffix>
>;

using Instruction_AVX_Type16 = Instruction_2
<
    Operands_reg_reg_imm<xmm, ymm, imm8>,
    Operands_mem_reg_imm<m128, ymm, imm8>
>;

using Instruction_AVX_Type17 = Instruction_2
<
    Operands_reg_reg_reg_imm<ymm, ymm, xmm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m128, imm8>
>;

using Instruction_AVX_Type20 = Instruction_2
<
    Operands_reg_reg_reg_imm<ymm, ymm, ymm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m256, imm8>
>;

#endif
