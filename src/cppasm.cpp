/*! \file cppasm.cpp
    \brief Main file of the C++ Assembly Generator.
*/
#include <string>

#include "cppasm.h"

asmstream asmout;

r8 AL { "%al" };
r8 AH { "%ah" };
r8 BL { "%bl" };
r8 BH { "%bh" };
r8 CL { "%cl" };
r8 CH { "%ch" };
r8 DL { "%dl" };
r8 DH { "%dh" };
r8 SIL { "%sil" };
r8 DIL { "%dil" };
r8 SPL { "%spl" };
r8 R8L { "%r8b" };
r8 R9L { "%r9b" };
r8 R10L { "%r10b" };
r8 R11L { "%r11b" };
r8 R12L { "%r12b" };
r8 R13L { "%r13b" };
r8 R14L { "%r14b" };
r8 R15L { "%r15b" };

r16 AX { "%ax" };
r16 BX { "%bx" };
r16 CX { "%cx" };
r16 DX { "%dx" };
r16 BP { "%bp" };
r16 SI { "%si" };
r16 DI { "%di" };
r16 SP { "%sp" };
r16 R8W { "%r8w" };
r16 R9W { "%r9w" };
r16 R10W { "%r10w" };
r16 R11W { "%r11w" };
r16 R12W { "%r12w" };
r16 R13W { "%r13w" };
r16 R14W { "%r14w" };
r16 R15W { "%r15w" };

r32 EAX { "%eax" };
r32 EBX { "%ebx" };
r32 ECX { "%ecx" };
r32 EDX { "%edx" };
r32 EBP { "%ebp" };
r32 ESI { "%esi" };
r32 EDI { "%edi" };
r32 ESP { "%esp" };
r32 R8D { "%r8d" };
r32 R9D { "%r9d" };
r32 R10D { "%r10d" };
r32 R11D { "%r11d" };
r32 R12D { "%r12d" };
r32 R13D { "%r13d" };
r32 R14D { "%r14d" };
r32 R15D { "%r15d" };

r64 RAX { "%rax" };
r64 RBX { "%rbx" };
r64 RCX { "%rcx" };
r64 RDX { "%rdx" };
r64 RBP { "%rbp" };
r64 RSI { "%rsi" };
r64 RDI { "%rdi" };
r64 RSP { "%rsp" };
r64 R8 { "%r8" };
r64 R9 { "%r9" };
r64 R10 { "%r10" };
r64 R11 { "%r11" };
r64 R12 { "%r12" };
r64 R13 { "%r13" };
r64 R14 { "%r14" };
r64 R15 { "%r15" };

xmm XMM0 { "%xmm0" };
xmm XMM1 { "%xmm1" };
xmm XMM2 { "%xmm2" };
xmm XMM3 { "%xmm3" };
xmm XMM4 { "%xmm4" };
xmm XMM5 { "%xmm5" };
xmm XMM6 { "%xmm6" };
xmm XMM7 { "%xmm7" };
xmm XMM8 { "%xmm8" };
xmm XMM9 { "%xmm9" };
xmm XMM10 { "%xmm10" };
xmm XMM11 { "%xmm11" };
xmm XMM12 { "%xmm12" };
xmm XMM13 { "%xmm13" };
xmm XMM14 { "%xmm14" };
xmm XMM15 { "%xmm15" };

ymm YMM0 { "%ymm0" };
ymm YMM1 { "%ymm1" };
ymm YMM2 { "%ymm2" };
ymm YMM3 { "%ymm3" };
ymm YMM4 { "%ymm4" };
ymm YMM5 { "%ymm5" };
ymm YMM6 { "%ymm6" };
ymm YMM7 { "%ymm7" };
ymm YMM8 { "%ymm8" };
ymm YMM9 { "%ymm9" };
ymm YMM10 { "%ymm10" };
ymm YMM11 { "%ymm11" };
ymm YMM12 { "%ymm12" };
ymm YMM13 { "%ymm13" };
ymm YMM14 { "%ymm14" };
ymm YMM15 { "%ymm15" };

zmm ZMM0 { "%zmm0" };
zmm ZMM1 { "%zmm1" };
zmm ZMM2 { "%zmm2" };
zmm ZMM3 { "%zmm3" };
zmm ZMM4 { "%zmm4" };
zmm ZMM5 { "%zmm5" };
zmm ZMM6 { "%zmm6" };
zmm ZMM7 { "%zmm7" };
zmm ZMM8 { "%zmm8" };
zmm ZMM9 { "%zmm9" };
zmm ZMM10 { "%zmm10" };
zmm ZMM11 { "%zmm11" };
zmm ZMM12 { "%zmm12" };
zmm ZMM13 { "%zmm13" };
zmm ZMM14 { "%zmm14" };
zmm ZMM15 { "%zmm15" };
zmm ZMM16 { "%zmm16" };
zmm ZMM17 { "%zmm17" };
zmm ZMM18 { "%zmm18" };
zmm ZMM19 { "%zmm19" };
zmm ZMM20 { "%zmm20" };
zmm ZMM21 { "%zmm21" };
zmm ZMM22 { "%zmm22" };
zmm ZMM23 { "%zmm23" };
zmm ZMM24 { "%zmm24" };
zmm ZMM25 { "%zmm25" };
zmm ZMM26 { "%zmm26" };
zmm ZMM27 { "%zmm27" };
zmm ZMM28 { "%zmm28" };
zmm ZMM29 { "%zmm29" };
zmm ZMM30 { "%zmm30" };
zmm ZMM31 { "%zmm31" };

mm MM0 { "%mm0" };
mm MM1 { "%mm1" };
mm MM2 { "%mm2" };
mm MM3 { "%mm3" };
mm MM4 { "%mm4" };
mm MM5 { "%mm5" };
mm MM6 { "%mm6" };
mm MM7 { "%mm7" };

Sreg CS { "%cs" };
Sreg DS { "%ds" };
Sreg SS { "%ss" };
Sreg ES { "%es" };
Sreg FS { "%fs" };
Sreg GS { "%gs" };

cr CR0 { "%cr0" };
cr CR1 { "%cr1" };
cr CR2 { "%cr2" };
cr CR3 { "%cr3" };
cr CR4 { "%cr4" };
cr CR5 { "%cr5" };
cr CR6 { "%cr6" };
cr CR7 { "%cr7" };
cr CR8 { "%cr8" };

dr DR0 { "%dr0" };
dr DR1 { "%dr1" };
dr DR2 { "%dr2" };
dr DR3 { "%dr3" };
dr DR4 { "%dr4" };
dr DR5 { "%dr5" };
dr DR6 { "%dr6" };
dr DR7 { "%dr7" };

st ST;

// Data transfer instructions
Instruction_MOV MOV { asmout, "mov" };
Instruction_CMOVx CMOVA { asmout, "cmova" };
Instruction_CMOVx CMOVAE { asmout, "cmovae" };
Instruction_CMOVx CMOVB { asmout, "cmovb" };
Instruction_CMOVx CMOVBE { asmout, "cmovbe" };
Instruction_CMOVx CMOVC { asmout, "cmovc" };
Instruction_CMOVx CMOVE { asmout, "cmove" };
Instruction_CMOVx CMOVG { asmout, "cmovg" };
Instruction_CMOVx CMOVGE { asmout, "cmovge" };
Instruction_CMOVx CMOVL { asmout, "cmovl" };
Instruction_CMOVx CMOVLE { asmout, "cmovle" };
Instruction_CMOVx CMOVNA { asmout, "cmovna" };
Instruction_CMOVx CMOVNAE { asmout, "cmovnae" };
Instruction_CMOVx CMOVNBE { asmout, "cmovnbe" };
Instruction_CMOVx CMOVNC { asmout, "cmovnc" };
Instruction_CMOVx CMOVNE { asmout, "cmovne" };
Instruction_CMOVx CMOVNG { asmout, "cmovng" };
Instruction_CMOVx CMOVNGE { asmout, "cmovnge" };
Instruction_CMOVx CMOVNL { asmout, "cmovnl" };
Instruction_CMOVx CMOVNLE { asmout, "cmovnle" };
Instruction_CMOVx CMOVNO { asmout, "cmovno" };
Instruction_CMOVx CMOVNP { asmout, "cmovnp" };
Instruction_CMOVx CMOVNS { asmout, "cmovns" };
Instruction_CMOVx CMOVNZ { asmout, "cmovnz" };
Instruction_CMOVx CMOVO { asmout, "cmovo" };
Instruction_CMOVx CMOVP { asmout, "cmovp" };
Instruction_CMOVx CMOVPE { asmout, "cmovpe" };
Instruction_CMOVx CMOVPO { asmout, "cmovpo" };
Instruction_CMOVx CMOVS { asmout, "cmovs" };
Instruction_CMOVx CMOVZ { asmout, "cmovz" };
Instruction_PUSH PUSH { asmout, "push" };
Instruction1_Type1 PUSHA { asmout, "pusha" };
Instruction1_Type1 PUSHAD { asmout, "pushal" };
Instruction_POP POP { asmout, "pop" };
Instruction1_Type1 POPA { asmout, "popa" };
Instruction1_Type1 POPAD { asmout, "popal" };
Instruction1_Type1 CWD { asmout, "cwtd" };
Instruction1_Type1 CDQ { asmout, "cltd" };
Instruction1_Type1 CQO { asmout, "cqto" };
Instruction_MovWithExt MOVSX { asmout, "movs" };
Instruction_MovWithExt MOVZX { asmout, "movz" };
Instruction_XCHG XCHG { asmout, "xchg" };
Instruction2_Type3 BSWAP { asmout, "bswap" };
Instruction_XADD XADD { asmout, "xadd" };
Instruction_CMPXCHG CMPXCHG { asmout, "cmpxchg" };
Instruction1_Type7 CMPXCHG8B { asmout, "cmpxchg8b" };
Instruction1_Type8 CMPXCHG16B { asmout, "cmpxchg16b" };

