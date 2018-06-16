/*! \file cppasm.cpp
    \brief Main file of the C++ Assembly Generator.
*/

#include "cppasm.h"

static constexpr char indent_char { '\t' };

static asmstream asmout { indent_char };

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

opmask_reg k0 { "%k0" };
opmask_reg k1 { "%k1" };
opmask_reg k2 { "%k2" };
opmask_reg k3 { "%k3" };
opmask_reg k4 { "%k4" };
opmask_reg k5 { "%k5" };
opmask_reg k6 { "%k6" };
opmask_reg k7 { "%k7" };

// Data transfer instructions
Instruction36_Type1 MOV { asmout, "mov" };
Instruction6_Type2 CMOVA { asmout, "cmova" };
Instruction6_Type2 CMOVAE { asmout, "cmovae" };
Instruction6_Type2 CMOVB { asmout, "cmovb" };
Instruction6_Type2 CMOVBE { asmout, "cmovbe" };
Instruction6_Type2 CMOVC { asmout, "cmovc" };
Instruction6_Type2 CMOVE { asmout, "cmove" };
Instruction6_Type2 CMOVG { asmout, "cmovg" };
Instruction6_Type2 CMOVGE { asmout, "cmovge" };
Instruction6_Type2 CMOVL { asmout, "cmovl" };
Instruction6_Type2 CMOVLE { asmout, "cmovle" };
Instruction6_Type2 CMOVNA { asmout, "cmovna" };
Instruction6_Type2 CMOVNAE { asmout, "cmovnae" };
Instruction6_Type2 CMOVNBE { asmout, "cmovnbe" };
Instruction6_Type2 CMOVNC { asmout, "cmovnc" };
Instruction6_Type2 CMOVNE { asmout, "cmovne" };
Instruction6_Type2 CMOVNG { asmout, "cmovng" };
Instruction6_Type2 CMOVNGE { asmout, "cmovnge" };
Instruction6_Type2 CMOVNL { asmout, "cmovnl" };
Instruction6_Type2 CMOVNLE { asmout, "cmovnle" };
Instruction6_Type2 CMOVNO { asmout, "cmovno" };
Instruction6_Type2 CMOVNP { asmout, "cmovnp" };
Instruction6_Type2 CMOVNS { asmout, "cmovns" };
Instruction6_Type2 CMOVNZ { asmout, "cmovnz" };
Instruction6_Type2 CMOVO { asmout, "cmovo" };
Instruction6_Type2 CMOVP { asmout, "cmovp" };
Instruction6_Type2 CMOVPE { asmout, "cmovpe" };
Instruction6_Type2 CMOVPO { asmout, "cmovpo" };
Instruction6_Type2 CMOVS { asmout, "cmovs" };
Instruction6_Type2 CMOVZ { asmout, "cmovz" };
Instruction10_Type1 PUSH { asmout, "push" };
Instruction1_Type1 PUSHA { asmout, "pusha" };
Instruction1_Type1 PUSHAD { asmout, "pushal" };
Instruction7_Type2 POP { asmout, "pop" };
Instruction1_Type1 POPA { asmout, "popa" };
Instruction1_Type1 POPAD { asmout, "popal" };
Instruction1_Type1 CWD { asmout, "cwtd" };
Instruction1_Type1 CDQ { asmout, "cltd" };
Instruction1_Type1 CQO { asmout, "cqto" };
Instruction12_Type3 MOVSX { asmout, "movs" };
Instruction12_Type3 MOVZX { asmout, "movz" };
Instruction12_Type2 XCHG { asmout, "xchg" };
Instruction2_Type3 BSWAP { asmout, "bswap" };
Instruction8_Type4 XADD { asmout, "xadd" };
Instruction8_Type4 CMPXCHG { asmout, "cmpxchg" };
Instruction1_Type7 CMPXCHG8B { asmout, "cmpxchg8b" };
Instruction1_Type8 CMPXCHG16B { asmout, "cmpxchg16b" };

// Binary arithmetic instructions
Instruction26_Type1 ADD { asmout, "add" };
Instruction26_Type1 ADC { asmout, "adc" };
Instruction26_Type1 SUB { asmout, "sub" };
Instruction26_Type1 SBB { asmout, "sbb" };
Instruction26_Type1 CMP { asmout, "cmp" };
Instruction4_Type7 ADCX { asmout, "adcx" };
Instruction4_Type7 ADOX { asmout, "adox" };
Instruction8_Type3 MUL { asmout, "mul" };
Instruction8_Type3 IMUL { asmout, "imul" };
Instruction8_Type3 DIV { asmout, "div" };
Instruction8_Type3 IDIV { asmout, "idiv" };
Instruction8_Type3 NEG { asmout, "neg" };
Instruction8_Type3 INC { asmout, "inc" };
Instruction8_Type3 DEC { asmout, "dec" };

// Decimal arithmetic instructions
Instruction1_Type1 AAA { asmout, "aaa" };
Instruction2_Type1 AAD { asmout, "aad" };
Instruction2_Type1 AAM { asmout, "aam" };
Instruction1_Type1 AAS { asmout, "aas" };
Instruction1_Type1 DAA { asmout, "daa" };
Instruction1_Type1 DAS { asmout, "das" };

// Logical instructions
Instruction26_Type1 AND { asmout, "and" };
Instruction26_Type1 OR { asmout, "or" };
Instruction26_Type1 XOR { asmout, "xor" };
Instruction8_Type3 NOT { asmout, "not" };

// Shift and rotate instructions
Instruction16_Type2 SAL { asmout, "sal" };
Instruction16_Type2 SAR { asmout, "sar" };
Instruction16_Type2 SHL { asmout, "shl" };
Instruction16_Type2 SHR { asmout, "shr" };
Instruction16_Type2 RCL { asmout, "rcl" };
Instruction16_Type2 RCR { asmout, "rcr" };
Instruction16_Type2 ROL { asmout, "rol" };
Instruction16_Type2 ROR { asmout, "ror" };
Instruction12_Type4 SHLD { asmout, "shld" };
Instruction12_Type4 SHRD { asmout, "shrd" };

