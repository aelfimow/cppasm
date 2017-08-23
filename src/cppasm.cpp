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
Instruction_NoOperands PUSHA { asmout, "pusha" };
Instruction_NoOperands PUSHAD { asmout, "pushal" };
Instruction_POP POP { asmout, "pop" };
Instruction_NoOperands POPA { asmout, "popa" };
Instruction_NoOperands POPAD { asmout, "popal" };
Instruction_NoOperands CWD { asmout, "cwtd" };
Instruction_NoOperands CDQ { asmout, "cltd" };
Instruction_NoOperands CQO { asmout, "cqto" };
Instruction_MovWithExt MOVSX { asmout, "movs" };
Instruction_MovWithExt MOVZX { asmout, "movz" };
Instruction_XCHG XCHG { asmout, "xchg" };
Instruction_BSWAP BSWAP { asmout, "bswap" };
Instruction_XADD XADD { asmout, "xadd" };
Instruction_CMPXCHG CMPXCHG { asmout, "cmpxchg" };
Instruction_CMPXCHG8B CMPXCHG8B { asmout, "cmpxchg8b" };
Instruction_CMPXCHG16B CMPXCHG16B { asmout, "cmpxchg16b" };

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
Instruction_NoOperands AAA { asmout, "aaa" };
Instruction_AsciiAdj AAD { asmout, "aad" };
Instruction_AsciiAdj AAM { asmout, "aam" };
Instruction_NoOperands AAS { asmout, "aas" };
Instruction_NoOperands DAA { asmout, "daa" };
Instruction_NoOperands DAS { asmout, "das" };

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
Instruction_TEST TEST { asmout, "test" };

// Control transfer instructions
Instruction_Branch JMP { asmout, "jmp" };
Instruction_Branch JMP_FAR { asmout, "ljmp" };
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
Instruction_Branch CALL { asmout, "call" };
Instruction_Branch CALL_FAR { asmout, "lcall" };
Instruction_RET RET { asmout, "ret" };
Instruction_RET RET_FAR { asmout, "lret" };
Instruction_ENTER ENTER { asmout, "enter" };
Instruction_NoOperands LEAVE { asmout, "leave" };
Instruction_INT INT { asmout, "int" };
Instruction_NoOperands INTO { asmout, "into" };
Instruction_NoOperands IRET { asmout, "iret" };
Instruction_NoOperands IRETD { asmout, "iretl" };
Instruction_NoOperands IRETQ { asmout, "iretq" };
Instruction_LOOPcc LOOP { asmout, "loop" };
Instruction_LOOPcc LOOPE { asmout, "loope" };
Instruction_LOOPcc LOOPNE { asmout, "loopne" };
Instruction_LOOPcc LOOPZ { asmout, "loopz" };
Instruction_LOOPcc LOOPNZ { asmout, "loopnz" };
Instruction_BOUND BOUND { asmout, "bound" };

// String instructions
Instruction_NoOperands MOVSB { asmout, "movsb" };
Instruction_NoOperands MOVSW { asmout, "movsw" };
Instruction_NoOperands MOVSD { asmout, "movsl" };
Instruction_NoOperands MOVSQ { asmout, "movsq" };
Instruction_NoOperands CMPSB { asmout, "cmpsb" };
Instruction_NoOperands CMPSW { asmout, "cmpsw" };
Instruction_NoOperands CMPSD { asmout, "cmpsl" };
Instruction_NoOperands CMPSQ { asmout, "cmpsq" };
Instruction_NoOperands SCASB { asmout, "scasb" };
Instruction_NoOperands SCASW { asmout, "scasw" };
Instruction_NoOperands SCASD { asmout, "scasl" };
Instruction_NoOperands SCASQ { asmout, "scasq" };
Instruction_NoOperands LODSB { asmout, "lodsb" };
Instruction_NoOperands LODSW { asmout, "lodsw" };
Instruction_NoOperands LODSD { asmout, "lodsl" };
Instruction_NoOperands LODSQ { asmout, "lodsq" };
Instruction_NoOperands STOSB { asmout, "stosb" };
Instruction_NoOperands STOSW { asmout, "stosw" };
Instruction_NoOperands STOSD { asmout, "stosl" };
Instruction_NoOperands STOSQ { asmout, "stosq" };
Instruction_Prefix REP { asmout, "rep" };
Instruction_Prefix REPE { asmout, "repe" };
Instruction_Prefix REPZ { asmout, "repz" };
Instruction_Prefix REPNE { asmout, "repne" };
Instruction_Prefix REPNZ { asmout, "repnz" };