// Binary arithmetic instructions
Instruction_Arithm1 ADD { asmout, "add" };
Instruction_Arithm1 ADC { asmout, "adc" };
Instruction_Arithm1 SUB { asmout, "sub" };
Instruction_Arithm1 SBB { asmout, "sbb" };
Instruction_Arithm1 CMP { asmout, "cmp" };
Instruction_ADX ADCX { asmout, "adcx" };
Instruction_ADX ADOX { asmout, "adox" };
Instruction_Arithm2 MUL { asmout, "mul" };
Instruction_Arithm2 IMUL { asmout, "imul" };
Instruction_Arithm2 DIV { asmout, "div" };
Instruction_Arithm2 IDIV { asmout, "idiv" };
Instruction_Arithm2 NEG { asmout, "neg" };
Instruction_Arithm2 INC { asmout, "inc" };
Instruction_Arithm2 DEC { asmout, "dec" };

// Decimal arithmetic instructions
Instruction1_Type1 AAA { asmout, "aaa" };
Instruction2_Type1 AAD { asmout, "aad" };
Instruction2_Type1 AAM { asmout, "aam" };
Instruction1_Type1 AAS { asmout, "aas" };
Instruction1_Type1 DAA { asmout, "daa" };
Instruction1_Type1 DAS { asmout, "das" };

// Logical instructions
Instruction_Arithm1 AND { asmout, "and" };
Instruction_Arithm1 OR { asmout, "or" };
Instruction_Arithm1 XOR { asmout, "xor" };
Instruction_Arithm2 NOT { asmout, "not" };

// Shift and rotate instructions
Instruction_Shift SAL { asmout, "sal" };
Instruction_Shift SAR { asmout, "sar" };
Instruction_Shift SHL { asmout, "shl" };
Instruction_Shift SHR { asmout, "shr" };
Instruction_Shift RCL { asmout, "rcl" };
Instruction_Shift RCR { asmout, "rcr" };
Instruction_Shift ROL { asmout, "rol" };
Instruction_Shift ROR { asmout, "ror" };
Instruction_ShiftDouble SHLD { asmout, "shld" };
Instruction_ShiftDouble SHRD { asmout, "shrd" };

// Bit and byte instructions
Instruction_BitTest BT { asmout, "bt" };
Instruction_BitTest BTC { asmout, "btc" };
Instruction_BitTest BTR { asmout, "btr" };
Instruction_BitTest BTS { asmout, "bts" };
Instruction_BitScan BSF { asmout, "bsf" };
Instruction_BitScan BSR { asmout, "bsr" };
Instruction2_Type7 SETA { asmout, "seta" };
Instruction2_Type7 SETAE { asmout, "setae" };
Instruction2_Type7 SETB { asmout, "setb" };
Instruction2_Type7 SETBE { asmout, "setbe" };
Instruction2_Type7 SETC { asmout, "setc" };
Instruction2_Type7 SETE { asmout, "sete" };
Instruction2_Type7 SETG { asmout, "setg" };
Instruction2_Type7 SETGE { asmout, "setge" };
Instruction2_Type7 SETL { asmout, "setl" };
Instruction2_Type7 SETLE { asmout, "setle" };
Instruction2_Type7 SETNA { asmout, "setna" };
Instruction2_Type7 SETNAE { asmout, "setnae" };
Instruction2_Type7 SETNB { asmout, "setnb" };
Instruction2_Type7 SETNBE { asmout, "setnbe" };
Instruction2_Type7 SETNC { asmout, "setnc" };
Instruction2_Type7 SETNE { asmout, "setne" };
Instruction2_Type7 SETNG { asmout, "setng" };
Instruction2_Type7 SETNGE { asmout, "setnge" };
Instruction2_Type7 SETNL { asmout, "setnl" };
Instruction2_Type7 SETNLE { asmout, "setle" };
Instruction2_Type7 SETNO { asmout, "setno" };
Instruction2_Type7 SETNP { asmout, "setnp" };
Instruction2_Type7 SETNS { asmout, "setns" };
Instruction2_Type7 SETNZ { asmout, "setnz" };
Instruction2_Type7 SETO { asmout, "seto" };
Instruction2_Type7 SETP { asmout, "setp" };
Instruction2_Type7 SETPE { asmout, "setpe" };
Instruction2_Type7 SETPO { asmout, "setpo" };
Instruction2_Type7 SETS { asmout, "sets" };
Instruction2_Type7 SETZ { asmout, "setz" };
Instruction_TEST TEST { asmout, "test" };

// Control transfer instructions
Instruction_Branch JMP { asmout, "jmp" };
Instruction_Branch JMP_FAR { asmout, "ljmp" };
Instruction1_Type4 JA { asmout, "ja" };
Instruction1_Type4 JAE { asmout, "jae" };
Instruction1_Type4 JB { asmout, "jb" };
Instruction1_Type4 JBE { asmout, "jbe" };
Instruction1_Type4 JC { asmout, "jc" };
Instruction1_Type4 JCXZ { asmout, "jcxz" };
Instruction1_Type4 JECXZ { asmout, "jecxz" };
Instruction1_Type4 JRCXZ { asmout, "jrcxz" };
Instruction1_Type4 JE { asmout, "je" };
Instruction1_Type4 JG { asmout, "jg" };
Instruction1_Type4 JGE { asmout, "jge" };
Instruction1_Type4 JL { asmout, "jl" };
Instruction1_Type4 JLE { asmout, "jle" };
Instruction1_Type4 JNA { asmout, "jna" };
Instruction1_Type4 JNAE { asmout, "jnae" };
Instruction1_Type4 JNB { asmout, "jnb" };
Instruction1_Type4 JNBE { asmout, "jnbe" };
Instruction1_Type4 JNC { asmout, "jnc" };
Instruction1_Type4 JNE { asmout, "jne" };
Instruction1_Type4 JNG { asmout, "jng" };
Instruction1_Type4 JNGE { asmout, "jnge" };
Instruction1_Type4 JNL { asmout, "jnl" };
Instruction1_Type4 JNLE { asmout, "jnle" };
Instruction1_Type4 JNO { asmout, "jno" };
Instruction1_Type4 JNP { asmout, "jnp" };
Instruction1_Type4 JNS { asmout, "jns" };
Instruction1_Type4 JNZ { asmout, "jnz" };
Instruction1_Type4 JO { asmout, "jo" };
Instruction1_Type4 JP { asmout, "jp" };
Instruction1_Type4 JPE { asmout, "jpe" };
Instruction1_Type4 JPO { asmout, "jpo" };
Instruction1_Type4 JS { asmout, "js" };
Instruction1_Type4 JZ { asmout, "jz" };
Instruction_Branch CALL { asmout, "call" };
Instruction_Branch CALL_FAR { asmout, "lcall" };
Instruction2_Type2 RET { asmout, "ret" };
Instruction2_Type2 RET_FAR { asmout, "lret" };
Instruction1_Type9 ENTER { asmout, "enter" };
Instruction1_Type1 LEAVE { asmout, "leave" };
Instruction1_Type10 INT { asmout, "int" };
Instruction1_Type1 INTO { asmout, "into" };
Instruction1_Type1 IRET { asmout, "iret" };
Instruction1_Type1 IRETD { asmout, "iretl" };
Instruction1_Type1 IRETQ { asmout, "iretq" };
Instruction1_Type4 LOOP { asmout, "loop" };
Instruction1_Type4 LOOPE { asmout, "loope" };
Instruction1_Type4 LOOPNE { asmout, "loopne" };
Instruction1_Type4 LOOPZ { asmout, "loopz" };
Instruction1_Type4 LOOPNZ { asmout, "loopnz" };
Instruction2_Type8 BOUND { asmout, "bound" };

