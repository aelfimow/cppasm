/*! \file Instruction8_Types.h
    \brief Types for instructions with eight operands combinations.
*/
#ifdef INSTRUCTION8_TYPES_H
#error Already included
#else
#define INSTRUCTION8_TYPES_H

using Instruction8_Type1 = Instruction_8
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

using Instruction8_Type2 = Instruction_8
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

#endif
