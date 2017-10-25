/*! \file cppasm.h
    \brief Main header file of the C++ Assembly Generator.
*/
#ifdef CPPASM_H
#error Already included
#else
#define CPPASM_H

#include <string>

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
#include "Instruction1_Types.h"
#include "Instruction2_Types.h"
#include "Instruction3_Types.h"
#include "Instruction4_Types.h"

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

using Instruction_MMX_Shift = Instruction_6
<
    Operands_reg_reg<mm, mm, no_suffix>,
    Operands_reg_mem<mm, m64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_imm<mm, imm8>,
    Operands_reg_imm<xmm, imm8>
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

using Instruction_PEXTRW = Instruction_5
<
    Operands_reg_reg_imm<r32, mm, imm8>,
    Operands_reg_reg_imm<r64, mm, imm8>,
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m16, xmm, imm8>
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
extern Instruction4_Type7 ADCX;
extern Instruction4_Type7 ADOX;
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
extern Instruction2_Type7 SETA;
extern Instruction2_Type7 SETAE;
extern Instruction2_Type7 SETB;
extern Instruction2_Type7 SETBE;
extern Instruction2_Type7 SETC;
extern Instruction2_Type7 SETE;
extern Instruction2_Type7 SETG;
extern Instruction2_Type7 SETGE;
extern Instruction2_Type7 SETL;
extern Instruction2_Type7 SETLE;
extern Instruction2_Type7 SETNA;
extern Instruction2_Type7 SETNAE;
extern Instruction2_Type7 SETNB;
extern Instruction2_Type7 SETNBE;
extern Instruction2_Type7 SETNC;
extern Instruction2_Type7 SETNE;
extern Instruction2_Type7 SETNG;
extern Instruction2_Type7 SETNGE;
extern Instruction2_Type7 SETNL;
extern Instruction2_Type7 SETNLE;
extern Instruction2_Type7 SETNO;
extern Instruction2_Type7 SETNP;
extern Instruction2_Type7 SETNS;
extern Instruction2_Type7 SETNZ;
extern Instruction2_Type7 SETO;
extern Instruction2_Type7 SETP;
extern Instruction2_Type7 SETPE;
extern Instruction2_Type7 SETPO;
extern Instruction2_Type7 SETS;
extern Instruction2_Type7 SETZ;
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
extern Instruction2_Type8 BOUND;

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
extern Instruction3_Type1 LDS;
extern Instruction3_Type1 LES;
extern Instruction3_Type1 LFS;
extern Instruction3_Type1 LGS;
extern Instruction3_Type1 LSS;

// Miscelleneous instructions
extern Instruction3_Type1 LEA;
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
extern Instruction3_Type2 RDRAND;
extern Instruction3_Type2 RDSEED;

// x87 FPU data transfer instructions
extern Instruction4_Type2 FLD;
extern Instruction3_Type6 FILD;
extern Instruction2_Type16 FIST;
extern Instruction3_Type6 FISTP;
extern Instruction3_Type7 FST;
extern Instruction4_Type2 FSTP;
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
extern Instruction3_Type8 FADD;
extern Instruction2_Type20 FADDP;
extern Instruction2_Type16 FIADD;
extern Instruction3_Type8 FSUB;
extern Instruction2_Type20 FSUBP;
extern Instruction2_Type16 FISUB;
extern Instruction3_Type8 FSUBR;
extern Instruction2_Type20 FSUBRP;
extern Instruction2_Type16 FISUBR;
extern Instruction3_Type8 FMUL;
extern Instruction2_Type20 FMULP;
extern Instruction2_Type16 FIMUL;
extern Instruction3_Type8 FDIV;
extern Instruction2_Type20 FDIVP;
extern Instruction2_Type16 FIDIV;
extern Instruction3_Type8 FDIVR;
extern Instruction2_Type20 FDIVRP;
extern Instruction2_Type16 FIDIVR;
extern Instruction1_Type1 FPREM;
extern Instruction1_Type1 FPREM1;
extern Instruction1_Type1 FABS;
extern Instruction1_Type1 FCHS;
extern Instruction1_Type1 FRNDINT;
extern Instruction1_Type1 FSCALE;
extern Instruction1_Type1 FSQRT;
extern Instruction1_Type1 FXTRACT;

