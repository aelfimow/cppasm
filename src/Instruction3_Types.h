/*! \file Instruction3_Types.h
    \brief Types for instructions with three operands combinations.
*/
#ifdef INSTRUCTION3_TYPES_H
#error Already included
#else
#define INSTRUCTION3_TYPES_H

using Instruction3_Type1 = Instruction_3
<
    Operands_reg_mem<r16, m, no_suffix>,
    Operands_reg_mem<r32, m, no_suffix>,
    Operands_reg_mem<r64, m, no_suffix>
>;

using Instruction3_Type2 = Instruction_3
<
    Operands_reg<r16>,
    Operands_reg<r32>,
    Operands_reg<r64>
>;

using Instruction3_Type3 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m32, no_suffix>,
    Operands_mem_reg<m32, xmm, no_suffix>
>;

using Instruction3_Type4 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m64, no_suffix>,
    Operands_mem_reg<m64, xmm, no_suffix>
>;

using Instruction3_Type5 = Instruction_3
<
    Operands_reg_reg<xmm, xmm, no_suffix>,
    Operands_reg_mem<xmm, m128, no_suffix>,
    Operands_mem_reg<m128, xmm, no_suffix>
>;

using Instruction3_Type6 = Instruction_3
<
    Operands_mem<m16, suffix_m16int>,
    Operands_mem<m32, suffix_m32int>,
    Operands_mem<m64, suffix_m64int>
>;

using Instruction3_Type7 = Instruction_3
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg<st>
>;

using Instruction3_Type8 = Instruction_3
<
    Operands_mem<m32fp, suffix_m32fp>,
    Operands_mem<m64fp, suffix_m64fp>,
    Operands_reg_reg<st, st, no_suffix>
>;

using Instruction3_Type9 = Instruction_3
<
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m8, xmm, imm8>
>;

using Instruction3_Type10 = Instruction_3
<
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m32, xmm, imm8>
>;

#endif