// Bit and byte instructions
Instruction12_Type1 BT { asmout, "bt" };
Instruction12_Type1 BTC { asmout, "btc" };
Instruction12_Type1 BTR { asmout, "btr" };
Instruction12_Type1 BTS { asmout, "bts" };
Instruction6_Type2 BSF { asmout, "bsf" };
Instruction6_Type2 BSR { asmout, "bsr" };
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
Instruction16_Type1 TEST { asmout, "test" };
Instruction6_Type2 POPCNT { asmout, "popcnt" };

// Control transfer instructions
Instruction7_Type1 JMP { asmout, "jmp" };
Instruction7_Type3 JMP_FAR { asmout, "ljmp" };
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
Instruction7_Type1 CALL { asmout, "call" };
Instruction7_Type3 CALL_FAR { asmout, "lcall" };
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
Instruction6_Type3 IN { asmout, "in" };
Instruction1_Type1 INSB { asmout, "insb" };
Instruction1_Type1 INSW { asmout, "insw" };
Instruction1_Type1 INSD { asmout, "insl" };
Instruction6_Type4 OUT { asmout, "out" };
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
Instruction3_Type1 LDS { asmout, "lds" };
Instruction3_Type1 LES { asmout, "les" };
Instruction3_Type1 LFS { asmout, "lfs" };
Instruction3_Type1 LGS { asmout, "lgs" };
Instruction3_Type1 LSS { asmout, "lss" };

// Miscelleneous instructions
Instruction3_Type1 LEA { asmout, "lea" };
Instruction5_Type1 NOP { asmout, "nop" };
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
Instruction3_Type2 RDRAND { asmout, "rdrand" };
Instruction3_Type2 RDSEED { asmout, "rdseed" };

// x87 FPU data transfer instructions
Instruction4_Type2 FLD { asmout, "fld" };
Instruction3_Type6 FILD { asmout, "fild" };
Instruction2_Type16 FIST { asmout, "fist" };
Instruction3_Type6 FISTP { asmout, "fistp" };
Instruction3_Type7 FST { asmout, "fst" };
Instruction4_Type2 FSTP { asmout, "fstp" };
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
Instruction3_Type8 FADD { asmout, "fadd" };
Instruction2_Type20 FADDP { asmout, "faddp" };
Instruction2_Type16 FIADD { asmout, "fiadd" };
Instruction3_Type8 FSUB { asmout, "fsub" };
Instruction2_Type20 FSUBP { asmout, "fsubp" };
Instruction2_Type16 FISUB { asmout, "fisub" };
Instruction3_Type8 FSUBR { asmout, "fsubr" };
Instruction2_Type20 FSUBRP { asmout, "fsubrp" };
Instruction2_Type16 FISUBR { asmout, "fisubr" };
Instruction3_Type8 FMUL { asmout, "fmul" };
Instruction2_Type20 FMULP { asmout, "fmulp" };
Instruction2_Type16 FIMUL { asmout, "fimul" };
Instruction3_Type8 FDIV { asmout, "fdiv" };
Instruction2_Type20 FDIVP { asmout, "fdivp" };
Instruction2_Type16 FIDIV { asmout, "fidiv" };
Instruction3_Type8 FDIVR { asmout, "fdivr" };
Instruction2_Type20 FDIVRP { asmout, "fdivrp" };
Instruction2_Type16 FIDIVR { asmout, "fidivr" };
Instruction1_Type1 FPREM { asmout, "fprem" };
Instruction1_Type1 FPREM1 { asmout, "fprem1" };
Instruction1_Type1 FABS { asmout, "fabs" };
Instruction1_Type1 FCHS { asmout, "fchs" };
Instruction1_Type1 FRNDINT { asmout, "frndint" };
Instruction1_Type1 FSCALE { asmout, "fscale" };
Instruction1_Type1 FSQRT { asmout, "fsqrt" };
Instruction1_Type1 FXTRACT { asmout, "fxtract" };

// x87 FPU comparison instructions
Instruction4_Type10 FCOM = { asmout, "fcom" };
Instruction4_Type10 FCOMP = { asmout, "fcomp" };
Instruction1_Type1 FCOMPP = { asmout, "fcompp" };
Instruction2_Type5 FUCOM = { asmout, "fucom" };
Instruction2_Type5 FUCOMP = { asmout, "fucomp" };
Instruction1_Type1 FUCOMPP = { asmout, "fucompp" };
Instruction2_Type16 FICOM = { asmout, "ficom" };
Instruction2_Type16 FICOMP = { asmout, "ficomp" };
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
Instruction1_Type1 FWAIT { asmout, "fwait" };
Instruction1_Type1 WAIT { asmout, "wait" };

// x87 FPU and SIMD state management instructions
Instruction1_Type2 FXSAVE { asmout, "fxsave" };
Instruction1_Type2 FXRSTOR { asmout, "fxrstor" };

// MMX data transfer instructions
Instruction8_Type1 MOVD { asmout, "movd" };
Instruction8_Type2 MOVQ { asmout, "movq" };

// MMX conversion instructions
Instruction4_Type1 PACKSSWB  { asmout, "packsswb" };
Instruction4_Type1 PACKUSWB  { asmout, "packuswb" };
Instruction4_Type1 PACKSSDW  { asmout, "packssdw" };
Instruction4_Type1 PUNPCKHBW { asmout, "punpckhbw" };
Instruction4_Type1 PUNPCKHWD { asmout, "punpckhwd" };
Instruction4_Type1 PUNPCKHDQ { asmout, "punpckhdq" };
Instruction4_Type1 PUNPCKLBW { asmout, "punpcklbw" };
Instruction4_Type1 PUNPCKLWD { asmout, "punpcklwd" };
Instruction4_Type1 PUNPCKLDQ { asmout, "punpckldq" };