// String instructions
Instruction1_Type1 MOVSB { asmout, "movsb" };
Instruction1_Type1 MOVSW { asmout, "movsw" };
Instruction1_Type1 MOVSD { asmout, "movsl" };
Instruction1_Type1 MOVSQ { asmout, "movsq" };
Instruction1_Type1 CMPSB { asmout, "cmpsb" };
Instruction1_Type1 CMPSW { asmout, "cmpsw" };
Instruction1_Type1 CMPSD { asmout, "cmpsl" };
Instruction1_Type1 CMPSQ { asmout, "cmpsq" };
Instruction1_Type1 SCASB { asmout, "scasb" };
Instruction1_Type1 SCASW { asmout, "scasw" };
Instruction1_Type1 SCASD { asmout, "scasl" };
Instruction1_Type1 SCASQ { asmout, "scasq" };
Instruction1_Type1 LODSB { asmout, "lodsb" };
Instruction1_Type1 LODSW { asmout, "lodsw" };
Instruction1_Type1 LODSD { asmout, "lodsl" };
Instruction1_Type1 LODSQ { asmout, "lodsq" };
Instruction1_Type1 STOSB { asmout, "stosb" };
Instruction1_Type1 STOSW { asmout, "stosw" };
Instruction1_Type1 STOSD { asmout, "stosl" };
Instruction1_Type1 STOSQ { asmout, "stosq" };
Instruction1_Type11 REP { asmout, "rep" };
Instruction1_Type11 REPE { asmout, "repe" };
Instruction1_Type11 REPZ { asmout, "repz" };
Instruction1_Type11 REPNE { asmout, "repne" };
Instruction1_Type11 REPNZ { asmout, "repnz" };

// I/O instructions
Instruction_IN IN { asmout, "in" };
Instruction1_Type1 INSB { asmout, "insb" };
Instruction1_Type1 INSW { asmout, "insw" };
Instruction1_Type1 INSD { asmout, "insl" };
Instruction_OUT OUT { asmout, "out" };
Instruction1_Type1 OUTSB { asmout, "outsb" };
Instruction1_Type1 OUTSW { asmout, "outsw" };
Instruction1_Type1 OUTSD { asmout, "outsl" };

// Flag control (EFLAG) instructions
Instruction1_Type1 CLC { asmout, "clc" };
Instruction1_Type1 CLD { asmout, "cld" };
Instruction1_Type1 CLI { asmout, "cli" };
Instruction1_Type1 CMC { asmout, "cmc" };
Instruction1_Type1 LAHF { asmout, "lahf" };
Instruction1_Type1 SAHF { asmout, "sahf" };
Instruction1_Type1 PUSHF { asmout, "pushf" };
Instruction1_Type1 POPF { asmout, "popf" };
Instruction1_Type1 POPFD { asmout, "popfl" };
Instruction1_Type1 POPFQ { asmout, "popfq" };
Instruction1_Type1 STC { asmout, "stc" };
Instruction1_Type1 STI { asmout, "sti" };
Instruction1_Type1 STD { asmout, "std" };

// Segment register instructions
Instruction_LoadFarPointer LDS { asmout, "lds" };
Instruction_LoadFarPointer LES { asmout, "les" };
Instruction_LoadFarPointer LFS { asmout, "lfs" };
Instruction_LoadFarPointer LGS { asmout, "lgs" };
Instruction_LoadFarPointer LSS { asmout, "lss" };

// Miscelleneous instructions
Instruction_LEA LEA { asmout, "lea" };
Instruction_NOP NOP { asmout, "nop" };
Instruction1_Type1 UD { asmout, ".byte 0x0F, 0xFF" };
Instruction1_Type1 UD1 { asmout, "ud1" };
Instruction1_Type1 UD2 { asmout, "ud2" };
Instruction1_Type1 CPUID { asmout, "cpuid" };
Instruction1_Type1 XLAT { asmout, "xlat" };
Instruction1_Type2 CLFLUSH { asmout, "clflush" };
Instruction1_Type2 CLFLUSHOPT { asmout, "clflushopt" };

// User mode extended state save/restore instructions
Instruction1_Type2 XSAVE { asmout, "xsave" };
Instruction1_Type2 XSAVEC { asmout, "xsavec" };
Instruction1_Type2 XSAVEOPT { asmout, "xsaveopt" };
Instruction1_Type2 XRSTOR { asmout, "xrstor" };
Instruction1_Type1 XGETBV { asmout, "xgetbv" };

// Random number generator instructions
Instruction_RDRAND RDRAND { asmout, "rdrand" };
Instruction_RDRAND RDSEED { asmout, "rdseed" };

// x87 FPU data transfer instructions
Instruction_FLD FLD { asmout, "fld" };
Instruction_FILD FILD { asmout, "fild" };
Instruction_FIST FIST { asmout, "fist" };
Instruction_FISTP FISTP { asmout, "fistp" };
Instruction_FST FST { asmout, "fst" };
Instruction_FSTP FSTP { asmout, "fstp" };
Instruction1_Type12 FBLD { asmout, "fbld" };
Instruction1_Type12 FBSTP { asmout, "fbstp" };
Instruction2_Type5 FXCH { asmout, "fxch" };
Instruction1_Type5 FCMOVB { asmout, "fcmovb" };
Instruction1_Type5 FCMOVE { asmout, "fcmove" };
Instruction1_Type5 FCMOVBE { asmout, "fcmovbe" };
Instruction1_Type5 FCMOVU { asmout, "fcmovu" };
Instruction1_Type5 FCMOVNB { asmout, "fcmovnb" };
Instruction1_Type5 FCMOVNE { asmout, "fcmovne" };
Instruction1_Type5 FCMOVNBE { asmout, "fcmovnbe" };
Instruction1_Type5 FCMOVNU { asmout, "fcmovnu" };

// x87 FPU basic arithmetic instructions
Instruction_FPU_Arithm1 FADD { asmout, "fadd" };
Instruction_FPU_Arithm2 FADDP { asmout, "faddp" };
Instruction_FPU_Arithm3 FIADD { asmout, "fiadd" };
Instruction_FPU_Arithm1 FSUB { asmout, "fsub" };
Instruction_FPU_Arithm2 FSUBP { asmout, "fsubp" };
Instruction_FPU_Arithm3 FISUB { asmout, "fisub" };
Instruction_FPU_Arithm1 FSUBR { asmout, "fsubr" };
Instruction_FPU_Arithm2 FSUBRP { asmout, "fsubrp" };
Instruction_FPU_Arithm3 FISUBR { asmout, "fisubr" };
Instruction_FPU_Arithm1 FMUL { asmout, "fmul" };
Instruction_FPU_Arithm2 FMULP { asmout, "fmulp" };
Instruction_FPU_Arithm3 FIMUL { asmout, "fimul" };
Instruction_FPU_Arithm1 FDIV { asmout, "fdiv" };
Instruction_FPU_Arithm2 FDIVP { asmout, "fdivp" };
Instruction_FPU_Arithm3 FIDIV { asmout, "fidiv" };
Instruction_FPU_Arithm1 FDIVR { asmout, "fdivr" };
Instruction_FPU_Arithm2 FDIVRP { asmout, "fdivrp" };
Instruction_FPU_Arithm3 FIDIVR { asmout, "fidivr" };
Instruction1_Type1 FPREM { asmout, "fprem" };
Instruction1_Type1 FPREM1 { asmout, "fprem1" };
Instruction1_Type1 FABS { asmout, "fabs" };
Instruction1_Type1 FCHS { asmout, "fchs" };
Instruction1_Type1 FRNDINT { asmout, "frndint" };
Instruction1_Type1 FSCALE { asmout, "fscale" };
Instruction1_Type1 FSQRT { asmout, "fsqrt" };
Instruction1_Type1 FXTRACT { asmout, "fxtract" };

// x87 FPU comparison instructions
Instruction_FCOM FCOM = { asmout, "fcom" };
Instruction_FCOM FCOMP = { asmout, "fcomp" };
Instruction1_Type1 FCOMPP = { asmout, "fcompp" };
Instruction2_Type5 FUCOM = { asmout, "fucom" };
Instruction2_Type5 FUCOMP = { asmout, "fucomp" };
Instruction1_Type1 FUCOMPP = { asmout, "fucompp" };
Instruction_FICOM FICOM = { asmout, "ficom" };
Instruction_FICOM FICOMP = { asmout, "ficomp" };
Instruction1_Type5 FCOMI = { asmout, "fcomi" };
Instruction1_Type5 FCOMIP = { asmout, "fcomip" };
Instruction1_Type5 FUCOMI = { asmout, "fucomi" };
Instruction1_Type5 FUCOMIP = { asmout, "fucomip" };
Instruction1_Type1 FTST { asmout, "ftst" };
Instruction1_Type1 FXAM { asmout, "fxam" };

