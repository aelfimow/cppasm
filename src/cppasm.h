#ifdef CPPASM_H
#error Already included
#else
#define CPPASM_H

#include <string>

#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "mm.h"
#include "imm.h"
#include "Sreg.h"
#include "m.h"
#include "cr.h"
#include "dr.h"
#include "st.h"
#include "keyword.h"
#include "label.h"
#include "section.h"

#include "Operands_x.h"
#include "Instruction_x.h"

extern const std::string no_suffix;
extern const std::string suffix_bw;
extern const std::string suffix_bl;
extern const std::string suffix_bq;
extern const std::string suffix_wl;
extern const std::string suffix_wq;
extern const std::string suffix_lq;
extern const std::string suffix_m8;
extern const std::string suffix_m16;
extern const std::string suffix_m32;
extern const std::string suffix_m64;
extern const std::string suffix_m32fp;
extern const std::string suffix_m64fp;
extern const std::string suffix_m80fp;
extern const std::string suffix_m16int;
extern const std::string suffix_m32int;
extern const std::string suffix_m64int;

using r8 = reg_template<8>;
using r16 = reg_template<16>;
using r32 = reg_template<32>;
using r64 = reg_template<64>;
using xmm = reg_template<128>;
using ymm = reg_template<256>;
using zmm = reg_template<512>;

using imm8 = imm<uint8_t, 2>;
using imm16 = imm<uint16_t, 4>;
using imm32 = imm<uint32_t, 8>;
using imm64 = imm<uint64_t, 16>;

using m8 = m_template<8>;
using m16 = m_template<16>;
using m32 = m_template<32>;
using m64 = m_template<64>;
using m128 = m_template<128>;
using m256 = m_template<256>;
using m32fp = m_template<32>;
using m64fp = m_template<64>;
using m80fp = m_template<80>;
using m80bcd = m_template<80>;

using Instruction1_Type1 = Instruction_1
<
    Operands_none
>;

using Instruction1_Type2 = Instruction_1
<
    Operands_mem<m, no_suffix>
>;

using Instruction1_Type3 = Instruction_1
<
    Operands_reg_reg<xmm, xmm, no_suffix>
>;

using Instruction1_Type4 = Instruction_1
<
    Operands_string
>;

using Instruction1_Type5 = Instruction_1
<
    Operands_reg_reg<st, st, no_suffix>
>;

using Instruction1_Type6 = Instruction_1
<
    Operands_mem<m16, no_suffix>
>;

using Instruction1_Type7 = Instruction_1
<
    Operands_mem<m64, no_suffix>
>;

using Instruction1_Type8 = Instruction_1
<
    Operands_mem<m128, no_suffix>
>;

using Instruction1_Type9 = Instruction_1
<
    Operands_imm_imm<imm16, imm8>
>;

using Instruction1_Type10 = Instruction_1
<
    Operands_imm<imm8>
>;

using Instruction1_Type11 = Instruction_1
<
    Operands_prefix
>;

using Instruction1_Type12 = Instruction_1
<
    Operands_mem<m80bcd, no_suffix>
>;

using Instruction1_Type13 = Instruction_1
<
    Operands_reg<st>
>;

using Instruction1_Type14 = Instruction_1
<
    Operands_mem<m32, no_suffix>
>;

using Instruction1_Type15 = Instruction_1
<
    Operands_reg_reg<mm, mm, no_suffix>
>;

using Instruction1_Type16 = Instruction_1
<
    Operands_mem_reg<m64, mm, no_suffix>
>;

using Instruction1_Type17 = Instruction_1
<
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction1_Type18 = Instruction_1
<
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction1_Type19 = Instruction_1
<
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction1_Type20 = Instruction_1
<
    Operands_reg_reg<xmm, mm, no_suffix>
>;

using Instruction1_Type21 = Instruction_1
<
    Operands_reg_reg<mm, xmm, no_suffix>
>;

using Instruction1_Type22 = Instruction_1
<
    Operands_reg_imm<xmm, imm8>
>;

using Instruction1_Type23 = Instruction_1
<
    Operands_reg_mem<xmm, m, no_suffix>
>;

using Instruction1_Type24 = Instruction_1
<
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction1_Type25 = Instruction_1
<
    Operands_reg_mem<ymm, m64, no_suffix>
>;

using Instruction1_Type26 = Instruction_1
<
    Operands_reg_mem<ymm, m128, no_suffix>
>;

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

using Instruction_rm16 = Instruction_2
<
    Operands_reg<r16>,
    Operands_mem<m16, no_suffix>
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

using Instruction_SETcc = Instruction_2
<
    Operands_reg<r8>,
    Operands_mem<m8, no_suffix>
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

using Instruction_FSTSW = Instruction_2
<
    Operands_mem<m16, no_suffix>,
    Operands_reg<r16>
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

using Instruction_MOVD = Instruction_8
<
    Operands_reg_reg<mm, r32, no_suffix>,
    Operands_reg_mem<mm, m32, no_suffix>,
    Operands_reg_reg<r32, mm, no_suffix>,
    Operands_reg_mem<m32, mm, no_suffix>,
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_mem<m32, xmm, no_suffix>
>;

using Instruction_VMOVD = Instruction_4
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_mem<m32, xmm, no_suffix>
>;

using Instruction_MOVQ = Instruction_8
<
    Operands_reg_reg<mm, r64, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<r64, mm, no_suffix>,
    Operands_reg_mem<m64, mm, no_suffix>,
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_mem<m64, xmm, no_suffix>
>;

using Instruction_VMOVQ = Instruction_4
<
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_mem<m64, xmm, no_suffix>
>;

using Instruction_MMX_Op = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_MMX_Shift = Instruction_6
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_imm<mm, imm8>,
    Operands_reg_imm<xmm, imm8>
>;

using Instruction_LoadFarPointer = Instruction_3
<
    Operands_reg_mem<r16, m, no_suffix>,
    Operands_reg_mem<r32, m, no_suffix>,
    Operands_reg_mem<r64, m, no_suffix>
>;

using Instruction_LEA = Instruction_3
<
    Operands_reg_mem<r16, m, no_suffix>,
    Operands_reg_mem<r32, m, no_suffix>,
    Operands_reg_mem<r64, m, no_suffix>
>;

using Instruction_RDRAND = Instruction_3
<
    Operands_reg<r16>,
    Operands_reg<r32>,
    Operands_reg<r64>
>;

using Instruction_Arithm1 = Instruction_26
<
    Operands_reg_imm<r8, imm8>,
    Operands_mem_imm<m8, imm8, suffix_m8>,
    Operands_reg_imm<r16, imm16>,
    Operands_mem_imm<m16, imm16, suffix_m16>,
    Operands_reg_imm<r32, imm32>,
    Operands_mem_imm<m32, imm32, suffix_m32>,
    Operands_reg_imm<r64, imm32>,
    Operands_mem_imm<m64, imm32, suffix_m64>,
    Operands_reg_imm<r16, imm8>,
    Operands_mem_imm<m16, imm8, suffix_m16>,
    Operands_reg_imm<r32, imm8>,
    Operands_mem_imm<m32, imm8, suffix_m32>,
    Operands_reg_imm<r64, imm8>,
    Operands_mem_imm<m64, imm8, suffix_m64>,
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
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction_Arithm2 = Instruction_8
<
    Operands_reg<r8>,
    Operands_reg<r16>,
    Operands_reg<r32>,
    Operands_reg<r64>,
    Operands_mem<m8, suffix_m8>,
    Operands_mem<m16, suffix_m16>,
    Operands_mem<m32, suffix_m32>,
    Operands_mem<m64, suffix_m64>
>;

using Instruction_CMOVx = Instruction_6
<
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction_PUSH = Instruction_10
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

using Instruction_ADX = Instruction_4
<
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction_CMPXCHG = Instruction_8
<
    Operands_reg_reg<r8, r8, no_suffix>,
    Operands_mem_reg<m8, r8, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_mem_reg<m16, r16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>
>;

using Instruction_BitScan = Instruction_6
<
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction_BitTest = Instruction_12
<
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_mem_reg<m16, r16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>,
    Operands_reg_imm<r16, imm8>,
    Operands_reg_imm<r32, imm8>,
    Operands_reg_imm<r64, imm8>,
    Operands_mem_imm<m16, imm8, suffix_m16>,
    Operands_mem_imm<m32, imm8, suffix_m32>,
    Operands_mem_imm<m64, imm8, suffix_m64>
>;

using Instruction_Branch = Instruction_7
<
    Operands_string,
    Operands_reg<r16>,
    Operands_mem<m16, no_suffix>,
    Operands_reg<r32>,
    Operands_mem<m32, no_suffix>,
    Operands_reg<r64>,
    Operands_mem<m64, no_suffix>
