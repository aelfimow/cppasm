#ifdef CPPASM_H
#error Already included
#else
#define CPPASM_H

#include <string>

#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "xmm.h"
#include "ymm.h"
#include "mm.h"
#include "imm8.h"
#include "imm16.h"
#include "imm32.h"
#include "imm64.h"
#include "disp8.h"
#include "disp16.h"
#include "disp32.h"
#include "Sreg.h"
#include "m.h"
#include "m8.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "m80.h"
#include "m128.h"
#include "cr.h"
#include "dr.h"
#include "st.h"
#include "comment.h"
#include "global.h"
#include "label.h"
#include "section.h"

#include "Instruction_NoOperands.h"
#include "Instruction_AAD.h"
#include "Instruction_AAM.h"
#include "Instruction_ADX.h"
#include "Instruction_Arithmetic.h"
#include "Instruction_BitScan.h"
#include "Instruction_BitTest.h"
#include "Instruction_BOUND.h"
#include "Instruction_Branch.h"
#include "Instruction_BSWAP.h"
#include "Instruction_CLFLUSH.h"
#include "Instruction_CMOVx.h"
#include "Instruction_CMPXCHG.h"
#include "Instruction_CMPXCHG8B.h"
#include "Instruction_CMPXCHG16B.h"
#include "Instruction_ENTER.h"
#include "Instruction_FSGSBASE.h"
#include "Instruction_FST.h"
#include "Instruction_IN.h"
#include "Instruction_INT.h"
#include "Instruction_Jcc.h"
#include "Instruction_LEA.h"
#include "Instruction_LoadFarPointer.h"
#include "Instruction_Logical.h"
#include "Instruction_LOOPcc.h"
#include "Instruction_MemOperand.h"
#include "Instruction_MOV.h"
#include "Instruction_MovWithExt.h"
#include "Instruction_NOP.h"
#include "Instruction_OUT.h"
#include "Instruction_POP.h"
#include "Instruction_PREFETCH.h"
#include "Instruction_PUSH.h"
#include "Instruction_RDRAND.h"
#include "Instruction_RegMemOperand.h"
#include "Instruction_REP.h"
#include "Instruction_RET.h"
#include "Instruction_SETcc.h"
#include "Instruction_Shift.h"
#include "Instruction_ShiftDouble.h"
#include "Instruction_StringOp.h"
#include "Instruction_TEST.h"
#include "Instruction_XADD.h"
#include "Instruction_XCHG.h"

extern asmstream asmout;

extern r8 AL;
extern r8 AH;
extern r8 BL;
extern r8 BH;
extern r8 CL;
extern r8 CH;
extern r8 DL;
extern r8 DH;
extern r8 SIL;
extern r8 DIL;
extern r8 SPL;
extern r8 R8L;
extern r8 R9L;
extern r8 R10L;
extern r8 R11L;
extern r8 R12L;
extern r8 R13L;
extern r8 R14L;
extern r8 R15L;

extern r16 AX;
extern r16 BX;
extern r16 CX;
extern r16 DX;
extern r16 BP;
extern r16 SI;
extern r16 DI;
extern r16 SP;
extern r16 R8W;
extern r16 R9W;
extern r16 R10W;
extern r16 R11W;
extern r16 R12W;
extern r16 R13W;
extern r16 R14W;
extern r16 R15W;

extern r32 EAX;
extern r32 EBX;
extern r32 ECX;
extern r32 EDX;
extern r32 EBP;
extern r32 ESI;
extern r32 EDI;
extern r32 ESP;
extern r32 R8D;
extern r32 R9D;
extern r32 R10D;
extern r32 R11D;
extern r32 R12D;
extern r32 R13D;
extern r32 R14D;
extern r32 R15D;

extern r64 RAX;
extern r64 RBX;
extern r64 RCX;
extern r64 RDX;
extern r64 RBP;
extern r64 RSI;
extern r64 RDI;
extern r64 RSP;
extern r64 R8;
extern r64 R9;
extern r64 R10;
extern r64 R11;
extern r64 R12;
extern r64 R13;
extern r64 R14;
extern r64 R15;