// I/O instructions
Instruction_IN IN { asmout, "in" };
Instruction_NoOperands INSB { asmout, "insb" };
Instruction_NoOperands INSW { asmout, "insw" };
Instruction_NoOperands INSD { asmout, "insl" };
Instruction_OUT OUT { asmout, "out" };
Instruction_NoOperands OUTSB { asmout, "outsb" };
Instruction_NoOperands OUTSW { asmout, "outsw" };
Instruction_NoOperands OUTSD { asmout, "outsl" };

// Flag control (EFLAG) instructions
Instruction_NoOperands CLC { asmout, "clc" };
Instruction_NoOperands CLD { asmout, "cld" };
Instruction_NoOperands CLI { asmout, "cli" };
Instruction_NoOperands CMC { asmout, "cmc" };
Instruction_NoOperands LAHF { asmout, "lahf" };
Instruction_NoOperands SAHF { asmout, "sahf" };
Instruction_NoOperands PUSHF { asmout, "pushf" };
Instruction_NoOperands POPF { asmout, "popf" };
Instruction_NoOperands POPFD { asmout, "popfl" };
Instruction_NoOperands POPFQ { asmout, "popfq" };
Instruction_NoOperands STC { asmout, "stc" };
Instruction_NoOperands STI { asmout, "sti" };
Instruction_NoOperands STD { asmout, "std" };

// Segment register instructions
Instruction_LoadFarPointer LDS { asmout, "lds" };
Instruction_LoadFarPointer LES { asmout, "les" };
Instruction_LoadFarPointer LFS { asmout, "lfs" };
Instruction_LoadFarPointer LGS { asmout, "lgs" };
Instruction_LoadFarPointer LSS { asmout, "lss" };

// Miscelleneous instructions
Instruction_LEA LEA { asmout, "lea" };
Instruction_NOP NOP { asmout, "nop" };
Instruction_NoOperands UD { asmout, ".byte 0x0F, 0xFF" };
Instruction_NoOperands UD1 { asmout, "ud1" };
Instruction_NoOperands UD2 { asmout, "ud2" };
Instruction_NoOperands CPUID { asmout, "cpuid" };
Instruction_NoOperands XLAT { asmout, "xlat" };
Instruction_MemOnly CLFLUSH { asmout, "clflush" };
Instruction_MemOnly CLFLUSHOPT { asmout, "clflushopt" };

// User mode extended state save/restore instructions
Instruction_MemOnly XSAVE { asmout, "xsave" };
Instruction_MemOnly XSAVEC { asmout, "xsavec" };
Instruction_MemOnly XSAVEOPT { asmout, "xsaveopt" };
Instruction_MemOnly XRSTOR { asmout, "xrstor" };
Instruction_NoOperands XGETBV { asmout, "xgetbv" };

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
Instruction_FBCD FBLD { asmout, "fbld" };
Instruction_FBCD FBSTP { asmout, "fbstp" };
Instruction_FXCH FXCH { asmout, "fxch" };
Instruction_FCMOVcc FCMOVB { asmout, "fcmovb" };
Instruction_FCMOVcc FCMOVE { asmout, "fcmove" };
Instruction_FCMOVcc FCMOVBE { asmout, "fcmovbe" };
Instruction_FCMOVcc FCMOVU { asmout, "fcmovu" };
Instruction_FCMOVcc FCMOVNB { asmout, "fcmovnb" };
Instruction_FCMOVcc FCMOVNE { asmout, "fcmovne" };
Instruction_FCMOVcc FCMOVNBE { asmout, "fcmovnbe" };
Instruction_FCMOVcc FCMOVNU { asmout, "fcmovnu" };

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
Instruction_NoOperands FPREM { asmout, "fprem" };
Instruction_NoOperands FPREM1 { asmout, "fprem1" };
Instruction_NoOperands FABS { asmout, "fabs" };
Instruction_NoOperands FCHS { asmout, "fchs" };
Instruction_NoOperands FRNDINT { asmout, "frndint" };
Instruction_NoOperands FSCALE { asmout, "fscale" };
Instruction_NoOperands FSQRT { asmout, "fsqrt" };
Instruction_NoOperands FXTRACT { asmout, "fxtract" };

