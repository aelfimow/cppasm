/*! \file Instruction5_Types.h
    \brief Types for instructions with five operands combinations.
*/
#ifdef INSTRUCTION5_TYPES_H
#error Already included
#else
#define INSTRUCTION5_TYPES_H

using Instruction5_Type1 = Instruction_5
<
    Operands_none,
    Operands_reg<r16>,
    Operands_mem<m16, suffix_m16>,
    Operands_reg<r32>,
    Operands_mem<m32, suffix_m32>
>;

using Instruction5_Type2 = Instruction_5
<
    Operands_reg_reg_imm<r32, mm, imm8>,
    Operands_reg_reg_imm<r64, mm, imm8>,
    Operands_reg_reg_imm<r32, xmm, imm8>,
    Operands_reg_reg_imm<r64, xmm, imm8>,
    Operands_mem_reg_imm<m16, xmm, imm8>
>;

using Instruction5_Type3 = Instruction_5
<
    Operands_reg_reg<opmask_reg, opmask_reg, no_suffix>,
    Operands_reg_mem<opmask_reg, m8, no_suffix>,
    Operands_mem_reg<m8, opmask_reg, no_suffix>,
    Operands_reg_reg<opmask_reg, r32, no_suffix>,
    Operands_reg_reg<r32, opmask_reg, no_suffix>
>;

using Instruction5_Type4 = Instruction_5
<
    Operands_reg_reg<opmask_reg, opmask_reg, no_suffix>,
    Operands_reg_mem<opmask_reg, m16, no_suffix>,
    Operands_mem_reg<m16, opmask_reg, no_suffix>,
    Operands_reg_reg<opmask_reg, r32, no_suffix>,
    Operands_reg_reg<r32, opmask_reg, no_suffix>
>;

using Instruction5_Type5 = Instruction_5
<
    Operands_reg_reg<opmask_reg, opmask_reg, no_suffix>,
    Operands_reg_mem<opmask_reg, m32, no_suffix>,
    Operands_mem_reg<m32, opmask_reg, no_suffix>,
    Operands_reg_reg<opmask_reg, r32, no_suffix>,
    Operands_reg_reg<r32, opmask_reg, no_suffix>
>;

using Instruction5_Type6 = Instruction_5
<
    Operands_reg_reg<opmask_reg, opmask_reg, no_suffix>,
    Operands_reg_mem<opmask_reg, m64, no_suffix>,
    Operands_mem_reg<m64, opmask_reg, no_suffix>,
    Operands_reg_reg<opmask_reg, r64, no_suffix>,
    Operands_reg_reg<r64, opmask_reg, no_suffix>
>;

#endif