>;

using Instruction_SSE_MOV1 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction_SSE_MOV5 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_mem_reg<m32, xmm, no_suffix>
>;

using Instruction_SSE_Conv2 = Instruction_4
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, suffix_m32>,
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, suffix_m64>
>;

using Instruction_SSE_Conv4 = Instruction_4
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_mem<r64, m32, no_suffix>
>;

using Instruction_XCHG = Instruction_12
<
    Operands_reg_reg<r8, r8, no_suffix>,
    Operands_mem_reg<m8, r8, no_suffix>,
    Operands_reg_mem<r8, m8, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_mem_reg<m16, r16, no_suffix>,
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction_TEST = Instruction_16
<
    Operands_reg_imm<r8, imm8>,
    Operands_mem_imm<m8, imm8, suffix_m8>,
    Operands_reg_imm<r16, imm16>,
    Operands_mem_imm<m16, imm16, suffix_m16>,
    Operands_reg_imm<r32, imm32>,
    Operands_mem_imm<m32, imm32, suffix_m32>,
    Operands_reg_imm<r64, imm32>,
    Operands_mem_imm<m64, imm32, suffix_m64>,
    Operands_reg_reg<r8, r8, no_suffix>,
    Operands_mem_reg<m8, r8, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_mem_reg<m16, r16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>
>;

using Instruction_XADD = Instruction_8
<
    Operands_reg_reg<r8, r8, no_suffix>,
    Operands_mem_reg<m8, r8, no_suffix>,
    Operands_reg_reg<r16, r16, no_suffix>,
    Operands_mem_reg<m16, r16, no_suffix>,
    Operands_reg_reg<r32, r32, no_suffix>,
    Operands_mem_reg<m32, r32, no_suffix>,
    Operands_reg_reg<r64, r64, no_suffix>,
    Operands_mem_reg<m64, r64, no_suffix>
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

using Instruction_IN = Instruction_6
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

using Instruction_MOV = Instruction_36
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

using Instruction_MovWithExt = Instruction_12
<
    Operands_reg_reg<r16, r8, suffix_bw>,
    Operands_reg_mem<r16, m8, suffix_bw>,
    Operands_reg_reg<r32, r8, suffix_bl>,
    Operands_reg_mem<r32, m8, suffix_bl>,
    Operands_reg_reg<r64, r8, suffix_bq>,
    Operands_reg_mem<r64, m8, suffix_bq>,
    Operands_reg_reg<r32, r16, suffix_wl>,
    Operands_reg_mem<r32, m16, suffix_wl>,
    Operands_reg_reg<r64, r16, suffix_wq>,
    Operands_reg_mem<r64, m16, suffix_wq>,
    Operands_reg_reg<r64, r32, suffix_lq>,
    Operands_reg_mem<r64, m32, suffix_lq>
>;

using Instruction_ShiftDouble = Instruction_12
<
    Operands_reg_reg_imm<r16, r16, imm8>,
    Operands_mem_reg_imm<m16, r16, imm8>,
    Operands_reg_reg_reg<r16, r16, r8>,
    Operands_mem_reg_reg<m16, r16, r8>,
    Operands_reg_reg_imm<r32, r32, imm8>,
    Operands_mem_reg_imm<m32, r32, imm8>,
    Operands_reg_reg_imm<r64, r64, imm8>,
    Operands_mem_reg_imm<m64, r64, imm8>,
    Operands_reg_reg_reg<r32, r32, r8>,
    Operands_mem_reg_reg<m32, r32, r8>,
    Operands_reg_reg_reg<r64, r64, r8>,
    Operands_mem_reg_reg<m64, r64, r8>
>;

using Instruction_Shift = Instruction_16
<
    Operands_reg_imm<r8, imm8>,
    Operands_mem_imm<m8, imm8, suffix_m8>,
    Operands_reg_reg<r8, r8, no_suffix>,
    Operands_mem_reg<m8, r8, suffix_m8>,
    Operands_reg_imm<r16, imm8>,
    Operands_mem_imm<m16, imm8, suffix_m16>,
    Operands_reg_reg<r16, r8, no_suffix>,
    Operands_mem_reg<m16, r8, suffix_m16>,
    Operands_reg_imm<r32, imm8>,
    Operands_mem_imm<m32, imm8, suffix_m32>,
    Operands_reg_reg<r32, r8, no_suffix>,
    Operands_mem_reg<m32, r8, suffix_m32>,
    Operands_reg_imm<r64, imm8>,
    Operands_mem_imm<m64, imm8, suffix_m64>,
    Operands_reg_reg<r64, r8, no_suffix>,
    Operands_mem_reg<m64, r8, suffix_m64>
>;

using Instruction_NOP = Instruction_5
<
    Operands_none,
    Operands_reg<r16>,
    Operands_mem<m16, suffix_m16>,
    Operands_reg<r32>,
    Operands_mem<m32, suffix_m32>
>;

using Instruction_FLD = Instruction_4
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_mem<m80fp, suffix_m80fp>,
    Operands_reg<st>
>;

using Instruction_FILD = Instruction_3
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>,
    Operands_mem<m64, suffix_m64int>
>;

using Instruction_FISTP = Instruction_3
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>,
    Operands_mem<m64, suffix_m64int>
>;

using Instruction_FST = Instruction_3
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg<st>
>;

using Instruction_FSTP = Instruction_4
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_mem<m80fp, suffix_m80fp>,
    Operands_reg<st>
>;

using Instruction_FPU_Arithm1 = Instruction_3
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg_reg<st, st, no_suffix>
>;

using Instruction_FCOM = Instruction_4
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg<st>,
    Operands_none
>;

using Instruction_PAVGx = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_PEXTRW = Instruction_5
<
    Operands_reg_reg_imm<r32, mm, imm8>,
    Operands_reg_reg_imm<r64, mm, imm8>,
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m16, xmm, imm8>
>;

using Instruction_PINSRW = Instruction_4
<
    Operands_reg_reg_imm<mm, r32, imm8>,
    Operands_reg_mem_imm<mm, m16, imm8>,
    Operands_reg_reg_imm<xmm, r32, imm8>,
    Operands_reg_mem_imm<xmm, m16, imm8>
>;

using Instruction_PMxxUB = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_PMxxSW = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_PMOVMSKB = Instruction_4
<
    Operands_reg_reg<r32, mm, no_suffix>,
    Operands_reg_reg<r64, mm, no_suffix>,
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>
>;

using Instruction_PMULHUW = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, mm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_PSADBW = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, mm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_MOVxPD1 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction_MOVSD = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_mem_reg<m64, xmm, no_suffix>
>;

using Instruction_CVTSD2SI = Instruction_4
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_mem<r32, m64, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_mem<r64, m64, no_suffix>
>;

using Instruction_CVTSI2SD = Instruction_4
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>
>;

using Instruction_MOVDQx = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction_PMULUDQ = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSE2_Int_Arithm1 = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_FISTTP = Instruction_3
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>,
    Operands_mem<m64, suffix_m64int>
>;

using Instruction_SSSE3_Arithm1 = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_SSSE3_Arithm2 = Instruction_4
<
    Operands_reg_reg_imm<mm, mm, imm8>,
    Operands_reg_mem_imm<mm, m64, imm8>,
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>
>;

using Instruction_SSE4_1_Type3 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_mem_reg<xmm, m128, xmm>
>;

using Instruction_SSE4_1_Type6 = Instruction_3
<
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m32, xmm, imm8>
>;

using Instruction_SSE4_1_Type11 = Instruction_3
<
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m8, xmm, imm8>
>;

using Instruction_SSE4_1_Type12 = Instruction_3
<
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m32, xmm, imm8>
>;

using Instruction_F16C_Type1 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_mem<ymm, m128, no_suffix>
>;

using Instruction_F16C_Type2 = Instruction_4
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_mem_reg_imm<m64, xmm, imm8>,
    Operands_reg_reg_imm<xmm, ymm, imm8>,
    Operands_mem_reg_imm<m128, ymm, imm8>
>;

using Instruction_FMA_Type1 = Instruction_4
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>
>;

using Instruction_AVX_Type1 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_reg<ymm, ymm, no_suffix>,
    Operands_reg_mem<ymm, m256, no_suffix>
>;

using Instruction_AVX_Type2 = Instruction_4
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>
>;

using Instruction_AVX_Type3 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_mem<ymm, m128, no_suffix>
>;

using Instruction_AVX_Type4 = Instruction_4
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_reg<xmm, ymm, no_suffix>,
    Operands_reg_mem<xmm, m256, no_suffix>
