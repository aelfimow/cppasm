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
#include "comment.h"
#include "global.h"
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

using imm8 = imm<uint8_t, 2>;
using imm16 = imm<uint16_t, 4>;
using imm32 = imm<uint32_t, 8>;
using imm64 = imm<uint64_t, 16>;

using m8 = m_template<8>;
using m16 = m_template<16>;
using m32 = m_template<32>;
using m64 = m_template<64>;
using m128 = m_template<128>;
using m32fp = m_template<32>;
using m64fp = m_template<64>;
using m80fp = m_template<80>;
using m80bcd = m_template<80>;

using Instruction_NoOperands = Instruction_1
<
    Operands_none
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

using Instruction_rm16 = Instruction_2
<
    Operands_reg<r16>,
    Operands_mem<m16, no_suffix>
>;

using Instruction_MemOnly = Instruction_1
<
    Operands_mem<m, no_suffix>
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

using Instruction_AsciiAdj = Instruction_2
<
    Operands_none,
    Operands_imm<imm8>
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

using Instruction_CMPXCHG8B = Instruction_1
<
    Operands_mem<m64, no_suffix>
>;

using Instruction_CMPXCHG16B = Instruction_1
<
    Operands_mem<m128, no_suffix>
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

using Instruction_BOUND = Instruction_2
<
    Operands_reg_mem<r16, m16, no_suffix>,
    Operands_reg_mem<r32, m32, no_suffix>
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

using Instruction_BSWAP = Instruction_2
<
    Operands_reg<r32>,
    Operands_reg<r64>
>;

using Instruction_ENTER = Instruction_1
<
    Operands_imm_imm<imm16, imm8>
>;

using Instruction_SSE_MOV1 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction_SSE_MOV2 = Instruction_2
<
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_mem_reg<m64, xmm, no_suffix>
>;

using Instruction_SSE_MOV3 = Instruction_1
<
    Operands_reg_reg<xmm, xmm, no_suffix>
>;

using Instruction_SSE_MOV4 = Instruction_2
<
    Operands_reg_reg<r32, xmm, no_suffix>,
    Operands_reg_reg<r64, xmm, no_suffix>
>;

using Instruction_SSE_MOV5 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_mem_reg<m32, xmm, no_suffix>
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

using Instruction_SSE_Conv2 = Instruction_4
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_mem<xmm, m32, suffix_m32>,
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_mem<xmm, m64, suffix_m64>
>;

using Instruction_SSE_Conv3 = Instruction_2
<
    Operands_reg_reg<mm, xmm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>
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

using Instruction_FSGSBASE = Instruction_2
<
    Operands_reg<r32>,
    Operands_reg<r64>
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

using Instruction_RET = Instruction_2
<
    Operands_none,
    Operands_imm<imm16>
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

using Instruction_SETcc = Instruction_2
<
    Operands_reg<r8>,
    Operands_mem<m8, no_suffix>
>;

using Instruction_INT = Instruction_1
<
    Operands_imm<imm8>
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

using Instruction_Jcc = Instruction_1
<
    Operands_string
>;

using Instruction_LOOPcc = Instruction_1
<
    Operands_string
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

using Instruction_Prefix = Instruction_1
<
    Operands_prefix
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

using Instruction_FIST = Instruction_2
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>
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

using Instruction_FBCD = Instruction_1
<
    Operands_mem<m80bcd, no_suffix>
>;

using Instruction_FXCH = Instruction_2
<
    Operands_none,
    Operands_reg<st>
>;

using Instruction_FCMOVcc = Instruction_1
<
    Operands_reg_reg<st, st, no_suffix>
>;

using Instruction_FPU_Arithm1 = Instruction_3
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg_reg<st, st, no_suffix>
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

using Instruction_FCOM = Instruction_4
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg<st>,
    Operands_none
>;

using Instruction_FCOMPP = Instruction_1
<
    Operands_none
>;

using Instruction_FUCOM = Instruction_2
<
    Operands_reg<st>,
    Operands_none
>;

using Instruction_FUCOMPP = Instruction_1
<
    Operands_none
>;

using Instruction_FICOM = Instruction_2
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>
>;

using Instruction_FCOMI = Instruction_1
<
    Operands_reg_reg<st, st, no_suffix>
>;

using Instruction_FFREE = Instruction_1
<
    Operands_reg<st>
>;

using Instruction_FSTCW = Instruction_1
<
    Operands_mem<m16, no_suffix>
>;

using Instruction_FLDCW = Instruction_1
<
    Operands_mem<m16, no_suffix>
>;

using Instruction_FSTENV = Instruction_1
<
    Operands_mem<m, no_suffix>
>;

