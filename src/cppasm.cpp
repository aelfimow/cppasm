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
Instruction_MOV MOV { asmout };
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
Instruction_PUSH PUSH { asmout };
Instruction_NoOperands PUSHA { asmout, "pusha" };
Instruction_NoOperands PUSHAD { asmout, "pushal" };
Instruction_POP POP { asmout };
Instruction_NoOperands POPA { asmout, "popa" };
Instruction_NoOperands POPAD { asmout, "popal" };
Instruction_NoOperands CWD { asmout, "cwtd" };
Instruction_NoOperands CDQ { asmout, "cltd" };
Instruction_NoOperands CQO { asmout, "cqto" };
Instruction_MovWithExt MOVSX { asmout, "movs" };
Instruction_MovWithExt MOVZX { asmout, "movz" };
Instruction_XCHG XCHG { asmout };
Instruction_BSWAP BSWAP { asmout };

// Binary arithmetic instructions
Instruction_ADD ADD { asmout };
Instruction_ADC ADC { asmout };
Instruction_ADCX ADCX { asmout };

// Decimal arithmetic instructions
Instruction_NoOperands AAA { asmout, "aaa" };
Instruction_AAD AAD { asmout };
Instruction_AAM AAM { asmout };
Instruction_NoOperands AAS { asmout, "aas" };
Instruction_NoOperands DAA { asmout, "daa" };
Instruction_NoOperands DAS { asmout, "das" };

// Logical instructions
Instruction_Logical AND { asmout, "and" };
Instruction_Logical OR { asmout, "or" };
Instruction_Logical XOR { asmout, "xor" };

// Shift and rotate instructions
Instruction_Shift SAL { asmout, "sal" };
Instruction_Shift SAR { asmout, "sar" };
Instruction_Shift SHL { asmout, "shl" };
Instruction_Shift SHR { asmout, "shr" };

// Bit and byte instructions
Instruction_SETcc SETA { asmout, "seta" };
Instruction_SETcc SETAE { asmout, "setae" };
Instruction_SETcc SETB { asmout, "setb" };
Instruction_SETcc SETBE { asmout, "setbe" };
Instruction_SETcc SETC { asmout, "setc" };
Instruction_SETcc SETE { asmout, "sete" };
Instruction_SETcc SETG { asmout, "setg" };
Instruction_SETcc SETGE { asmout, "setge" };
Instruction_SETcc SETL { asmout, "setl" };
Instruction_SETcc SETLE { asmout, "setle" };
Instruction_SETcc SETNA { asmout, "setna" };
Instruction_SETcc SETNAE { asmout, "setnae" };
Instruction_SETcc SETNB { asmout, "setnb" };
Instruction_SETcc SETNBE { asmout, "setnbe" };
Instruction_SETcc SETNC { asmout, "setnc" };
Instruction_SETcc SETNE { asmout, "setne" };
Instruction_SETcc SETNG { asmout, "setng" };
Instruction_SETcc SETNGE { asmout, "setnge" };
Instruction_SETcc SETNL { asmout, "setnl" };
Instruction_SETcc SETNLE { asmout, "setle" };
Instruction_SETcc SETNO { asmout, "setno" };
Instruction_SETcc SETNP { asmout, "setnp" };
Instruction_SETcc SETNS { asmout, "setns" };
Instruction_SETcc SETNZ { asmout, "setnz" };
Instruction_SETcc SETO { asmout, "seto" };
Instruction_SETcc SETP { asmout, "setp" };
Instruction_SETcc SETPE { asmout, "setpe" };
Instruction_SETcc SETPO { asmout, "setpo" };
Instruction_SETcc SETS { asmout, "sets" };
Instruction_SETcc SETZ { asmout, "setz" };
Instruction_TEST TEST { asmout };

// Control transfer instructions
Instruction_Jcc JA { asmout, "ja" };
Instruction_Jcc JAE { asmout, "jae" };
Instruction_Jcc JB { asmout, "jb" };
Instruction_Jcc JBE { asmout, "jbe" };
Instruction_Jcc JC { asmout, "jc" };
Instruction_Jcc JCXZ { asmout, "jcxz" };
Instruction_Jcc JECXZ { asmout, "jecxz" };
Instruction_Jcc JRCXZ { asmout, "jrcxz" };
Instruction_Jcc JE { asmout, "je" };
Instruction_Jcc JG { asmout, "jg" };
Instruction_Jcc JGE { asmout, "jge" };
Instruction_Jcc JL { asmout, "jl" };
Instruction_Jcc JLE { asmout, "jle" };
Instruction_Jcc JNA { asmout, "jna" };
Instruction_Jcc JNAE { asmout, "jnae" };
Instruction_Jcc JNB { asmout, "jnb" };
Instruction_Jcc JNBE { asmout, "jnbe" };
Instruction_Jcc JNC { asmout, "jnc" };
Instruction_Jcc JNE { asmout, "jne" };
Instruction_Jcc JNG { asmout, "jng" };
Instruction_Jcc JNGE { asmout, "jnge" };
Instruction_Jcc JNL { asmout, "jnl" };
Instruction_Jcc JNLE { asmout, "jnle" };
Instruction_Jcc JNO { asmout, "jno" };
Instruction_Jcc JNP { asmout, "jnp" };
Instruction_Jcc JNS { asmout, "jns" };
Instruction_Jcc JNZ { asmout, "jnz" };
Instruction_Jcc JO { asmout, "jo" };
Instruction_Jcc JP { asmout, "jp" };
Instruction_Jcc JPE { asmout, "jpe" };
Instruction_Jcc JPO { asmout, "jpo" };
Instruction_Jcc JS { asmout, "js" };
Instruction_Jcc JZ { asmout, "jz" };
Instruction_RET RET { asmout };