>;

using Instruction_AVX_Type5 = Instruction_4
<
    Operands_reg_reg_reg_imm<xmm, xmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m128, imm8>,
    Operands_reg_reg_reg_imm<ymm, ymm, ymm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m256, imm8>
>;

using Instruction_AVX_Type7 = Instruction_4
<
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>,
    Operands_reg_reg_imm<ymm, ymm, imm8>,
    Operands_reg_mem_imm<ymm, m256, imm8>
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

using Instruction_AVX_Type9 = Instruction_4
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>,
    Operands_reg_reg<r32, ymm, no_suffix>,
    Operands_reg_reg<r64, ymm, no_suffix>
>;

using Instruction_AVX_Type12 = Instruction_4
<
    Operands_reg_reg_reg_reg<xmm, xmm, xmm, xmm>,
    Operands_reg_reg_mem_reg<xmm, xmm, m128, xmm>,
    Operands_reg_reg_reg_reg<ymm, ymm, ymm, ymm>,
    Operands_reg_reg_mem_reg<ymm, ymm, m128, ymm>
>;

using Instruction_AVX_Type18 = Instruction_4
<
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_mem<ymm, ymm, m256>,
    Operands_mem_reg_reg<m128, xmm, xmm>,
    Operands_mem_reg_reg<m256, ymm, ymm>
>;

using Instruction_AVX_Type19 = Instruction_8
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>,
    Operands_reg_reg_imm<xmm, xmm, imm8>,
    Operands_reg_mem_imm<xmm, m128, imm8>,
    Operands_reg_reg_imm<ymm, ymm, imm8>,
    Operands_reg_mem_imm<ymm, m256, imm8>
>;

using Instruction_AVX_Type21 = Instruction_4
<
    Operands_reg_reg_reg<xmm, xmm, r32>,
    Operands_reg_reg_mem<xmm, xmm, m32>,
    Operands_reg_reg_reg<xmm, xmm, r64>,
    Operands_reg_reg_mem<xmm, xmm, m64>
>;

extern asmstream asmout;

extern r8 AL;
extern r8 AH;
extern r8 BL;
extern r8 BH;
extern r8 CL;
extern r8 CH;
extern r8 DL;
extern r8 DH;
extern r8 SIL;
extern r8 DIL;
extern r8 SPL;
extern r8 R8L;
extern r8 R9L;
extern r8 R10L;
extern r8 R11L;
extern r8 R12L;
extern r8 R13L;
extern r8 R14L;
extern r8 R15L;

extern r16 AX;
extern r16 BX;
extern r16 CX;
extern r16 DX;
extern r16 BP;
extern r16 SI;
extern r16 DI;
extern r16 SP;
extern r16 R8W;
extern r16 R9W;
extern r16 R10W;
extern r16 R11W;
extern r16 R12W;
extern r16 R13W;
extern r16 R14W;
extern r16 R15W;

extern r32 EAX;
extern r32 EBX;
extern r32 ECX;
extern r32 EDX;
extern r32 EBP;
extern r32 ESI;
extern r32 EDI;
extern r32 ESP;
extern r32 R8D;
extern r32 R9D;
extern r32 R10D;
extern r32 R11D;
extern r32 R12D;
extern r32 R13D;
extern r32 R14D;
extern r32 R15D;

extern r64 RAX;
extern r64 RBX;
extern r64 RCX;
extern r64 RDX;
extern r64 RBP;
extern r64 RSI;
extern r64 RDI;
extern r64 RSP;
extern r64 R8;
extern r64 R9;
extern r64 R10;
extern r64 R11;
extern r64 R12;
extern r64 R13;
extern r64 R14;
extern r64 R15;

extern xmm XMM0;
extern xmm XMM1;
extern xmm XMM2;
extern xmm XMM3;
extern xmm XMM4;
extern xmm XMM5;
extern xmm XMM6;
extern xmm XMM7;
extern xmm XMM8;
extern xmm XMM9;
extern xmm XMM10;
extern xmm XMM11;
extern xmm XMM12;
extern xmm XMM13;
extern xmm XMM14;
extern xmm XMM15;

extern ymm YMM0;
extern ymm YMM1;
extern ymm YMM2;
extern ymm YMM3;
extern ymm YMM4;
extern ymm YMM5;
extern ymm YMM6;
extern ymm YMM7;
extern ymm YMM8;
extern ymm YMM9;
extern ymm YMM10;
extern ymm YMM11;
extern ymm YMM12;
extern ymm YMM13;
extern ymm YMM14;
extern ymm YMM15;

extern zmm ZMM0;
extern zmm ZMM1;
extern zmm ZMM2;
extern zmm ZMM3;
extern zmm ZMM4;
extern zmm ZMM5;
extern zmm ZMM6;
extern zmm ZMM7;
extern zmm ZMM8;
extern zmm ZMM9;
extern zmm ZMM10;
extern zmm ZMM11;
extern zmm ZMM12;
extern zmm ZMM13;
extern zmm ZMM14;
extern zmm ZMM15;
extern zmm ZMM16;
extern zmm ZMM17;
extern zmm ZMM18;
extern zmm ZMM19;
extern zmm ZMM20;
extern zmm ZMM21;
extern zmm ZMM22;
extern zmm ZMM23;
extern zmm ZMM24;
extern zmm ZMM25;
extern zmm ZMM26;
extern zmm ZMM27;
extern zmm ZMM28;
extern zmm ZMM29;
extern zmm ZMM30;
extern zmm ZMM31;

extern mm mm0;
extern mm mm1;
extern mm mm2;
extern mm mm3;
extern mm mm4;
extern mm mm5;
extern mm mm6;
extern mm mm7;

extern Sreg CS;
extern Sreg DS;
extern Sreg SS;
extern Sreg ES;
extern Sreg FS;
extern Sreg GS;

extern cr CR0;
extern cr CR1;
extern cr CR2;
extern cr CR3;
extern cr CR4;
extern cr CR5;
extern cr CR6;
extern cr CR7;
extern cr CR8;

extern dr DR0;
extern dr DR1;
extern dr DR2;
extern dr DR3;
extern dr DR4;
extern dr DR5;
extern dr DR6;
extern dr DR7;

extern st ST;

// Data transfer instructions
extern Instruction_MOV MOV;
extern Instruction_CMOVx CMOVA;
extern Instruction_CMOVx CMOVAE;
extern Instruction_CMOVx CMOVB;
extern Instruction_CMOVx CMOVBE;
extern Instruction_CMOVx CMOVC;
extern Instruction_CMOVx CMOVE;
extern Instruction_CMOVx CMOVG;
extern Instruction_CMOVx CMOVGE;
extern Instruction_CMOVx CMOVL;
extern Instruction_CMOVx CMOVLE;
extern Instruction_CMOVx CMOVNA;
extern Instruction_CMOVx CMOVNAE;
extern Instruction_CMOVx CMOVNBE;
extern Instruction_CMOVx CMOVNC;
extern Instruction_CMOVx CMOVNE;
extern Instruction_CMOVx CMOVNG;
extern Instruction_CMOVx CMOVNGE;
extern Instruction_CMOVx CMOVNL;
extern Instruction_CMOVx CMOVNLE;
extern Instruction_CMOVx CMOVNO;
extern Instruction_CMOVx CMOVNP;
extern Instruction_CMOVx CMOVNS;
extern Instruction_CMOVx CMOVNZ;
extern Instruction_CMOVx CMOVO;
extern Instruction_CMOVx CMOVP;
extern Instruction_CMOVx CMOVPE;
extern Instruction_CMOVx CMOVPO;
extern Instruction_CMOVx CMOVS;
extern Instruction_CMOVx CMOVZ;
extern Instruction_PUSH PUSH;
extern Instruction1_Type1 PUSHA;
extern Instruction1_Type1 PUSHAD;
extern Instruction_POP POP;
extern Instruction1_Type1 POPA;
extern Instruction1_Type1 POPAD;
extern Instruction1_Type1 CWD;
extern Instruction1_Type1 CDQ;
extern Instruction1_Type1 CQO;
extern Instruction_MovWithExt MOVSX;
extern Instruction_MovWithExt MOVZX;
extern Instruction_XCHG XCHG;
extern Instruction2_Type3 BSWAP;
extern Instruction_XADD XADD;
extern Instruction_CMPXCHG CMPXCHG;
extern Instruction1_Type7 CMPXCHG8B;
extern Instruction1_Type8 CMPXCHG16B;