// x87 FPU transcendental instructions
Instruction1_Type1 FSIN { asmout, "fsin" };
Instruction1_Type1 FSINCOS { asmout, "fsincos" };
Instruction1_Type1 FCOS { asmout, "fcos" };
Instruction1_Type1 FPTAN { asmout, "fptan" };
Instruction1_Type1 FPATAN { asmout, "fpatan" };
Instruction1_Type1 F2XM1 { asmout, "f2xm1" };
Instruction1_Type1 FYL2X { asmout, "fyl2x" };
Instruction1_Type1 FYL2XP1 { asmout, "fyl2xp1" };

// x87 FPU load constants instructions
Instruction1_Type1 FLD1 { asmout, "fld1" };
Instruction1_Type1 FLDL2T { asmout, "fldl2t" };
Instruction1_Type1 FLDL2E { asmout, "fldl2e" };
Instruction1_Type1 FLDPI { asmout, "fldpi" };
Instruction1_Type1 FLDLG2 { asmout, "fldlg2" };
Instruction1_Type1 FLDLN2 { asmout, "fldln2" };
Instruction1_Type1 FLDZ { asmout, "fldz" };

// x87 FPU control instructions
Instruction1_Type1 FINCSTP { asmout, "fincstp" };
Instruction1_Type1 FDECSTP { asmout, "fdecstp" };
Instruction1_Type13 FFREE { asmout, "ffree" };
Instruction1_Type1 FINIT { asmout, "finit" };
Instruction1_Type1 FNINIT { asmout, "fninit" };
Instruction1_Type1 FCLEX { asmout, "fclex" };
Instruction1_Type1 FNCLEX { asmout, "fnclex" };
Instruction1_Type6 FSTCW { asmout, "fstcw" };
Instruction1_Type6 FNSTCW { asmout, "fnstcw" };
Instruction1_Type6 FLDCW { asmout, "fldcw" };
Instruction1_Type2 FSTENV { asmout, "fstenv" };
Instruction1_Type2 FNSTENV { asmout, "fnstenv" };
Instruction1_Type2 FLDENV { asmout, "fldenv" };
Instruction1_Type2 FSAVE { asmout, "fsave" };
Instruction1_Type2 FNSAVE { asmout, "fnsave" };
Instruction1_Type2 FRSTOR { asmout, "frstor" };
Instruction2_Type6 FSTSW { asmout, "fstsw" };
Instruction2_Type6 FNSTSW { asmout, "fnstsw" };
Instruction1_Type1 FNOP { asmout, "fnop" };

// x87 FPU and SIMD state management instructions
Instruction1_Type2 FXSAVE { asmout, "fxsave" };
Instruction1_Type2 FXRSTOR { asmout, "fxrstor" };

// MMX data transfer instructions
Instruction_MOVD MOVD { asmout, "movd" };
Instruction_MOVQ MOVQ { asmout, "movq" };

// MMX conversion instructions
Instruction_MMX_Op PACKSSWB  { asmout, "packsswb" };
Instruction_MMX_Op PACKSSDW  { asmout, "packssdw" };
Instruction_MMX_Op PUNPCKHBW { asmout, "punpckhbw" };
Instruction_MMX_Op PUNPCKHWD { asmout, "punpckhwd" };
Instruction_MMX_Op PUNPCKHDQ { asmout, "punpckhdq" };
Instruction_MMX_Op PUNPCKLBW { asmout, "punpcklbw" };
Instruction_MMX_Op PUNPCKLWD { asmout, "punpcklwd" };
Instruction_MMX_Op PUNPCKLDQ { asmout, "punpckldq" };

// MMX packed arithmetic instructions
Instruction_MMX_Op PADDB   { asmout, "paddb"   };
Instruction_MMX_Op PADDW   { asmout, "paddw"   };
Instruction_MMX_Op PADDD   { asmout, "paddd"   };
Instruction_MMX_Op PADDSB  { asmout, "paddsb"  };
Instruction_MMX_Op PADDSW  { asmout, "paddsw"  };
Instruction_MMX_Op PADDUSB { asmout, "paddusb" };
Instruction_MMX_Op PADDUSW { asmout, "paddusw" };
Instruction_MMX_Op PSUBB   { asmout, "psubb"   };
Instruction_MMX_Op PSUBW   { asmout, "psubw"   };
Instruction_MMX_Op PSUBD   { asmout, "psubd"   };
Instruction_MMX_Op PSUBSB  { asmout, "psubsb"  };
Instruction_MMX_Op PSUBSW  { asmout, "psubsw"  };
Instruction_MMX_Op PSUBUSB { asmout, "psubusb" };
Instruction_MMX_Op PSUBUSW { asmout, "psubusw" };
Instruction_MMX_Op PMULHW  { asmout, "pmulhw"  };
Instruction_MMX_Op PMULLW  { asmout, "pmullw"  };
Instruction_MMX_Op PMADDWD { asmout, "pmaddwd" };

// MMX comparison instructions
Instruction_MMX_Op PCMPEQB { asmout, "pcmpeqb" };
Instruction_MMX_Op PCMPEQW { asmout, "pcmpeqw" };
Instruction_MMX_Op PCMPEQD { asmout, "pcmpeqd" };
Instruction_MMX_Op PCMPGTB { asmout, "pcmpgtb" };
Instruction_MMX_Op PCMPGTW { asmout, "pcmpgtw" };
Instruction_MMX_Op PCMPGTD { asmout, "pcmpgtd" };

// MMX logical instructions
Instruction_MMX_Op PAND  { asmout, "pand"  };
Instruction_MMX_Op PANDN { asmout, "pandn" };
Instruction_MMX_Op POR   { asmout, "por"   };
Instruction_MMX_Op PXOR  { asmout, "pxor"  };

// MMX shift and rotate instructions
Instruction_MMX_Shift PSLLW { asmout, "psllw" };
Instruction_MMX_Shift PSLLD { asmout, "pslld" };
Instruction_MMX_Shift PSLLQ { asmout, "psllq" };
Instruction_MMX_Shift PSRLW { asmout, "psrlw" };
Instruction_MMX_Shift PSRLD { asmout, "psrld" };
Instruction_MMX_Shift PSRLQ { asmout, "psrlq" };
Instruction_MMX_Shift PSRAW { asmout, "psraw" };
Instruction_MMX_Shift PSRAD { asmout, "psrad" };

// MMX state management instructions
Instruction1_Type1 EMMS { asmout, "emms" };

// SSE data transfer instructions
Instruction_SSE_MOV1 MOVAPS { asmout, "movaps" };
Instruction_SSE_MOV1 MOVUPS { asmout, "movups" };
Instruction2_Type9 MOVHPS { asmout, "movhps" };
Instruction2_Type9 MOVLPS { asmout, "movlps" };
Instruction1_Type3 MOVLHPS { asmout, "movlhps" };
Instruction1_Type3 MOVHLPS { asmout, "movhlps" };
Instruction2_Type4 MOVMSKPS { asmout, "movmskps" };
Instruction_SSE_MOV5 MOVSS { asmout, "movss" };

// SSE packed arithmetic instructions
Instruction2_Type10 ADDPS { asmout, "addps" };
Instruction2_Type11 ADDSS { asmout, "addss" };
Instruction2_Type10 SUBPS { asmout, "subps" };
Instruction2_Type11 SUBSS { asmout, "subss" };
Instruction2_Type10 MULPS { asmout, "mulps" };
Instruction2_Type11 MULSS { asmout, "mulss" };
Instruction2_Type10 DIVPS { asmout, "divps" };
Instruction2_Type11 DIVSS { asmout, "divss" };
Instruction2_Type10 RCPPS { asmout, "rcpps" };
Instruction2_Type11 RCPSS { asmout, "rcpss" };
Instruction2_Type10 SQRTPS { asmout, "sqrtps" };
Instruction2_Type11 SQRTSS { asmout, "sqrtss" };
Instruction2_Type10 MAXPS { asmout, "maxps" };
Instruction2_Type11 MAXSS { asmout, "maxss" };
Instruction2_Type10 MINPS { asmout, "minps" };
Instruction2_Type11 MINSS { asmout, "minss" };

// SSE comparison instructions
Instruction2_Type12 CMPPS { asmout, "cmpps" };
Instruction_SSE_Cmp2 CMPSS { asmout, "cmpss" };
Instruction2_Type11 COMISS { asmout, "comiss" };
Instruction2_Type11 UCOMISS { asmout, "ucomiss" };

// SSE logical instructions
Instruction2_Type10 ANDPS { asmout, "andps" };
Instruction2_Type10 ANDNPS { asmout, "andnps" };
Instruction2_Type10 ORPS { asmout, "orps" };
Instruction2_Type10 XORPS { asmout, "xorps" };

// SSE shuffle and unpack instructions
Instruction2_Type12 SHUFPS { asmout, "shufps" };
Instruction2_Type10 UNPCKHPS { asmout, "unpckhps" };
Instruction2_Type10 UNPCKLPS { asmout, "unpcklps" };