// x87 FPU comparison instructions
extern Instruction4_Type10 FCOM;
extern Instruction4_Type10 FCOMP;
extern Instruction1_Type1 FCOMPP;
extern Instruction2_Type5 FUCOM;
extern Instruction2_Type5 FUCOMP;
extern Instruction1_Type1 FUCOMPP;
extern Instruction2_Type16 FICOM;
extern Instruction2_Type16 FICOMP;
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
extern Instruction2_Type6 FSTSW;
extern Instruction2_Type6 FNSTSW;
extern Instruction1_Type1 FNOP;

// x87 FPU and SIMD state management instructions
extern Instruction1_Type2 FXSAVE;
extern Instruction1_Type2 FXRSTOR;

// MMX data transfer instructions
extern Instruction_MOVD MOVD;
extern Instruction_MOVQ MOVQ;

// MMX conversion instructions
extern Instruction4_Type1 PACKSSWB;
extern Instruction4_Type1 PACKSSDW;
extern Instruction4_Type1 PUNPCKHBW;
extern Instruction4_Type1 PUNPCKHWD;
extern Instruction4_Type1 PUNPCKHDQ;
extern Instruction4_Type1 PUNPCKLBW;
extern Instruction4_Type1 PUNPCKLWD;
extern Instruction4_Type1 PUNPCKLDQ;

// MMX packed arithmetic instructions
extern Instruction4_Type1 PADDB;
extern Instruction4_Type1 PADDW;
extern Instruction4_Type1 PADDD;
extern Instruction4_Type1 PADDSB;
extern Instruction4_Type1 PADDSW;
extern Instruction4_Type1 PADDUSB;
extern Instruction4_Type1 PADDUSW;
extern Instruction4_Type1 PSUBB;
extern Instruction4_Type1 PSUBW;
extern Instruction4_Type1 PSUBD;
extern Instruction4_Type1 PSUBSB;
extern Instruction4_Type1 PSUBSW;
extern Instruction4_Type1 PSUBUSB;
extern Instruction4_Type1 PSUBUSW;
extern Instruction4_Type1 PMULHW;
extern Instruction4_Type1 PMULLW;
extern Instruction4_Type1 PMADDWD;

// MMX comparison instructions
extern Instruction4_Type1 PCMPEQB;
extern Instruction4_Type1 PCMPEQW;
extern Instruction4_Type1 PCMPEQD;
extern Instruction4_Type1 PCMPGTB;
extern Instruction4_Type1 PCMPGTW;
extern Instruction4_Type1 PCMPGTD;

// MMX logical instructions
extern Instruction4_Type1 PAND;
extern Instruction4_Type1 PANDN;
extern Instruction4_Type1 POR;
extern Instruction4_Type1 PXOR;

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
extern Instruction3_Type5 MOVAPS;
extern Instruction3_Type5 MOVUPS;
extern Instruction2_Type9 MOVHPS;
extern Instruction2_Type9 MOVLPS;
extern Instruction1_Type3 MOVLHPS;
extern Instruction1_Type3 MOVHLPS;
extern Instruction2_Type4 MOVMSKPS;
extern Instruction3_Type3 MOVSS;

// SSE packed arithmetic instructions
extern Instruction2_Type10 ADDPS;
extern Instruction2_Type11 ADDSS;
extern Instruction2_Type10 SUBPS;
extern Instruction2_Type11 SUBSS;
extern Instruction2_Type10 MULPS;
extern Instruction2_Type11 MULSS;
extern Instruction2_Type10 DIVPS;
extern Instruction2_Type11 DIVSS;
extern Instruction2_Type10 RCPPS;
extern Instruction2_Type11 RCPSS;
extern Instruction2_Type10 SQRTPS;
extern Instruction2_Type11 SQRTSS;
extern Instruction2_Type10 MAXPS;
extern Instruction2_Type11 MAXSS;
extern Instruction2_Type10 MINPS;
extern Instruction2_Type11 MINSS;

// SSE comparison instructions
extern Instruction2_Type12 CMPPS;
extern Instruction2_Type13 CMPSS;
extern Instruction2_Type11 COMISS;
extern Instruction2_Type11 UCOMISS;