// x87 FPU comparison instructions
Instruction_FCOM FCOM = { asmout, "fcom" };
Instruction_FCOM FCOMP = { asmout, "fcomp" };
Instruction_FCOMPP FCOMPP = { asmout, "fcompp" };
Instruction_FUCOM FUCOM = { asmout, "fucom" };
Instruction_FUCOM FUCOMP = { asmout, "fucomp" };
Instruction_FUCOMPP FUCOMPP = { asmout, "fucompp" };
Instruction_FICOM FICOM = { asmout, "ficom" };
Instruction_FICOM FICOMP = { asmout, "ficomp" };
Instruction_FCOMI FCOMI = { asmout, "fcomi" };
Instruction_FCOMI FCOMIP = { asmout, "fcomip" };
Instruction_FCOMI FUCOMI = { asmout, "fucomi" };
Instruction_FCOMI FUCOMIP = { asmout, "fucomip" };
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
Instruction_FFREE FFREE { asmout, "ffree" };
Instruction_NoOperands FINIT { asmout, "finit" };
Instruction_NoOperands FNINIT { asmout, "fninit" };
Instruction_NoOperands FCLEX { asmout, "fclex" };
Instruction_NoOperands FNCLEX { asmout, "fnclex" };
Instruction_FSTCW FSTCW { asmout, "fstcw" };
Instruction_FSTCW FNSTCW { asmout, "fnstcw" };
Instruction_FLDCW FLDCW { asmout, "fldcw" };
Instruction_FSTENV FSTENV { asmout, "fstenv" };
Instruction_FSTENV FNSTENV { asmout, "fnstenv" };
Instruction_FLDENV FLDENV { asmout, "fldenv" };
Instruction_FSAVE FSAVE { asmout, "fsave" };
Instruction_FSAVE FNSAVE { asmout, "fnsave" };
Instruction_FRSTOR FRSTOR { asmout, "frstor" };
Instruction_FSTSW FSTSW { asmout, "fstsw" };
Instruction_FSTSW FNSTSW { asmout, "fnstsw" };
Instruction_NoOperands FNOP { asmout, "fnop" };

// x87 FPU and SIMD state management instructions
Instruction_MemOnly FXSAVE { asmout, "fxsave" };
Instruction_MemOnly FXRSTOR { asmout, "fxrstor" };

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
Instruction_NoOperands EMMS { asmout, "emms" };

// SSE data transfer instructions
Instruction_SSE_MOV1 MOVAPS { asmout, "movaps" };
Instruction_SSE_MOV1 MOVUPS { asmout, "movups" };
Instruction_SSE_MOV2 MOVHPS { asmout, "movhps" };
Instruction_SSE_MOV2 MOVLPS { asmout, "movlps" };
Instruction_SSE_MOV3 MOVLHPS { asmout, "movlhps" };
Instruction_SSE_MOV3 MOVHLPS { asmout, "movhlps" };
Instruction_SSE_MOV4 MOVMSKPS { asmout, "movmskps" };
Instruction_SSE_MOV5 MOVSS { asmout, "movss" };