// Flag control (EFLAG) instructions
Instruction_NoOperands CLC { asmout, "clc" };
Instruction_NoOperands CLD { asmout, "cld" };
Instruction_NoOperands CLI { asmout, "cli" };
Instruction_NoOperands CMC { asmout, "cmc" };
Instruction_NoOperands PUSHF { asmout, "pushf" };
Instruction_NoOperands POPF { asmout, "popf" };
Instruction_NoOperands POPFD { asmout, "popfl" };
Instruction_NoOperands POPFQ { asmout, "popfq" };
Instruction_NoOperands STC { asmout, "stc" };
Instruction_NoOperands STI { asmout, "sti" };
Instruction_NoOperands STD { asmout, "std" };

// Miscelleneous instructions
Instruction_NOP NOP { asmout };
Instruction_NoOperands UD { asmout, ".byte 0x0F, 0xFF" };
Instruction_NoOperands UD1 { asmout, "ud1" };
Instruction_NoOperands UD2 { asmout, "ud2" };
Instruction_NoOperands CPUID { asmout, "cpuid" };
Instruction_CLFLUSH CLFLUSH { asmout, "clflush" };
Instruction_CLFLUSH CLFLUSHOPT { asmout, "clflushopt" };

// x87 FPU data transfer instructions
Instruction_FST FST { asmout, "fst" };
Instruction_FST FSTP { asmout, "fstp" };

// x87 FPU basic arithmetic instructions
Instruction_NoOperands FPREM { asmout, "fprem" };
Instruction_NoOperands FPREM1 { asmout, "fprem1" };
Instruction_NoOperands FABS { asmout, "fabs" };
Instruction_NoOperands FCHS { asmout, "fchs" };
Instruction_NoOperands FRNDINT { asmout, "frndint" };
Instruction_NoOperands FSCALE { asmout, "fscale" };
Instruction_NoOperands FSQRT { asmout, "fsqrt" };
Instruction_NoOperands FXTRACT { asmout, "fxtract" };

// x87 FPU comparison instructions
Instruction_NoOperands FTST { asmout, "ftst" };
Instruction_NoOperands FXAM { asmout, "fxam" };

// x87 FPU transcendental instructions
Instruction_NoOperands FSIN { asmout, "fsin" };
Instruction_NoOperands FSINCOS { asmout, "fsincos" };
Instruction_NoOperands FCOS { asmout, "fcos" };
Instruction_NoOperands FPTAN { asmout, "fptan" };
Instruction_NoOperands FPATAN { asmout, "fpatan" };
Instruction_NoOperands F2XM1 { asmout, "f2xm1" };
Instruction_NoOperands FYL2X { asmout, "fyl2x" };
Instruction_NoOperands FYL2XP1 { asmout, "fyl2xp1" };

// x87 FPU load constants instructions
Instruction_NoOperands FLD1 { asmout, "fld1" };
Instruction_NoOperands FLDL2T { asmout, "fldl2t" };
Instruction_NoOperands FLDL2E { asmout, "fldl2e" };
Instruction_NoOperands FLDPI { asmout, "fldpi" };
Instruction_NoOperands FLDLG2 { asmout, "fldlg2" };
Instruction_NoOperands FLDLN2 { asmout, "fldln2" };
Instruction_NoOperands FLDZ { asmout, "fldz" };

// x87 FPU control instructions
Instruction_NoOperands FINCSTP { asmout, "fincstp" };
Instruction_NoOperands FDECSTP { asmout, "fdecstp" };
Instruction_NoOperands FINIT { asmout, "finit" };
Instruction_NoOperands FNINIT { asmout, "fninit" };
Instruction_NoOperands FCLEX { asmout, "fclex" };
Instruction_NoOperands FNCLEX { asmout, "fnclex" };
Instruction_NoOperands FNOP { asmout, "fnop" };

// MMX state management instructions
Instruction_NoOperands EMMS { asmout, "emms" };

// System instructions
Instruction_NoOperands CLAC { asmout, "clac" };
Instruction_NoOperands CLTS { asmout, "clts" };
Instruction_NoOperands HLT { asmout, "hlt" };
Instruction_NoOperands RDPMC { asmout, "rdpmc" };
Instruction_NoOperands RDTSC { asmout, "rdtsc" };
Instruction_NoOperands RDTSCP { asmout, "rdtscp" };
Instruction_NoOperands SYSENTER { asmout, "sysenter" };
Instruction_NoOperands SYSEXIT { asmout, "sysexit" };

// SSE3 agent synchronization instructions
Instruction_NoOperands MONITOR { asmout, "monitor" };
Instruction_NoOperands MWAIT { asmout, "mwait" };

// 64-bit mode instructions
Instruction_NoOperands SYSCALL { asmout, "syscall" };
Instruction_NoOperands SYSRET { asmout, "sysret" };

Keyword_comment comment;
Keyword_global global;
Keyword_label label;