// SSE logical instructions
extern Instruction2_Type10 ANDPS;
extern Instruction2_Type10 ANDNPS;
extern Instruction2_Type10 ORPS;
extern Instruction2_Type10 XORPS;

// SSE shuffle and unpack instructions
extern Instruction2_Type12 SHUFPS;
extern Instruction2_Type10 UNPCKHPS;
extern Instruction2_Type10 UNPCKLPS;

// SSE convertion instructions
extern Instruction2_Type17 CVTPI2PS;
extern Instruction4_Type8 CVTSI2SS;
extern Instruction2_Type18 CVTPS2PI;
extern Instruction2_Type18 CVTTPS2PI;
extern Instruction4_Type9 CVTSS2SI;
extern Instruction4_Type9 CVTTSS2SI;

// SSE MXCSR state management instructions
extern Instruction1_Type14 LDMXCSR;
extern Instruction1_Type14 STMXCSR;

// SSE 64-bit SIMD integer instructions
extern Instruction4_Type1 PAVGB;
extern Instruction4_Type1 PAVGW;
extern Instruction_PEXTRW PEXTRW;
extern Instruction4_Type11 PINSRW;
extern Instruction4_Type1 PMAXUB;
extern Instruction4_Type1 PMAXSW;
extern Instruction4_Type1 PMINUB;
extern Instruction4_Type1 PMINSW;
extern Instruction4_Type12 PMOVMSKB;
extern Instruction4_Type3 PMULHUW;
extern Instruction4_Type3 PSADBW;
extern Instruction2_Type21 PSHUFW;

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
extern Instruction3_Type5 MOVAPD;
extern Instruction3_Type5 MOVUPD;
extern Instruction1_Type18 MOVHPD;
extern Instruction1_Type18 MOVLPD;
extern Instruction2_Type4 MOVMSKPD;
extern Instruction3_Type4 MOVSD_SSE2;

// SSE2 packed arithmetic instructions
extern Instruction2_Type10 ADDPD;
extern Instruction2_Type14 ADDSD;
extern Instruction2_Type10 SUBPD;
extern Instruction2_Type14 SUBSD;
extern Instruction2_Type10 MULPD;
extern Instruction2_Type14 MULSD;
extern Instruction2_Type10 DIVPD;
extern Instruction2_Type14 DIVSD;
extern Instruction2_Type10 SQRTPD;
extern Instruction2_Type14 SQRTSD;
extern Instruction2_Type10 MAXPD;
extern Instruction2_Type14 MAXSD;
extern Instruction2_Type10 MINPD;
extern Instruction2_Type14 MINSD;

// SSE2 logical instructions
extern Instruction2_Type10 ANDPD;
extern Instruction2_Type10 ANDNPD;
extern Instruction2_Type10 ORPD;
extern Instruction2_Type10 XORPD;

// SSE2 comparison instructions
extern Instruction2_Type12 CMPPD;
extern Instruction2_Type15 CMPSD_SSE2;
extern Instruction2_Type14 COMISD;
extern Instruction2_Type14 UCOMISD;

// SSE2 shuffle and unpack instructions
extern Instruction2_Type12 SHUFPD;
extern Instruction2_Type10 UNPCKHPD;
extern Instruction2_Type10 UNPCKLPD;

// SSE2 convertion instructions
extern Instruction2_Type19 CVTPD2PI;
extern Instruction2_Type19 CVTTPD2PI;
extern Instruction2_Type17 CVTPI2PD;
extern Instruction2_Type10 CVTPD2DQ;
extern Instruction2_Type10 CVTTPD2DQ;
extern Instruction2_Type14 CVTDQ2PD;
extern Instruction2_Type14 CVTPS2PD;
extern Instruction2_Type10 CVTPD2PS;
extern Instruction2_Type11 CVTSS2SD;
extern Instruction2_Type14 CVTSD2SS;
extern Instruction4_Type13 CVTSD2SI;
extern Instruction4_Type13 CVTTSD2SI;
extern Instruction4_Type8 CVTSI2SD;

// SSE2 packed single-precision floating point values
extern Instruction2_Type10 CVTDQ2PS;
extern Instruction2_Type10 CVTPS2DQ;
extern Instruction2_Type10 CVTTPS2DQ;