// MMX packed arithmetic instructions
Instruction4_Type1 PADDB   { asmout, "paddb"   };
Instruction4_Type1 PADDW   { asmout, "paddw"   };
Instruction4_Type1 PADDD   { asmout, "paddd"   };
Instruction4_Type1 PADDSB  { asmout, "paddsb"  };
Instruction4_Type1 PADDSW  { asmout, "paddsw"  };
Instruction4_Type1 PADDUSB { asmout, "paddusb" };
Instruction4_Type1 PADDUSW { asmout, "paddusw" };
Instruction4_Type1 PSUBB   { asmout, "psubb"   };
Instruction4_Type1 PSUBW   { asmout, "psubw"   };
Instruction4_Type1 PSUBD   { asmout, "psubd"   };
Instruction4_Type1 PSUBSB  { asmout, "psubsb"  };
Instruction4_Type1 PSUBSW  { asmout, "psubsw"  };
Instruction4_Type1 PSUBUSB { asmout, "psubusb" };
Instruction4_Type1 PSUBUSW { asmout, "psubusw" };
Instruction4_Type1 PMULHW  { asmout, "pmulhw"  };
Instruction4_Type1 PMULLW  { asmout, "pmullw"  };
Instruction4_Type1 PMADDWD { asmout, "pmaddwd" };

// MMX comparison instructions
Instruction4_Type1 PCMPEQB { asmout, "pcmpeqb" };
Instruction4_Type1 PCMPEQW { asmout, "pcmpeqw" };
Instruction4_Type1 PCMPEQD { asmout, "pcmpeqd" };
Instruction4_Type1 PCMPGTB { asmout, "pcmpgtb" };
Instruction4_Type1 PCMPGTW { asmout, "pcmpgtw" };
Instruction4_Type1 PCMPGTD { asmout, "pcmpgtd" };

// MMX logical instructions
Instruction4_Type1 PAND  { asmout, "pand"  };
Instruction4_Type1 PANDN { asmout, "pandn" };
Instruction4_Type1 POR   { asmout, "por"   };
Instruction4_Type1 PXOR  { asmout, "pxor"  };

// MMX shift and rotate instructions
Instruction6_Type1 PSLLW { asmout, "psllw" };
Instruction6_Type1 PSLLD { asmout, "pslld" };
Instruction6_Type1 PSLLQ { asmout, "psllq" };
Instruction6_Type1 PSRLW { asmout, "psrlw" };
Instruction6_Type1 PSRLD { asmout, "psrld" };
Instruction6_Type1 PSRLQ { asmout, "psrlq" };
Instruction6_Type1 PSRAW { asmout, "psraw" };
Instruction6_Type1 PSRAD { asmout, "psrad" };

// MMX state management instructions
Instruction1_Type1 EMMS { asmout, "emms" };

// SSE data transfer instructions
Instruction3_Type5 MOVAPS { asmout, "movaps" };
Instruction3_Type5 MOVUPS { asmout, "movups" };
Instruction2_Type9 MOVHPS { asmout, "movhps" };
Instruction2_Type9 MOVLPS { asmout, "movlps" };
Instruction1_Type3 MOVLHPS { asmout, "movlhps" };
Instruction1_Type3 MOVHLPS { asmout, "movhlps" };
Instruction2_Type4 MOVMSKPS { asmout, "movmskps" };
Instruction3_Type3 MOVSS { asmout, "movss" };

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
Instruction2_Type10 RSQRTPS { asmout, "rsqrtps" };
Instruction2_Type11 RSQRTSS { asmout, "rsqrtss" };

// SSE comparison instructions
Instruction2_Type12 CMPPS { asmout, "cmpps" };
Instruction2_Type13 CMPSS { asmout, "cmpss" };
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
Instruction2_Type17 CVTPI2PS { asmout, "cvtpi2ps" };
Instruction4_Type8 CVTSI2SS { asmout, "cvtsi2ss" };
Instruction2_Type18 CVTPS2PI { asmout, "cvtps2pi" };
Instruction2_Type18 CVTTPS2PI { asmout, "cvttps2pi" };
Instruction4_Type9 CVTSS2SI { asmout, "cvtss2si" };
Instruction4_Type9 CVTTSS2SI { asmout, "cvttss2si" };

// SSE MXCSR state management instructions
Instruction1_Type14 LDMXCSR { asmout, "ldmxcsr" };
Instruction1_Type14 STMXCSR { asmout, "stmxcsr" };

// SSE 64-bit SIMD integer instructions
Instruction4_Type1 PAVGB { asmout, "pavgb" };
Instruction4_Type1 PAVGW { asmout, "pavgw" };
Instruction5_Type2 PEXTRW { asmout, "pextrw" };
Instruction4_Type11 PINSRW { asmout, "pinsrw" };
Instruction4_Type1 PMAXUB { asmout, "pmaxub" };
Instruction4_Type1 PMAXSW { asmout, "pmaxsw" };
Instruction4_Type1 PMINUB { asmout, "pminub" };
Instruction4_Type1 PMINSW { asmout, "pminsw" };
Instruction4_Type12 PMOVMSKB { asmout, "pmovmskb" };
Instruction4_Type1 PMULHUW { asmout, "pmulhuw" };
Instruction4_Type1 PSADBW { asmout, "psadbw" };
Instruction2_Type21 PSHUFW { asmout, "pshufw" };

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
Instruction3_Type5 MOVAPD { asmout, "movapd" };
Instruction3_Type5 MOVUPD { asmout, "movupd" };
Instruction1_Type18 MOVHPD { asmout, "movhpd" };
Instruction1_Type18 MOVLPD { asmout, "movlpd" };
Instruction2_Type4 MOVMSKPD { asmout, "movmskpd" };
Instruction3_Type4 MOVSD_SSE2 { asmout, "movsd" };