// SSE convertion instructions
Instruction_SSE_Conv1 CVTPI2PS { asmout, "cvtpi2ps" };
Instruction_SSE_Conv2 CVTSI2SS { asmout, "cvtsi2ss" };
Instruction_SSE_Conv3 CVTPS2PI { asmout, "cvtps2pi" };
Instruction_SSE_Conv3 CVTTPS2PI { asmout, "cvttps2pi" };
Instruction_SSE_Conv4 CVTSS2SI { asmout, "cvtss2si" };
Instruction_SSE_Conv4 CVTTSS2SI { asmout, "cvttss2si" };

// SSE MXCSR state management instructions
Instruction1_Type14 LDMXCSR { asmout, "ldmxcsr" };
Instruction1_Type14 STMXCSR { asmout, "stmxcsr" };

// SSE 64-bit SIMD integer instructions
Instruction_PAVGx PAVGB { asmout, "pavgb" };
Instruction_PAVGx PAVGW { asmout, "pavgw" };
Instruction_PEXTRW PEXTRW { asmout, "pextrw" };
Instruction_PINSRW PINSRW { asmout, "pinsrw" };
Instruction_PMxxUB PMAXUB { asmout, "pmaxub" };
Instruction_PMxxSW PMAXSW { asmout, "pmaxsw" };
Instruction_PMxxUB PMINUB { asmout, "pminub" };
Instruction_PMxxSW PMINSW { asmout, "pminsw" };
Instruction_PMOVMSKB PMOVMSKB { asmout, "pmovmskb" };
Instruction_PMULHUW PMULHUW { asmout, "pmulhuw" };
Instruction_PSADBW PSADBW { asmout, "psadbw" };
Instruction_PSHUFW PSHUFW { asmout, "pshufw" };

// SSE cacheability control, prefetch, and instruction ordering instructions
Instruction1_Type15 MASKMOVQ { asmout, "maskmovq" };
Instruction1_Type16 MOVNTQ { asmout, "movntq" };
Instruction1_Type17 MOVNTPS { asmout, "movntps" };
Instruction1_Type2 PREFETCHT0 { asmout, "prefetcht0" };
Instruction1_Type2 PREFETCHT1 { asmout, "prefetcht1" };
Instruction1_Type2 PREFETCHT2 { asmout, "prefetcht2" };
Instruction1_Type2 PREFETCHNTA { asmout, "prefetchnta" };
Instruction1_Type2 PREFETCHW { asmout, "prefetchw" };
Instruction1_Type2 PREFETCHWT1 { asmout, "prefetchwt1" };
Instruction1_Type1 SFENCE { asmout, "sfence" };

// SSE2 data movement instructions
Instruction_MOVxPD1 MOVAPD { asmout, "movapd" };
Instruction_MOVxPD1 MOVUPD { asmout, "movupd" };
Instruction1_Type18 MOVHPD { asmout, "movhpd" };
Instruction1_Type18 MOVLPD { asmout, "movlpd" };
Instruction2_Type4 MOVMSKPD { asmout, "movmskpd" };
Instruction_MOVSD MOVSD_SSE2 { asmout, "movsd" };

// SSE2 packed arithmetic instructions
Instruction2_Type10 ADDPD { asmout, "addpd" };
Instruction_SSE2_Arithm2 ADDSD { asmout, "addsd" };
Instruction2_Type10 SUBPD { asmout, "subpd" };
Instruction_SSE2_Arithm2 SUBSD { asmout, "subsd" };
Instruction2_Type10 MULPD { asmout, "mulpd" };
Instruction_SSE2_Arithm2 MULSD { asmout, "mulsd" };
Instruction2_Type10 DIVPD { asmout, "divpd" };
Instruction_SSE2_Arithm2 DIVSD { asmout, "divsd" };
Instruction2_Type10 SQRTPD { asmout, "sqrtpd" };
Instruction_SSE2_Arithm2 SQRTSD { asmout, "sqrtsd" };
Instruction2_Type10 MAXPD { asmout, "maxpd" };
Instruction_SSE2_Arithm2 MAXSD { asmout, "maxsd" };
Instruction2_Type10 MINPD { asmout, "minpd" };
Instruction_SSE2_Arithm2 MINSD { asmout, "minsd" };

// SSE2 logical instructions
Instruction2_Type10 ANDPD { asmout, "andpd" };
Instruction2_Type10 ANDNPD { asmout, "andnpd" };
Instruction2_Type10 ORPD { asmout, "orpd" };
Instruction2_Type10 XORPD { asmout, "xorpd" };

// SSE2 comparison instructions
Instruction_SSE2_Cmp1 CMPPD { asmout, "cmppd" };
Instruction_SSE2_Cmp2 CMPSD_SSE2 { asmout, "cmpsd" };
Instruction_SSE2_Cmp3 COMISD { asmout, "comisd" };
Instruction_SSE2_Cmp3 UCOMISD { asmout, "ucomisd" };

// SSE2 shuffle and unpack instructions
Instruction_SHUFPD SHUFPD { asmout, "shufpd" };
Instruction2_Type10 UNPCKHPD { asmout, "unpckhpd" };
Instruction2_Type10 UNPCKLPD { asmout, "unpcklpd" };

// SSE2 convertion instructions
Instruction_CVTPD2PI CVTPD2PI { asmout, "cvtpd2pi" };
Instruction_CVTPD2PI CVTTPD2PI { asmout, "cvttpd2pi" };
Instruction_CVTPI2PD CVTPI2PD { asmout, "cvtpi2pd" };
Instruction2_Type10 CVTPD2DQ { asmout, "cvtpd2dq" };
Instruction2_Type10 CVTTPD2DQ { asmout, "cvttpd2dq" };
Instruction_CVTDQ2PD CVTDQ2PD { asmout, "cvtdq2pd" };
Instruction_CVTPS2PD CVTPS2PD { asmout, "cvtps2pd" };
Instruction2_Type10 CVTPD2PS { asmout, "cvtpd2ps" };
Instruction2_Type11 CVTSS2SD { asmout, "cvtss2sd" };
Instruction_CVTSD2SS CVTSD2SS { asmout, "cvtsd2ss" };
Instruction_CVTSD2SI CVTSD2SI { asmout, "cvtsd2si" };
Instruction_CVTSD2SI CVTTSD2SI { asmout, "cvttsd2si" };
Instruction_CVTSI2SD CVTSI2SD { asmout, "cvtsi2sd" };

// SSE2 packed single-precision floating point values
Instruction2_Type10 CVTDQ2PS { asmout, "cvtdq2ps" };
Instruction2_Type10 CVTPS2DQ { asmout, "cvtps2dq" };
Instruction2_Type10 CVTTPS2DQ { asmout, "cvttps2dq" };

// SSE2 128-bit SIMD integer instructions
Instruction_MOVDQx MOVDQA { asmout, "movdqa" };
Instruction_MOVDQx MOVDQU { asmout, "movdqu" };
Instruction1_Type20 MOVQ2DQ { asmout, "movq2dq" };
Instruction1_Type21 MOVDQ2Q { asmout, "movdq2q" };
Instruction_PMULUDQ PMULUDQ { asmout, "pmuludq" };
Instruction_SSE2_Int_Arithm1 PADDQ { asmout, "paddq" };
Instruction_SSE2_Int_Arithm1 PSUBQ { asmout, "psubq" };
Instruction_SSE2_Int_Shuffle PSHUFLW { asmout, "pshuflw" };
Instruction_SSE2_Int_Shuffle PSHUFHW { asmout, "pshufhw" };
Instruction_SSE2_Int_Shuffle PSHUFD { asmout, "pshufd" };
Instruction1_Type22 PSLLDQ { asmout, "pslldq" };
Instruction1_Type22 PSRLDQ { asmout, "psrldq" };
Instruction2_Type10 PUNPCKHQDQ { asmout, "punpckhqdq" };
Instruction2_Type10 PUNPCKLQDQ { asmout, "punpcklqdq" };

// SSE2 cacheability control and ordering instructions
Instruction1_Type1 LFENCE { asmout, "lfence" };
Instruction1_Type1 MFENCE { asmout, "mfence" };
Instruction1_Type1 PAUSE { asmout, "pause" };
Instruction1_Type3 MASKMOVDQU { asmout, "maskmovdqu" };
Instruction1_Type19 MOVNTPD { asmout, "movntpd" };
Instruction1_Type19 MOVNTDQ { asmout, "movntdq" };
Instruction_MOVNTI MOVNTI { asmout, "movnti" };

// SSE3 x87-FP integer convertion instruction
Instruction_FISTTP FISTTP { asmout, "fisttp" };

// SSE3 specialized 128-bit unaligned data load instruction
Instruction1_Type23 LDDQU { asmout, "lddqu" };