// SSE packed arithmetic instructions
Instruction_SSE_Arithm1 ADDPS { asmout, "addps" };
Instruction_SSE_Arithm2 ADDSS { asmout, "addss" };
Instruction_SSE_Arithm1 SUBPS { asmout, "subps" };
Instruction_SSE_Arithm2 SUBSS { asmout, "subss" };
Instruction_SSE_Arithm1 MULPS { asmout, "mulps" };
Instruction_SSE_Arithm2 MULSS { asmout, "mulss" };
Instruction_SSE_Arithm1 DIVPS { asmout, "divps" };
Instruction_SSE_Arithm2 DIVSS { asmout, "divss" };
Instruction_SSE_Arithm1 RCPPS { asmout, "rcpps" };
Instruction_SSE_Arithm2 RCPSS { asmout, "rcpss" };
Instruction_SSE_Arithm1 SQRTPS { asmout, "sqrtps" };
Instruction_SSE_Arithm2 SQRTSS { asmout, "sqrtss" };
Instruction_SSE_Arithm1 MAXPS { asmout, "maxps" };
Instruction_SSE_Arithm2 MAXSS { asmout, "maxss" };
Instruction_SSE_Arithm1 MINPS { asmout, "minps" };
Instruction_SSE_Arithm2 MINSS { asmout, "minss" };

// SSE comparison instructions
Instruction_SSE_Cmp1 CMPPS { asmout, "cmpps" };
Instruction_SSE_Cmp2 CMPSS { asmout, "cmpss" };
Instruction_SSE_Cmp3 COMISS { asmout, "comiss" };
Instruction_SSE_Cmp3 UCOMISS { asmout, "ucomiss" };

// SSE logical instructions
Instruction_SSE_Arithm1 ANDPS { asmout, "andps" };
Instruction_SSE_Arithm1 ANDNPS { asmout, "andnps" };
Instruction_SSE_Arithm1 ORPS { asmout, "orps" };
Instruction_SSE_Arithm1 XORPS { asmout, "xorps" };

// SSE shuffle and unpack instructions
Instruction_SSE_Shuffle SHUFPS { asmout, "shufps" };
Instruction_SSE_Arithm1 UNPCKHPS { asmout, "unpckhps" };
Instruction_SSE_Arithm1 UNPCKLPS { asmout, "unpcklps" };

// SSE convertion instructions
Instruction_SSE_Conv1 CVTPI2PS { asmout, "cvtpi2ps" };
Instruction_SSE_Conv2 CVTSI2SS { asmout, "cvtsi2ss" };
Instruction_SSE_Conv3 CVTPS2PI { asmout, "cvtps2pi" };
Instruction_SSE_Conv3 CVTTPS2PI { asmout, "cvttps2pi" };
Instruction_SSE_Conv4 CVTSS2SI { asmout, "cvtss2si" };
Instruction_SSE_Conv4 CVTTSS2SI { asmout, "cvttss2si" };

// SSE MXCSR state management instructions
Instruction_MXCSR LDMXCSR { asmout, "ldmxcsr" };
Instruction_MXCSR STMXCSR { asmout, "stmxcsr" };

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
Instruction_MASKMOVQ MASKMOVQ { asmout, "maskmovq" };
Instruction_MOVNTQ MOVNTQ { asmout, "movntq" };
Instruction_MOVNTPS MOVNTPS { asmout, "movntps" };
Instruction_MemOnly PREFETCHT0 { asmout, "prefetcht0" };
Instruction_MemOnly PREFETCHT1 { asmout, "prefetcht1" };
Instruction_MemOnly PREFETCHT2 { asmout, "prefetcht2" };
Instruction_MemOnly PREFETCHNTA { asmout, "prefetchnta" };
Instruction_MemOnly PREFETCHW { asmout, "prefetchw" };
Instruction_MemOnly PREFETCHWT1 { asmout, "prefetchwt1" };
Instruction_NoOperands SFENCE { asmout, "sfence" };

// SSE2 data movement instructions
Instruction_MOVxPD1 MOVAPD { asmout, "movapd" };
Instruction_MOVxPD1 MOVUPD { asmout, "movupd" };
Instruction_MOVxPD2 MOVHPD { asmout, "movhpd" };
Instruction_MOVxPD2 MOVLPD { asmout, "movlpd" };
Instruction_MOVMSKPD MOVMSKPD { asmout, "movmskpd" };
Instruction_MOVSD MOVSD_SSE2 { asmout, "movsd" };

