/*! \file Instruction1_Types.h
    \brief Types for instructions with one operands combination.
*/
#ifdef INSTRUCTION1_TYPES_H
#error Already included
#else
#define INSTRUCTION1_TYPES_H

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

#endif