// SSE2 128-bit SIMD integer instructions
extern Instruction3_Type5 MOVDQA;
extern Instruction3_Type5 MOVDQU;
extern Instruction1_Type20 MOVQ2DQ;
extern Instruction1_Type21 MOVDQ2Q;
extern Instruction4_Type1 PMULUDQ;
extern Instruction4_Type1 PADDQ;
extern Instruction4_Type1 PSUBQ;
extern Instruction2_Type12 PSHUFLW;
extern Instruction2_Type12 PSHUFHW;
extern Instruction2_Type12 PSHUFD;
extern Instruction1_Type22 PSLLDQ;
extern Instruction1_Type22 PSRLDQ;
extern Instruction2_Type10 PUNPCKHQDQ;
extern Instruction2_Type10 PUNPCKLQDQ;

// SSE2 cacheability control and ordering instructions
extern Instruction1_Type2 CLFLUSH;
extern Instruction1_Type1 LFENCE;
extern Instruction1_Type1 MFENCE;
extern Instruction1_Type1 PAUSE;
extern Instruction1_Type3 MASKMOVDQU;
extern Instruction1_Type19 MOVNTPD;
extern Instruction1_Type19 MOVNTDQ;
extern Instruction2_Type22 MOVNTI;

// SSE3 x87-FP integer convertion instruction
extern Instruction3_Type6 FISTTP;

// SSE3 specialized 128-bit unaligned data load instruction
extern Instruction1_Type23 LDDQU;

// SSE3 SIMD floating-point packed ADD/SUB instructions
extern Instruction2_Type10 ADDSUBPS;
extern Instruction2_Type10 ADDSUBPD;

// SSE3 SIMD floating-point horizontal ADD/SUB instructions
extern Instruction2_Type10 HADDPS;
extern Instruction2_Type10 HSUBPS;
extern Instruction2_Type10 HADDPD;
extern Instruction2_Type10 HSUBPD;

// SSE3 SIMD floating-point LOAD/MOVE/DUPLICATE instructions
extern Instruction2_Type10 MOVSHDUP;
extern Instruction2_Type10 MOVSLDUP;
extern Instruction2_Type14 MOVDDUP;

// SSE3 agent synchronization instructions
extern Instruction1_Type1 MONITOR;
extern Instruction1_Type1 MWAIT;

// SSSE3: horizontal addition/subtraction
extern Instruction4_Type1 PHADDW;
extern Instruction4_Type1 PHADDSW;
extern Instruction4_Type1 PHADDD;
extern Instruction4_Type1 PHSUBW;
extern Instruction4_Type1 PHSUBSW;
extern Instruction4_Type1 PHSUBD;

// SSSE3: packed absolute values
extern Instruction4_Type1 PABSB;
extern Instruction4_Type1 PABSW;
extern Instruction4_Type1 PABSD;

// SSSE3: multiply and add packed signed and unsigned bytes
extern Instruction4_Type1 PMADDUBSW;

// SSSE3: packed multiply high with round and scale
extern Instruction4_Type1 PMULHRSW;

// SSSE3: packed shuffle bytes
extern Instruction4_Type1 PSHUFB;

// SSSE3: packed sign
extern Instruction4_Type1 PSIGNB;
extern Instruction4_Type1 PSIGNW;
extern Instruction4_Type1 PSIGND;

// SSSE3: packed align right
extern Instruction4_Type4 PALIGNR;

// SSE4.1: dword multiply instructions
extern Instruction2_Type10 PMULLD;
extern Instruction2_Type10 PMULDQ;

// SSE4.1: floating-point dot product instructions
extern Instruction2_Type12 DPPD;
extern Instruction2_Type12 DPPS;

// SSE4.1: streaming load hint instruction
extern Instruction1_Type24 MOVNTDQA;

// SSE4.1: packed blending instructions
extern Instruction2_Type12 BLENDPD;
extern Instruction2_Type12 BLENDPS;
extern Instruction4_Type14 BLENDVPD;
extern Instruction4_Type14 BLENDVPS;
extern Instruction4_Type14 PBLENDVB;
extern Instruction2_Type12 PBLENDW;