// SSE3 SIMD floating-point packed ADD/SUB instructions
Instruction2_Type10 ADDSUBPS { asmout, "addsubps" };
Instruction2_Type10 ADDSUBPD { asmout, "addsubpd" };

// SSE3 SIMD floating-point horizontal ADD/SUB instructions
Instruction2_Type10 HADDPS { asmout, "haddps" };
Instruction2_Type10 HSUBPS { asmout, "hsubps" };
Instruction2_Type10 HADDPD { asmout, "haddpd" };
Instruction2_Type10 HSUBPD { asmout, "hsubpd" };

// SSE3 SIMD floating-point LOAD/MOVE/DUPLICATE instructions
Instruction2_Type10 MOVSHDUP { asmout, "movshdup" };
Instruction2_Type10 MOVSLDUP { asmout, "movsldup" };
Instruction_SSE3_Arithm2 MOVDDUP { asmout, "movddup" };

// SSE3 agent synchronization instructions
Instruction1_Type1 MONITOR { asmout, "monitor" };
Instruction1_Type1 MWAIT { asmout, "mwait" };

// SSSE3: horizontal addition/subtraction
Instruction_SSSE3_Arithm1 PHADDW { asmout, "phaddw" };
Instruction_SSSE3_Arithm1 PHADDSW { asmout, "phaddsw" };
Instruction_SSSE3_Arithm1 PHADDD { asmout, "phaddd" };
Instruction_SSSE3_Arithm1 PHSUBW { asmout, "phsubw" };
Instruction_SSSE3_Arithm1 PHSUBSW { asmout, "phsubsw" };
Instruction_SSSE3_Arithm1 PHSUBD { asmout, "phsubd" };

// SSSE3: packed absolute values
Instruction_SSSE3_Arithm1 PABSB { asmout, "pabsb" };
Instruction_SSSE3_Arithm1 PABSW { asmout, "pabsw" };
Instruction_SSSE3_Arithm1 PABSD { asmout, "pabsd" };

// SSSE3: multiply and add packed signed and unsigned bytes
Instruction_SSSE3_Arithm1 PMADDUBSW { asmout, "pmaddubsw" };

// SSSE3: packed multiply high with round and scale
Instruction_SSSE3_Arithm1 PMULHRSW { asmout, "pmulhrsw" };

// SSSE3: packed shuffle bytes
Instruction_SSSE3_Arithm1 PSHUFB { asmout, "pshufb" };

// SSSE3: packed sign
Instruction_SSSE3_Arithm1 PSIGNB { asmout, "psignb" };
Instruction_SSSE3_Arithm1 PSIGNW { asmout, "psignw" };
Instruction_SSSE3_Arithm1 PSIGND { asmout, "psignd" };

// SSSE3: packed align right
Instruction_SSSE3_Arithm2 PALIGNR { asmout, "palignr" };

// SSE4.1: dword multiply instructions
Instruction2_Type10 PMULLD { asmout, "pmulld" };
Instruction2_Type10 PMULDQ { asmout, "pmuldq" };

// SSE4.1: floating-point dot product instructions
Instruction_SSE4_1_Type2 DPPD { asmout, "dppd" };
Instruction_SSE4_1_Type2 DPPS { asmout, "dpps" };

// SSE4.1: streaming load hint instruction
Instruction1_Type24 MOVNTDQA { asmout, "movntdqa" };

// SSE4.1: packed blending instructions
Instruction_SSE4_1_Type2 BLENDPD { asmout, "blendpd" };
Instruction_SSE4_1_Type2 BLENDPS { asmout, "blendps" };
Instruction_SSE4_1_Type3 BLENDVPD { asmout, "blendvpd" };
Instruction_SSE4_1_Type3 BLENDVPS { asmout, "blendvps" };
Instruction_SSE4_1_Type3 PBLENDVB { asmout, "pblendvb" };
Instruction_SSE4_1_Type2 PBLENDW { asmout, "pblendw" };

// SSE4.1: packed integer MIN/MAX instructions
Instruction2_Type10 PMINUW { asmout, "pminuw" };
Instruction2_Type10 PMINUD { asmout, "pminud" };
Instruction2_Type10 PMINSB { asmout, "pminsb" };
Instruction2_Type10 PMINSD { asmout, "pminsd" };
Instruction2_Type10 PMAXUW { asmout, "pmaxuw" };
Instruction2_Type10 PMAXUD { asmout, "pmaxud" };
Instruction2_Type10 PMAXSB { asmout, "pmaxsb" };
Instruction2_Type10 PMAXSD { asmout, "pmaxsd" };

// SSE4.1: floating-point round instructions with selectable rounding mode
Instruction_SSE4_1_Type2 ROUNDPS { asmout, "roundps" };
Instruction_SSE4_1_Type2 ROUNDPD { asmout, "roundpd" };
Instruction_SSE4_1_Type4 ROUNDSS { asmout, "roundss" };
Instruction_SSE4_1_Type5 ROUNDSD { asmout, "roundsd" };

// SSE4.1: insertion and extractions from XMM registers
Instruction_SSE4_1_Type6 EXTRACTPS { asmout, "extractps" };
Instruction_SSE4_1_Type7 INSERTPS { asmout, "insertps" };
Instruction_SSE4_1_Type8 PINSRB { asmout, "pinsrb" };
Instruction_SSE4_1_Type9 PINSRD { asmout, "pinsrd" };
Instruction_SSE4_1_Type10 PINSRQ { asmout, "pinsrq" };
Instruction_SSE4_1_Type11 PEXTRB { asmout, "pextrb" };
Instruction_SSE4_1_Type12 PEXTRD { asmout, "pextrd" };
Instruction_SSE4_1_Type13 PEXTRQ { asmout, "pextrq" };

// SSE4.1: packed integer format convertions
Instruction_SSE4_1_Type14 PMOVSXBW { asmout, "pmovsxbw" };
Instruction_SSE4_1_Type14 PMOVSXWD { asmout, "pmovsxwd" };
Instruction_SSE4_1_Type14 PMOVSXDQ { asmout, "pmovsxdq" };
Instruction_SSE4_1_Type15 PMOVSXBD { asmout, "pmovsxbd" };
Instruction_SSE4_1_Type15 PMOVSXWQ { asmout, "pmovsxwq" };
Instruction_SSE4_1_Type16 PMOVSXBQ { asmout, "pmovsxbq" };
Instruction_SSE4_1_Type14 PMOVZXBW { asmout, "pmovzxbw" };
Instruction_SSE4_1_Type14 PMOVZXWD { asmout, "pmovzxwd" };
Instruction_SSE4_1_Type14 PMOVZXDQ { asmout, "pmovzxdq" };
Instruction_SSE4_1_Type15 PMOVZXBD { asmout, "pmovzxbd" };
Instruction_SSE4_1_Type15 PMOVZXWQ { asmout, "pmovzxwq" };
Instruction_SSE4_1_Type16 PMOVZXBQ { asmout, "pmovzxbq" };

// SSE4.1: improved sums of absolute differences for 4-byte blocks
Instruction_SSE4_1_Type2 MPSADBW { asmout, "mpsadbw" };

// SSE4.1: horizontal search
Instruction_SSE4_1_Type2 PHMINPOSUW { asmout, "phminposuw" };

// SSE4.1: packed test
Instruction_SSE4_1_Type2 PTEST { asmout, "ptest" };

// SSE4.1: packed qword equality comparison
Instruction_SSE4_1_Type2 PCMPEQQ { asmout, "pcmpeqq" };

// SSE4.1: dword packing with unsigned saturation
Instruction_SSE4_1_Type2 PACKUSDW { asmout, "packusdw" };

// SSE4.2: string and text processing instructions
Instruction_SSE4_2_Type1 PCMPESTRI { asmout, "pcmpestri" };
Instruction_SSE4_2_Type1 PCMPESTRM { asmout, "pcmpestrm" };
Instruction_SSE4_2_Type1 PCMPISTRI { asmout, "pcmpistri" };
Instruction_SSE4_2_Type1 PCMPISTRM { asmout, "pcmpistrm" };

// SSE4.2: packed comparison SIMD integer instruction
Instruction2_Type10 PCMPGTQ { asmout, "pcmpgtq" };

// AESNI and PCLMULQDQ
Instruction2_Type10 AESDEC { asmout, "aesdec" };
Instruction2_Type10 AESDECLAST { asmout, "aesdeclast" };
Instruction2_Type10 AESENC { asmout, "aesenc" };
Instruction2_Type10 AESENCLAST { asmout, "aesenclast" };
Instruction2_Type10 AESIMC { asmout, "aesimc" };
Instruction_AES_Type2 AESKEYGENASSIST { asmout, "aeskeygenassist" };
Instruction_PCLMULQDQ PCLMULQDQ { asmout, "pclmulqdq" };