// SSE2 packed arithmetic instructions
Instruction2_Type10 ADDPD { asmout, "addpd" };
Instruction2_Type14 ADDSD { asmout, "addsd" };
Instruction2_Type10 SUBPD { asmout, "subpd" };
Instruction2_Type14 SUBSD { asmout, "subsd" };
Instruction2_Type10 MULPD { asmout, "mulpd" };
Instruction2_Type14 MULSD { asmout, "mulsd" };
Instruction2_Type10 DIVPD { asmout, "divpd" };
Instruction2_Type14 DIVSD { asmout, "divsd" };
Instruction2_Type10 SQRTPD { asmout, "sqrtpd" };
Instruction2_Type14 SQRTSD { asmout, "sqrtsd" };
Instruction2_Type10 MAXPD { asmout, "maxpd" };
Instruction2_Type14 MAXSD { asmout, "maxsd" };
Instruction2_Type10 MINPD { asmout, "minpd" };
Instruction2_Type14 MINSD { asmout, "minsd" };

// SSE2 logical instructions
Instruction2_Type10 ANDPD { asmout, "andpd" };
Instruction2_Type10 ANDNPD { asmout, "andnpd" };
Instruction2_Type10 ORPD { asmout, "orpd" };
Instruction2_Type10 XORPD { asmout, "xorpd" };

// SSE2 comparison instructions
Instruction2_Type12 CMPPD { asmout, "cmppd" };
Instruction2_Type15 CMPSD_SSE2 { asmout, "cmpsd" };
Instruction2_Type14 COMISD { asmout, "comisd" };
Instruction2_Type14 UCOMISD { asmout, "ucomisd" };

// SSE2 shuffle and unpack instructions
Instruction2_Type12 SHUFPD { asmout, "shufpd" };
Instruction2_Type10 UNPCKHPD { asmout, "unpckhpd" };
Instruction2_Type10 UNPCKLPD { asmout, "unpcklpd" };

// SSE2 convertion instructions
Instruction2_Type19 CVTPD2PI { asmout, "cvtpd2pi" };
Instruction2_Type19 CVTTPD2PI { asmout, "cvttpd2pi" };
Instruction2_Type17 CVTPI2PD { asmout, "cvtpi2pd" };
Instruction2_Type10 CVTPD2DQ { asmout, "cvtpd2dq" };
Instruction2_Type10 CVTTPD2DQ { asmout, "cvttpd2dq" };
Instruction2_Type14 CVTDQ2PD { asmout, "cvtdq2pd" };
Instruction2_Type14 CVTPS2PD { asmout, "cvtps2pd" };
Instruction2_Type10 CVTPD2PS { asmout, "cvtpd2ps" };
Instruction2_Type11 CVTSS2SD { asmout, "cvtss2sd" };
Instruction2_Type14 CVTSD2SS { asmout, "cvtsd2ss" };
Instruction4_Type13 CVTSD2SI { asmout, "cvtsd2si" };
Instruction4_Type13 CVTTSD2SI { asmout, "cvttsd2si" };
Instruction4_Type8 CVTSI2SD { asmout, "cvtsi2sd" };

// SSE2 packed single-precision floating point values
Instruction2_Type10 CVTDQ2PS { asmout, "cvtdq2ps" };
Instruction2_Type10 CVTPS2DQ { asmout, "cvtps2dq" };
Instruction2_Type10 CVTTPS2DQ { asmout, "cvttps2dq" };

// SSE2 128-bit SIMD integer instructions
Instruction3_Type5 MOVDQA { asmout, "movdqa" };
Instruction3_Type5 MOVDQU { asmout, "movdqu" };
Instruction1_Type20 MOVQ2DQ { asmout, "movq2dq" };
Instruction1_Type21 MOVDQ2Q { asmout, "movdq2q" };
Instruction4_Type1 PMULUDQ { asmout, "pmuludq" };
Instruction4_Type1 PADDQ { asmout, "paddq" };
Instruction4_Type1 PSUBQ { asmout, "psubq" };
Instruction2_Type12 PSHUFLW { asmout, "pshuflw" };
Instruction2_Type12 PSHUFHW { asmout, "pshufhw" };
Instruction2_Type12 PSHUFD { asmout, "pshufd" };
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
Instruction2_Type22 MOVNTI { asmout, "movnti" };

// SSE3 x87-FP integer convertion instruction
Instruction3_Type6 FISTTP { asmout, "fisttp" };

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
Instruction2_Type14 MOVDDUP { asmout, "movddup" };

// SSE3 agent synchronization instructions
Instruction1_Type1 MONITOR { asmout, "monitor" };
Instruction1_Type1 MWAIT { asmout, "mwait" };

// SSSE3: horizontal addition/subtraction
Instruction4_Type1 PHADDW { asmout, "phaddw" };
Instruction4_Type1 PHADDSW { asmout, "phaddsw" };
Instruction4_Type1 PHADDD { asmout, "phaddd" };
Instruction4_Type1 PHSUBW { asmout, "phsubw" };
Instruction4_Type1 PHSUBSW { asmout, "phsubsw" };
Instruction4_Type1 PHSUBD { asmout, "phsubd" };

// SSSE3: packed absolute values
Instruction4_Type1 PABSB { asmout, "pabsb" };
Instruction4_Type1 PABSW { asmout, "pabsw" };
Instruction4_Type1 PABSD { asmout, "pabsd" };

// SSSE3: multiply and add packed signed and unsigned bytes
Instruction4_Type1 PMADDUBSW { asmout, "pmaddubsw" };

// SSSE3: packed multiply high with round and scale
Instruction4_Type1 PMULHRSW { asmout, "pmulhrsw" };

// SSSE3: packed shuffle bytes
Instruction4_Type1 PSHUFB { asmout, "pshufb" };

// SSSE3: packed sign
Instruction4_Type1 PSIGNB { asmout, "psignb" };
Instruction4_Type1 PSIGNW { asmout, "psignw" };
Instruction4_Type1 PSIGND { asmout, "psignd" };

// SSSE3: packed align right
Instruction4_Type4 PALIGNR { asmout, "palignr" };