// SSE4.1: packed integer MIN/MAX instructions
extern Instruction2_Type10 PMINUW;
extern Instruction2_Type10 PMINUD;
extern Instruction2_Type10 PMINSB;
extern Instruction2_Type10 PMINSD;
extern Instruction2_Type10 PMAXUW;
extern Instruction2_Type10 PMAXUD;
extern Instruction2_Type10 PMAXSB;
extern Instruction2_Type10 PMAXSD;

// SSE4.1: floating-point round instructions with selectable rounding mode
extern Instruction2_Type12 ROUNDPS;
extern Instruction2_Type12 ROUNDPD;
extern Instruction2_Type13 ROUNDSS;
extern Instruction2_Type15 ROUNDSD;

// SSE4.1: insertion and extractions from XMM registers
extern Instruction3_Type10 EXTRACTPS;
extern Instruction2_Type13 INSERTPS;
extern Instruction2_Type23 PINSRB;
extern Instruction2_Type24 PINSRD;
extern Instruction2_Type25 PINSRQ;
extern Instruction3_Type9 PEXTRB;
extern Instruction3_Type10 PEXTRD;
extern Instruction2_Type26 PEXTRQ;

// SSE4.1: packed integer format convertions
extern Instruction2_Type14 PMOVSXBW;
extern Instruction2_Type14 PMOVSXWD;
extern Instruction2_Type14 PMOVSXDQ;
extern Instruction2_Type11 PMOVSXBD;
extern Instruction2_Type11 PMOVSXWQ;
extern Instruction2_Type27 PMOVSXBQ;
extern Instruction2_Type14 PMOVZXBW;
extern Instruction2_Type14 PMOVZXWD;
extern Instruction2_Type14 PMOVZXDQ;
extern Instruction2_Type11 PMOVZXBD;
extern Instruction2_Type11 PMOVZXWQ;
extern Instruction2_Type27 PMOVZXBQ;

// SSE4.1: improved sums of absolute differences for 4-byte blocks
extern Instruction2_Type12 MPSADBW;

// SSE4.1: horizontal search
extern Instruction2_Type12 PHMINPOSUW;

// SSE4.1: packed test
extern Instruction2_Type12 PTEST;

// SSE4.1: packed qword equality comparison
extern Instruction2_Type12 PCMPEQQ;

// SSE4.1: dword packing with unsigned saturation
extern Instruction2_Type12 PACKUSDW;

// SSE4.2: string and text processing instructions
extern Instruction2_Type12 PCMPESTRI;
extern Instruction2_Type12 PCMPESTRM;
extern Instruction2_Type12 PCMPISTRI;
extern Instruction2_Type12 PCMPISTRM;

// SSE4.2: packed comparison SIMD integer instruction
extern Instruction2_Type10 PCMPGTQ;

// AESNI and PCLMULQDQ
extern Instruction2_Type10 AESDEC;
extern Instruction2_Type10 AESDECLAST;
extern Instruction2_Type10 AESENC;
extern Instruction2_Type10 AESENCLAST;
extern Instruction2_Type10 AESIMC;
extern Instruction2_Type12 AESKEYGENASSIST;
extern Instruction2_Type12 PCLMULQDQ;

// 16-bit floating-point convertion instructions
extern Instruction4_Type15 VCVTPH2PS;
extern Instruction4_Type16 VCVTPS2PH;