// 16-bit floating-point convertion instructions
Instruction_F16C_Type1 VCVTPH2PS { asmout, "vcvtph2ps" };
Instruction_F16C_Type2 VCVTPS2PH { asmout, "vcvtps2ph" };

// Fused-multiply-add (FMA) extensions
Instruction_FMA_Type1 VFMADD132PD { asmout, "vfmadd132pd" };
Instruction_FMA_Type1 VFMADD213PD { asmout, "vfmadd213pd" };
Instruction_FMA_Type1 VFMADD231PD { asmout, "vfmadd231pd" };
Instruction_FMA_Type1 VFMADD132PS { asmout, "vfmadd132ps" };
Instruction_FMA_Type1 VFMADD213PS { asmout, "vfmadd213ps" };
Instruction_FMA_Type1 VFMADD231PS { asmout, "vfmadd231ps" };
Instruction_FMA_Type2 VFMADD132SD { asmout, "vfmadd132sd" };
Instruction_FMA_Type2 VFMADD213SD { asmout, "vfmadd213sd" };
Instruction_FMA_Type2 VFMADD231SD { asmout, "vfmadd231sd" };
Instruction_FMA_Type3 VFMADD132SS { asmout, "vfmadd132ss" };
Instruction_FMA_Type3 VFMADD213SS { asmout, "vfmadd213ss" };
Instruction_FMA_Type3 VFMADD231SS { asmout, "vfmadd231ss" };
Instruction_FMA_Type1 VFMADDSUB132PD { asmout, "vfmaddsub132pd" };
Instruction_FMA_Type1 VFMADDSUB213PD { asmout, "vfmaddsub213pd" };
Instruction_FMA_Type1 VFMADDSUB231PD { asmout, "vfmaddsub231pd" };
Instruction_FMA_Type1 VFMADDSUB132PS { asmout, "vfmaddsub132ps" };
Instruction_FMA_Type1 VFMADDSUB213PS { asmout, "vfmaddsub213ps" };
Instruction_FMA_Type1 VFMADDSUB231PS { asmout, "vfmaddsub231ps" };
Instruction_FMA_Type1 VFMSUBADD132PD { asmout, "vfmsubadd132pd" };
Instruction_FMA_Type1 VFMSUBADD213PD { asmout, "vfmsubadd213pd" };
Instruction_FMA_Type1 VFMSUBADD231PD { asmout, "vfmsubadd231pd" };
Instruction_FMA_Type1 VFMSUBADD132PS { asmout, "vfmsubadd132ps" };
Instruction_FMA_Type1 VFMSUBADD213PS { asmout, "vfmsubadd213ps" };
Instruction_FMA_Type1 VFMSUBADD231PS { asmout, "vfmsubadd231ps" };
Instruction_FMA_Type1 VFMSUB132PD { asmout, "vfmsub132pd" };
Instruction_FMA_Type1 VFMSUB213PD { asmout, "vfmsub213pd" };
Instruction_FMA_Type1 VFMSUB231PD { asmout, "vfmsub231pd" };
Instruction_FMA_Type1 VFMSUB132PS { asmout, "vfmsub132ps" };
Instruction_FMA_Type1 VFMSUB213PS { asmout, "vfmsub213ps" };
Instruction_FMA_Type1 VFMSUB231PS { asmout, "vfmsub231ps" };
Instruction_FMA_Type2 VFMSUB132SD { asmout, "vfmsub132sd" };
Instruction_FMA_Type2 VFMSUB213SD { asmout, "vfmsub213sd" };
Instruction_FMA_Type2 VFMSUB231SD { asmout, "vfmsub231sd" };
Instruction_FMA_Type3 VFMSUB132SS { asmout, "vfmsub132ss" };
Instruction_FMA_Type3 VFMSUB213SS { asmout, "vfmsub213ss" };
Instruction_FMA_Type3 VFMSUB231SS { asmout, "vfmsub231ss" };
Instruction_FMA_Type1 VFNMADD132PD { asmout, "vfnmadd132pd" };
Instruction_FMA_Type1 VFNMADD213PD { asmout, "vfnmadd213pd" };
Instruction_FMA_Type1 VFNMADD231PD { asmout, "vfnmadd231pd" };
Instruction_FMA_Type1 VFNMADD132PS { asmout, "vfnmadd132ps" };
Instruction_FMA_Type1 VFNMADD213PS { asmout, "vfnmadd213ps" };
Instruction_FMA_Type1 VFNMADD231PS { asmout, "vfnmadd231ps" };
Instruction_FMA_Type2 VFNMADD132SD { asmout, "vfnmadd132sd" };
Instruction_FMA_Type2 VFNMADD213SD { asmout, "vfnmadd213sd" };
Instruction_FMA_Type2 VFNMADD231SD { asmout, "vfnmadd231sd" };
Instruction_FMA_Type3 VFNMADD132SS { asmout, "vfnmadd132ss" };
Instruction_FMA_Type3 VFNMADD213SS { asmout, "vfnmadd213ss" };
Instruction_FMA_Type3 VFNMADD231SS { asmout, "vfnmadd231ss" };
Instruction_FMA_Type1 VFNMSUB132PD { asmout, "vfnmsub132pd" };
Instruction_FMA_Type1 VFNMSUB213PD { asmout, "vfnmsub213pd" };
Instruction_FMA_Type1 VFNMSUB231PD { asmout, "vfnmsub231pd" };
Instruction_FMA_Type1 VFNMSUB132PS { asmout, "vfnmsub132ps" };
Instruction_FMA_Type1 VFNMSUB213PS { asmout, "vfnmsub213ps" };
Instruction_FMA_Type1 VFNMSUB231PS { asmout, "vfnmsub231ps" };
Instruction_FMA_Type2 VFNMSUB132SD { asmout, "vfnmsub132sd" };
Instruction_FMA_Type2 VFNMSUB213SD { asmout, "vfnmsub213sd" };
Instruction_FMA_Type2 VFNMSUB231SD { asmout, "vfnmsub231sd" };
Instruction_FMA_Type3 VFNMSUB132SS { asmout, "vfnmsub132ss" };
Instruction_FMA_Type3 VFNMSUB213SS { asmout, "vfnmsub213ss" };
Instruction_FMA_Type3 VFNMSUB231SS { asmout, "vfnmsub231ss" };

