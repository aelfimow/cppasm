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

#endif