extern xmm XMM0;
extern xmm XMM1;
extern xmm XMM2;
extern xmm XMM3;
extern xmm XMM4;
extern xmm XMM5;
extern xmm XMM6;
extern xmm XMM7;
extern xmm XMM8;
extern xmm XMM9;
extern xmm XMM10;
extern xmm XMM11;
extern xmm XMM12;
extern xmm XMM13;
extern xmm XMM14;
extern xmm XMM15;

extern mm mm0;
extern mm mm1;
extern mm mm2;
extern mm mm3;
extern mm mm4;
extern mm mm5;
extern mm mm6;
extern mm mm7;

extern Sreg CS;
extern Sreg DS;
extern Sreg SS;
extern Sreg ES;
extern Sreg FS;
extern Sreg GS;

extern cr CR0;
extern cr CR1;
extern cr CR2;
extern cr CR3;
extern cr CR4;
extern cr CR5;
extern cr CR6;
extern cr CR7;
extern cr CR8;

extern dr DR0;
extern dr DR1;
extern dr DR2;
extern dr DR3;
extern dr DR4;
extern dr DR5;
extern dr DR6;
extern dr DR7;

extern st ST;

// Data transfer instructions
extern Instruction_MOV MOV;
extern Instruction_CMOVx CMOVA;
extern Instruction_CMOVx CMOVAE;
extern Instruction_CMOVx CMOVB;
extern Instruction_CMOVx CMOVBE;
extern Instruction_CMOVx CMOVC;
extern Instruction_CMOVx CMOVE;
extern Instruction_CMOVx CMOVG;
extern Instruction_CMOVx CMOVGE;
extern Instruction_CMOVx CMOVL;
extern Instruction_CMOVx CMOVLE;
extern Instruction_CMOVx CMOVNA;
extern Instruction_CMOVx CMOVNAE;
extern Instruction_CMOVx CMOVNBE;
extern Instruction_CMOVx CMOVNC;
extern Instruction_CMOVx CMOVNE;
extern Instruction_CMOVx CMOVNG;
extern Instruction_CMOVx CMOVNGE;
extern Instruction_CMOVx CMOVNL;
extern Instruction_CMOVx CMOVNLE;
extern Instruction_CMOVx CMOVNO;
extern Instruction_CMOVx CMOVNP;
extern Instruction_CMOVx CMOVNS;
extern Instruction_CMOVx CMOVNZ;
extern Instruction_CMOVx CMOVO;
extern Instruction_CMOVx CMOVP;
extern Instruction_CMOVx CMOVPE;
extern Instruction_CMOVx CMOVPO;
extern Instruction_CMOVx CMOVS;
extern Instruction_CMOVx CMOVZ;
extern Instruction_PUSH PUSH;
extern Instruction_NoOperands PUSHA;
extern Instruction_NoOperands PUSHAD;
extern Instruction_POP POP;
extern Instruction_NoOperands POPA;
extern Instruction_NoOperands POPAD;
extern Instruction_NoOperands CWD;
extern Instruction_NoOperands CDQ;
extern Instruction_NoOperands CQO;
extern Instruction_MovWithExt MOVSX;
extern Instruction_MovWithExt MOVZX;
extern Instruction_XCHG XCHG;
extern Instruction_BSWAP BSWAP;
extern Instruction_XADD XADD;
extern Instruction_CMPXCHG CMPXCHG;
extern Instruction_CMPXCHG8B CMPXCHG8B;
extern Instruction_CMPXCHG16B CMPXCHG16B;

