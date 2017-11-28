.section .text
	pusha
	pushal
	popa
	popal
	aaa
	aas
	daa
	das
	into
	popfl
	cwtd
	cltd
	leave
	iret
	iretl
	movsb
	movsw
	movsl
	cmpsb
	cmpsw
	cmpsl
	scasb
	scasw
	scasl
	lodsb
	lodsw
	lodsl
	stosb
	stosw
	stosl
	insb
	insw
	insl
	outsb
	outsw
	outsl
	clc
	cld
	cli
	cmc
	lahf
	sahf
	pushf
	popf
	stc
	sti
	std
	.byte 0x0F, 0xFF
	ud1
	ud2
	cpuid
	xlat
	xgetbv
	fprem
	fprem1
	fabs
	fchs
	frndint
	fscale
	fsqrt
	fxtract
	fcompp
	fucompp
	ftst
	fxam
	fsin
	fsincos
	fcos
	fptan
	fpatan
	f2xm1
	fyl2x
	fyl2xp1
	fld1
	fldl2t
	fldl2e
	fldpi
	fldlg2
	fldln2
	fldz
	fincstp
	fdecstp
	finit
	fninit
	fclex
	fnclex
	fnop
	emms
	sfence
	lfence
	mfence
	pause
	monitor
	mwait
	vzeroall
	vzeroupper
	clac
	stac
	clts
	invd
	wbinvd
	hlt
	rsm
	rdmsr
	wrmsr
	rdpmc
	rdtsc
	rdtscp
	sysenter
	sysexit
	xsetbv
	syscall
	sysret
	clflush (%eax)
	clflushopt (%eax)
	xsave (%eax)
	xsavec (%eax)
	xsaveopt (%eax)
	xrstor (%eax)
	fstenv (%eax)
	fnstenv (%eax)
	fldenv (%eax)
	fsave (%eax)
	fnsave (%eax)
	frstor (%eax)
	fxsave (%eax)
	fxrstor (%eax)
	prefetcht0 (%eax)
	prefetcht1 (%eax)
	prefetcht2 (%eax)
	prefetchnta (%eax)
	prefetchw (%eax)
	prefetchwt1 (%eax)
	lgdt (%eax)
	lidt (%eax)
	sidt (%eax)
	invlpg (%eax)
	xrstors (%eax)
	xsaves (%eax)
	movlhps %xmm0, %xmm1
	movhlps %xmm0, %xmm1
	maskmovdqu %xmm0, %xmm1
Instruction1_Type4_Label:
	ja Instruction1_Type4_Label
	jae Instruction1_Type4_Label
	jb Instruction1_Type4_Label
	jbe Instruction1_Type4_Label
	jc Instruction1_Type4_Label
	jcxz Instruction1_Type4_Label
	jecxz Instruction1_Type4_Label
	je Instruction1_Type4_Label
	jg Instruction1_Type4_Label
	jge Instruction1_Type4_Label
	jl Instruction1_Type4_Label
	jle Instruction1_Type4_Label
	jna Instruction1_Type4_Label
	jnae Instruction1_Type4_Label
	jnb Instruction1_Type4_Label
	jnbe Instruction1_Type4_Label
	jnc Instruction1_Type4_Label
	jne Instruction1_Type4_Label
	jng Instruction1_Type4_Label
	jnge Instruction1_Type4_Label
	jnl Instruction1_Type4_Label
	jnle Instruction1_Type4_Label
	jno Instruction1_Type4_Label
	jnp Instruction1_Type4_Label
	jns Instruction1_Type4_Label
	jnz Instruction1_Type4_Label
	jo Instruction1_Type4_Label
	jp Instruction1_Type4_Label
	jpe Instruction1_Type4_Label
	jpo Instruction1_Type4_Label
	js Instruction1_Type4_Label
	jz Instruction1_Type4_Label
	loop Instruction1_Type4_Label
	loope Instruction1_Type4_Label
	loopne Instruction1_Type4_Label
	loopz Instruction1_Type4_Label
	loopnz Instruction1_Type4_Label
	fcmovb %st(1), %st(0)
	fcmove %st(1), %st(0)
	fcmovbe %st(1), %st(0)
	fcmovu %st(1), %st(0)
	fcmovnb %st(1), %st(0)
	fcmovne %st(1), %st(0)
	fcmovnbe %st(1), %st(0)
	fcmovnu %st(1), %st(0)
	fcomi %st(1), %st(0)
	fcomip %st(1), %st(0)
	fucomi %st(1), %st(0)
	fucomip %st(1), %st(0)
	fstcw (%eax)
	fnstcw (%eax)
	fldcw (%eax)
	cmpxchg8b (%eax)
	enter $0xFFFF, $0xFF
	int $0xFF
	rep stosb
	repe stosb
	repz stosb
	repne stosb
	repnz stosb
	fbld (%eax)
	fbstp (%eax)
	ffree %st(0)
	ldmxcsr (%eax)
	stmxcsr (%eax)
	vldmxcsr (%eax)
	vstmxcsr (%eax)
	maskmovq %mm0, %mm1
	movntq %mm0, (%eax)
	movntps %xmm0, (%eax)
	movhpd (%eax), %xmm0
	movlpd (%eax), %xmm0
	movntpd %xmm0, (%eax)
	movntdq %xmm0, (%eax)
	movq2dq %mm0, %xmm0
	movdq2q %xmm0, %mm0
	pslldq $0x01, %xmm0
	pslldq $0x80, %xmm0
	psrldq $0x01, %xmm0
	psrldq $0x80, %xmm0
	lddqu (%eax), %xmm0
