/*! \file Instruction12_Types.h
    \brief Types for instructions with 12 operands combinations.
*/
#ifdef INSTRUCTION12_TYPES_H
#error Already included
#else
#define INSTRUCTION12_TYPES_H

using Instruction12_Type1 = Instruction_x
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

using Instruction12_Type2 = Instruction_x
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

using Instruction12_Type3 = Instruction_x
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

using Instruction12_Type4 = Instruction_x
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

using Instruction12_Type5 = Instruction_x
<
    Operands_reg_reg_imm<ymm, ymm, imm8>,
    Operands_reg_mem_imm<ymm, m256, imm8>,
    Operands_reg_mem_imm<ymm, m64, imm8>,
    Operands_reg_reg_imm<zmm, zmm, imm8>,
    Operands_reg_mem_imm<zmm, m512, imm8>,
    Operands_reg_mem_imm<zmm, m64, imm8>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>,
    Operands_reg_reg_mem<ymm, ymm, m64>,
    Operands_reg_reg_reg<zmm, zmm, zmm>,
    Operands_reg_reg_mem<zmm, zmm, m512>,
    Operands_reg_reg_mem<zmm, zmm, m64>
>;

#endif
