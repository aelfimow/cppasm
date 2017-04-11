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
#include "Instruction_ADC.h"
#include "Instruction_ADCX.h"
#include "Instruction_ADD.h"
#include "Instruction_CLFLUSH.h"
#include "Instruction_CPUID.h"
#include "Instruction_FST.h"
#include "Instruction_Jcc.h"
#include "Instruction_MONITOR.h"
#include "Instruction_MOV.h"
#include "Instruction_POP.h"
#include "Instruction_PUSH.h"
#include "Instruction_PUSHA.h"
#include "Instruction_PUSHF.h"
#include "Instruction_RET.h"
#include "Instruction_Shift.h"
#include "Instruction_XOR.h"

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

extern Instruction_NoOperands AAA;
extern Instruction_AAD AAD;
extern Instruction_AAM AAM;
extern Instruction_NoOperands AAS;
extern Instruction_ADC ADC;
extern Instruction_ADCX ADCX;
extern Instruction_ADD ADD;
extern Instruction_NoOperands CLAC;
extern Instruction_NoOperands CLC;
extern Instruction_NoOperands CLD;
extern Instruction_NoOperands CLI;
extern Instruction_NoOperands CLTS;
extern Instruction_NoOperands CMC;
extern Instruction_CLFLUSH CLFLUSH;
extern Instruction_CPUID CPUID;
extern Instruction_NoOperands FLD1;
extern Instruction_NoOperands FLDL2T;
extern Instruction_NoOperands FLDL2E;
extern Instruction_NoOperands FLDPI;
extern Instruction_NoOperands FLDLG2;
extern Instruction_NoOperands FLDLN2;
extern Instruction_NoOperands FLDZ;
extern Instruction_NoOperands FNOP;
extern Instruction_NoOperands FSCALE;
extern Instruction_NoOperands FSIN;
extern Instruction_NoOperands FSINCOS;
extern Instruction_NoOperands FSQRT;
extern Instruction_FST FST;
extern Instruction_FST FSTP;
extern Instruction_NoOperands FTST;
extern Instruction_NoOperands HLT;
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
extern Instruction_MONITOR MONITOR;
extern Instruction_MOV MOV;
extern Instruction_POP POP;
extern Instruction_PUSH PUSH;
extern Instruction_PUSHA PUSHA;
extern Instruction_PUSHA PUSHAD; // Same as PUSHA
extern Instruction_PUSHF PUSHF;
extern Instruction_RET RET;
extern Instruction_Shift SAL;
extern Instruction_Shift SAR;
extern Instruction_Shift SHL;
extern Instruction_Shift SHR;
extern Instruction_NoOperands STC;
extern Instruction_NoOperands STD;
extern Instruction_NoOperands STI;
extern Instruction_XOR XOR;

extern Keyword_comment comment;
extern Keyword_global global;
extern Keyword_label label;

#endif