// SSE2 packed arithmetic instructions
Instruction_SSE2_Arithm1 ADDPD { asmout, "addpd" };
Instruction_SSE2_Arithm2 ADDSD { asmout, "addsd" };
Instruction_SSE2_Arithm1 SUBPD { asmout, "subpd" };
Instruction_SSE2_Arithm2 SUBSD { asmout, "subsd" };
Instruction_SSE2_Arithm1 MULPD { asmout, "mulpd" };
Instruction_SSE2_Arithm2 MULSD { asmout, "mulsd" };
Instruction_SSE2_Arithm1 DIVPD { asmout, "divpd" };
Instruction_SSE2_Arithm2 DIVSD { asmout, "divsd" };
Instruction_SSE2_Arithm1 SQRTPD { asmout, "sqrtpd" };
Instruction_SSE2_Arithm2 SQRTSD { asmout, "sqrtsd" };
Instruction_SSE2_Arithm1 MAXPD { asmout, "maxpd" };
Instruction_SSE2_Arithm2 MAXSD { asmout, "maxsd" };
Instruction_SSE2_Arithm1 MINPD { asmout, "minpd" };
Instruction_SSE2_Arithm2 MINSD { asmout, "minsd" };

// SSE2 logical instructions
Instruction_SSE2_Arithm1 ANDPD { asmout, "andpd" };
Instruction_SSE2_Arithm1 ANDNPD { asmout, "andnpd" };
Instruction_SSE2_Arithm1 ORPD { asmout, "orpd" };
Instruction_SSE2_Arithm1 XORPD { asmout, "xorpd" };

// SSE2 comparison instructions
Instruction_SSE2_Cmp1 CMPPD { asmout, "cmppd" };
Instruction_SSE2_Cmp2 CMPSD_SSE2 { asmout, "cmpsd" };
Instruction_SSE2_Cmp3 COMISD { asmout, "comisd" };
Instruction_SSE2_Cmp3 UCOMISD { asmout, "ucomisd" };

// SSE2 shuffle and unpack instructions
Instruction_SHUFPD SHUFPD { asmout, "shufpd" };
Instruction_UNPCKxPD UNPCKHPD { asmout, "unpckhpd" };
Instruction_UNPCKxPD UNPCKLPD { asmout, "unpcklpd" };

// SSE2 convertion instructions
Instruction_CVTPD2PI CVTPD2PI { asmout, "cvtpd2pi" };
Instruction_CVTPD2PI CVTTPD2PI { asmout, "cvttpd2pi" };
Instruction_CVTPI2PD CVTPI2PD { asmout, "cvtpi2pd" };
Instruction_CVTPD2DQ CVTPD2DQ { asmout, "cvtpd2dq" };
Instruction_CVTPD2DQ CVTTPD2DQ { asmout, "cvttpd2dq" };
Instruction_CVTDQ2PD CVTDQ2PD { asmout, "cvtdq2pd" };
Instruction_CVTPS2PD CVTPS2PD { asmout, "cvtps2pd" };
Instruction_CVTPD2PS CVTPD2PS { asmout, "cvtpd2ps" };
Instruction_CVTSS2SD CVTSS2SD { asmout, "cvtss2sd" };
Instruction_CVTSD2SS CVTSD2SS { asmout, "cvtsd2ss" };
Instruction_CVTSD2SI CVTSD2SI { asmout, "cvtsd2si" };
Instruction_CVTSD2SI CVTTSD2SI { asmout, "cvttsd2si" };
Instruction_CVTSI2SD CVTSI2SD { asmout, "cvtsi2sd" };

// SSE2 packed single-precision floating point values
Instruction_CVTDQ2PS CVTDQ2PS { asmout, "cvtdq2ps" };
Instruction_CVTPS2DQ CVTPS2DQ { asmout, "cvtps2dq" };
Instruction_CVTPS2DQ CVTTPS2DQ { asmout, "cvttps2dq" };

