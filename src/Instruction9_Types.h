/*! \file Instruction9_Types.h
    \brief Types for instructions with nine operands combinations.
*/
#ifdef INSTRUCTION9_TYPES_H
#error Already included
#else
#define INSTRUCTION9_TYPES_H

using Instruction9_Type1 = Instruction_9
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_reg<ymm, r32, no_suffix>,
    Operands_reg_reg<zmm, r32, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_reg<zmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m8, no_suffix>,
    Operands_reg_mem<ymm, m8, no_suffix>,
    Operands_reg_mem<zmm, m8, no_suffix>
>;

using Instruction9_Type2 = Instruction_9
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_reg<ymm, r32, no_suffix>,
    Operands_reg_reg<zmm, r32, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_reg<zmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m16, no_suffix>,
    Operands_reg_mem<ymm, m16, no_suffix>,
    Operands_reg_mem<zmm, m16, no_suffix>
>;

using Instruction9_Type3 = Instruction_9
<
    Operands_reg_reg<xmm, r32, no_suffix>,
    Operands_reg_reg<ymm, r32, no_suffix>,
    Operands_reg_reg<zmm, r32, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_reg<zmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_mem<ymm, m32, no_suffix>,
    Operands_reg_mem<zmm, m32, no_suffix>
>;

using Instruction9_Type4 = Instruction_9
<
    Operands_reg_reg<xmm, r64, no_suffix>,
    Operands_reg_reg<ymm, r64, no_suffix>,
    Operands_reg_reg<zmm, r64, no_suffix>,
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_reg<ymm, xmm, no_suffix>,
    Operands_reg_reg<zmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_reg_mem<ymm, m64, no_suffix>,
    Operands_reg_mem<zmm, m64, no_suffix>
>;

using Instruction9_Type5 = Instruction_9
<
    Operands_reg_reg_reg_imm<xmm, xmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m128, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m32, imm8>,
    Operands_reg_reg_reg_imm<ymm, ymm, ymm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m256, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m32, imm8>,
    Operands_reg_reg_reg_imm<zmm, zmm, zmm, imm8>,
    Operands_reg_reg_mem_imm<zmm, zmm, m512, imm8>,
    Operands_reg_reg_mem_imm<zmm, zmm, m32, imm8>
>;

using Instruction9_Type6 = Instruction_9
<
    Operands_reg_reg_reg_imm<xmm, xmm, xmm, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m128, imm8>,
    Operands_reg_reg_mem_imm<xmm, xmm, m64, imm8>,
    Operands_reg_reg_reg_imm<ymm, ymm, ymm, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m256, imm8>,
    Operands_reg_reg_mem_imm<ymm, ymm, m64, imm8>,
    Operands_reg_reg_reg_imm<zmm, zmm, zmm, imm8>,
    Operands_reg_reg_mem_imm<zmm, zmm, m512, imm8>,
    Operands_reg_reg_mem_imm<zmm, zmm, m64, imm8>
>;

using Instruction9_Type7 = Instruction_9
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_mem<xmm, xmm, m32>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>,
    Operands_reg_reg_mem<ymm, ymm, m32>,
    Operands_reg_reg_reg<zmm, zmm, zmm>,
    Operands_reg_reg_mem<zmm, zmm, m512>,
    Operands_reg_reg_mem<zmm, zmm, m32>
>;

using Instruction9_Type8 = Instruction_9
<
    Operands_reg_reg_reg<xmm, xmm, xmm>,
    Operands_reg_reg_mem<xmm, xmm, m128>,
    Operands_reg_reg_mem<xmm, xmm, m64>,
    Operands_reg_reg_reg<ymm, ymm, ymm>,
    Operands_reg_reg_mem<ymm, ymm, m256>,
    Operands_reg_reg_mem<ymm, ymm, m64>,
    Operands_reg_reg_reg<zmm, zmm, zmm>,
    Operands_reg_reg_mem<zmm, zmm, m512>,
    Operands_reg_reg_mem<zmm, zmm, m64>
>;

using Instruction9_Type9 = Instruction_9
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_reg_reg<ymm, ymm, no_suffix>,
    Operands_reg_mem<ymm, m256, no_suffix>,
    Operands_reg_mem<ymm, m32, no_suffix>,
    Operands_reg_reg<zmm, zmm, no_suffix>,
    Operands_reg_mem<zmm, m512, no_suffix>,
    Operands_reg_mem<zmm, m32, no_suffix>
>;

#endif
