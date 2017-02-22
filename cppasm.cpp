#include <string>

#include "cppasm.h"

asmstream asmout;

r8 AL("%al");
r8 AH("%ah");
r8 BL("%bl");
r8 BH("%bh");
r8 CL("%cl");
r8 CH("%ch");
r8 DL("%dl");
r8 DH("%dh");
r8 SIL("%sil");
r8 DIL("%dil");
r8 SPL("%spl");
r8 R8L("%r8b");
r8 R9L("%r9b");
r8 R10L("%r10b");
r8 R11L("%r11b");
r8 R12L("%r12b");
r8 R13L("%r13b");
r8 R14L("%r14b");
r8 R15L("%r15b");

r16 AX("%ax");
r16 BX("%bx");
r16 CX("%cx");
r16 DX("%dx");
r16 BP("%bp");
r16 SI("%si");
r16 DI("%di");
r16 SP("%sp");
r16 R8W("%r8w");
r16 R9W("%r9w");
r16 R10W("%r10w");
r16 R11W("%r11w");
r16 R12W("%r12w");
r16 R13W("%r13w");
r16 R14W("%r14w");
r16 R15W("%r15w");

r32 EAX("%eax");
r32 EBX("%ebx");
r32 ECX("%ecx");
r32 EDX("%edx");
r32 EBP("%ebp");
r32 ESI("%esi");
r32 EDI("%edi");
r32 ESP("%esp");
r32 R8D("%r8d");
r32 R9D("%r9d");
r32 R10D("%r10d");
r32 R11D("%r11d");
r32 R12D("%r12d");
r32 R13D("%r13d");
r32 R14D("%r14d");
r32 R15D("%r15d");

r64 RAX("%rax");
r64 RBX("%rbx");
r64 RCX("%rcx");
r64 RDX("%rdx");
r64 RBP("%rbp");
r64 RSI("%rsi");
r64 RDI("%rdi");
r64 RSP("%rsp");
r64 R8("%r8");
r64 R9("%r9");
r64 R10("%r10");
r64 R11("%r11");
r64 R12("%r12");
r64 R13("%r13");
r64 R14("%r14");
r64 R15("%r15");

xmm XMM0("%xmm0");
xmm XMM1("%xmm1");
xmm XMM2("%xmm2");
xmm XMM3("%xmm3");
xmm XMM4("%xmm4");
xmm XMM5("%xmm5");
xmm XMM6("%xmm6");
xmm XMM7("%xmm7");
xmm XMM8("%xmm8");
xmm XMM9("%xmm9");
xmm XMM10("%xmm10");
xmm XMM11("%xmm11");
xmm XMM12("%xmm12");
xmm XMM13("%xmm13");
xmm XMM14("%xmm14");
xmm XMM15("%xmm15");

ymm YMM0("%ymm0");
ymm YMM1("%ymm1");
ymm YMM2("%ymm2");
ymm YMM3("%ymm3");
ymm YMM4("%ymm4");
ymm YMM5("%ymm5");
ymm YMM6("%ymm6");
ymm YMM7("%ymm7");
ymm YMM8("%ymm8");
ymm YMM9("%ymm9");
ymm YMM10("%ymm10");
ymm YMM11("%ymm11");
ymm YMM12("%ymm12");
ymm YMM13("%ymm13");
ymm YMM14("%ymm14");
ymm YMM15("%ymm15");

mm MM0("%mm0");
mm MM1("%mm1");
mm MM2("%mm2");
mm MM3("%mm3");
mm MM4("%mm4");
mm MM5("%mm5");
mm MM6("%mm6");
mm MM7("%mm7");

Sreg CS("%cs");
Sreg DS("%ds");
Sreg SS("%ss");
Sreg ES("%es");
Sreg FS("%fs");
Sreg GS("%gs");

cr CR0("%cr0");
cr CR1("%cr1");
cr CR2("%cr2");
cr CR3("%cr3");
cr CR4("%cr4");
cr CR5("%cr5");
cr CR6("%cr6");
cr CR7("%cr7");
cr CR8("%cr8");

dr DR0("%dr0");
dr DR1("%dr1");
dr DR2("%dr2");
dr DR3("%dr3");
dr DR4("%dr4");
dr DR5("%dr5");
dr DR6("%dr6");
dr DR7("%dr7");

Instruction_AAA AAA(asmout);
Instruction_AAD AAD(asmout);
Instruction_AAM AAM(asmout);
Instruction_AAS AAS(asmout);
Instruction_ADC ADC(asmout);
Instruction_ADCX ADCX(asmout);
Instruction_MONITOR MONITOR(asmout);
Instruction_MOV MOV(asmout);