// Binary arithmetic instructions
extern Instruction_Arithm1 ADD;
extern Instruction_Arithm1 ADC;
extern Instruction_Arithm1 SUB;
extern Instruction_Arithm1 SBB;
extern Instruction_Arithm1 CMP;
extern Instruction_ADX ADCX;
extern Instruction_ADX ADOX;
extern Instruction_Arithm2 MUL;
extern Instruction_Arithm2 IMUL;
extern Instruction_Arithm2 DIV;
extern Instruction_Arithm2 IDIV;
extern Instruction_Arithm2 NEG;
extern Instruction_Arithm2 INC;
extern Instruction_Arithm2 DEC;

// Decimal arithmetic instructions
extern Instruction1_Type1 AAA;
extern Instruction2_Type1 AAD;
extern Instruction2_Type1 AAM;
extern Instruction1_Type1 AAS;
extern Instruction1_Type1 DAA;
extern Instruction1_Type1 DAS;

// Logical instructions
extern Instruction_Arithm1 AND;
extern Instruction_Arithm1 OR;
extern Instruction_Arithm1 XOR;
extern Instruction_Arithm2 NOT;

// Shift and rotate instructions
extern Instruction_Shift SAL;
extern Instruction_Shift SAR;
extern Instruction_Shift SHL;
extern Instruction_Shift SHR;
extern Instruction_Shift RCL;
extern Instruction_Shift RCR;
extern Instruction_Shift ROL;
extern Instruction_Shift ROR;
extern Instruction_ShiftDouble SHLD;
extern Instruction_ShiftDouble SHRD;

// Bit and byte instructions
extern Instruction_BitTest BT;
extern Instruction_BitTest BTC;
extern Instruction_BitTest BTR;
extern Instruction_BitTest BTS;
extern Instruction_BitScan BSF;
extern Instruction_BitScan BSR;
extern Instruction_SETcc SETA;
extern Instruction_SETcc SETAE;
extern Instruction_SETcc SETB;
extern Instruction_SETcc SETBE;
extern Instruction_SETcc SETC;
extern Instruction_SETcc SETE;
extern Instruction_SETcc SETG;
extern Instruction_SETcc SETGE;
extern Instruction_SETcc SETL;
extern Instruction_SETcc SETLE;
extern Instruction_SETcc SETNA;
extern Instruction_SETcc SETNAE;
extern Instruction_SETcc SETNB;
extern Instruction_SETcc SETNBE;
extern Instruction_SETcc SETNC;
extern Instruction_SETcc SETNE;
extern Instruction_SETcc SETNG;
extern Instruction_SETcc SETNGE;
extern Instruction_SETcc SETNL;
extern Instruction_SETcc SETNLE;
extern Instruction_SETcc SETNO;
extern Instruction_SETcc SETNP;
extern Instruction_SETcc SETNS;
extern Instruction_SETcc SETNZ;
extern Instruction_SETcc SETO;
extern Instruction_SETcc SETP;
extern Instruction_SETcc SETPE;
extern Instruction_SETcc SETPO;
extern Instruction_SETcc SETS;
extern Instruction_SETcc SETZ;
extern Instruction_TEST TEST;

// Control transfer instructions
extern Instruction_Branch JMP;
extern Instruction_Branch JMP_FAR;
extern Instruction1_Type4 JA;
extern Instruction1_Type4 JAE;
extern Instruction1_Type4 JB;
extern Instruction1_Type4 JBE;
extern Instruction1_Type4 JC;
extern Instruction1_Type4 JCXZ;
extern Instruction1_Type4 JECXZ;
extern Instruction1_Type4 JRCXZ;
extern Instruction1_Type4 JE;
extern Instruction1_Type4 JG;
extern Instruction1_Type4 JGE;
extern Instruction1_Type4 JL;
extern Instruction1_Type4 JLE;
extern Instruction1_Type4 JNA;
extern Instruction1_Type4 JNAE;
extern Instruction1_Type4 JNB;
extern Instruction1_Type4 JNBE;
extern Instruction1_Type4 JNC;
extern Instruction1_Type4 JNE;
extern Instruction1_Type4 JNG;
extern Instruction1_Type4 JNGE;
extern Instruction1_Type4 JNL;
extern Instruction1_Type4 JNLE;
extern Instruction1_Type4 JNO;
extern Instruction1_Type4 JNP;
extern Instruction1_Type4 JNS;
extern Instruction1_Type4 JNZ;
extern Instruction1_Type4 JO;
extern Instruction1_Type4 JP;
extern Instruction1_Type4 JPE;
extern Instruction1_Type4 JPO;
extern Instruction1_Type4 JS;
extern Instruction1_Type4 JZ;
extern Instruction_Branch CALL;
extern Instruction_Branch CALL_FAR;
extern Instruction2_Type2 RET;
extern Instruction2_Type2 RET_FAR;
extern Instruction1_Type9 ENTER;
extern Instruction1_Type1 LEAVE;
extern Instruction1_Type10 INT;
extern Instruction1_Type1 INTO;
extern Instruction1_Type1 IRET;
extern Instruction1_Type1 IRETD;
extern Instruction1_Type1 IRETQ;
extern Instruction1_Type4 LOOP;
extern Instruction1_Type4 LOOPE;
extern Instruction1_Type4 LOOPNE;
extern Instruction1_Type4 LOOPZ;
extern Instruction1_Type4 LOOPNZ;
extern Instruction_BOUND BOUND;

// String instructions
extern Instruction1_Type1 MOVSB;
extern Instruction1_Type1 MOVSW;
extern Instruction1_Type1 MOVSD;
extern Instruction1_Type1 MOVSQ;
extern Instruction1_Type1 CMPSB;
extern Instruction1_Type1 CMPSW;
extern Instruction1_Type1 CMPSD;
extern Instruction1_Type1 CMPSQ;
extern Instruction1_Type1 SCASB;
extern Instruction1_Type1 SCASW;
extern Instruction1_Type1 SCASD;
extern Instruction1_Type1 SCASQ;
extern Instruction1_Type1 LODSB;
extern Instruction1_Type1 LODSW;
extern Instruction1_Type1 LODSD;
extern Instruction1_Type1 LODSQ;
extern Instruction1_Type1 STOSB;
extern Instruction1_Type1 STOSW;
extern Instruction1_Type1 STOSD;
extern Instruction1_Type1 STOSQ;
extern Instruction1_Type11 REP;
extern Instruction1_Type11 REPE;
extern Instruction1_Type11 REPZ;
extern Instruction1_Type11 REPNE;
extern Instruction1_Type11 REPNZ;

// I/O instructions
extern Instruction_IN IN;
extern Instruction1_Type1 INSB;
extern Instruction1_Type1 INSW;
extern Instruction1_Type1 INSD;
extern Instruction_OUT OUT;
extern Instruction1_Type1 OUTSB;
extern Instruction1_Type1 OUTSW;
extern Instruction1_Type1 OUTSD;

// Flag control (EFLAG) instructions
extern Instruction1_Type1 CLC;
extern Instruction1_Type1 CLD;
extern Instruction1_Type1 CLI;
extern Instruction1_Type1 CMC;
extern Instruction1_Type1 LAHF;
extern Instruction1_Type1 SAHF;
extern Instruction1_Type1 PUSHF;
extern Instruction1_Type1 POPF;
extern Instruction1_Type1 POPFD;
extern Instruction1_Type1 POPFQ;
extern Instruction1_Type1 STC;
extern Instruction1_Type1 STI;
extern Instruction1_Type1 STD;

// Segment register instructions
extern Instruction_LoadFarPointer LDS;
extern Instruction_LoadFarPointer LES;
extern Instruction_LoadFarPointer LFS;
extern Instruction_LoadFarPointer LGS;
extern Instruction_LoadFarPointer LSS;

// Miscelleneous instructions
extern Instruction_LEA LEA;
extern Instruction_NOP NOP;
extern Instruction1_Type1 UD;
extern Instruction1_Type1 UD1;
extern Instruction1_Type1 UD2;
extern Instruction1_Type1 CPUID;
extern Instruction1_Type1 XLAT;
extern Instruction1_Type2 CLFLUSH;
extern Instruction1_Type2 CLFLUSHOPT;

// User mode extended state save/restore instructions
extern Instruction1_Type2 XSAVE;
extern Instruction1_Type2 XSAVEC;
extern Instruction1_Type2 XSAVEOPT;
extern Instruction1_Type2 XRSTOR;
extern Instruction1_Type1 XGETBV;

// Random number generator instructions
extern Instruction_RDRAND RDRAND;
extern Instruction_RDRAND RDSEED;