using Instruction_FLDENV = Instruction_1
<
    Operands_mem<m, no_suffix>
>;

using Instruction_FSAVE = Instruction_1
<
    Operands_mem<m, no_suffix>
>;

using Instruction_FRSTOR = Instruction_1
<
    Operands_mem<m, no_suffix>
>;

using Instruction_FSTSW = Instruction_2
<
    Operands_mem<m16, no_suffix>,
    Operands_reg<r16>
>;

using Instruction_MXCSR = Instruction_1
<
    Operands_mem<m32, no_suffix>
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

using Instruction_PMAXUB = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_PMAXUW = Instruction_2
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
>;

using Instruction_PMAXSW = Instruction_4
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>
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
extern Instruction_NoOperands PUSHA;
extern Instruction_NoOperands PUSHAD;
extern Instruction_POP POP;
extern Instruction_NoOperands POPA;
extern Instruction_NoOperands POPAD;
extern Instruction_NoOperands CWD;
extern Instruction_NoOperands CDQ;
extern Instruction_NoOperands CQO;
extern Instruction_MovWithExt MOVSX;
extern Instruction_MovWithExt MOVZX;
extern Instruction_XCHG XCHG;
extern Instruction_BSWAP BSWAP;
extern Instruction_XADD XADD;
extern Instruction_CMPXCHG CMPXCHG;
extern Instruction_CMPXCHG8B CMPXCHG8B;
extern Instruction_CMPXCHG16B CMPXCHG16B;

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
extern Instruction_NoOperands AAA;
extern Instruction_AsciiAdj AAD;
extern Instruction_AsciiAdj AAM;
extern Instruction_NoOperands AAS;
extern Instruction_NoOperands DAA;
extern Instruction_NoOperands DAS;

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
extern Instruction_Jcc JA;
extern Instruction_Jcc JAE;
extern Instruction_Jcc JB;
extern Instruction_Jcc JBE;
extern Instruction_Jcc JC;
extern Instruction_Jcc JCXZ;
extern Instruction_Jcc JECXZ;
extern Instruction_Jcc JRCXZ;
extern Instruction_Jcc JE;
extern Instruction_Jcc JG;
extern Instruction_Jcc JGE;
extern Instruction_Jcc JL;
extern Instruction_Jcc JLE;
extern Instruction_Jcc JNA;
extern Instruction_Jcc JNAE;
extern Instruction_Jcc JNB;
extern Instruction_Jcc JNBE;
extern Instruction_Jcc JNC;
extern Instruction_Jcc JNE;
extern Instruction_Jcc JNG;
extern Instruction_Jcc JNGE;
extern Instruction_Jcc JNL;
extern Instruction_Jcc JNLE;
extern Instruction_Jcc JNO;
extern Instruction_Jcc JNP;
extern Instruction_Jcc JNS;
extern Instruction_Jcc JNZ;
extern Instruction_Jcc JO;
extern Instruction_Jcc JP;
extern Instruction_Jcc JPE;
extern Instruction_Jcc JPO;
extern Instruction_Jcc JS;
extern Instruction_Jcc JZ;
extern Instruction_Branch CALL;
extern Instruction_Branch CALL_FAR;
extern Instruction_RET RET;
extern Instruction_RET RET_FAR;
extern Instruction_ENTER ENTER;
extern Instruction_NoOperands LEAVE;
extern Instruction_INT INT;
extern Instruction_NoOperands INTO;
extern Instruction_NoOperands IRET;
extern Instruction_NoOperands IRETD;
extern Instruction_NoOperands IRETQ;
extern Instruction_LOOPcc LOOP;
extern Instruction_LOOPcc LOOPE;
extern Instruction_LOOPcc LOOPNE;
extern Instruction_LOOPcc LOOPZ;
extern Instruction_LOOPcc LOOPNZ;
extern Instruction_BOUND BOUND;

// String instructions
extern Instruction_NoOperands MOVSB;
extern Instruction_NoOperands MOVSW;
extern Instruction_NoOperands MOVSD;
extern Instruction_NoOperands MOVSQ;
extern Instruction_NoOperands CMPSB;
extern Instruction_NoOperands CMPSW;
extern Instruction_NoOperands CMPSD;
extern Instruction_NoOperands CMPSQ;
extern Instruction_NoOperands SCASB;
extern Instruction_NoOperands SCASW;
extern Instruction_NoOperands SCASD;
extern Instruction_NoOperands SCASQ;
extern Instruction_NoOperands LODSB;
extern Instruction_NoOperands LODSW;
extern Instruction_NoOperands LODSD;
extern Instruction_NoOperands LODSQ;
extern Instruction_NoOperands STOSB;
extern Instruction_NoOperands STOSW;
extern Instruction_NoOperands STOSD;
extern Instruction_NoOperands STOSQ;
extern Instruction_Prefix REP;
extern Instruction_Prefix REPE;
extern Instruction_Prefix REPZ;
extern Instruction_Prefix REPNE;
extern Instruction_Prefix REPNZ;