// SSE4.1: dword multiply instructions
Instruction2_Type10 PMULLD { asmout, "pmulld" };
Instruction2_Type10 PMULDQ { asmout, "pmuldq" };

// SSE4.1: floating-point dot product instructions
Instruction2_Type12 DPPD { asmout, "dppd" };
Instruction2_Type12 DPPS { asmout, "dpps" };

// SSE4.1: streaming load hint instruction
Instruction1_Type24 MOVNTDQA { asmout, "movntdqa" };

// SSE4.1: packed blending instructions
Instruction2_Type12 BLENDPD { asmout, "blendpd" };
Instruction2_Type12 BLENDPS { asmout, "blendps" };
Instruction4_Type14 BLENDVPD { asmout, "blendvpd" };
Instruction4_Type14 BLENDVPS { asmout, "blendvps" };
Instruction4_Type14 PBLENDVB { asmout, "pblendvb" };
Instruction2_Type12 PBLENDW { asmout, "pblendw" };

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
Instruction2_Type12 ROUNDPS { asmout, "roundps" };
Instruction2_Type12 ROUNDPD { asmout, "roundpd" };
Instruction2_Type13 ROUNDSS { asmout, "roundss" };
Instruction2_Type15 ROUNDSD { asmout, "roundsd" };

// SSE4.1: insertion and extractions from XMM registers
Instruction3_Type10 EXTRACTPS { asmout, "extractps" };
Instruction2_Type13 INSERTPS { asmout, "insertps" };
Instruction2_Type23 PINSRB { asmout, "pinsrb" };
Instruction2_Type24 PINSRD { asmout, "pinsrd" };
Instruction2_Type25 PINSRQ { asmout, "pinsrq" };
Instruction3_Type9 PEXTRB { asmout, "pextrb" };
Instruction2_Type37 PEXTRD { asmout, "pextrd" };
Instruction2_Type26 PEXTRQ { asmout, "pextrq" };

// SSE4.1: packed integer format convertions
Instruction2_Type14 PMOVSXBW { asmout, "pmovsxbw" };
Instruction2_Type14 PMOVSXWD { asmout, "pmovsxwd" };
Instruction2_Type14 PMOVSXDQ { asmout, "pmovsxdq" };
Instruction2_Type11 PMOVSXBD { asmout, "pmovsxbd" };
Instruction2_Type11 PMOVSXWQ { asmout, "pmovsxwq" };
Instruction2_Type27 PMOVSXBQ { asmout, "pmovsxbq" };
Instruction2_Type14 PMOVZXBW { asmout, "pmovzxbw" };
Instruction2_Type14 PMOVZXWD { asmout, "pmovzxwd" };
Instruction2_Type14 PMOVZXDQ { asmout, "pmovzxdq" };
Instruction2_Type11 PMOVZXBD { asmout, "pmovzxbd" };
Instruction2_Type11 PMOVZXWQ { asmout, "pmovzxwq" };
Instruction2_Type27 PMOVZXBQ { asmout, "pmovzxbq" };

// SSE4.1: improved sums of absolute differences for 4-byte blocks
Instruction2_Type12 MPSADBW { asmout, "mpsadbw" };

// SSE4.1: horizontal search
Instruction2_Type10 PHMINPOSUW { asmout, "phminposuw" };

// SSE4.1: packed test
Instruction2_Type10 PTEST { asmout, "ptest" };

// SSE4.1: packed qword equality comparison
Instruction2_Type10 PCMPEQQ { asmout, "pcmpeqq" };

// SSE4.1: dword packing with unsigned saturation
Instruction2_Type10 PACKUSDW { asmout, "packusdw" };

// SSE4.2: string and text processing instructions
Instruction2_Type12 PCMPESTRI { asmout, "pcmpestri" };
Instruction2_Type12 PCMPESTRM { asmout, "pcmpestrm" };
Instruction2_Type12 PCMPISTRI { asmout, "pcmpistri" };
Instruction2_Type12 PCMPISTRM { asmout, "pcmpistrm" };

// SSE4.2: packed comparison SIMD integer instruction
Instruction2_Type10 PCMPGTQ { asmout, "pcmpgtq" };

// SSE4.2: CRC
Instruction10_Type2 CRC32 { asmout, "crc32" };

// AESNI and PCLMULQDQ
Instruction2_Type10 AESDEC { asmout, "aesdec" };
Instruction2_Type10 AESDECLAST { asmout, "aesdeclast" };
Instruction2_Type10 AESENC { asmout, "aesenc" };
Instruction2_Type10 AESENCLAST { asmout, "aesenclast" };
Instruction2_Type10 AESIMC { asmout, "aesimc" };
Instruction2_Type12 AESKEYGENASSIST { asmout, "aeskeygenassist" };
Instruction2_Type12 PCLMULQDQ { asmout, "pclmulqdq" };

// 16-bit floating-point convertion instructions
Instruction4_Type15 VCVTPH2PS { asmout, "vcvtph2ps" };
Instruction4_Type16 VCVTPS2PH { asmout, "vcvtps2ph" };