// x87 FPU data transfer instructions
extern Instruction_FLD FLD;
extern Instruction_FILD FILD;
extern Instruction_FIST FIST;
extern Instruction_FISTP FISTP;
extern Instruction_FST FST;
extern Instruction_FSTP FSTP;
extern Instruction1_Type12 FBLD;
extern Instruction1_Type12 FBSTP;
extern Instruction2_Type5 FXCH;
extern Instruction1_Type5 FCMOVB;
extern Instruction1_Type5 FCMOVE;
extern Instruction1_Type5 FCMOVBE;
extern Instruction1_Type5 FCMOVU;
extern Instruction1_Type5 FCMOVNB;
extern Instruction1_Type5 FCMOVNE;
extern Instruction1_Type5 FCMOVNBE;
extern Instruction1_Type5 FCMOVNU;

// x87 FPU basic arithmetic instructions
extern Instruction_FPU_Arithm1 FADD;
extern Instruction_FPU_Arithm2 FADDP;
extern Instruction_FPU_Arithm3 FIADD;
extern Instruction_FPU_Arithm1 FSUB;
extern Instruction_FPU_Arithm2 FSUBP;
extern Instruction_FPU_Arithm3 FISUB;
extern Instruction_FPU_Arithm1 FSUBR;
extern Instruction_FPU_Arithm2 FSUBRP;
extern Instruction_FPU_Arithm3 FISUBR;
extern Instruction_FPU_Arithm1 FMUL;
extern Instruction_FPU_Arithm2 FMULP;
extern Instruction_FPU_Arithm3 FIMUL;
extern Instruction_FPU_Arithm1 FDIV;
extern Instruction_FPU_Arithm2 FDIVP;
extern Instruction_FPU_Arithm3 FIDIV;
extern Instruction_FPU_Arithm1 FDIVR;
extern Instruction_FPU_Arithm2 FDIVRP;
extern Instruction_FPU_Arithm3 FIDIVR;
extern Instruction1_Type1 FPREM;
extern Instruction1_Type1 FPREM1;
extern Instruction1_Type1 FABS;
extern Instruction1_Type1 FCHS;
extern Instruction1_Type1 FRNDINT;
extern Instruction1_Type1 FSCALE;
extern Instruction1_Type1 FSQRT;
extern Instruction1_Type1 FXTRACT;

// x87 FPU comparison instructions
extern Instruction_FCOM FCOM;
extern Instruction_FCOM FCOMP;
extern Instruction1_Type1 FCOMPP;
extern Instruction2_Type5 FUCOM;
extern Instruction2_Type5 FUCOMP;
extern Instruction1_Type1 FUCOMPP;
extern Instruction_FICOM FICOM;
extern Instruction_FICOM FICOMP;
extern Instruction1_Type5 FCOMI;
extern Instruction1_Type5 FCOMIP;
extern Instruction1_Type5 FUCOMI;
extern Instruction1_Type5 FUCOMIP;
extern Instruction1_Type1 FTST;
extern Instruction1_Type1 FXAM;

// x87 FPU transcendental instructions
extern Instruction1_Type1 FSIN;
extern Instruction1_Type1 FSINCOS;
extern Instruction1_Type1 FCOS;
extern Instruction1_Type1 FPTAN;
extern Instruction1_Type1 FPATAN;
extern Instruction1_Type1 F2XM1;
extern Instruction1_Type1 FYL2X;
extern Instruction1_Type1 FYL2XP1;

// x87 FPU load constants instructions
extern Instruction1_Type1 FLD1;
extern Instruction1_Type1 FLDL2T;
extern Instruction1_Type1 FLDL2E;
extern Instruction1_Type1 FLDPI;
extern Instruction1_Type1 FLDLG2;
extern Instruction1_Type1 FLDLN2;
extern Instruction1_Type1 FLDZ;

// x87 FPU control instructions
extern Instruction1_Type1 FINCSTP;
extern Instruction1_Type1 FDECSTP;
extern Instruction1_Type13 FFREE;
extern Instruction1_Type1 FINIT;
extern Instruction1_Type1 FNINIT;
extern Instruction1_Type1 FCLEX;
extern Instruction1_Type1 FNCLEX;
extern Instruction1_Type6 FSTCW;
extern Instruction1_Type6 FNSTCW;
extern Instruction1_Type6 FLDCW;
extern Instruction1_Type2 FSTENV;
extern Instruction1_Type2 FNSTENV;
extern Instruction1_Type2 FLDENV;
extern Instruction1_Type2 FSAVE;
extern Instruction1_Type2 FNSAVE;
extern Instruction1_Type2 FRSTOR;
extern Instruction_FSTSW FSTSW;
extern Instruction_FSTSW FNSTSW;
extern Instruction1_Type1 FNOP;

// x87 FPU and SIMD state management instructions
extern Instruction1_Type2 FXSAVE;
extern Instruction1_Type2 FXRSTOR;

// MMX data transfer instructions
extern Instruction_MOVD MOVD;
extern Instruction_MOVQ MOVQ;

// MMX conversion instructions
extern Instruction_MMX_Op PACKSSWB;
extern Instruction_MMX_Op PACKSSDW;
extern Instruction_MMX_Op PUNPCKHBW;
extern Instruction_MMX_Op PUNPCKHWD;
extern Instruction_MMX_Op PUNPCKHDQ;
extern Instruction_MMX_Op PUNPCKLBW;
extern Instruction_MMX_Op PUNPCKLWD;
extern Instruction_MMX_Op PUNPCKLDQ;

// MMX packed arithmetic instructions
extern Instruction_MMX_Op PADDB;
extern Instruction_MMX_Op PADDW;
extern Instruction_MMX_Op PADDD;
extern Instruction_MMX_Op PADDSB;
extern Instruction_MMX_Op PADDSW;
extern Instruction_MMX_Op PADDUSB;
extern Instruction_MMX_Op PADDUSW;
extern Instruction_MMX_Op PSUBB;
extern Instruction_MMX_Op PSUBW;
extern Instruction_MMX_Op PSUBD;
extern Instruction_MMX_Op PSUBSB;
extern Instruction_MMX_Op PSUBSW;
extern Instruction_MMX_Op PSUBUSB;
extern Instruction_MMX_Op PSUBUSW;
extern Instruction_MMX_Op PMULHW;
extern Instruction_MMX_Op PMULLW;
extern Instruction_MMX_Op PMADDWD;

// MMX comparison instructions
extern Instruction_MMX_Op PCMPEQB;
extern Instruction_MMX_Op PCMPEQW;
extern Instruction_MMX_Op PCMPEQD;
extern Instruction_MMX_Op PCMPGTB;
extern Instruction_MMX_Op PCMPGTW;
extern Instruction_MMX_Op PCMPGTD;

// MMX logical instructions
extern Instruction_MMX_Op PAND;
extern Instruction_MMX_Op PANDN;
extern Instruction_MMX_Op POR;
extern Instruction_MMX_Op PXOR;

// MMX shift and rotate instructions
extern Instruction_MMX_Shift PSLLW;
extern Instruction_MMX_Shift PSLLD;
extern Instruction_MMX_Shift PSLLQ;
extern Instruction_MMX_Shift PSRLW;
extern Instruction_MMX_Shift PSRLD;
extern Instruction_MMX_Shift PSRLQ;
extern Instruction_MMX_Shift PSRAW;
extern Instruction_MMX_Shift PSRAD;

// MMX state management instructions
extern Instruction1_Type1 EMMS;

// SSE data transfer instructions
extern Instruction_SSE_MOV1 MOVAPS;
extern Instruction_SSE_MOV1 MOVUPS;
extern Instruction_SSE_MOV2 MOVHPS;
extern Instruction_SSE_MOV2 MOVLPS;
extern Instruction1_Type3 MOVLHPS;
extern Instruction1_Type3 MOVHLPS;
extern Instruction2_Type4 MOVMSKPS;
extern Instruction_SSE_MOV5 MOVSS;

// SSE packed arithmetic instructions
extern Instruction_SSE_Arithm1 ADDPS;
extern Instruction_SSE_Arithm2 ADDSS;
extern Instruction_SSE_Arithm1 SUBPS;
extern Instruction_SSE_Arithm2 SUBSS;
extern Instruction_SSE_Arithm1 MULPS;
extern Instruction_SSE_Arithm2 MULSS;
extern Instruction_SSE_Arithm1 DIVPS;
extern Instruction_SSE_Arithm2 DIVSS;
extern Instruction_SSE_Arithm1 RCPPS;
extern Instruction_SSE_Arithm2 RCPSS;
extern Instruction_SSE_Arithm1 SQRTPS;
extern Instruction_SSE_Arithm2 SQRTSS;
extern Instruction_SSE_Arithm1 MAXPS;
extern Instruction_SSE_Arithm2 MAXSS;
extern Instruction_SSE_Arithm1 MINPS;
extern Instruction_SSE_Arithm2 MINSS;