// SSE2 128-bit SIMD integer instructions
Instruction_MOVDQx MOVDQA { asmout, "movdqa" };
Instruction_MOVDQx MOVDQU { asmout, "movdqu" };
Instruction_MOVQ2DQ MOVQ2DQ { asmout, "movq2dq" };
Instruction_MOVDQ2Q MOVDQ2Q { asmout, "movdq2q" };
Instruction_PMULUDQ PMULUDQ { asmout, "pmuludq" };
Instruction_SSE2_Int_Arithm1 PADDQ { asmout, "paddq" };
Instruction_SSE2_Int_Arithm1 PSUBQ { asmout, "psubq" };
Instruction_SSE2_Int_Shuffle PSHUFLW { asmout, "pshuflw" };
Instruction_SSE2_Int_Shuffle PSHUFHW { asmout, "pshufhw" };
Instruction_SSE2_Int_Shuffle PSHUFD { asmout, "pshufd" };
Instruction_SSE2_Int_Shift PSLLDQ { asmout, "pslldq" };
Instruction_SSE2_Int_Shift PSRLDQ { asmout, "psrldq" };
Instruction_SSE2_Int_Unpack PUNPCKHQDQ { asmout, "punpckhqdq" };
Instruction_SSE2_Int_Unpack PUNPCKLQDQ { asmout, "punpcklqdq" };

// SSE2 cacheability control and ordering instructions
Instruction_NoOperands LFENCE { asmout, "lfence" };
Instruction_NoOperands MFENCE { asmout, "mfence" };
Instruction_NoOperands PAUSE { asmout, "pause" };
Instruction_MASKMOVDQU MASKMOVDQU { asmout, "maskmovdqu" };
Instruction_MOVNTPx MOVNTPD { asmout, "movntpd" };
Instruction_MOVNTPx MOVNTDQ { asmout, "movntdq" };
Instruction_MOVNTI MOVNTI { asmout, "movnti" };

// SSE3 x87-FP integer convertion instruction
Instruction_FISTTP FISTTP { asmout, "fisttp" };

// SSE3 specialized 128-bit unaligned data load instruction
Instruction_LDDQU LDDQU { asmout, "lddqu" };

// SSE3 SIMD floating-point packed ADD/SUB instructions
Instruction_SSE3_Arithm1 ADDSUBPS { asmout, "addsubps" };
Instruction_SSE3_Arithm1 ADDSUBPD { asmout, "addsubpd" };

// SSE3 SIMD floating-point horizontal ADD/SUB instructions
Instruction_SSE3_Arithm1 HADDPS { asmout, "haddps" };
Instruction_SSE3_Arithm1 HSUBPS { asmout, "hsubps" };
Instruction_SSE3_Arithm1 HADDPD { asmout, "haddpd" };
Instruction_SSE3_Arithm1 HSUBPD { asmout, "hsubpd" };

// SSE3 SIMD floating-point LOAD/MOVE/DUPLICATE instructions
Instruction_SSE3_Arithm1 MOVSHDUP { asmout, "movshdup" };
Instruction_SSE3_Arithm1 MOVSLDUP { asmout, "movsldup" };
Instruction_SSE3_Arithm2 MOVDDUP { asmout, "movddup" };

// SSE3 agent synchronization instructions
Instruction_NoOperands MONITOR { asmout, "monitor" };
Instruction_NoOperands MWAIT { asmout, "mwait" };

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
Instruction_SSE4_1_Type1 PMULLD { asmout, "pmulld" };
Instruction_SSE4_1_Type1 PMULDQ { asmout, "pmuldq" };

// SSE4.1: floating-point dot product instructions
Instruction_SSE4_1_Type2 DPPD { asmout, "dppd" };
Instruction_SSE4_1_Type2 DPPS { asmout, "dpps" };

// SSE4.1: streaming load hint instruction
Instruction_MOVNTDQA MOVNTDQA { asmout, "movntdqa" };

// SSE4.1: packed blending instructions
Instruction_SSE4_1_Type2 BLENDPD { asmout, "blendpd" };
Instruction_SSE4_1_Type2 BLENDPS { asmout, "blendps" };
Instruction_SSE4_1_Type3 BLENDVPD { asmout, "blendvpd" };
Instruction_SSE4_1_Type3 BLENDVPS { asmout, "blendvps" };
Instruction_SSE4_1_Type3 PBLENDVB { asmout, "pblendvb" };
Instruction_SSE4_1_Type2 PBLENDW { asmout, "pblendw" };