// Fused-multiply-add (FMA) extensions
Instruction4_Type17 VFMADD132PD { asmout, "vfmadd132pd" };
Instruction4_Type17 VFMADD213PD { asmout, "vfmadd213pd" };
Instruction4_Type17 VFMADD231PD { asmout, "vfmadd231pd" };
Instruction4_Type17 VFMADD132PS { asmout, "vfmadd132ps" };
Instruction4_Type17 VFMADD213PS { asmout, "vfmadd213ps" };
Instruction4_Type17 VFMADD231PS { asmout, "vfmadd231ps" };
Instruction2_Type28 VFMADD132SD { asmout, "vfmadd132sd" };
Instruction2_Type28 VFMADD213SD { asmout, "vfmadd213sd" };
Instruction2_Type28 VFMADD231SD { asmout, "vfmadd231sd" };
Instruction2_Type29 VFMADD132SS { asmout, "vfmadd132ss" };
Instruction2_Type29 VFMADD213SS { asmout, "vfmadd213ss" };
Instruction2_Type29 VFMADD231SS { asmout, "vfmadd231ss" };
Instruction4_Type17 VFMADDSUB132PD { asmout, "vfmaddsub132pd" };
Instruction4_Type17 VFMADDSUB213PD { asmout, "vfmaddsub213pd" };
Instruction4_Type17 VFMADDSUB231PD { asmout, "vfmaddsub231pd" };
Instruction4_Type17 VFMADDSUB132PS { asmout, "vfmaddsub132ps" };
Instruction4_Type17 VFMADDSUB213PS { asmout, "vfmaddsub213ps" };
Instruction4_Type17 VFMADDSUB231PS { asmout, "vfmaddsub231ps" };
Instruction4_Type17 VFMSUBADD132PD { asmout, "vfmsubadd132pd" };
Instruction4_Type17 VFMSUBADD213PD { asmout, "vfmsubadd213pd" };
Instruction4_Type17 VFMSUBADD231PD { asmout, "vfmsubadd231pd" };
Instruction4_Type17 VFMSUBADD132PS { asmout, "vfmsubadd132ps" };
Instruction4_Type17 VFMSUBADD213PS { asmout, "vfmsubadd213ps" };
Instruction4_Type17 VFMSUBADD231PS { asmout, "vfmsubadd231ps" };
Instruction4_Type17 VFMSUB132PD { asmout, "vfmsub132pd" };
Instruction4_Type17 VFMSUB213PD { asmout, "vfmsub213pd" };
Instruction4_Type17 VFMSUB231PD { asmout, "vfmsub231pd" };
Instruction4_Type17 VFMSUB132PS { asmout, "vfmsub132ps" };
Instruction4_Type17 VFMSUB213PS { asmout, "vfmsub213ps" };
Instruction4_Type17 VFMSUB231PS { asmout, "vfmsub231ps" };
Instruction2_Type28 VFMSUB132SD { asmout, "vfmsub132sd" };
Instruction2_Type28 VFMSUB213SD { asmout, "vfmsub213sd" };
Instruction2_Type28 VFMSUB231SD { asmout, "vfmsub231sd" };
Instruction2_Type29 VFMSUB132SS { asmout, "vfmsub132ss" };
Instruction2_Type29 VFMSUB213SS { asmout, "vfmsub213ss" };
Instruction2_Type29 VFMSUB231SS { asmout, "vfmsub231ss" };
Instruction4_Type17 VFNMADD132PD { asmout, "vfnmadd132pd" };
Instruction4_Type17 VFNMADD213PD { asmout, "vfnmadd213pd" };
Instruction4_Type17 VFNMADD231PD { asmout, "vfnmadd231pd" };
Instruction4_Type17 VFNMADD132PS { asmout, "vfnmadd132ps" };
Instruction4_Type17 VFNMADD213PS { asmout, "vfnmadd213ps" };
Instruction4_Type17 VFNMADD231PS { asmout, "vfnmadd231ps" };
Instruction2_Type28 VFNMADD132SD { asmout, "vfnmadd132sd" };
Instruction2_Type28 VFNMADD213SD { asmout, "vfnmadd213sd" };
Instruction2_Type28 VFNMADD231SD { asmout, "vfnmadd231sd" };
Instruction2_Type29 VFNMADD132SS { asmout, "vfnmadd132ss" };
Instruction2_Type29 VFNMADD213SS { asmout, "vfnmadd213ss" };
Instruction2_Type29 VFNMADD231SS { asmout, "vfnmadd231ss" };
Instruction4_Type17 VFNMSUB132PD { asmout, "vfnmsub132pd" };
Instruction4_Type17 VFNMSUB213PD { asmout, "vfnmsub213pd" };
Instruction4_Type17 VFNMSUB231PD { asmout, "vfnmsub231pd" };
Instruction4_Type17 VFNMSUB132PS { asmout, "vfnmsub132ps" };
Instruction4_Type17 VFNMSUB213PS { asmout, "vfnmsub213ps" };
Instruction4_Type17 VFNMSUB231PS { asmout, "vfnmsub231ps" };
Instruction2_Type28 VFNMSUB132SD { asmout, "vfnmsub132sd" };
Instruction2_Type28 VFNMSUB213SD { asmout, "vfnmsub213sd" };
Instruction2_Type28 VFNMSUB231SD { asmout, "vfnmsub231sd" };
Instruction2_Type29 VFNMSUB132SS { asmout, "vfnmsub132ss" };
Instruction2_Type29 VFNMSUB213SS { asmout, "vfnmsub213ss" };
Instruction2_Type29 VFNMSUB231SS { asmout, "vfnmsub231ss" };