// SSE comparison instructions
extern Instruction_SSE_Cmp1 CMPPS;
extern Instruction_SSE_Cmp2 CMPSS;
extern Instruction_SSE_Cmp3 COMISS;
extern Instruction_SSE_Cmp3 UCOMISS;

// SSE logical instructions
extern Instruction_SSE_Arithm1 ANDPS;
extern Instruction_SSE_Arithm1 ANDNPS;
extern Instruction_SSE_Arithm1 ORPS;
extern Instruction_SSE_Arithm1 XORPS;

// SSE shuffle and unpack instructions
extern Instruction_SSE_Shuffle SHUFPS;
extern Instruction_SSE_Arithm1 UNPCKHPS;
extern Instruction_SSE_Arithm1 UNPCKLPS;

// SSE convertion instructions
extern Instruction_SSE_Conv1 CVTPI2PS;
extern Instruction_SSE_Conv2 CVTSI2SS;
extern Instruction_SSE_Conv3 CVTPS2PI;
extern Instruction_SSE_Conv3 CVTTPS2PI;
extern Instruction_SSE_Conv4 CVTSS2SI;
extern Instruction_SSE_Conv4 CVTTSS2SI;

// SSE MXCSR state management instructions
extern Instruction1_Type14 LDMXCSR;
extern Instruction1_Type14 STMXCSR;

// SSE 64-bit SIMD integer instructions
extern Instruction_PAVGx PAVGB;
extern Instruction_PAVGx PAVGW;
extern Instruction_PEXTRW PEXTRW;
extern Instruction_PINSRW PINSRW;
extern Instruction_PMxxUB PMAXUB;
extern Instruction_PMxxSW PMAXSW;
extern Instruction_PMxxUB PMINUB;
extern Instruction_PMxxSW PMINSW;
extern Instruction_PMOVMSKB PMOVMSKB;
extern Instruction_PMULHUW PMULHUW;
extern Instruction_PSADBW PSADBW;
extern Instruction_PSHUFW PSHUFW;

// SSE cacheability control, prefetch, and instruction ordering instructions
extern Instruction1_Type15 MASKMOVQ;
extern Instruction1_Type16 MOVNTQ;
extern Instruction1_Type17 MOVNTPS;
extern Instruction1_Type2 PREFETCHT0;
extern Instruction1_Type2 PREFETCHT1;
extern Instruction1_Type2 PREFETCHT2;
extern Instruction1_Type2 PREFETCHNTA;
extern Instruction1_Type2 PREFETCHW;
extern Instruction1_Type2 PREFETCHWT1;
extern Instruction1_Type1 SFENCE;

// SSE2 data movement instructions
extern Instruction_MOVxPD1 MOVAPD;
extern Instruction_MOVxPD1 MOVUPD;
extern Instruction1_Type18 MOVHPD;
extern Instruction1_Type18 MOVLPD;
extern Instruction2_Type4 MOVMSKPD;
extern Instruction_MOVSD MOVSD_SSE2;

// SSE2 packed arithmetic instructions
extern Instruction_SSE2_Arithm1 ADDPD;
extern Instruction_SSE2_Arithm2 ADDSD;
extern Instruction_SSE2_Arithm1 SUBPD;
extern Instruction_SSE2_Arithm2 SUBSD;
extern Instruction_SSE2_Arithm1 MULPD;
extern Instruction_SSE2_Arithm2 MULSD;
extern Instruction_SSE2_Arithm1 DIVPD;
extern Instruction_SSE2_Arithm2 DIVSD;
extern Instruction_SSE2_Arithm1 SQRTPD;
extern Instruction_SSE2_Arithm2 SQRTSD;
extern Instruction_SSE2_Arithm1 MAXPD;
extern Instruction_SSE2_Arithm2 MAXSD;
extern Instruction_SSE2_Arithm1 MINPD;
extern Instruction_SSE2_Arithm2 MINSD;

// SSE2 logical instructions
extern Instruction_SSE2_Arithm1 ANDPD;
extern Instruction_SSE2_Arithm1 ANDNPD;
extern Instruction_SSE2_Arithm1 ORPD;
extern Instruction_SSE2_Arithm1 XORPD;

// SSE2 comparison instructions
extern Instruction_SSE2_Cmp1 CMPPD;
extern Instruction_SSE2_Cmp2 CMPSD_SSE2;
extern Instruction_SSE2_Cmp3 COMISD;
extern Instruction_SSE2_Cmp3 UCOMISD;

// SSE2 shuffle and unpack instructions
extern Instruction_SHUFPD SHUFPD;
extern Instruction_UNPCKxPD UNPCKHPD;
extern Instruction_UNPCKxPD UNPCKLPD;

// SSE2 convertion instructions
extern Instruction_CVTPD2PI CVTPD2PI;
extern Instruction_CVTPD2PI CVTTPD2PI;
extern Instruction_CVTPI2PD CVTPI2PD;
extern Instruction_CVTPD2DQ CVTPD2DQ;
extern Instruction_CVTPD2DQ CVTTPD2DQ;
extern Instruction_CVTDQ2PD CVTDQ2PD;
extern Instruction_CVTPS2PD CVTPS2PD;
extern Instruction_CVTPD2PS CVTPD2PS;
extern Instruction_CVTSS2SD CVTSS2SD;
extern Instruction_CVTSD2SS CVTSD2SS;
extern Instruction_CVTSD2SI CVTSD2SI;
extern Instruction_CVTSD2SI CVTTSD2SI;
extern Instruction_CVTSI2SD CVTSI2SD;

// SSE2 packed single-precision floating point values
extern Instruction_CVTDQ2PS CVTDQ2PS;
extern Instruction_CVTPS2DQ CVTPS2DQ;
extern Instruction_CVTPS2DQ CVTTPS2DQ;

// SSE2 128-bit SIMD integer instructions
extern Instruction_MOVDQx MOVDQA;
extern Instruction_MOVDQx MOVDQU;
extern Instruction1_Type20 MOVQ2DQ;
extern Instruction1_Type21 MOVDQ2Q;
extern Instruction_PMULUDQ PMULUDQ;
extern Instruction_SSE2_Int_Arithm1 PADDQ;
extern Instruction_SSE2_Int_Arithm1 PSUBQ;
extern Instruction_SSE2_Int_Shuffle PSHUFLW;
extern Instruction_SSE2_Int_Shuffle PSHUFHW;
extern Instruction_SSE2_Int_Shuffle PSHUFD;
extern Instruction1_Type22 PSLLDQ;
extern Instruction1_Type22 PSRLDQ;
extern Instruction_SSE2_Int_Unpack PUNPCKHQDQ;
extern Instruction_SSE2_Int_Unpack PUNPCKLQDQ;

// SSE2 cacheability control and ordering instructions
extern Instruction1_Type2 CLFLUSH;
extern Instruction1_Type1 LFENCE;
extern Instruction1_Type1 MFENCE;
extern Instruction1_Type1 PAUSE;
extern Instruction1_Type3 MASKMOVDQU;
extern Instruction1_Type19 MOVNTPD;
extern Instruction1_Type19 MOVNTDQ;
extern Instruction_MOVNTI MOVNTI;

// SSE3 x87-FP integer convertion instruction
extern Instruction_FISTTP FISTTP;

// SSE3 specialized 128-bit unaligned data load instruction
extern Instruction1_Type23 LDDQU;

// SSE3 SIMD floating-point packed ADD/SUB instructions
extern Instruction_SSE3_Arithm1 ADDSUBPS;
extern Instruction_SSE3_Arithm1 ADDSUBPD;

// SSE3 SIMD floating-point horizontal ADD/SUB instructions
extern Instruction_SSE3_Arithm1 HADDPS;
extern Instruction_SSE3_Arithm1 HSUBPS;
extern Instruction_SSE3_Arithm1 HADDPD;
extern Instruction_SSE3_Arithm1 HSUBPD;

// SSE3 SIMD floating-point LOAD/MOVE/DUPLICATE instructions
extern Instruction_SSE3_Arithm1 MOVSHDUP;
extern Instruction_SSE3_Arithm1 MOVSLDUP;
extern Instruction_SSE3_Arithm2 MOVDDUP;

// SSE3 agent synchronization instructions
extern Instruction1_Type1 MONITOR;
extern Instruction1_Type1 MWAIT;

// SSSE3: horizontal addition/subtraction
extern Instruction_SSSE3_Arithm1 PHADDW;
extern Instruction_SSSE3_Arithm1 PHADDSW;
extern Instruction_SSSE3_Arithm1 PHADDD;
extern Instruction_SSSE3_Arithm1 PHSUBW;
extern Instruction_SSSE3_Arithm1 PHSUBSW;
extern Instruction_SSSE3_Arithm1 PHSUBD;

