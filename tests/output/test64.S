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
	fstsw %ax
	fstsw (%rax)
	fnstsw %ax
	fnstsw (%rax)
	lldt %ax
	lldt (%rax)
	lmsw %ax
	lmsw (%rax)
	verr %ax
	verr (%rax)
	verw %ax
	verw (%rax)
	ltr %ax
	ltr (%rax)
	seta %al
	seta (%rax)
	setae %al
	setae (%rax)
	setb %al
	setb (%rax)
	setbe %al
	setbe (%rax)
	setc %al
	setc (%rax)
	sete %al
	sete (%rax)
	setg %al
	setg (%rax)
	setge %al
	setge (%rax)
	setl %al
	setl (%rax)
	setle %al
	setle (%rax)
	setna %al
	setna (%rax)
	setnae %al
	setnae (%rax)
	setnb %al
	setnb (%rax)
	setnbe %al
	setnbe (%rax)
	setnc %al
	setnc (%rax)
	setne %al
	setne (%rax)
	setng %al
	setng (%rax)
	setnge %al
	setnge (%rax)
	setnl %al
	setnl (%rax)
	setle %al
	setle (%rax)
	setno %al
	setno (%rax)
	setnp %al
	setnp (%rax)
	setns %al
	setns (%rax)
	setnz %al
	setnz (%rax)
	seto %al
	seto (%rax)
	setp %al
	setp (%rax)
	setpe %al
	setpe (%rax)
	setpo %al
	setpo (%rax)
	sets %al
	sets (%rax)
	setz %al
	setz (%rax)
	movhps (%rax), %xmm0
	movhps %xmm0, (%rax)
	movlps (%rax), %xmm0
	movlps %xmm0, (%rax)
	addps %xmm1, %xmm0
	addps (%rax), %xmm0
	subps %xmm1, %xmm0
	subps (%rax), %xmm0
	mulps %xmm1, %xmm0
	mulps (%rax), %xmm0
	divps %xmm1, %xmm0
	divps (%rax), %xmm0
	rcpps %xmm1, %xmm0
	rcpps (%rax), %xmm0
	sqrtps %xmm1, %xmm0
	sqrtps (%rax), %xmm0
	maxps %xmm1, %xmm0
	maxps (%rax), %xmm0
	minps %xmm1, %xmm0
	minps (%rax), %xmm0
	andps %xmm1, %xmm0
	andps (%rax), %xmm0
	andnps %xmm1, %xmm0
	andnps (%rax), %xmm0
	orps %xmm1, %xmm0
	orps (%rax), %xmm0
	xorps %xmm1, %xmm0
	xorps (%rax), %xmm0
	unpckhps %xmm1, %xmm0
	unpckhps (%rax), %xmm0
	unpcklps %xmm1, %xmm0
	unpcklps (%rax), %xmm0
	addpd %xmm1, %xmm0
	addpd (%rax), %xmm0
	subpd %xmm1, %xmm0
	subpd (%rax), %xmm0
	mulpd %xmm1, %xmm0
	mulpd (%rax), %xmm0
	divpd %xmm1, %xmm0
	divpd (%rax), %xmm0
	sqrtpd %xmm1, %xmm0
	sqrtpd (%rax), %xmm0
	maxpd %xmm1, %xmm0
	maxpd (%rax), %xmm0
	minpd %xmm1, %xmm0
	minpd (%rax), %xmm0
	andpd %xmm1, %xmm0
	andpd (%rax), %xmm0
	andnpd %xmm1, %xmm0
	andnpd (%rax), %xmm0
	orpd %xmm1, %xmm0
	orpd (%rax), %xmm0
	xorpd %xmm1, %xmm0
	xorpd (%rax), %xmm0
	unpckhpd %xmm1, %xmm0
	unpckhpd (%rax), %xmm0
	unpcklpd %xmm1, %xmm0
	unpcklpd (%rax), %xmm0
	cvtpd2dq %xmm1, %xmm0
	cvtpd2dq (%rax), %xmm0
	cvttpd2dq %xmm1, %xmm0
	cvttpd2dq (%rax), %xmm0
	cvtpd2ps %xmm1, %xmm0
	cvtpd2ps (%rax), %xmm0
	cvtdq2ps %xmm1, %xmm0
	cvtdq2ps (%rax), %xmm0
	cvtps2dq %xmm1, %xmm0
	cvtps2dq (%rax), %xmm0
	cvttps2dq %xmm1, %xmm0
	cvttps2dq (%rax), %xmm0
	punpckhqdq %xmm1, %xmm0
	punpckhqdq (%rax), %xmm0
	punpcklqdq %xmm1, %xmm0
	punpcklqdq (%rax), %xmm0
	addsubps %xmm1, %xmm0
	addsubps (%rax), %xmm0
	addsubpd %xmm1, %xmm0
	addsubpd (%rax), %xmm0
	haddps %xmm1, %xmm0
	haddps (%rax), %xmm0
	hsubps %xmm1, %xmm0
	hsubps (%rax), %xmm0
	haddpd %xmm1, %xmm0
	haddpd (%rax), %xmm0
	hsubpd %xmm1, %xmm0
	hsubpd (%rax), %xmm0
	movshdup %xmm1, %xmm0
	movshdup (%rax), %xmm0
	movsldup %xmm1, %xmm0
	movsldup (%rax), %xmm0
	pmulld %xmm1, %xmm0
	pmulld (%rax), %xmm0
	pmuldq %xmm1, %xmm0
	pmuldq (%rax), %xmm0
	pminuw %xmm1, %xmm0
	pminuw (%rax), %xmm0
	pminud %xmm1, %xmm0
	pminud (%rax), %xmm0
	pminsb %xmm1, %xmm0
	pminsb (%rax), %xmm0
	pminsd %xmm1, %xmm0
	pminsd (%rax), %xmm0
	pmaxuw %xmm1, %xmm0
	pmaxuw (%rax), %xmm0
	pmaxud %xmm1, %xmm0
	pmaxud (%rax), %xmm0
	pmaxsb %xmm1, %xmm0
	pmaxsb (%rax), %xmm0
	pmaxsd %xmm1, %xmm0
	pmaxsd (%rax), %xmm0
	pcmpgtq %xmm1, %xmm0
	pcmpgtq (%rax), %xmm0
	aesdec %xmm1, %xmm0
	aesdec (%rax), %xmm0
	aesdeclast %xmm1, %xmm0
	aesdeclast (%rax), %xmm0
	aesenc %xmm1, %xmm0
	aesenc (%rax), %xmm0
	aesenclast %xmm1, %xmm0
	aesenclast (%rax), %xmm0
	aesimc %xmm1, %xmm0
	aesimc (%rax), %xmm0
	phminposuw %xmm1, %xmm0
	phminposuw (%rax), %xmm0
	ptest %xmm1, %xmm0
	ptest (%rax), %xmm0
	pcmpeqq %xmm1, %xmm0
	pcmpeqq (%rax), %xmm0
	packusdw %xmm1, %xmm0
	packusdw (%rax), %xmm0
	addss %xmm1, %xmm0
	addss (%rax), %xmm0
	subss %xmm1, %xmm0
	subss (%rax), %xmm0
	mulss %xmm1, %xmm0
	mulss (%rax), %xmm0
	divss %xmm1, %xmm0
	divss (%rax), %xmm0
	rcpss %xmm1, %xmm0
	rcpss (%rax), %xmm0
	sqrtss %xmm1, %xmm0
	sqrtss (%rax), %xmm0
	maxss %xmm1, %xmm0
	maxss (%rax), %xmm0
	minss %xmm1, %xmm0
	minss (%rax), %xmm0
	comiss %xmm1, %xmm0
	comiss (%rax), %xmm0
	ucomiss %xmm1, %xmm0
	ucomiss (%rax), %xmm0
	cvtss2sd %xmm1, %xmm0
	cvtss2sd (%rax), %xmm0
	pmovsxbd %xmm1, %xmm0
	pmovsxbd (%rax), %xmm0
	pmovsxwq %xmm1, %xmm0
	pmovsxwq (%rax), %xmm0
	pmovzxbd %xmm1, %xmm0
	pmovzxbd (%rax), %xmm0
	pmovzxwq %xmm1, %xmm0
	pmovzxwq (%rax), %xmm0
	cmpps $0xFF, %xmm1, %xmm0
	cmpps $0xFF, (%rax), %xmm0
	shufps $0xFF, %xmm1, %xmm0
	shufps $0xFF, (%rax), %xmm0
	cmppd $0xFF, %xmm1, %xmm0
	cmppd $0xFF, (%rax), %xmm0
	shufpd $0xFF, %xmm1, %xmm0
	shufpd $0xFF, (%rax), %xmm0
	pshuflw $0xFF, %xmm1, %xmm0
	pshuflw $0xFF, (%rax), %xmm0
	pshufhw $0xFF, %xmm1, %xmm0
	pshufhw $0xFF, (%rax), %xmm0
	pshufd $0xFF, %xmm1, %xmm0
	pshufd $0xFF, (%rax), %xmm0
	dppd $0xFF, %xmm1, %xmm0
	dppd $0xFF, (%rax), %xmm0
	dpps $0xFF, %xmm1, %xmm0
	dpps $0xFF, (%rax), %xmm0
	blendpd $0xFF, %xmm1, %xmm0
	blendpd $0xFF, (%rax), %xmm0
	blendps $0xFF, %xmm1, %xmm0
	blendps $0xFF, (%rax), %xmm0
	pblendw $0xFF, %xmm1, %xmm0
	pblendw $0xFF, (%rax), %xmm0
	roundps $0xFF, %xmm1, %xmm0
	roundps $0xFF, (%rax), %xmm0
	roundpd $0xFF, %xmm1, %xmm0
	roundpd $0xFF, (%rax), %xmm0
	mpsadbw $0xFF, %xmm1, %xmm0
	mpsadbw $0xFF, (%rax), %xmm0
	pcmpestri $0xFF, %xmm1, %xmm0
	pcmpestri $0xFF, (%rax), %xmm0
	pcmpestrm $0xFF, %xmm1, %xmm0
	pcmpestrm $0xFF, (%rax), %xmm0
	pcmpistri $0xFF, %xmm1, %xmm0
	pcmpistri $0xFF, (%rax), %xmm0
	pcmpistrm $0xFF, %xmm1, %xmm0
	pcmpistrm $0xFF, (%rax), %xmm0
	aeskeygenassist $0xFF, %xmm1, %xmm0
	aeskeygenassist $0xFF, (%rax), %xmm0
	pclmulqdq $0xFF, %xmm1, %xmm0
	pclmulqdq $0xFF, (%rax), %xmm0
	cmpss $0xFF, %xmm1, %xmm0
	cmpss $0xFF, (%rax), %xmm0
	roundss $0xFF, %xmm1, %xmm0
	roundss $0xFF, (%rax), %xmm0
	insertps $0xFF, %xmm1, %xmm0
	insertps $0xFF, (%rax), %xmm0
	addsd %xmm1, %xmm0
	addsd (%rax), %xmm0
	subsd %xmm1, %xmm0
	subsd (%rax), %xmm0
	mulsd %xmm1, %xmm0
	mulsd (%rax), %xmm0
	divsd %xmm1, %xmm0
	divsd (%rax), %xmm0
	sqrtsd %xmm1, %xmm0
	sqrtsd (%rax), %xmm0
	maxsd %xmm1, %xmm0
	maxsd (%rax), %xmm0
	minsd %xmm1, %xmm0
	minsd (%rax), %xmm0
	comisd %xmm1, %xmm0
	comisd (%rax), %xmm0
	ucomisd %xmm1, %xmm0
	ucomisd (%rax), %xmm0
	cvtdq2pd %xmm1, %xmm0
	cvtdq2pd (%rax), %xmm0
	cvtps2pd %xmm1, %xmm0
	cvtps2pd (%rax), %xmm0
	cvtsd2ss %xmm1, %xmm0
	cvtsd2ss (%rax), %xmm0
	movddup %xmm1, %xmm0
	movddup (%rax), %xmm0
	pmovsxbw %xmm1, %xmm0
	pmovsxbw (%rax), %xmm0
	pmovsxwd %xmm1, %xmm0
	pmovsxwd (%rax), %xmm0
	pmovsxdq %xmm1, %xmm0
	pmovsxdq (%rax), %xmm0
	pmovzxbw %xmm1, %xmm0
	pmovzxbw (%rax), %xmm0
	pmovzxwd %xmm1, %xmm0
	pmovzxwd (%rax), %xmm0
	pmovzxdq %xmm1, %xmm0
	pmovzxdq (%rax), %xmm0
	cmpsd $0xFF, %xmm1, %xmm0
	cmpsd $0xFF, (%rax), %xmm0
	roundsd $0xFF, %xmm1, %xmm0
	roundsd $0xFF, (%rax), %xmm0
	fist (%rax)
	fistl (%rbx)
	fiadd (%rax)
	fiaddl (%rbx)
	fisub (%rax)
	fisubl (%rbx)
	fisubr (%rax)
	fisubrl (%rbx)
	fimul (%rax)
	fimull (%rbx)
	fidiv (%rax)
	fidivl (%rbx)
	fidivr (%rax)
	fidivrl (%rbx)
	ficom (%rax)
	ficoml (%rbx)
	ficomp (%rax)
	ficompl (%rbx)
	cvtpi2ps %mm0, %xmm0
	cvtpi2ps (%rax), %xmm0
	cvtpi2pd %mm0, %xmm0
	cvtpi2pd (%rax), %xmm0
	cvtps2pi %xmm0, %mm0
	cvtps2pi (%rax), %mm0
	cvttps2pi %xmm0, %mm0
	cvttps2pi (%rax), %mm0
	cvtpd2pi %xmm0, %mm0
	cvtpd2pi (%rax), %mm0
	cvttpd2pi %xmm0, %mm0
	cvttpd2pi (%rax), %mm0
	faddp
	faddp %st(0), %st(1)
	fsubp
	fsubp %st(0), %st(1)
	fsubrp
	fsubrp %st(0), %st(1)
	fmulp
	fmulp %st(0), %st(1)
	fdivp
	fdivp %st(0), %st(1)
	fdivrp
	fdivrp %st(0), %st(1)
	pshufw $0xFF, %mm1, %mm0
	pshufw $0xFF, (%rax), %mm0
	movnti %ecx, (%rax)
	movnti %rcx, (%rbx)
	pinsrb $0xFF, %eax, %xmm0
	pinsrb $0xFF, (%rax), %xmm0
	pinsrd $0xFF, %eax, %xmm0
	pinsrd $0xFF, (%rbx), %xmm0
	pinsrq $0xFF, %rax, %xmm0
	pinsrq $0xFF, (%rbx), %xmm0
	pextrq $0xFF, %xmm1, %rax
	pextrq $0xFF, %xmm1, (%rbx)
	pmovsxbq %xmm1, %xmm0
	pmovsxbq (%rax), %xmm0
	pmovzxbq %xmm1, %xmm0
	pmovzxbq (%rax), %xmm0
	vfmadd132sd %xmm2, %xmm1, %xmm0
	vfmadd132sd (%rax), %xmm1, %xmm0
	vfmadd213sd %xmm2, %xmm1, %xmm0
	vfmadd213sd (%rax), %xmm1, %xmm0
	vfmadd231sd %xmm2, %xmm1, %xmm0
	vfmadd231sd (%rax), %xmm1, %xmm0
	vfmsub132sd %xmm2, %xmm1, %xmm0
	vfmsub132sd (%rax), %xmm1, %xmm0
	vfmsub213sd %xmm2, %xmm1, %xmm0
	vfmsub213sd (%rax), %xmm1, %xmm0
	vfmsub231sd %xmm2, %xmm1, %xmm0
	vfmsub231sd (%rax), %xmm1, %xmm0
	vfnmadd132sd %xmm2, %xmm1, %xmm0
	vfnmadd132sd (%rax), %xmm1, %xmm0
	vfnmadd213sd %xmm2, %xmm1, %xmm0
	vfnmadd213sd (%rax), %xmm1, %xmm0
	vfnmadd231sd %xmm2, %xmm1, %xmm0
	vfnmadd231sd (%rax), %xmm1, %xmm0
	vfnmsub132sd %xmm2, %xmm1, %xmm0
	vfnmsub132sd (%rax), %xmm1, %xmm0
	vfnmsub213sd %xmm2, %xmm1, %xmm0
	vfnmsub213sd (%rax), %xmm1, %xmm0
	vfnmsub231sd %xmm2, %xmm1, %xmm0
	vfnmsub231sd (%rax), %xmm1, %xmm0
	vfmadd132ss %xmm2, %xmm1, %xmm0
	vfmadd132ss (%rax), %xmm1, %xmm0
	vfmadd213ss %xmm2, %xmm1, %xmm0
	vfmadd213ss (%rax), %xmm1, %xmm0
	vfmadd231ss %xmm2, %xmm1, %xmm0
	vfmadd231ss (%rax), %xmm1, %xmm0
	vfmsub132ss %xmm2, %xmm1, %xmm0
	vfmsub132ss (%rax), %xmm1, %xmm0
	vfmsub213ss %xmm2, %xmm1, %xmm0
	vfmsub213ss (%rax), %xmm1, %xmm0
	vfmsub231ss %xmm2, %xmm1, %xmm0
	vfmsub231ss (%rax), %xmm1, %xmm0
	vfnmadd132ss %xmm2, %xmm1, %xmm0
	vfnmadd132ss (%rax), %xmm1, %xmm0
	vfnmadd213ss %xmm2, %xmm1, %xmm0
	vfnmadd213ss (%rax), %xmm1, %xmm0
	vfnmadd231ss %xmm2, %xmm1, %xmm0
	vfnmadd231ss (%rax), %xmm1, %xmm0
	vfnmsub132ss %xmm2, %xmm1, %xmm0
	vfnmsub132ss (%rax), %xmm1, %xmm0
	vfnmsub213ss %xmm2, %xmm1, %xmm0
	vfnmsub213ss (%rax), %xmm1, %xmm0
	vfnmsub231ss %xmm2, %xmm1, %xmm0
	vfnmsub231ss (%rax), %xmm1, %xmm0
	vdppd $0xFF, %xmm2, %xmm1, %xmm0
	vdppd $0xFF, (%rax), %xmm1, %xmm0
	vlddqu (%rax), %xmm0
	vlddqu (%rbx), %ymm0
	vmovntdqa (%rax), %xmm0
	vmovntdqa (%rbx), %ymm0
	vmovntps %xmm0, (%rax)
	vmovntps %ymm0, (%rbx)
	vmovntdq %xmm0, (%rax)
	vmovntdq %ymm0, (%rbx)
	vbroadcastss (%rax), %xmm0
	vbroadcastss (%rax), %ymm0
	vextractf128 $0xFF, %ymm0, %xmm0
	vextractf128 $0xFF, %ymm0, (%rax)
	vinsertf128 $0xFF, %xmm0, %ymm1, %ymm0
	vinsertf128 $0xFF, (%rax), %ymm1, %ymm0
	vperm2f128 $0xFF, %ymm2, %ymm1, %ymm0
	vperm2f128 $0xFF, (%rax), %ymm1, %ymm0
	pextrd $0xFF, %xmm0, %eax
	pextrd $0xFF, %xmm0, (%rax)
	lfs (%rax), %ax
	lfs (%rax), %eax
	lfs (%rax), %rax
	lgs (%rax), %ax
	lgs (%rax), %eax
	lgs (%rax), %rax
	lss (%rax), %ax
	lss (%rax), %eax
	lss (%rax), %rax
	lea (%rax), %ax
	lea (%rax), %eax
	lea (%rax), %rax
	rdrand %ax
	rdrand %eax
	rdrand %rax
	rdseed %ax
	rdseed %eax
	rdseed %rax
	movss %xmm1, %xmm0
	movss (%rax), %xmm0
	movss %xmm0, (%rax)
	movsd %xmm1, %xmm0
	movsd (%rax), %xmm0
	movsd %xmm0, (%rax)
	movaps %xmm1, %xmm0
	movaps (%rax), %xmm0
	movaps %xmm0, (%rax)
	movups %xmm1, %xmm0
	movups (%rax), %xmm0
	movups %xmm0, (%rax)
	movapd %xmm1, %xmm0
	movapd (%rax), %xmm0
	movapd %xmm0, (%rax)
	movupd %xmm1, %xmm0
	movupd (%rax), %xmm0
	movupd %xmm0, (%rax)
	movdqa %xmm1, %xmm0
	movdqa (%rax), %xmm0
	movdqa %xmm0, (%rax)
	movdqu %xmm1, %xmm0
	movdqu (%rax), %xmm0
	movdqu %xmm0, (%rax)
	fild (%rax)
	fildl (%rbx)
	fildll (%rcx)
	fistp (%rax)
	fistpl (%rbx)
	fistpll (%rcx)
	fisttp (%rax)
	fisttpl (%rbx)
	fisttpll (%rcx)
	fsts (%rax)
	fstl (%rbx)
	fst %st(0)
	fadds (%rax)
	faddl (%rbx)
	fadd %st(0), %st(1)
	fsubs (%rax)
	fsubl (%rbx)
	fsub %st(0), %st(1)
	fsubrs (%rax)
	fsubrl (%rbx)
	fsubr %st(0), %st(1)
	fmuls (%rax)
	fmull (%rbx)
	fmul %st(0), %st(1)
	fdivs (%rax)
	fdivl (%rbx)
	fdiv %st(0), %st(1)
	fdivrs (%rax)
	fdivrl (%rbx)
	fdivr %st(0), %st(1)
	pextrb $0xFF, %xmm0, %eax
	pextrb $0xFF, %xmm0, %rax
	pextrb $0xFF, %xmm0, (%rax)
	extractps $0xFF, %xmm0, %eax
	extractps $0xFF, %xmm0, %rax
	extractps $0xFF, %xmm0, (%rax)
	packsswb %mm1, %mm0
	packsswb (%rax), %mm0
	packsswb %xmm1, %xmm0
	packsswb (%rbx), %xmm0
	packssdw %mm1, %mm0
	packssdw (%rax), %mm0
	packssdw %xmm1, %xmm0
	packssdw (%rbx), %xmm0
	punpckhbw %mm1, %mm0
	punpckhbw (%rax), %mm0
	punpckhbw %xmm1, %xmm0
	punpckhbw (%rbx), %xmm0
	punpckhwd %mm1, %mm0
	punpckhwd (%rax), %mm0
	punpckhwd %xmm1, %xmm0
	punpckhwd (%rbx), %xmm0
	punpckhdq %mm1, %mm0
	punpckhdq (%rax), %mm0
	punpckhdq %xmm1, %xmm0
	punpckhdq (%rbx), %xmm0
	punpcklbw %mm1, %mm0
	punpcklbw (%rax), %mm0
	punpcklbw %xmm1, %xmm0
	punpcklbw (%rbx), %xmm0
	punpcklwd %mm1, %mm0
	punpcklwd (%rax), %mm0
	punpcklwd %xmm1, %xmm0
	punpcklwd (%rbx), %xmm0
	punpckldq %mm1, %mm0
	punpckldq (%rax), %mm0
	punpckldq %xmm1, %xmm0
	punpckldq (%rbx), %xmm0
	paddb %mm1, %mm0
	paddb (%rax), %mm0
	paddb %xmm1, %xmm0
	paddb (%rbx), %xmm0
	paddw %mm1, %mm0
	paddw (%rax), %mm0
	paddw %xmm1, %xmm0
	paddw (%rbx), %xmm0
	paddd %mm1, %mm0
	paddd (%rax), %mm0
	paddd %xmm1, %xmm0
	paddd (%rbx), %xmm0
	paddsb %mm1, %mm0
	paddsb (%rax), %mm0
	paddsb %xmm1, %xmm0
	paddsb (%rbx), %xmm0
	paddsw %mm1, %mm0
	paddsw (%rax), %mm0
	paddsw %xmm1, %xmm0
	paddsw (%rbx), %xmm0
	paddusb %mm1, %mm0
	paddusb (%rax), %mm0
	paddusb %xmm1, %xmm0
	paddusb (%rbx), %xmm0
	paddusw %mm1, %mm0
	paddusw (%rax), %mm0
	paddusw %xmm1, %xmm0
	paddusw (%rbx), %xmm0
	psubb %mm1, %mm0
	psubb (%rax), %mm0
	psubb %xmm1, %xmm0
	psubb (%rbx), %xmm0
	psubw %mm1, %mm0
	psubw (%rax), %mm0
	psubw %xmm1, %xmm0
	psubw (%rbx), %xmm0
	psubd %mm1, %mm0
	psubd (%rax), %mm0
	psubd %xmm1, %xmm0
	psubd (%rbx), %xmm0
	psubsb %mm1, %mm0
	psubsb (%rax), %mm0
	psubsb %xmm1, %xmm0
	psubsb (%rbx), %xmm0
	psubsw %mm1, %mm0
	psubsw (%rax), %mm0
	psubsw %xmm1, %xmm0
	psubsw (%rbx), %xmm0
	psubusb %mm1, %mm0
	psubusb (%rax), %mm0
	psubusb %xmm1, %xmm0
	psubusb (%rbx), %xmm0
	psubusw %mm1, %mm0
	psubusw (%rax), %mm0
	psubusw %xmm1, %xmm0
	psubusw (%rbx), %xmm0
	pmulhw %mm1, %mm0
	pmulhw (%rax), %mm0
	pmulhw %xmm1, %xmm0
	pmulhw (%rbx), %xmm0
	pmullw %mm1, %mm0
	pmullw (%rax), %mm0
	pmullw %xmm1, %xmm0
	pmullw (%rbx), %xmm0
	pmaddwd %mm1, %mm0
	pmaddwd (%rax), %mm0
	pmaddwd %xmm1, %xmm0
	pmaddwd (%rbx), %xmm0
	pcmpeqb %mm1, %mm0
	pcmpeqb (%rax), %mm0
	pcmpeqb %xmm1, %xmm0
	pcmpeqb (%rbx), %xmm0
	pcmpeqw %mm1, %mm0
	pcmpeqw (%rax), %mm0
	pcmpeqw %xmm1, %xmm0
	pcmpeqw (%rbx), %xmm0
	pcmpeqd %mm1, %mm0
	pcmpeqd (%rax), %mm0
	pcmpeqd %xmm1, %xmm0
	pcmpeqd (%rbx), %xmm0
	pcmpgtb %mm1, %mm0
	pcmpgtb (%rax), %mm0
	pcmpgtb %xmm1, %xmm0
	pcmpgtb (%rbx), %xmm0
	pcmpgtw %mm1, %mm0
	pcmpgtw (%rax), %mm0
	pcmpgtw %xmm1, %xmm0
	pcmpgtw (%rbx), %xmm0
	pcmpgtd %mm1, %mm0
	pcmpgtd (%rax), %mm0
	pcmpgtd %xmm1, %xmm0
	pcmpgtd (%rbx), %xmm0
	pand %mm1, %mm0
	pand (%rax), %mm0
	pand %xmm1, %xmm0
	pand (%rbx), %xmm0
	pandn %mm1, %mm0
	pandn (%rax), %mm0
	pandn %xmm1, %xmm0
	pandn (%rbx), %xmm0
	por %mm1, %mm0
	por (%rax), %mm0
	por %xmm1, %xmm0
	por (%rbx), %xmm0
	pxor %mm1, %mm0
	pxor (%rax), %mm0
	pxor %xmm1, %xmm0
	pxor (%rbx), %xmm0
	pavgb %mm1, %mm0
	pavgb (%rax), %mm0
	pavgb %xmm1, %xmm0
	pavgb (%rbx), %xmm0
	pavgw %mm1, %mm0
	pavgw (%rax), %mm0
	pavgw %xmm1, %xmm0
	pavgw (%rbx), %xmm0
	pmaxub %mm1, %mm0
	pmaxub (%rax), %mm0
	pmaxub %xmm1, %xmm0
	pmaxub (%rbx), %xmm0
	pmaxsw %mm1, %mm0
	pmaxsw (%rax), %mm0
	pmaxsw %xmm1, %xmm0
	pmaxsw (%rbx), %xmm0
	pminub %mm1, %mm0
	pminub (%rax), %mm0
	pminub %xmm1, %xmm0
	pminub (%rbx), %xmm0
	pminsw %mm1, %mm0
	pminsw (%rax), %mm0
	pminsw %xmm1, %xmm0
	pminsw (%rbx), %xmm0
	pmuludq %mm1, %mm0
	pmuludq (%rax), %mm0
	pmuludq %xmm1, %xmm0
	pmuludq (%rbx), %xmm0
	paddq %mm1, %mm0
	paddq (%rax), %mm0
	paddq %xmm1, %xmm0
	paddq (%rbx), %xmm0
	psubq %mm1, %mm0
	psubq (%rax), %mm0
	psubq %xmm1, %xmm0
	psubq (%rbx), %xmm0
	phaddw %mm1, %mm0
	phaddw (%rax), %mm0
	phaddw %xmm1, %xmm0
	phaddw (%rbx), %xmm0
	phaddsw %mm1, %mm0
	phaddsw (%rax), %mm0
	phaddsw %xmm1, %xmm0
	phaddsw (%rbx), %xmm0
	phaddd %mm1, %mm0
	phaddd (%rax), %mm0
	phaddd %xmm1, %xmm0
	phaddd (%rbx), %xmm0
	phsubw %mm1, %mm0
	phsubw (%rax), %mm0
	phsubw %xmm1, %xmm0
	phsubw (%rbx), %xmm0
	phsubsw %mm1, %mm0
	phsubsw (%rax), %mm0
	phsubsw %xmm1, %xmm0
	phsubsw (%rbx), %xmm0
	phsubd %mm1, %mm0
	phsubd (%rax), %mm0
	phsubd %xmm1, %xmm0
	phsubd (%rbx), %xmm0
	pabsb %mm1, %mm0
	pabsb (%rax), %mm0
	pabsb %xmm1, %xmm0
	pabsb (%rbx), %xmm0
	pabsw %mm1, %mm0
	pabsw (%rax), %mm0
	pabsw %xmm1, %xmm0
	pabsw (%rbx), %xmm0
	pabsd %mm1, %mm0
	pabsd (%rax), %mm0
	pabsd %xmm1, %xmm0
	pabsd (%rbx), %xmm0
	pmaddubsw %mm1, %mm0
	pmaddubsw (%rax), %mm0
	pmaddubsw %xmm1, %xmm0
	pmaddubsw (%rbx), %xmm0
	pmulhrsw %mm1, %mm0
	pmulhrsw (%rax), %mm0
	pmulhrsw %xmm1, %xmm0
	pmulhrsw (%rbx), %xmm0
	pshufb %mm1, %mm0
	pshufb (%rax), %mm0
	pshufb %xmm1, %xmm0
	pshufb (%rbx), %xmm0
	psignb %mm1, %mm0
	psignb (%rax), %mm0
	psignb %xmm1, %xmm0
	psignb (%rbx), %xmm0
	psignw %mm1, %mm0
	psignw (%rax), %mm0
	psignw %xmm1, %xmm0
	psignw (%rbx), %xmm0
	psignd %mm1, %mm0
	psignd (%rax), %mm0
	psignd %xmm1, %xmm0
	psignd (%rbx), %xmm0
	pmulhuw %mm1, %mm0
	pmulhuw (%rax), %mm0
	pmulhuw %xmm1, %xmm0
	pmulhuw (%rbx), %xmm0
	psadbw %mm1, %mm0
	psadbw (%rax), %mm0
	psadbw %xmm1, %xmm0
	psadbw (%rbx), %xmm0
	flds (%eax)
	fldl (%ebx)
	fldt (%ecx)
	fld %st(0)
	fstps (%eax)
	fstpl (%ebx)
	fstpt (%ecx)
	fstp %st(0)
	palignr $0xFF, %mm1, %mm0
	palignr $0xFF, (%eax), %mm0
	palignr $0xFF, %xmm1, %xmm0
	palignr $0xFF, (%ebx), %xmm0
	vmovd %eax, %xmm0
	vmovd (%rax), %xmm0
	vmovd %xmm0, %eax
	vmovd %xmm0, (%rax)
	vmovq %rax, %xmm0
	vmovq (%rax), %xmm0
	vmovq %xmm0, %rax
	vmovq %xmm0, (%rax)
	adcx %ebx, %eax
	adcx (%eax), %eax
	adcx %rbx, %rax
	adcx (%ebx), %rax
	adox %ebx, %eax
	adox (%eax), %eax
	adox %rbx, %rax
	adox (%ebx), %rax
	cvtsi2ss %eax, %xmm0
	cvtsi2ssl (%rax), %xmm0
	cvtsi2ss %rax, %xmm0
	cvtsi2ssq (%rbx), %xmm0
	cvtsi2sd %eax, %xmm0
	cvtsi2sdl (%rax), %xmm0
	cvtsi2sd %rax, %xmm0
	cvtsi2sdq (%rbx), %xmm0
	cvtss2si %xmm0, %eax
	cvtss2si (%eax), %eax
	cvtss2si %xmm0, %rax
	cvtss2si (%eax), %rax
	cvttss2si %xmm0, %eax
	cvttss2si (%eax), %eax
	cvttss2si %xmm0, %rax
	cvttss2si (%eax), %rax
	vcvttss2si %xmm0, %eax
	vcvttss2si (%eax), %eax
	vcvttss2si %xmm0, %rax
	vcvttss2si (%eax), %rax
	vcvtss2si %xmm0, %eax
	vcvtss2si (%eax), %eax
	vcvtss2si %xmm0, %rax
	vcvtss2si (%eax), %rax
	fcom
	fcom %st(1)
	fcoms (%rax)
	fcoml (%rbx)
	fcomp
	fcomp %st(1)
	fcomps (%rax)
	fcompl (%rbx)
	pinsrw $0xFF, %eax, %mm0
	pinsrw $0xFF, (%rax), %mm0
	pinsrw $0xFF, %eax, %xmm0
	pinsrw $0xFF, (%rax), %xmm0
	pmovmskb %mm0, %eax
	pmovmskb %mm0, %rax
	pmovmskb %xmm0, %eax
	pmovmskb %xmm0, %rax
	cvtsd2si %xmm0, %eax
	cvtsd2si (%rax), %eax
	cvtsd2si %xmm0, %rax
	cvtsd2si (%rax), %rax
	cvttsd2si %xmm0, %eax
	cvttsd2si (%rax), %eax
	cvttsd2si %xmm0, %rax
	cvttsd2si (%rax), %rax
	vcvtsd2si %xmm0, %eax
	vcvtsd2si (%rax), %eax
	vcvtsd2si %xmm0, %rax
	vcvtsd2si (%rax), %rax
	vcvttsd2si %xmm0, %eax
	vcvttsd2si (%rax), %eax
	vcvttsd2si %xmm0, %rax
	vcvttsd2si (%rax), %rax
	blendvpd %xmm1, %xmm0
	blendvpd (%rax), %xmm0
	blendvpd %xmm0, %xmm1, %xmm2
	blendvpd %xmm0, (%rax), %xmm1
	blendvps %xmm1, %xmm0
	blendvps (%rax), %xmm0
	blendvps %xmm0, %xmm1, %xmm2
	blendvps %xmm0, (%rax), %xmm1
	pblendvb %xmm1, %xmm0
	pblendvb (%rax), %xmm0
	pblendvb %xmm0, %xmm1, %xmm2
	pblendvb %xmm0, (%rax), %xmm1