// Binary arithmetic instructions
extern Instruction_Arithmetic ADD;
extern Instruction_Arithmetic ADC;
extern Instruction_Arithmetic SUB;
extern Instruction_Arithmetic SBB;
extern Instruction_Arithmetic CMP;
extern Instruction_ADX ADCX;
extern Instruction_ADX ADOX;
extern Instruction_RegMemOperand MUL;
extern Instruction_RegMemOperand IMUL;
extern Instruction_RegMemOperand DIV;
extern Instruction_RegMemOperand IDIV;
extern Instruction_RegMemOperand NEG;
extern Instruction_RegMemOperand INC;
extern Instruction_RegMemOperand DEC;

// Decimal arithmetic instructions
extern Instruction_NoOperands AAA;
extern Instruction_AAD AAD;
extern Instruction_AAM AAM;
extern Instruction_NoOperands AAS;
extern Instruction_NoOperands DAA;
extern Instruction_NoOperands DAS;

// Logical instructions
extern Instruction_Logical AND;
extern Instruction_Logical OR;
extern Instruction_Logical XOR;
extern Instruction_RegMemOperand NOT;

// Shift and rotate instructions
extern Instruction_Shift SAL;
extern Instruction_Shift SAR;
extern Instruction_Shift SHL;
extern Instruction_Shift SHR;
extern Instruction_Shift RCL;
extern Instruction_Shift RCR;
extern Instruction_Shift ROL;
extern Instruction_Shift ROR;
extern Instruction_ShiftDouble SHLD;
extern Instruction_ShiftDouble SHRD;

// Bit and byte instructions
extern Instruction_BitTest BT;
extern Instruction_BitTest BTC;
extern Instruction_BitTest BTR;
extern Instruction_BitTest BTS;
extern Instruction_BitScan BSF;
extern Instruction_BitScan BSR;
extern Instruction_SETcc SETA;
extern Instruction_SETcc SETAE;
extern Instruction_SETcc SETB;
extern Instruction_SETcc SETBE;
extern Instruction_SETcc SETC;
extern Instruction_SETcc SETE;
extern Instruction_SETcc SETG;
extern Instruction_SETcc SETGE;
extern Instruction_SETcc SETL;
extern Instruction_SETcc SETLE;
extern Instruction_SETcc SETNA;
extern Instruction_SETcc SETNAE;
extern Instruction_SETcc SETNB;
extern Instruction_SETcc SETNBE;
extern Instruction_SETcc SETNC;
extern Instruction_SETcc SETNE;
extern Instruction_SETcc SETNG;
extern Instruction_SETcc SETNGE;
extern Instruction_SETcc SETNL;
extern Instruction_SETcc SETNLE;
extern Instruction_SETcc SETNO;
extern Instruction_SETcc SETNP;
extern Instruction_SETcc SETNS;
extern Instruction_SETcc SETNZ;
extern Instruction_SETcc SETO;
extern Instruction_SETcc SETP;
extern Instruction_SETcc SETPE;
extern Instruction_SETcc SETPO;
extern Instruction_SETcc SETS;
extern Instruction_SETcc SETZ;
extern Instruction_TEST TEST;