// Fused-multiply-add (FMA) extensions
extern Instruction4_Type17 VFMADD132PD;
extern Instruction4_Type17 VFMADD213PD;
extern Instruction4_Type17 VFMADD231PD;
extern Instruction4_Type17 VFMADD132PS;
extern Instruction4_Type17 VFMADD213PS;
extern Instruction4_Type17 VFMADD231PS;
extern Instruction2_Type28 VFMADD132SD;
extern Instruction2_Type28 VFMADD213SD;
extern Instruction2_Type28 VFMADD231SD;
extern Instruction2_Type29 VFMADD132SS;
extern Instruction2_Type29 VFMADD213SS;
extern Instruction2_Type29 VFMADD231SS;
extern Instruction4_Type17 VFMADDSUB132PD;
extern Instruction4_Type17 VFMADDSUB213PD;
extern Instruction4_Type17 VFMADDSUB231PD;
extern Instruction4_Type17 VFMADDSUB132PS;
extern Instruction4_Type17 VFMADDSUB213PS;
extern Instruction4_Type17 VFMADDSUB231PS;
extern Instruction4_Type17 VFMSUBADD132PD;
extern Instruction4_Type17 VFMSUBADD213PD;
extern Instruction4_Type17 VFMSUBADD231PD;
extern Instruction4_Type17 VFMSUBADD132PS;
extern Instruction4_Type17 VFMSUBADD213PS;
extern Instruction4_Type17 VFMSUBADD231PS;
extern Instruction4_Type17 VFMSUB132PD;
extern Instruction4_Type17 VFMSUB213PD;
extern Instruction4_Type17 VFMSUB231PD;
extern Instruction4_Type17 VFMSUB132PS;
extern Instruction4_Type17 VFMSUB213PS;
extern Instruction4_Type17 VFMSUB231PS;
extern Instruction2_Type28 VFMSUB132SD;
extern Instruction2_Type28 VFMSUB213SD;
extern Instruction2_Type28 VFMSUB231SD;
extern Instruction2_Type29 VFMSUB132SS;
extern Instruction2_Type29 VFMSUB213SS;
extern Instruction2_Type29 VFMSUB231SS;
extern Instruction4_Type17 VFNMADD132PD;
extern Instruction4_Type17 VFNMADD213PD;
extern Instruction4_Type17 VFNMADD231PD;
extern Instruction4_Type17 VFNMADD132PS;
extern Instruction4_Type17 VFNMADD213PS;
extern Instruction4_Type17 VFNMADD231PS;
extern Instruction2_Type28 VFNMADD132SD;
extern Instruction2_Type28 VFNMADD213SD;
extern Instruction2_Type28 VFNMADD231SD;
extern Instruction2_Type29 VFNMADD132SS;
extern Instruction2_Type29 VFNMADD213SS;
extern Instruction2_Type29 VFNMADD231SS;
extern Instruction4_Type17 VFNMSUB132PD;
extern Instruction4_Type17 VFNMSUB213PD;
extern Instruction4_Type17 VFNMSUB231PD;
extern Instruction4_Type17 VFNMSUB132PS;
extern Instruction4_Type17 VFNMSUB213PS;
extern Instruction4_Type17 VFNMSUB231PS;
extern Instruction2_Type28 VFNMSUB132SD;
extern Instruction2_Type28 VFNMSUB213SD;
extern Instruction2_Type28 VFNMSUB231SD;
extern Instruction2_Type29 VFNMSUB132SS;
extern Instruction2_Type29 VFNMSUB213SS;
extern Instruction2_Type29 VFNMSUB231SS;