// SSSE3: packed absolute values
extern Instruction_SSSE3_Arithm1 PABSB;
extern Instruction_SSSE3_Arithm1 PABSW;
extern Instruction_SSSE3_Arithm1 PABSD;

// SSSE3: multiply and add packed signed and unsigned bytes
extern Instruction_SSSE3_Arithm1 PMADDUBSW;

// SSSE3: packed multiply high with round and scale
extern Instruction_SSSE3_Arithm1 PMULHRSW;

// SSSE3: packed shuffle bytes
extern Instruction_SSSE3_Arithm1 PSHUFB;

// SSSE3: packed sign
extern Instruction_SSSE3_Arithm1 PSIGNB;
extern Instruction_SSSE3_Arithm1 PSIGNW;
extern Instruction_SSSE3_Arithm1 PSIGND;

// SSSE3: packed align right
extern Instruction_SSSE3_Arithm2 PALIGNR;

// SSE4.1: dword multiply instructions
extern Instruction_SSE4_1_Type1 PMULLD;
extern Instruction_SSE4_1_Type1 PMULDQ;

// SSE4.1: floating-point dot product instructions
extern Instruction_SSE4_1_Type2 DPPD;
extern Instruction_SSE4_1_Type2 DPPS;

// SSE4.1: streaming load hint instruction
extern Instruction1_Type24 MOVNTDQA;

// SSE4.1: packed blending instructions
extern Instruction_SSE4_1_Type2 BLENDPD;
extern Instruction_SSE4_1_Type2 BLENDPS;
extern Instruction_SSE4_1_Type3 BLENDVPD;
extern Instruction_SSE4_1_Type3 BLENDVPS;
extern Instruction_SSE4_1_Type3 PBLENDVB;
extern Instruction_SSE4_1_Type2 PBLENDW;

// SSE4.1: packed integer MIN/MAX instructions
extern Instruction_SSE4_1_Type1 PMINUW;
extern Instruction_SSE4_1_Type1 PMINUD;
extern Instruction_SSE4_1_Type1 PMINSB;
extern Instruction_SSE4_1_Type1 PMINSD;
extern Instruction_SSE4_1_Type1 PMAXUW;
extern Instruction_SSE4_1_Type1 PMAXUD;
extern Instruction_SSE4_1_Type1 PMAXSB;
extern Instruction_SSE4_1_Type1 PMAXSD;

// SSE4.1: floating-point round instructions with selectable rounding mode
extern Instruction_SSE4_1_Type2 ROUNDPS;
extern Instruction_SSE4_1_Type2 ROUNDPD;
extern Instruction_SSE4_1_Type4 ROUNDSS;
extern Instruction_SSE4_1_Type5 ROUNDSD;

// SSE4.1: insertion and extractions from XMM registers
extern Instruction_SSE4_1_Type6 EXTRACTPS;
extern Instruction_SSE4_1_Type7 INSERTPS;
extern Instruction_SSE4_1_Type8 PINSRB;
extern Instruction_SSE4_1_Type9 PINSRD;
extern Instruction_SSE4_1_Type10 PINSRQ;
extern Instruction_SSE4_1_Type11 PEXTRB;
extern Instruction_SSE4_1_Type12 PEXTRD;
extern Instruction_SSE4_1_Type13 PEXTRQ;

// SSE4.1: packed integer format convertions
extern Instruction_SSE4_1_Type14 PMOVSXBW;
extern Instruction_SSE4_1_Type14 PMOVSXWD;
extern Instruction_SSE4_1_Type14 PMOVSXDQ;
extern Instruction_SSE4_1_Type15 PMOVSXBD;
extern Instruction_SSE4_1_Type15 PMOVSXWQ;
extern Instruction_SSE4_1_Type16 PMOVSXBQ;
extern Instruction_SSE4_1_Type14 PMOVZXBW;
extern Instruction_SSE4_1_Type14 PMOVZXWD;
extern Instruction_SSE4_1_Type14 PMOVZXDQ;
extern Instruction_SSE4_1_Type15 PMOVZXBD;
extern Instruction_SSE4_1_Type15 PMOVZXWQ;
extern Instruction_SSE4_1_Type16 PMOVZXBQ;

// SSE4.1: improved sums of absolute differences for 4-byte blocks
extern Instruction_SSE4_1_Type2 MPSADBW;

// SSE4.1: horizontal search
extern Instruction_SSE4_1_Type2 PHMINPOSUW;

// SSE4.1: packed test
extern Instruction_SSE4_1_Type2 PTEST;

// SSE4.1: packed qword equality comparison
extern Instruction_SSE4_1_Type2 PCMPEQQ;

// SSE4.1: dword packing with unsigned saturation
extern Instruction_SSE4_1_Type2 PACKUSDW;

// SSE4.2: string and text processing instructions
extern Instruction_SSE4_2_Type1 PCMPESTRI;
extern Instruction_SSE4_2_Type1 PCMPESTRM;
extern Instruction_SSE4_2_Type1 PCMPISTRI;
extern Instruction_SSE4_2_Type1 PCMPISTRM;

// SSE4.2: packed comparison SIMD integer instruction
extern Instruction_SSE4_2_Type2 PCMPGTQ;

// AESNI and PCLMULQDQ
extern Instruction_AES_Type1 AESDEC;
extern Instruction_AES_Type1 AESDECLAST;
extern Instruction_AES_Type1 AESENC;
extern Instruction_AES_Type1 AESENCLAST;
extern Instruction_AES_Type1 AESIMC;
extern Instruction_AES_Type2 AESKEYGENASSIST;
extern Instruction_PCLMULQDQ PCLMULQDQ;

// 16-bit floating-point convertion instructions
extern Instruction_F16C_Type1 VCVTPH2PS;
extern Instruction_F16C_Type2 VCVTPS2PH;

// Fused-multiply-add (FMA) extensions
extern Instruction_FMA_Type1 VFMADD132PD;
extern Instruction_FMA_Type1 VFMADD213PD;
extern Instruction_FMA_Type1 VFMADD231PD;
extern Instruction_FMA_Type1 VFMADD132PS;
extern Instruction_FMA_Type1 VFMADD213PS;
extern Instruction_FMA_Type1 VFMADD231PS;
extern Instruction_FMA_Type2 VFMADD132SD;
extern Instruction_FMA_Type2 VFMADD213SD;
extern Instruction_FMA_Type2 VFMADD231SD;
extern Instruction_FMA_Type3 VFMADD132SS;
extern Instruction_FMA_Type3 VFMADD213SS;
extern Instruction_FMA_Type3 VFMADD231SS;
extern Instruction_FMA_Type1 VFMADDSUB132PD;
extern Instruction_FMA_Type1 VFMADDSUB213PD;
extern Instruction_FMA_Type1 VFMADDSUB231PD;
extern Instruction_FMA_Type1 VFMADDSUB132PS;
extern Instruction_FMA_Type1 VFMADDSUB213PS;
extern Instruction_FMA_Type1 VFMADDSUB231PS;
extern Instruction_FMA_Type1 VFMSUBADD132PD;
extern Instruction_FMA_Type1 VFMSUBADD213PD;
extern Instruction_FMA_Type1 VFMSUBADD231PD;
extern Instruction_FMA_Type1 VFMSUBADD132PS;
extern Instruction_FMA_Type1 VFMSUBADD213PS;
extern Instruction_FMA_Type1 VFMSUBADD231PS;
extern Instruction_FMA_Type1 VFMSUB132PD;
extern Instruction_FMA_Type1 VFMSUB213PD;
extern Instruction_FMA_Type1 VFMSUB231PD;
extern Instruction_FMA_Type1 VFMSUB132PS;
extern Instruction_FMA_Type1 VFMSUB213PS;
extern Instruction_FMA_Type1 VFMSUB231PS;
extern Instruction_FMA_Type2 VFMSUB132SD;
extern Instruction_FMA_Type2 VFMSUB213SD;
extern Instruction_FMA_Type2 VFMSUB231SD;
extern Instruction_FMA_Type3 VFMSUB132SS;
extern Instruction_FMA_Type3 VFMSUB213SS;
extern Instruction_FMA_Type3 VFMSUB231SS;
extern Instruction_FMA_Type1 VFNMADD132PD;
extern Instruction_FMA_Type1 VFNMADD213PD;
extern Instruction_FMA_Type1 VFNMADD231PD;
extern Instruction_FMA_Type1 VFNMADD132PS;
extern Instruction_FMA_Type1 VFNMADD213PS;
extern Instruction_FMA_Type1 VFNMADD231PS;
extern Instruction_FMA_Type2 VFNMADD132SD;
extern Instruction_FMA_Type2 VFNMADD213SD;
extern Instruction_FMA_Type2 VFNMADD231SD;
extern Instruction_FMA_Type3 VFNMADD132SS;
extern Instruction_FMA_Type3 VFNMADD213SS;
extern Instruction_FMA_Type3 VFNMADD231SS;
extern Instruction_FMA_Type1 VFNMSUB132PD;
extern Instruction_FMA_Type1 VFNMSUB213PD;
extern Instruction_FMA_Type1 VFNMSUB231PD;
extern Instruction_FMA_Type1 VFNMSUB132PS;
extern Instruction_FMA_Type1 VFNMSUB213PS;
extern Instruction_FMA_Type1 VFNMSUB231PS;
extern Instruction_FMA_Type2 VFNMSUB132SD;
extern Instruction_FMA_Type2 VFNMSUB213SD;
extern Instruction_FMA_Type2 VFNMSUB231SD;
extern Instruction_FMA_Type3 VFNMSUB132SS;
extern Instruction_FMA_Type3 VFNMSUB213SS;
extern Instruction_FMA_Type3 VFNMSUB231SS;