// Control transfer instructions
extern Instruction_Branch JMP;
extern Instruction_Branch JMP_FAR;
extern Instruction_Jcc JA;
extern Instruction_Jcc JAE;
extern Instruction_Jcc JB;
extern Instruction_Jcc JBE;
extern Instruction_Jcc JC;
extern Instruction_Jcc JCXZ;
extern Instruction_Jcc JECXZ;
extern Instruction_Jcc JRCXZ;
extern Instruction_Jcc JE;
extern Instruction_Jcc JG;
extern Instruction_Jcc JGE;
extern Instruction_Jcc JL;
extern Instruction_Jcc JLE;
extern Instruction_Jcc JNA;
extern Instruction_Jcc JNAE;
extern Instruction_Jcc JNB;
extern Instruction_Jcc JNBE;
extern Instruction_Jcc JNC;
extern Instruction_Jcc JNE;
extern Instruction_Jcc JNG;
extern Instruction_Jcc JNGE;
extern Instruction_Jcc JNL;
extern Instruction_Jcc JNLE;
extern Instruction_Jcc JNO;
extern Instruction_Jcc JNP;
extern Instruction_Jcc JNS;
extern Instruction_Jcc JNZ;
extern Instruction_Jcc JO;
extern Instruction_Jcc JP;
extern Instruction_Jcc JPE;
extern Instruction_Jcc JPO;
extern Instruction_Jcc JS;
extern Instruction_Jcc JZ;
extern Instruction_Branch CALL;
extern Instruction_Branch CALL_FAR;
extern Instruction_RET RET;
extern Instruction_ENTER ENTER;
extern Instruction_NoOperands LEAVE;
extern Instruction_INT INT;
extern Instruction_NoOperands INTO;
extern Instruction_NoOperands IRET;
extern Instruction_NoOperands IRETD;
extern Instruction_NoOperands IRETQ;
extern Instruction_LOOPcc LOOP;
extern Instruction_LOOPcc LOOPE;
extern Instruction_LOOPcc LOOPNE;
extern Instruction_LOOPcc LOOPZ;
extern Instruction_LOOPcc LOOPNZ;
extern Instruction_BOUND BOUND;

// String instructions
extern Instruction_StringOp MOVSB;
extern Instruction_StringOp MOVSW;
extern Instruction_StringOp MOVSD;
extern Instruction_StringOp MOVSQ;
extern Instruction_StringOp CMPSB;
extern Instruction_StringOp CMPSW;
extern Instruction_StringOp CMPSD;
extern Instruction_StringOp CMPSQ;
extern Instruction_StringOp SCASB;
extern Instruction_StringOp SCASW;
extern Instruction_StringOp SCASD;
extern Instruction_StringOp SCASQ;
extern Instruction_StringOp LODSB;
extern Instruction_StringOp LODSW;
extern Instruction_StringOp LODSD;
extern Instruction_StringOp LODSQ;
extern Instruction_StringOp STOSB;
extern Instruction_StringOp STOSW;
extern Instruction_StringOp STOSD;
extern Instruction_StringOp STOSQ;
extern Instruction_REP REP;
extern Instruction_REP REPE;
extern Instruction_REP REPZ;
extern Instruction_REP REPNE;
extern Instruction_REP REPNZ;

// I/O instructions
extern Instruction_IN IN;
extern Instruction_StringOp INSB;
extern Instruction_StringOp INSW;
extern Instruction_StringOp INSD;
extern Instruction_OUT OUT;
extern Instruction_StringOp OUTSB;
extern Instruction_StringOp OUTSW;
extern Instruction_StringOp OUTSD;

// Flag control (EFLAG) instructions
extern Instruction_NoOperands CLC;
extern Instruction_NoOperands CLD;
extern Instruction_NoOperands CLI;
extern Instruction_NoOperands CMC;
extern Instruction_NoOperands LAHF;
extern Instruction_NoOperands SAHF;
extern Instruction_NoOperands PUSHF;
extern Instruction_NoOperands POPF;
extern Instruction_NoOperands POPFD;
extern Instruction_NoOperands POPFQ;
extern Instruction_NoOperands STC;
extern Instruction_NoOperands STI;
extern Instruction_NoOperands STD;

// Segment register instructions
extern Instruction_LoadFarPointer LDS;
extern Instruction_LoadFarPointer LES;
extern Instruction_LoadFarPointer LFS;
extern Instruction_LoadFarPointer LGS;
extern Instruction_LoadFarPointer LSS;

// Miscelleneous instructions
extern Instruction_LEA LEA;
extern Instruction_NOP NOP;
extern Instruction_NoOperands UD;
extern Instruction_NoOperands UD1;
extern Instruction_NoOperands UD2;
extern Instruction_NoOperands CPUID;
extern Instruction_NoOperands XLAT;
extern Instruction_CLFLUSH CLFLUSH;
extern Instruction_CLFLUSH CLFLUSHOPT;
extern Instruction_PREFETCH PREFETCHT0;
extern Instruction_PREFETCH PREFETCHT1;
extern Instruction_PREFETCH PREFETCHT2;
extern Instruction_PREFETCH PREFETCHNTA;
extern Instruction_PREFETCH PREFETCHW;
extern Instruction_PREFETCH PREFETCHWT1;

