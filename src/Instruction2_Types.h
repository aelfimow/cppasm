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

using Instruction_BOUND = Instruction_2
<
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>
>;

using Instruction_SSE_MOV2 = Instruction_2
<
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_mem_reg<m64, xmm, no_suffix>
>;

using Instruction_SSE_Arithm1 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE_Arithm2 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>
>;

using Instruction_SSE_Cmp1 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE_Cmp2 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m32, imm8>
>;

using Instruction_SSE_Cmp3 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>
>;

using Instruction_SSE_Shuffle = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE_Conv1 = Instruction_2
<
    Operands_reg_reg<xmm, mm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_SSE_Conv3 = Instruction_2
<
    Operands_reg_reg<mm, xmm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>
>;

using Instruction_FIST = Instruction_2
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>
>;

using Instruction_FPU_Arithm2 = Instruction_2
<
    Operands_reg_reg<st, st, no_suffix>,
    Operands_none
>;

using Instruction_FPU_Arithm3 = Instruction_2
<
    Operands_mem<m32, suffix_m32int>,
    Operands_mem<m16, suffix_m16int>
>;

using Instruction_FICOM = Instruction_2
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>
>;

using Instruction_PSHUFW = Instruction_2
<
    Operands_reg_reg_imm<mm, mm, imm8>,
    Operands_reg_mem_imm<mm, m64, imm8>
>;

using Instruction_SSE2_Arithm1 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE2_Arithm2 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_SSE2_Cmp1 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE2_Cmp2 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m64, imm8>
>;

using Instruction_SSE2_Cmp3 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_SHUFPD = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_UNPCKxPD = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_CVTPD2PI = Instruction_2
<
    Operands_reg_reg<mm, xmm, no_suffix>,
    Operands_reg_mem<mm, m128, no_suffix>
>;

using Instruction_CVTPI2PD = Instruction_2
<
    Operands_reg_reg<xmm, mm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_CVTPD2DQ = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_CVTDQ2PD = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_CVTPS2PD = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_CVTPD2PS = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_CVTSS2SD = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>
>;

using Instruction_CVTSD2SS = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_MOVNTI = Instruction_2
<
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>
>;

using Instruction_CVTDQ2PS = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_CVTPS2DQ = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE2_Int_Shuffle = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE2_Int_Unpack = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE3_Arithm1 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE3_Arithm2 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_SSE4_1_Type1 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE4_1_Type2 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE4_1_Type4 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m32, imm8>
>;

using Instruction_SSE4_1_Type5 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m64, imm8>
>;

using Instruction_SSE4_1_Type7 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m32, imm8>
>;

using Instruction_SSE4_1_Type8 = Instruction_2
<
    Operands_reg_reg_imm<xmm, r32, imm8>,
    Operands_reg_mem_imm<xmm, m8, imm8>
>;

using Instruction_SSE4_1_Type9 = Instruction_2
<
    Operands_reg_reg_imm<xmm, r32, imm8>,
    Operands_reg_mem_imm<xmm, m32, imm8>
>;

using Instruction_SSE4_1_Type10 = Instruction_2
<
    Operands_reg_reg_imm<xmm, r64, imm8>,
    Operands_reg_mem_imm<xmm, m64, imm8>
>;

using Instruction_SSE4_1_Type13 = Instruction_2
<
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m64, xmm, imm8>
>;

using Instruction_SSE4_1_Type14 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_SSE4_1_Type15 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>
>;

using Instruction_SSE4_1_Type16 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m16, no_suffix>
>;

using Instruction_SSE4_2_Type1 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE4_2_Type2 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_AES_Type1 = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_AES_Type2 = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_PCLMULQDQ = Instruction_2
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_FMA_Type2 = Instruction_2
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m64>
>;

using Instruction_FMA_Type3 = Instruction_2
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m32>
>;

using Instruction_AVX_Type6 = Instruction_2
<
    Operands_reg_reg_reg_imm<xmm, xmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m128, imm8>
>;

using Instruction_AVX_Type10 = Instruction_2
<
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_mem<ymm, m256, no_suffix>
>;

using Instruction_AVX_Type11 = Instruction_2
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