// AVX arithmetic instructions
Instruction_AVX_Type1 VSQRTPD { asmout, "vsqrtpd" };
Instruction_AVX_Type1 VSQRTPS { asmout, "vsqrtps" };
Instruction_AVX_Type1 VRSQRTPS { asmout, "vrsqrtps" };
Instruction_AVX_Type1 VRCPPS { asmout, "vrcpps" };
Instruction_AVX_Type2 VADDPD { asmout, "vaddpd" };
Instruction_AVX_Type2 VADDPS { asmout, "vaddps" };
Instruction_AVX_Type2 VSUBPD { asmout, "vsubpd" };
Instruction_AVX_Type2 VSUBPS { asmout, "vsubps" };
Instruction_AVX_Type2 VMULPD { asmout, "vmulpd" };
Instruction_AVX_Type2 VMULPS { asmout, "vmulps" };
Instruction_AVX_Type2 VDIVPD { asmout, "vdivpd" };
Instruction_AVX_Type2 VDIVPS { asmout, "vdivps" };
Instruction_AVX_Type3 VCVTPS2PD { asmout, "vcvtps2pd" };
Instruction_AVX_Type4 VCVTPD2PS { asmout, "vcvtpd2ps" };
Instruction_AVX_Type1 VCVTPS2DQ { asmout, "vcvtps2dq" };
Instruction_AVX_Type1 VCVTDQ2PS { asmout, "vcvtdq2ps" };
Instruction_AVX_Type1 VCVTTPS2DQ { asmout, "vcvttps2dq" };
Instruction_AVX_Type4 VCVTTPD2DQ { asmout, "vcvttpd2dq" };
Instruction_AVX_Type4 VCVTPD2DQ { asmout, "vcvtpd2dq" };
Instruction_AVX_Type3 VCVTDQ2PD { asmout, "vcvtdq2pd" };
Instruction_AVX_Type2 VMINPS { asmout, "vminps" };
Instruction_AVX_Type2 VMINPD { asmout, "vminpd" };
Instruction_AVX_Type2 VMAXPS { asmout, "vmaxps" };
Instruction_AVX_Type2 VMAXPD { asmout, "vmaxpd" };
Instruction_AVX_Type2 VHADDPS { asmout, "vhaddps" };
Instruction_AVX_Type2 VHADDPD { asmout, "vhaddpd" };
Instruction_AVX_Type2 VHSUBPS { asmout, "vhsubps" };
Instruction_AVX_Type2 VHSUBPD { asmout, "vhsubpd" };
Instruction_AVX_Type5 VCMPPS { asmout, "vcmpps" };
Instruction_AVX_Type5 VCMPPD { asmout, "vcmppd" };
Instruction_AVX_Type2 VADDSUBPS { asmout, "vaddsubps" };
Instruction_AVX_Type2 VADDSUBPD { asmout, "vaddsubpd" };
Instruction_AVX_Type5 VDPPS { asmout, "vdpps" };
Instruction_AVX_Type6 VDPPD { asmout, "vdppd" };
Instruction_AVX_Type7 VROUNDPS { asmout, "vroundps" };
Instruction_AVX_Type7 VROUNDPD { asmout, "vroundpd" };
Instruction_AVX_Type8 VMOVAPS { asmout, "vmovaps" };
Instruction_AVX_Type8 VMOVAPD { asmout, "vmovapd" };
Instruction_AVX_Type8 VMOVDQA { asmout, "vmovdqa" };
Instruction_AVX_Type8 VMOVUPS { asmout, "vmovups" };
Instruction_AVX_Type8 VMOVUPD { asmout, "vmovupd" };
Instruction_AVX_Type8 VMOVDQU { asmout, "vmovdqu" };
Instruction_AVX_Type9 VMOVMSKPS { asmout, "vmovmskps" };
Instruction_AVX_Type9 VMOVMSKPD { asmout, "vmovmskpd" };
Instruction_AVX_Type10 VLDDQU { asmout, "vlddqu" };
Instruction_AVX_Type11 VMOVNTPS { asmout, "vmovntps" };
Instruction_AVX_Type11 VMOVNTPD { asmout, "vmovntpd" };
Instruction_AVX_Type11 VMOVNTDQ { asmout, "vmovntdq" };
Instruction_AVX_Type10 VMOVNTDQA { asmout, "vmovntdqa" };
Instruction_AVX_Type7 VMOVSHDUP { asmout, "vmovshdup" };
Instruction_AVX_Type7 VMOVSLDUP { asmout, "vmovsldup" };
Instruction_AVX_Type7 VMOVDDUP { asmout, "vmovddup" };
Instruction_AVX_Type2 VUNPCKHPD { asmout, "vunpckhpd" };
Instruction_AVX_Type2 VUNPCKLPD { asmout, "vunpcklpd" };
Instruction_AVX_Type2 VUNPCKHPS { asmout, "vunpckhps" };
Instruction_AVX_Type2 VUNPCKLPS { asmout, "vunpcklps" };
Instruction_AVX_Type5 VBLENDPS { asmout, "vblendps" };
Instruction_AVX_Type5 VBLENDPD { asmout, "vblendpd" };
Instruction_AVX_Type5 VSHUFPS { asmout, "vshufps" };
Instruction_AVX_Type5 VSHUFPD { asmout, "vshufpd" };
Instruction_AVX_Type12 VBLENDVPD { asmout, "vblendvpd" };
Instruction_AVX_Type12 VBLENDVPS { asmout, "vblendvps" };
Instruction_AVX_Type1 VPTEST { asmout, "vptest" };
Instruction_AVX_Type2 VXORPS { asmout, "vxorps" };
Instruction_AVX_Type2 VXORPD { asmout, "vxorpd" };
Instruction_AVX_Type2 VORPS { asmout, "vorps" };
Instruction_AVX_Type2 VORPD { asmout, "vorpd" };
Instruction_AVX_Type2 VANDPS { asmout, "vandps" };
Instruction_AVX_Type2 VANDPD { asmout, "vandpd" };
Instruction_AVX_Type2 VANDNPS { asmout, "vandnps" };
Instruction_AVX_Type2 VANDNPD { asmout, "vandnpd" };
Instruction1_Type1 VZEROALL { asmout, "vzeroall" };
Instruction1_Type1 VZEROUPPER { asmout, "vzeroupper" };
Instruction_AVX_Type13 VBROADCASTSS { asmout, "vbroadcastss" };
Instruction1_Type25 VBROADCASTSD { asmout, "vbroadcastsd" };
Instruction1_Type26 VBROADCASTF128 { asmout, "vbroadcastf128" };
Instruction_AVX_Type16 VEXTRACTF128 { asmout, "vextractf128" };
Instruction_AVX_Type17 VINSERTF128 { asmout, "vinsertf128" };
Instruction_AVX_Type18 VMASKMOVPS { asmout, "vmaskmovps" };
Instruction_AVX_Type18 VMASKMOVPD { asmout, "vmaskmovpd" };
Instruction_AVX_Type19 VPERMILPD { asmout, "vpermilpd" };
Instruction_AVX_Type19 VPERMILPS { asmout, "vpermilps" };
Instruction_AVX_Type20 VPERM2F128 { asmout, "vperm2f128" };
Instruction_AVX_Type1 VTESTPS { asmout, "vtestps" };
Instruction_AVX_Type1 VTESTPD { asmout, "vtestpd" };
Instruction_AVX_Type21 VCVTSI2SS { asmout, "vcvtsi2ss" };
Instruction_AVX_Type21 VCVTSI2SD { asmout, "vcvtsi2sd" };
Instruction_CVTSD2SI VCVTSD2SI { asmout, "vcvtsd2si" };
Instruction_SSE_Conv4 VCVTTSS2SI { asmout, "vcvttss2si" };
Instruction_CVTSD2SI VCVTTSD2SI { asmout, "vcvttsd2si" };
Instruction_SSE_Conv4 VCVTSS2SI { asmout, "vcvtss2si" };

// System instructions
Instruction1_Type1 CLAC { asmout, "clac" };
Instruction1_Type1 STAC { asmout, "stac" };
Instruction1_Type1 CLTS { asmout, "clts" };
Instruction1_Type2 LGDT { asmout, "lgdt" };
Instruction1_Type2 LIDT { asmout, "lidt" };
Instruction1_Type2 SIDT { asmout, "sidt" };
Instruction2_Type6 LLDT { asmout, "lldt" };
Instruction2_Type6 LMSW { asmout, "lmsw" };
Instruction2_Type6 VERR { asmout, "verr" };
Instruction2_Type6 VERW { asmout, "verw" };
Instruction2_Type6 LTR { asmout, "ltr" };
Instruction1_Type1 INVD { asmout, "invd" };
Instruction1_Type1 WBINVD { asmout, "wbinvd" };
Instruction1_Type2 INVLPG { asmout, "invlpg" };
Instruction1_Type11 LOCK { asmout, "lock" };
Instruction1_Type1 HLT { asmout, "hlt" };
Instruction1_Type1 RSM { asmout, "rsm" };
Instruction1_Type1 RDMSR { asmout, "rdmsr" };
Instruction1_Type1 WRMSR { asmout, "wrmsr" };
Instruction1_Type1 RDPMC { asmout, "rdpmc" };
Instruction1_Type1 RDTSC { asmout, "rdtsc" };
Instruction1_Type1 RDTSCP { asmout, "rdtscp" };
Instruction1_Type1 SYSENTER { asmout, "sysenter" };
Instruction1_Type1 SYSEXIT { asmout, "sysexit" };
Instruction1_Type2 XRSTORS { asmout, "xrstors" };
Instruction1_Type2 XRSTORS64 { asmout, "xrstors64" };
Instruction1_Type2 XSAVES { asmout, "xsaves" };
Instruction1_Type2 XSAVES64 { asmout, "xsaves64" };
Instruction1_Type1 XSETBV { asmout, "xsetbv" };
Instruction2_Type3 RDFSBASE { asmout, "rdfsbase" };
Instruction2_Type3 RDGSBASE { asmout, "rdgsbase" };
Instruction2_Type3 WRFSBASE { asmout, "wrfsbase" };
Instruction2_Type3 WRGSBASE { asmout, "wrgsbase" };

// 64-bit mode instructions
Instruction1_Type1 SYSCALL { asmout, "syscall" };
Instruction1_Type1 SYSRET { asmout, "sysret" };

// AVX
Instruction_VMOVD VMOVD { asmout, "qmovd" };
Instruction_VMOVQ VMOVQ { asmout, "qmovq" };
Instruction1_Type14 VLDMXCSR { asmout, "vldmxcsr" };
Instruction1_Type14 VSTMXCSR { asmout, "vstmxcsr" };

Keyword_label label;
keyword global { ".global" };
keyword comment { "#" };

const std::string no_suffix { "" };
const std::string suffix_bw { "bw" };
const std::string suffix_bl { "bl" };
const std::string suffix_bq { "bq" };
const std::string suffix_wl { "wl" };
const std::string suffix_wq { "wq" };
const std::string suffix_lq { "lq" };
const std::string suffix_m8 { "b" };
const std::string suffix_m16 { "w" };
const std::string suffix_m32 { "l" };
const std::string suffix_m64 { "q" };
const std::string suffix_m32fp { "s" };
const std::string suffix_m64fp { "l" };
const std::string suffix_m80fp { "t" };
const std::string suffix_m16int { "" };
const std::string suffix_m32int { "l" };
const std::string suffix_m64int { "ll" };
