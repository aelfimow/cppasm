.section .text
	cwtd
	cltd
	cqto
	leave
	iret
	iretl
	iretq
	movsb
	movsw
	movsl
	movsq
	cmpsb
	cmpsw
	cmpsl
	cmpsq
	scasb
	scasw
	scasl
	scasq
	lodsb
	lodsw
	lodsl
	lodsq
	stosb
	stosw
	stosl
	stosq
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
	popfq
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
	clflush (%rax)
	clflushopt (%rax)
	xsave (%rax)
	xsavec (%rax)
	xsaveopt (%rax)
	xrstor (%rax)
	fstenv (%rax)
	fnstenv (%rax)
	fldenv (%rax)
	fsave (%rax)
	fnsave (%rax)
	frstor (%rax)
	fxsave (%rax)
	fxrstor (%rax)
	prefetcht0 (%rax)
	prefetcht1 (%rax)
	prefetcht2 (%rax)
	prefetchnta (%rax)
	prefetchw (%rax)
	prefetchwt1 (%rax)
	lgdt (%rax)
	lidt (%rax)
	sidt (%rax)
	invlpg (%rax)
	xrstors (%rax)
	xrstors64 (%rax)
	xsaves (%rax)
	xsaves64 (%rax)
	movlhps %xmm0, %xmm1
	movhlps %xmm0, %xmm1
	maskmovdqu %xmm0, %xmm1
Instruction1_Type4_Label:
	ja Instruction1_Type4_Label
	jae Instruction1_Type4_Label
	jb Instruction1_Type4_Label
	jbe Instruction1_Type4_Label
	jc Instruction1_Type4_Label
	jecxz Instruction1_Type4_Label
	jrcxz Instruction1_Type4_Label
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
	fstcw (%rax)
	fnstcw (%rax)
	fldcw (%rax)
	cmpxchg8b (%rax)
	cmpxchg16b (%rax)
	enter $0xFFFF, $0xFF
	int $0xFF
	rep stosb
	repe stosb
	repz stosb
	repne stosb
	repnz stosb
	fbld (%rax)
	fbstp (%rax)
	ffree %st(0)
	ldmxcsr (%rax)
	stmxcsr (%rax)
	vldmxcsr (%rax)
	vstmxcsr (%rax)
	maskmovq %mm0, %mm1
	movntq %mm0, (%rax)
	movntps %xmm0, (%eax)
	movhpd (%rax), %xmm0
	movlpd (%rax), %xmm0
	movntpd %xmm0, (%rax)
	movntdq %xmm0, (%rax)
	movq2dq %mm0, %xmm0
	movdq2q %xmm0, %mm0
	pslldq $0x01, %xmm0
	pslldq $0x80, %xmm0
	psrldq $0x01, %xmm0
	psrldq $0x80, %xmm0
	lddqu (%rax), %xmm0
	movntdqa (%rax), %xmm0
	vbroadcastsd (%rax), %ymm0
	vbroadcastf128 (%rax), %ymm0
	ret
	ret $0xFFFF
	lret
	lret $0xFFFF
	rdfsbase %eax
	rdfsbase %rax
	rdgsbase %eax
	rdgsbase %rax
	wrfsbase %eax
	wrfsbase %rax
	wrgsbase %eax
	wrgsbase %rax
	bswap %eax
	bswap %rax
	movmskps %xmm0, %eax
	movmskps %xmm0, %rax
	movmskpd %xmm0, %eax
	movmskpd %xmm0, %rax
	fxch
	fxch %st(1)
	fucom
	fucom %st(1)
	fucomp
	fucomp %st(1)