// AVX arithmetic instructions
Instruction4_Type18 VSQRTPD { asmout, "vsqrtpd" };
Instruction4_Type18 VSQRTPS { asmout, "vsqrtps" };
Instruction4_Type18 VRSQRTPS { asmout, "vrsqrtps" };
Instruction2_Type29 VRSQRTSS { asmout, "vrsqrtss" };
Instruction4_Type18 VRCPPS { asmout, "vrcpps" };
Instruction4_Type17 VADDPD { asmout, "vaddpd" };
Instruction4_Type17 VADDPS { asmout, "vaddps" };
Instruction4_Type17 VSUBPD { asmout, "vsubpd" };
Instruction4_Type17 VSUBPS { asmout, "vsubps" };
Instruction4_Type17 VMULPD { asmout, "vmulpd" };
Instruction4_Type17 VMULPS { asmout, "vmulps" };
Instruction4_Type17 VDIVPD { asmout, "vdivpd" };
Instruction4_Type17 VDIVPS { asmout, "vdivps" };
Instruction4_Type15 VCVTPS2PD { asmout, "vcvtps2pd" };
Instruction4_Type19 VCVTPD2PS { asmout, "vcvtpd2ps" };
Instruction4_Type18 VCVTPS2DQ { asmout, "vcvtps2dq" };
Instruction4_Type18 VCVTDQ2PS { asmout, "vcvtdq2ps" };
Instruction4_Type18 VCVTTPS2DQ { asmout, "vcvttps2dq" };
Instruction4_Type19 VCVTTPD2DQ { asmout, "vcvttpd2dq" };
Instruction4_Type19 VCVTPD2DQ { asmout, "vcvtpd2dq" };
Instruction4_Type15 VCVTDQ2PD { asmout, "vcvtdq2pd" };
Instruction4_Type17 VMINPS { asmout, "vminps" };
Instruction4_Type17 VMINPD { asmout, "vminpd" };
Instruction4_Type17 VMAXPS { asmout, "vmaxps" };
Instruction4_Type17 VMAXPD { asmout, "vmaxpd" };
Instruction4_Type17 VHADDPS { asmout, "vhaddps" };
Instruction4_Type17 VHADDPD { asmout, "vhaddpd" };
Instruction4_Type17 VHSUBPS { asmout, "vhsubps" };
Instruction4_Type17 VHSUBPD { asmout, "vhsubpd" };
Instruction4_Type20 VCMPPS { asmout, "vcmpps" };
Instruction4_Type20 VCMPPD { asmout, "vcmppd" };
Instruction4_Type17 VADDSUBPS { asmout, "vaddsubps" };
Instruction4_Type17 VADDSUBPD { asmout, "vaddsubpd" };
Instruction4_Type20 VDPPS { asmout, "vdpps" };
Instruction2_Type30 VDPPD { asmout, "vdppd" };
Instruction4_Type21 VROUNDPS { asmout, "vroundps" };
Instruction4_Type21 VROUNDPD { asmout, "vroundpd" };
Instruction6_Type5 VMOVAPS { asmout, "vmovaps" };
Instruction6_Type5 VMOVAPD { asmout, "vmovapd" };
Instruction6_Type5 VMOVDQA { asmout, "vmovdqa" };
Instruction6_Type5 VMOVUPS { asmout, "vmovups" };
Instruction6_Type5 VMOVUPD { asmout, "vmovupd" };
Instruction6_Type5 VMOVDQU { asmout, "vmovdqu" };
Instruction4_Type22 VMOVMSKPS { asmout, "vmovmskps" };
Instruction4_Type22 VMOVMSKPD { asmout, "vmovmskpd" };
Instruction2_Type31 VLDDQU { asmout, "vlddqu" };
Instruction2_Type32 VMOVNTPS { asmout, "vmovntps" };
Instruction2_Type32 VMOVNTPD { asmout, "vmovntpd" };
Instruction2_Type32 VMOVNTDQ { asmout, "vmovntdq" };
Instruction2_Type31 VMOVNTDQA { asmout, "vmovntdqa" };
Instruction4_Type18 VMOVSHDUP { asmout, "vmovshdup" };
Instruction4_Type18 VMOVSLDUP { asmout, "vmovsldup" };
Instruction4_Type18 VMOVDDUP { asmout, "vmovddup" };
Instruction4_Type17 VUNPCKHPD { asmout, "vunpckhpd" };
Instruction4_Type17 VUNPCKLPD { asmout, "vunpcklpd" };
Instruction4_Type17 VUNPCKHPS { asmout, "vunpckhps" };
Instruction4_Type17 VUNPCKLPS { asmout, "vunpcklps" };
Instruction4_Type20 VBLENDPS { asmout, "vblendps" };
Instruction4_Type20 VBLENDPD { asmout, "vblendpd" };
Instruction4_Type20 VSHUFPS { asmout, "vshufps" };
Instruction4_Type20 VSHUFPD { asmout, "vshufpd" };
Instruction4_Type23 VBLENDVPD { asmout, "vblendvpd" };
Instruction4_Type23 VBLENDVPS { asmout, "vblendvps" };
Instruction4_Type18 VPTEST { asmout, "vptest" };
Instruction4_Type17 VXORPS { asmout, "vxorps" };
Instruction4_Type17 VXORPD { asmout, "vxorpd" };
Instruction4_Type17 VORPS { asmout, "vorps" };
Instruction4_Type17 VORPD { asmout, "vorpd" };
Instruction4_Type17 VANDPS { asmout, "vandps" };
Instruction4_Type17 VANDPD { asmout, "vandpd" };
Instruction4_Type17 VANDNPS { asmout, "vandnps" };
Instruction4_Type17 VANDNPD { asmout, "vandnpd" };
Instruction1_Type1 VZEROALL { asmout, "vzeroall" };
Instruction1_Type1 VZEROUPPER { asmout, "vzeroupper" };
Instruction2_Type33 VBROADCASTSS { asmout, "vbroadcastss" };
Instruction1_Type25 VBROADCASTSD { asmout, "vbroadcastsd" };
Instruction1_Type26 VBROADCASTF128 { asmout, "vbroadcastf128" };
Instruction2_Type34 VEXTRACTF128 { asmout, "vextractf128" };
Instruction2_Type35 VINSERTF128 { asmout, "vinsertf128" };
Instruction4_Type24 VMASKMOVPS { asmout, "vmaskmovps" };
Instruction4_Type24 VMASKMOVPD { asmout, "vmaskmovpd" };
Instruction8_Type5 VPERMILPD { asmout, "vpermilpd" };
Instruction8_Type5 VPERMILPS { asmout, "vpermilps" };
Instruction2_Type36 VPERM2F128 { asmout, "vperm2f128" };
Instruction4_Type18 VTESTPS { asmout, "vtestps" };
Instruction4_Type18 VTESTPD { asmout, "vtestpd" };
Instruction4_Type25 VCVTSI2SS { asmout, "vcvtsi2ss" };
Instruction4_Type25 VCVTSI2SD { asmout, "vcvtsi2sd" };
Instruction4_Type13 VCVTSD2SI { asmout, "vcvtsd2si" };
Instruction4_Type9 VCVTTSS2SI { asmout, "vcvttss2si" };
Instruction4_Type13 VCVTTSD2SI { asmout, "vcvttsd2si" };
Instruction4_Type9 VCVTSS2SI { asmout, "vcvtss2si" };

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
Instruction4_Type5 VMOVD { asmout, "vmovd" };
Instruction4_Type6 VMOVQ { asmout, "vmovq" };
Instruction1_Type14 VLDMXCSR { asmout, "vldmxcsr" };
Instruction1_Type14 VSTMXCSR { asmout, "vstmxcsr" };