// SSE4.1: packed integer MIN/MAX instructions
Instruction_SSE4_1_Type1 PMINUW { asmout, "pminuw" };
Instruction_SSE4_1_Type1 PMINUD { asmout, "pminud" };
Instruction_SSE4_1_Type1 PMINSB { asmout, "pminsb" };
Instruction_SSE4_1_Type1 PMINSD { asmout, "pminsd" };
Instruction_SSE4_1_Type1 PMAXUW { asmout, "pmaxuw" };
Instruction_SSE4_1_Type1 PMAXUD { asmout, "pmaxud" };
Instruction_SSE4_1_Type1 PMAXSB { asmout, "pmaxsb" };
Instruction_SSE4_1_Type1 PMAXSD { asmout, "pmaxsd" };

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
Instruction_SSE4_2_Type2 PCMPGTQ { asmout, "pcmpgtq" };

// AESNI and PCLMULQDQ
Instruction_AES_Type1 AESDEC { asmout, "aesdec" };
Instruction_AES_Type1 AESDECLAST { asmout, "aesdeclast" };
Instruction_AES_Type1 AESENC { asmout, "aesenc" };
Instruction_AES_Type1 AESENCLAST { asmout, "aesenclast" };
Instruction_AES_Type1 AESIMC { asmout, "aesimc" };
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

// System instructions
Instruction_NoOperands CLAC { asmout, "clac" };
Instruction_NoOperands STAC { asmout, "stac" };
Instruction_NoOperands CLTS { asmout, "clts" };
Instruction_MemOnly LGDT { asmout, "lgdt" };
Instruction_MemOnly LIDT { asmout, "lidt" };
Instruction_MemOnly SIDT { asmout, "sidt" };
Instruction_rm16 LLDT { asmout, "lldt" };
Instruction_rm16 LMSW { asmout, "lmsw" };
Instruction_rm16 VERR { asmout, "verr" };
Instruction_rm16 VERW { asmout, "verw" };
Instruction_rm16 LTR { asmout, "ltr" };
Instruction_NoOperands INVD { asmout, "invd" };
Instruction_NoOperands WBINVD { asmout, "wbinvd" };
Instruction_MemOnly INVLPG { asmout, "invlpg" };
Instruction_Prefix LOCK { asmout, "lock" };
Instruction_NoOperands HLT { asmout, "hlt" };
Instruction_NoOperands RSM { asmout, "rsm" };
Instruction_NoOperands RDMSR { asmout, "rdmsr" };
Instruction_NoOperands WRMSR { asmout, "wrmsr" };
Instruction_NoOperands RDPMC { asmout, "rdpmc" };
Instruction_NoOperands RDTSC { asmout, "rdtsc" };
Instruction_NoOperands RDTSCP { asmout, "rdtscp" };
Instruction_NoOperands SYSENTER { asmout, "sysenter" };
Instruction_NoOperands SYSEXIT { asmout, "sysexit" };
Instruction_MemOnly XRSTORS { asmout, "xrstors" };
Instruction_MemOnly XRSTORS64 { asmout, "xrstors64" };
Instruction_MemOnly XSAVES { asmout, "xsaves" };
Instruction_MemOnly XSAVES64 { asmout, "xsaves64" };
Instruction_NoOperands XSETBV { asmout, "xsetbv" };
Instruction_FSGSBASE RDFSBASE { asmout, "rdfsbase" };
Instruction_FSGSBASE RDGSBASE { asmout, "rdgsbase" };
Instruction_FSGSBASE WRFSBASE { asmout, "wrfsbase" };
Instruction_FSGSBASE WRGSBASE { asmout, "wrgsbase" };

// 64-bit mode instructions
Instruction_NoOperands SYSCALL { asmout, "syscall" };
Instruction_NoOperands SYSRET { asmout, "sysret" };

// AVX
Instruction_VMOVD VMOVD { asmout, "qmovd" };
Instruction_VMOVQ VMOVQ { asmout, "qmovq" };
Instruction_MXCSR VLDMXCSR { asmout, "vldmxcsr" };
Instruction_MXCSR VSTMXCSR { asmout, "vstmxcsr" };

Keyword_comment comment;
Keyword_global global;
Keyword_label label;

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