// AVX arithmetic instructions
extern Instruction_AVX_Type1 VSQRTPD;
extern Instruction_AVX_Type1 VSQRTPS;
extern Instruction_AVX_Type1 VRSQRTPS;
extern Instruction_AVX_Type1 VRCPPS;
extern Instruction_AVX_Type2 VADDPD;
extern Instruction_AVX_Type2 VADDPS;
extern Instruction_AVX_Type2 VSUBPD;
extern Instruction_AVX_Type2 VSUBPS;
extern Instruction_AVX_Type2 VMULPD;
extern Instruction_AVX_Type2 VMULPS;
extern Instruction_AVX_Type2 VDIVPD;
extern Instruction_AVX_Type2 VDIVPS;
extern Instruction_AVX_Type3 VCVTPS2PD;
extern Instruction_AVX_Type4 VCVTPD2PS;
extern Instruction_AVX_Type1 VCVTPS2DQ;
extern Instruction_AVX_Type1 VCVTDQ2PS;
extern Instruction_AVX_Type1 VCVTTPS2DQ;
extern Instruction_AVX_Type4 VCVTTPD2DQ;
extern Instruction_AVX_Type4 VCVTPD2DQ;
extern Instruction_AVX_Type3 VCVTDQ2PD;
extern Instruction_AVX_Type2 VMINPS;
extern Instruction_AVX_Type2 VMINPD;
extern Instruction_AVX_Type2 VMAXPS;
extern Instruction_AVX_Type2 VMAXPD;
extern Instruction_AVX_Type2 VHADDPS;
extern Instruction_AVX_Type2 VHADDPD;
extern Instruction_AVX_Type2 VHSUBPS;
extern Instruction_AVX_Type2 VHSUBPD;
extern Instruction_AVX_Type5 VCMPPS;
extern Instruction_AVX_Type5 VCMPPD;
extern Instruction_AVX_Type2 VADDSUBPS;
extern Instruction_AVX_Type2 VADDSUBPD;
extern Instruction_AVX_Type5 VDPPS;
extern Instruction_AVX_Type6 VDPPD;
extern Instruction_AVX_Type7 VROUNDPS;
extern Instruction_AVX_Type7 VROUNDPD;
extern Instruction_AVX_Type8 VMOVAPS;
extern Instruction_AVX_Type8 VMOVAPD;
extern Instruction_AVX_Type8 VMOVDQA;
extern Instruction_AVX_Type8 VMOVUPS;
extern Instruction_AVX_Type8 VMOVUPD;
extern Instruction_AVX_Type8 VMOVDQU;
extern Instruction_AVX_Type9 VMOVMSKPS;
extern Instruction_AVX_Type9 VMOVMSKPD;
extern Instruction_AVX_Type10 VLDDQU;
extern Instruction_AVX_Type11 VMOVNTPS;
extern Instruction_AVX_Type11 VMOVNTPS;
extern Instruction_AVX_Type11 VMOVNTDQ;
extern Instruction_AVX_Type10 VMOVNTDQA;
extern Instruction_AVX_Type7 VMOVSHDUP;
extern Instruction_AVX_Type7 VMOVSLDUP;
extern Instruction_AVX_Type7 VMOVDDUP;
extern Instruction_AVX_Type2 VUNPCKHPD;
extern Instruction_AVX_Type2 VUNPCKLPD;
extern Instruction_AVX_Type2 VUNPCKHPS;
extern Instruction_AVX_Type2 VUNPCKLPS;
extern Instruction_AVX_Type5 VBLENDPS;
extern Instruction_AVX_Type5 VBLENDPD;
extern Instruction_AVX_Type5 VSHUFPS;
extern Instruction_AVX_Type5 VSHUFPD;
extern Instruction_AVX_Type12 VBLENDVPD;
extern Instruction_AVX_Type12 VBLENDVPS;
extern Instruction_AVX_Type1 VPTEST;
extern Instruction_AVX_Type2 VXORPS;
extern Instruction_AVX_Type2 VXORPD;
extern Instruction_AVX_Type2 VORPS;
extern Instruction_AVX_Type2 VORPD;
extern Instruction_AVX_Type2 VANDPS;
extern Instruction_AVX_Type2 VANDPD;
extern Instruction_AVX_Type2 VANDNPS;
extern Instruction_AVX_Type2 VANDNPD;
extern Instruction1_Type1 VZEROALL;
extern Instruction1_Type1 VZEROUPPER;
extern Instruction_AVX_Type13 VBROADCASTSS;
extern Instruction1_Type25 VBROADCASTSD;
extern Instruction1_Type26 VBROADCASTF128;
extern Instruction_AVX_Type16 VEXTRACTF128;
extern Instruction_AVX_Type17 VINSERTF128;
extern Instruction_AVX_Type18 VMASKMOVPS;
extern Instruction_AVX_Type18 VMASKMOVPD;
extern Instruction_AVX_Type19 VPERMILPD;
extern Instruction_AVX_Type19 VPERMILPS;
extern Instruction_AVX_Type20 VPERM2F128;
extern Instruction_AVX_Type1 VTESTPS;
extern Instruction_AVX_Type1 VTESTPD;
extern Instruction_AVX_Type21 VCVTSI2SS;
extern Instruction_AVX_Type21 VCVTSI2SD;
extern Instruction_CVTSD2SI VCVTSD2SI;
extern Instruction_SSE_Conv4 VCVTTSS2SI;
extern Instruction_CVTSD2SI VCVTTSD2SI;
extern Instruction_SSE_Conv4 VCVTSS2SI;

// System instructions
extern Instruction1_Type1 CLAC;
extern Instruction1_Type1 STAC;
extern Instruction1_Type1 CLTS;
extern Instruction1_Type2 LGDT;
extern Instruction1_Type2 LIDT;
extern Instruction1_Type2 SIDT;
extern Instruction_rm16 LLDT;
extern Instruction_rm16 LMSW;
extern Instruction_rm16 VERR;
extern Instruction_rm16 VERW;
extern Instruction_rm16 LTR;
extern Instruction1_Type1 INVD;
extern Instruction1_Type1 WBINVD;
extern Instruction1_Type2 INVLPG;
extern Instruction1_Type11 LOCK;
extern Instruction1_Type1 HLT;
extern Instruction1_Type1 RSM;
extern Instruction1_Type1 RDMSR;
extern Instruction1_Type1 WRMSR;
extern Instruction1_Type1 RDPMC;
extern Instruction1_Type1 RDTSC;
extern Instruction1_Type1 RDTSCP;
extern Instruction1_Type1 SYSENTER;
extern Instruction1_Type1 SYSEXIT;
extern Instruction1_Type2 XRSTORS;
extern Instruction1_Type2 XRSTORS64;
extern Instruction1_Type2 XSAVES;
extern Instruction1_Type2 XSAVES64;
extern Instruction1_Type1 XSETBV;
extern Instruction2_Type3 RDFSBASE;
extern Instruction2_Type3 RDGSBASE;
extern Instruction2_Type3 WRFSBASE;
extern Instruction2_Type3 WRGSBASE;

// 64-bit mode instructions
extern Instruction1_Type1 SYSCALL;
extern Instruction1_Type1 SYSRET;

// AVX
extern Instruction_VMOVD VMOVD;
extern Instruction_VMOVQ VMOVQ;
extern Instruction1_Type14 VLDMXCSR;
extern Instruction1_Type14 VSTMXCSR;

extern keyword comment;
extern keyword global;
extern Keyword_label label;

#endif