// User mode extended state save/restore instructions
extern Instruction_MemOperand XSAVE;
extern Instruction_MemOperand XSAVEC;
extern Instruction_MemOperand XSAVEOPT;
extern Instruction_MemOperand XRSTOR;
extern Instruction_NoOperands XGETBV;

// Random number generator instructions
extern Instruction_RDRAND RDRAND;
extern Instruction_RDRAND RDSEED;

// x87 FPU data transfer instructions
extern Instruction_FST FST;
extern Instruction_FST FSTP;

// x87 FPU basic arithmetic instructions
extern Instruction_NoOperands FPREM;
extern Instruction_NoOperands FPREM1;
extern Instruction_NoOperands FABS;
extern Instruction_NoOperands FCHS;
extern Instruction_NoOperands FRNDINT;
extern Instruction_NoOperands FSCALE;
extern Instruction_NoOperands FSQRT;
extern Instruction_NoOperands FXTRACT;

// x87 FPU comparison instructions
extern Instruction_NoOperands FTST;
extern Instruction_NoOperands FXAM;

// x87 FPU transcendental instructions
extern Instruction_NoOperands FSIN;
extern Instruction_NoOperands FSINCOS;
extern Instruction_NoOperands FCOS;
extern Instruction_NoOperands FPTAN;
extern Instruction_NoOperands FPATAN;
extern Instruction_NoOperands F2XM1;
extern Instruction_NoOperands FYL2X;
extern Instruction_NoOperands FYL2XP1;

// x87 FPU load constants instructions
extern Instruction_NoOperands FLD1;
extern Instruction_NoOperands FLDL2T;
extern Instruction_NoOperands FLDL2E;
extern Instruction_NoOperands FLDPI;
extern Instruction_NoOperands FLDLG2;
extern Instruction_NoOperands FLDLN2;
extern Instruction_NoOperands FLDZ;

// x87 FPU control instructions
extern Instruction_NoOperands FINCSTP;
extern Instruction_NoOperands FDECSTP;
extern Instruction_NoOperands FINIT;
extern Instruction_NoOperands FNINIT;
extern Instruction_NoOperands FCLEX;
extern Instruction_NoOperands FNCLEX;
extern Instruction_NoOperands FNOP;

// MMX state management instructions
extern Instruction_NoOperands EMMS;

// System instructions
extern Instruction_NoOperands CLAC;
extern Instruction_NoOperands CLTS;
extern Instruction_NoOperands HLT;
extern Instruction_NoOperands RSM;
extern Instruction_NoOperands RDPMC;
extern Instruction_NoOperands RDTSC;
extern Instruction_NoOperands RDTSCP;
extern Instruction_NoOperands SYSENTER;
extern Instruction_NoOperands SYSEXIT;
extern Instruction_MemOperand XRSTORS;
extern Instruction_MemOperand XRSTORS64;
extern Instruction_MemOperand XSAVES;
extern Instruction_MemOperand XSAVES64;
extern Instruction_NoOperands XSETBV;
extern Instruction_FSGSBASE RDFSBASE;
extern Instruction_FSGSBASE RDGSBASE;
extern Instruction_FSGSBASE WRFSBASE;
extern Instruction_FSGSBASE WRGSBASE;

// SSE3 agent synchronization instructions
extern Instruction_NoOperands MONITOR;
extern Instruction_NoOperands MWAIT;

// 64-bit mode instructions
extern Instruction_NoOperands SYSCALL;
extern Instruction_NoOperands SYSRET;

extern Keyword_comment comment;
extern Keyword_global global;
extern Keyword_label label;

#endif
