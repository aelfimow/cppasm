/*! \file Instruction4_Types.h
    \brief Types for instructions with four operands combinations.
*/
#ifdef INSTRUCTION4_TYPES_H
#error Already included
#else
#define INSTRUCTION4_TYPES_H

using Instruction4_Type1 = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction4_Type2 = Instruction_4
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_mem<m80fp, suffix_m80fp>,
    Operands_reg<st>
>;

using Instruction4_Type3 = Instruction_4
<
    Operands_reg_mem<ymm, m64, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_mem<zmm, m64, no_suffix>,
    Operands_reg_reg<zmm, xmm, no_suffix>
>;

using Instruction4_Type4 = Instruction_4
<
    Operands_reg_reg_imm<mm, mm, imm8>,
    Operands_reg_mem_imm<mm, m64, imm8>,
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction4_Type5 = Instruction_4
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_mem_reg<m32, xmm, no_suffix>
>;

using Instruction4_Type6 = Instruction_4
<
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_mem_reg<m64, xmm, no_suffix>
>;

using Instruction4_Type7 = Instruction_4
<
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction4_Type8 = Instruction_4
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, suffix_m32>,
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, suffix_m64>
>;

using Instruction4_Type9 = Instruction_4
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_mem<r64, m32, no_suffix>
>;

using Instruction4_Type10 = Instruction_4
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg<st>,
    Operands_none
>;

using Instruction4_Type11 = Instruction_4
<
    Operands_reg_reg_imm<mm, r32, imm8>,
    Operands_reg_mem_imm<mm, m16, imm8>,
    Operands_reg_reg_imm<xmm, r32, imm8>,
    Operands_reg_mem_imm<xmm, m16, imm8>
>;

using Instruction4_Type12 = Instruction_4
<
    Operands_reg_reg<r32, mm, no_suffix>,
    Operands_reg_reg<r64, mm, no_suffix>,
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>
>;

using Instruction4_Type13 = Instruction_4
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_mem<r32, m64, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction4_Type14 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_reg_reg2<xmm, xmm, xmm>,
    Operands_reg_mem_reg2<xmm, m128, xmm>
>;

using Instruction4_Type15 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_mem<ymm, m128, no_suffix>
>;

using Instruction4_Type16 = Instruction_4
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_mem_reg_imm<m64, xmm, imm8>,
    Operands_reg_reg_imm<xmm, ymm, imm8>,
    Operands_mem_reg_imm<m128, ymm, imm8>
>;

using Instruction4_Type17 = Instruction_4
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>
>;

using Instruction4_Type18 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_reg<ymm, ymm, no_suffix>,
    Operands_reg_mem<ymm, m256, no_suffix>
>;

using Instruction4_Type19 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_reg<xmm, ymm, no_suffix>,
    Operands_reg_mem<xmm, m256, no_suffix>
>;

using Instruction4_Type20 = Instruction_4
<
    Operands_reg_reg_reg_imm<xmm, xmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m128, imm8>,
    Operands_reg_reg_reg_imm<ymm, ymm, ymm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m256, imm8>
>;

using Instruction4_Type21 = Instruction_4
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>,
    Operands_reg_reg_imm<ymm, ymm, imm8>,
    Operands_reg_mem_imm<ymm, m256, imm8>
>;

using Instruction4_Type22 = Instruction_4
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_reg<r32, ymm, no_suffix>,
    Operands_reg_reg<r64, ymm, no_suffix>
>;

using Instruction4_Type23 = Instruction_4
<
    Operands_reg_reg_reg_reg<xmm, xmm, xmm, xmm>,
    Operands_reg_reg_mem_reg<xmm, xmm, m128, xmm>,
    Operands_reg_reg_reg_reg<ymm, ymm, ymm, ymm>,
    Operands_reg_reg_mem_reg<ymm, ymm, m128, ymm>
>;

using Instruction4_Type24 = Instruction_4
<
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_mem<ymm, ymm, m256>,
    Operands_mem_reg_reg<m128, xmm, xmm>,
    Operands_mem_reg_reg<m256, ymm, ymm>
>;

using Instruction4_Type25 = Instruction_4
<
    Operands_reg_reg_reg<xmm, xmm, r32>,
    Operands_reg_reg_mem<xmm, xmm, m32>,
    Operands_reg_reg_reg<xmm, xmm, r64>,
    Operands_reg_reg_mem<xmm, xmm, m64>
>;

using Instruction4_Type26 = Instruction_4
<
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>
>;

using Instruction4_Type27 = Instruction_4
<
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction4_Type28 = Instruction_4
<
    Operands_reg_reg_reg_imm<ymm, ymm, xmm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m128, imm8>,
    Operands_reg_reg_reg_imm<zmm, zmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<zmm, zmm, m128, imm8>
>;

#endif