// I/O instructions
extern Instruction_IN IN;
extern Instruction_NoOperands INSB;
extern Instruction_NoOperands INSW;
extern Instruction_NoOperands INSD;
extern Instruction_OUT OUT;
extern Instruction_NoOperands OUTSB;
extern Instruction_NoOperands OUTSW;
extern Instruction_NoOperands OUTSD;

// Flag control (EFLAG) instructions
extern Instruction_NoOperands CLC;
extern Instruction_NoOperands CLD;
extern Instruction_NoOperands CLI;
extern Instruction_NoOperands CMC;
extern Instruction_NoOperands LAHF;
extern Instruction_NoOperands SAHF;
extern Instruction_NoOperands PUSHF;
extern Instruction_NoOperands POPF;
extern Instruction_NoOperands POPFD;
extern Instruction_NoOperands POPFQ;
extern Instruction_NoOperands STC;
extern Instruction_NoOperands STI;
extern Instruction_NoOperands STD;

// Segment register instructions
extern Instruction_LoadFarPointer LDS;
extern Instruction_LoadFarPointer LES;
extern Instruction_LoadFarPointer LFS;
extern Instruction_LoadFarPointer LGS;
extern Instruction_LoadFarPointer LSS;

// Miscelleneous instructions
extern Instruction_LEA LEA;
extern Instruction_NOP NOP;
extern Instruction_NoOperands UD;
extern Instruction_NoOperands UD1;
extern Instruction_NoOperands UD2;
extern Instruction_NoOperands CPUID;
extern Instruction_NoOperands XLAT;
extern Instruction_MemOnly CLFLUSH;
extern Instruction_MemOnly CLFLUSHOPT;
extern Instruction_MemOnly PREFETCHT0;
extern Instruction_MemOnly PREFETCHT1;
extern Instruction_MemOnly PREFETCHT2;
extern Instruction_MemOnly PREFETCHNTA;
extern Instruction_MemOnly PREFETCHW;
extern Instruction_MemOnly PREFETCHWT1;

// User mode extended state save/restore instructions
extern Instruction_MemOnly XSAVE;
extern Instruction_MemOnly XSAVEC;
extern Instruction_MemOnly XSAVEOPT;
extern Instruction_MemOnly XRSTOR;
extern Instruction_NoOperands XGETBV;

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
extern Instruction_FBCD FBLD;
extern Instruction_FBCD FBSTP;
extern Instruction_FXCH FXCH;
extern Instruction_FCMOVcc FCMOVB;
extern Instruction_FCMOVcc FCMOVE;
extern Instruction_FCMOVcc FCMOVBE;
extern Instruction_FCMOVcc FCMOVU;
extern Instruction_FCMOVcc FCMOVNB;
extern Instruction_FCMOVcc FCMOVNE;
extern Instruction_FCMOVcc FCMOVNBE;
extern Instruction_FCMOVcc FCMOVNU;

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
extern Instruction_NoOperands FPREM;
extern Instruction_NoOperands FPREM1;
extern Instruction_NoOperands FABS;
extern Instruction_NoOperands FCHS;
extern Instruction_NoOperands FRNDINT;
extern Instruction_NoOperands FSCALE;
extern Instruction_NoOperands FSQRT;
extern Instruction_NoOperands FXTRACT;

// x87 FPU comparison instructions
extern Instruction_FCOM FCOM;
extern Instruction_FCOM FCOMP;
extern Instruction_FCOMPP FCOMPP;
extern Instruction_FUCOM FUCOM;
extern Instruction_FUCOM FUCOMP;
extern Instruction_FUCOMPP FUCOMPP;
extern Instruction_FICOM FICOM;
extern Instruction_FICOM FICOMP;
extern Instruction_FCOMI FCOMI;
extern Instruction_FCOMI FCOMIP;
extern Instruction_FCOMI FUCOMI;
extern Instruction_FCOMI FUCOMIP;
extern Instruction_NoOperands FTST;
extern Instruction_NoOperands FXAM;

// x87 FPU transcendental instructions
extern Instruction_NoOperands FSIN;
extern Instruction_NoOperands FSINCOS;
extern Instruction_NoOperands FCOS;
extern Instruction_NoOperands FPTAN;
extern Instruction_NoOperands FPATAN;
extern Instruction_NoOperands F2XM1;
extern Instruction_NoOperands FYL2X;
extern Instruction_NoOperands FYL2XP1;