// Transactional synchronization extension (TSX)
Instruction1_Type10 XABORT { asmout, "xabort" };
Instruction1_Type11 XACQUIRE { asmout, "xacquire" };
Instruction1_Type11 XRELEASE { asmout, "xrelease" };
Instruction1_Type4  XBEGIN { asmout, "xbegin" };
Instruction1_Type1  XEND { asmout, "xend" };
Instruction1_Type1  XTEST { asmout, "xtest" };

// SHA extensions
Instruction2_Type10 SHA1MSG1 { asmout, "sha1msg1" };
Instruction2_Type10 SHA1MSG2 { asmout, "sha1msg2" };
Instruction2_Type10 SHA1NEXTE { asmout, "sha1nexte" };
Instruction2_Type12 SHA1RNDS4 { asmout, "sha1rnds4" };
Instruction2_Type10 SHA256MSG1 { asmout, "sha256msg1" };
Instruction2_Type10 SHA256MSG2 { asmout, "sha256msg2" };
Instruction2_Type38 SHA256RNDS2 { asmout, "sha256rnds2" };

// OpMask instructions
Instruction1_Type27 KADDB { asmout, "kaddb" };
Instruction1_Type27 KADDW { asmout, "kaddw" };
Instruction1_Type27 KADDD { asmout, "kaddd" };
Instruction1_Type27 KADDQ { asmout, "kaddq" };
Instruction1_Type27 KANDB { asmout, "kandb" };
Instruction1_Type27 KANDW { asmout, "kandw" };
Instruction1_Type27 KANDD { asmout, "kandd" };
Instruction1_Type27 KANDQ { asmout, "kandq" };
Instruction1_Type27 KANDNB { asmout, "kandnb" };
Instruction1_Type27 KANDNW { asmout, "kandnw" };
Instruction1_Type27 KANDND { asmout, "kandnd" };
Instruction1_Type27 KANDNQ { asmout, "kandnq" };
Instruction1_Type27 KORB { asmout, "korb" };
Instruction1_Type27 KORW { asmout, "korw" };
Instruction1_Type27 KORD { asmout, "kord" };
Instruction1_Type27 KORQ { asmout, "korq" };
Instruction1_Type27 KUNPCKBW { asmout, "kunpckbw" };
Instruction1_Type27 KUNPCKWD { asmout, "kunpckwd" };
Instruction1_Type27 KUNPCKDQ { asmout, "kunpckdq" };
Instruction1_Type27 KXNORB { asmout, "kxnorb" };
Instruction1_Type27 KXNORW { asmout, "kxnorw" };
Instruction1_Type27 KXNORD { asmout, "kxnord" };
Instruction1_Type27 KXNORQ { asmout, "kxnorq" };
Instruction1_Type27 KXORB { asmout, "kxorb" };
Instruction1_Type27 KXORW { asmout, "kxorw" };
Instruction1_Type27 KXORD { asmout, "kxord" };
Instruction1_Type27 KXORQ { asmout, "kxorq" };
Instruction5_Type3 KMOVB { asmout, "kmovb" };
Instruction5_Type4 KMOVW { asmout, "kmovw" };
Instruction5_Type5 KMOVD { asmout, "kmovd" };
Instruction5_Type6 KMOVQ { asmout, "kmovq" };
Instruction1_Type28 KNOTB { asmout, "knotb" };
Instruction1_Type28 KNOTW { asmout, "knotw" };
Instruction1_Type28 KNOTD { asmout, "knotd" };
Instruction1_Type28 KNOTQ { asmout, "knotq" };
Instruction1_Type28 KORTESTB { asmout, "kortestb" };
Instruction1_Type28 KORTESTW { asmout, "kortestw" };
Instruction1_Type28 KORTESTD { asmout, "kortestd" };
Instruction1_Type28 KORTESTQ { asmout, "kortestq" };
Instruction1_Type28 KTESTB { asmout, "ktestb" };
Instruction1_Type28 KTESTW { asmout, "ktestw" };
Instruction1_Type28 KTESTD { asmout, "ktestd" };
Instruction1_Type28 KTESTQ { asmout, "ktestq" };
Instruction1_Type29 KSHIFTLB { asmout, "kshiftlb" };
Instruction1_Type29 KSHIFTLW { asmout, "kshiftlw" };
Instruction1_Type29 KSHIFTLD { asmout, "kshiftld" };
Instruction1_Type29 KSHIFTLQ { asmout, "kshiftlq" };
Instruction1_Type29 KSHIFTRB { asmout, "kshiftrb" };
Instruction1_Type29 KSHIFTRW { asmout, "kshiftrw" };
Instruction1_Type29 KSHIFTRD { asmout, "kshiftrd" };
Instruction1_Type29 KSHIFTRQ { asmout, "kshiftrq" };

// VMX instructions
Instruction2_Type39 INVEPT { asmout, "invept" };
Instruction2_Type39 INVVPID { asmout, "invvpid" };
Instruction1_Type1 VMCALL { asmout, "vmcall" };
Instruction1_Type1 VMFUNC { asmout, "vmfunc" };
Instruction1_Type1 VMLAUNCH { asmout, "vmlaunch" };
Instruction1_Type1 VMRESUME { asmout, "vmresume" };
Instruction1_Type1 VMXOFF { asmout, "vmxoff" };
Instruction2_Type40 VMCLEAR { asmout, "vmclear" };
Instruction2_Type40 VMPTRLD { asmout, "vmptrld" };
Instruction2_Type40 VMPTRST { asmout, "vmptrst" };

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