// AVX arithmetic instructions
extern Instruction4_Type18 VSQRTPD;
extern Instruction4_Type18 VSQRTPS;
extern Instruction4_Type18 VRSQRTPS;
extern Instruction4_Type18 VRCPPS;
extern Instruction4_Type17 VADDPD;
extern Instruction4_Type17 VADDPS;
extern Instruction4_Type17 VSUBPD;
extern Instruction4_Type17 VSUBPS;
extern Instruction4_Type17 VMULPD;
extern Instruction4_Type17 VMULPS;
extern Instruction4_Type17 VDIVPD;
extern Instruction4_Type17 VDIVPS;
extern Instruction4_Type15 VCVTPS2PD;
extern Instruction4_Type19 VCVTPD2PS;
extern Instruction4_Type18 VCVTPS2DQ;
extern Instruction4_Type18 VCVTDQ2PS;
extern Instruction4_Type18 VCVTTPS2DQ;
extern Instruction4_Type19 VCVTTPD2DQ;
extern Instruction4_Type19 VCVTPD2DQ;
extern Instruction4_Type15 VCVTDQ2PD;
extern Instruction4_Type17 VMINPS;
extern Instruction4_Type17 VMINPD;
extern Instruction4_Type17 VMAXPS;
extern Instruction4_Type17 VMAXPD;
extern Instruction4_Type17 VHADDPS;
extern Instruction4_Type17 VHADDPD;
extern Instruction4_Type17 VHSUBPS;
extern Instruction4_Type17 VHSUBPD;
extern Instruction4_Type20 VCMPPS;
extern Instruction4_Type20 VCMPPD;
extern Instruction4_Type17 VADDSUBPS;
extern Instruction4_Type17 VADDSUBPD;
extern Instruction4_Type20 VDPPS;
extern Instruction2_Type30 VDPPD;
extern Instruction4_Type21 VROUNDPS;
extern Instruction4_Type21 VROUNDPD;
extern Instruction_AVX_Type8 VMOVAPS;
extern Instruction_AVX_Type8 VMOVAPD;
extern Instruction_AVX_Type8 VMOVDQA;
extern Instruction_AVX_Type8 VMOVUPS;
extern Instruction_AVX_Type8 VMOVUPD;
extern Instruction_AVX_Type8 VMOVDQU;
extern Instruction4_Type22 VMOVMSKPS;
extern Instruction4_Type22 VMOVMSKPD;
extern Instruction2_Type31 VLDDQU;
extern Instruction2_Type32 VMOVNTPS;
extern Instruction2_Type32 VMOVNTPS;
extern Instruction2_Type32 VMOVNTDQ;
extern Instruction2_Type31 VMOVNTDQA;
extern Instruction4_Type21 VMOVSHDUP;
extern Instruction4_Type21 VMOVSLDUP;
extern Instruction4_Type21 VMOVDDUP;
extern Instruction4_Type17 VUNPCKHPD;
extern Instruction4_Type17 VUNPCKLPD;
extern Instruction4_Type17 VUNPCKHPS;
extern Instruction4_Type17 VUNPCKLPS;
extern Instruction4_Type20 VBLENDPS;
extern Instruction4_Type20 VBLENDPD;
extern Instruction4_Type20 VSHUFPS;
extern Instruction4_Type20 VSHUFPD;
extern Instruction_AVX_Type12 VBLENDVPD;
extern Instruction_AVX_Type12 VBLENDVPS;
extern Instruction4_Type18 VPTEST;
extern Instruction4_Type17 VXORPS;
extern Instruction4_Type17 VXORPD;
extern Instruction4_Type17 VORPS;
extern Instruction4_Type17 VORPD;
extern Instruction4_Type17 VANDPS;
extern Instruction4_Type17 VANDPD;
extern Instruction4_Type17 VANDNPS;
extern Instruction4_Type17 VANDNPD;
extern Instruction1_Type1 VZEROALL;
extern Instruction1_Type1 VZEROUPPER;
extern Instruction2_Type33 VBROADCASTSS;
extern Instruction1_Type25 VBROADCASTSD;
extern Instruction1_Type26 VBROADCASTF128;
extern Instruction2_Type34 VEXTRACTF128;
extern Instruction2_Type35 VINSERTF128;
extern Instruction_AVX_Type18 VMASKMOVPS;
extern Instruction_AVX_Type18 VMASKMOVPD;
extern Instruction_AVX_Type19 VPERMILPD;
extern Instruction_AVX_Type19 VPERMILPS;
extern Instruction2_Type36 VPERM2F128;
extern Instruction4_Type18 VTESTPS;
extern Instruction4_Type18 VTESTPD;
extern Instruction_AVX_Type21 VCVTSI2SS;
extern Instruction_AVX_Type21 VCVTSI2SD;
extern Instruction4_Type13 VCVTSD2SI;
extern Instruction4_Type9 VCVTTSS2SI;
extern Instruction4_Type13 VCVTTSD2SI;
extern Instruction4_Type9 VCVTSS2SI;

// System instructions
extern Instruction1_Type1 CLAC;
extern Instruction1_Type1 STAC;
extern Instruction1_Type1 CLTS;
extern Instruction1_Type2 LGDT;
extern Instruction1_Type2 LIDT;
extern Instruction1_Type2 SIDT;
extern Instruction2_Type6 LLDT;
extern Instruction2_Type6 LMSW;
extern Instruction2_Type6 VERR;
extern Instruction2_Type6 VERW;
extern Instruction2_Type6 LTR;
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
extern Instruction4_Type5 VMOVD;
extern Instruction4_Type6 VMOVQ;
extern Instruction1_Type14 VLDMXCSR;
extern Instruction1_Type14 VSTMXCSR;

extern keyword comment;
extern keyword global;
extern Keyword_label label;

#endif