// x87 FPU load constants instructions
extern Instruction_NoOperands FLD1;
extern Instruction_NoOperands FLDL2T;
extern Instruction_NoOperands FLDL2E;
extern Instruction_NoOperands FLDPI;
extern Instruction_NoOperands FLDLG2;
extern Instruction_NoOperands FLDLN2;
extern Instruction_NoOperands FLDZ;

// x87 FPU control instructions
extern Instruction_NoOperands FINCSTP;
extern Instruction_NoOperands FDECSTP;
extern Instruction_FFREE FFREE;
extern Instruction_NoOperands FINIT;
extern Instruction_NoOperands FNINIT;
extern Instruction_NoOperands FCLEX;
extern Instruction_NoOperands FNCLEX;
extern Instruction_FSTCW FSTCW;
extern Instruction_FSTCW FNSTCW;
extern Instruction_FLDCW FLDCW;
extern Instruction_FSTENV FSTENV;
extern Instruction_FSTENV FNSTENV;
extern Instruction_FLDENV FLDENV;
extern Instruction_FSAVE FSAVE;
extern Instruction_FSAVE FNSAVE;
extern Instruction_FRSTOR FRSTOR;
extern Instruction_FSTSW FSTSW;
extern Instruction_FSTSW FNSTSW;
extern Instruction_NoOperands FNOP;

// x87 FPU and SIMD state management instructions
extern Instruction_MemOnly FXSAVE;
extern Instruction_MemOnly FXRSTOR;

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
extern Instruction_NoOperands EMMS;

// SSE data transfer instructions
extern Instruction_SSE_MOV1 MOVAPS;
extern Instruction_SSE_MOV1 MOVUPS;
extern Instruction_SSE_MOV2 MOVHPS;
extern Instruction_SSE_MOV2 MOVLPS;
extern Instruction_SSE_MOV3 MOVLHPS;
extern Instruction_SSE_MOV3 MOVHLPS;
extern Instruction_SSE_MOV4 MOVMSKPS;
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
extern Instruction_MXCSR LDMXCSR;
extern Instruction_MXCSR STMXCSR;

// SSE 64-bit SIMD integer instructions
extern Instruction_PAVGx PAVGB;
extern Instruction_PAVGx PAVGW;
extern Instruction_PEXTRW PEXTRW;
extern Instruction_PINSRW PINSRW;
extern Instruction_PMAXUB PMAXUB;
extern Instruction_PMAXUW PMAXUW;
extern Instruction_PMAXSW PMAXSW;

// System instructions
extern Instruction_NoOperands CLAC;
extern Instruction_NoOperands STAC;
extern Instruction_NoOperands CLTS;
extern Instruction_MemOnly LGDT;
extern Instruction_MemOnly LIDT;
extern Instruction_MemOnly SIDT;
extern Instruction_rm16 LLDT;
extern Instruction_rm16 LMSW;
extern Instruction_rm16 VERR;
extern Instruction_rm16 VERW;
extern Instruction_rm16 LTR;
extern Instruction_NoOperands INVD;
extern Instruction_NoOperands WBINVD;
extern Instruction_MemOnly INVLPG;
extern Instruction_Prefix LOCK;
extern Instruction_NoOperands HLT;
extern Instruction_NoOperands RSM;
extern Instruction_NoOperands RDMSR;
extern Instruction_NoOperands WRMSR;
extern Instruction_NoOperands RDPMC;
extern Instruction_NoOperands RDTSC;
extern Instruction_NoOperands RDTSCP;
extern Instruction_NoOperands SYSENTER;
extern Instruction_NoOperands SYSEXIT;
extern Instruction_MemOnly XRSTORS;
extern Instruction_MemOnly XRSTORS64;
extern Instruction_MemOnly XSAVES;
extern Instruction_MemOnly XSAVES64;
extern Instruction_NoOperands XSETBV;
extern Instruction_FSGSBASE RDFSBASE;
extern Instruction_FSGSBASE RDGSBASE;
extern Instruction_FSGSBASE WRFSBASE;
extern Instruction_FSGSBASE WRGSBASE;

// SSE3 agent synchronization instructions
extern Instruction_NoOperands MONITOR;
extern Instruction_NoOperands MWAIT;

// 64-bit mode instructions
extern Instruction_NoOperands SYSCALL;
extern Instruction_NoOperands SYSRET;

// AVX
extern Instruction_VMOVD VMOVD;
extern Instruction_VMOVQ VMOVQ;
extern Instruction_MXCSR VLDMXCSR;
extern Instruction_MXCSR VSTMXCSR;

extern Keyword_comment comment;
extern Keyword_global global;
extern Keyword_label label;

#endif
