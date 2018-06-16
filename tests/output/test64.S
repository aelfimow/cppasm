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
	fwait
	wait
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
	xend
	xtest
	vmcall
	vmfunc
	vmlaunch
	vmresume
	vmxoff
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
	xbegin Instruction1_Type4_Label
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
	xabort $0xFF
	rep stosb
	repe stosb
	repz stosb
	repne stosb
	repnz stosb
	xrelease xchg (%rbx), %rax
	xacquire xchg (%rbx), %rax
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
	kaddb %k3, %k2, %k1
	kaddw %k3, %k2, %k1
	kaddd %k3, %k2, %k1
	kaddq %k3, %k2, %k1
	kandb %k3, %k2, %k1
	kandw %k3, %k2, %k1
	kandd %k3, %k2, %k1
	kandq %k3, %k2, %k1
	kandnb %k3, %k2, %k1
	kandnw %k3, %k2, %k1
	kandnd %k3, %k2, %k1
	kandnq %k3, %k2, %k1
	korb %k3, %k2, %k1
	korw %k3, %k2, %k1
	kord %k3, %k2, %k1
	korq %k3, %k2, %k1
	kunpckbw %k3, %k2, %k1
	kunpckwd %k3, %k2, %k1
	kunpckdq %k3, %k2, %k1
	kxnorb %k3, %k2, %k1
	kxnorw %k3, %k2, %k1
	kxnord %k3, %k2, %k1
	kxnorq %k3, %k2, %k1
	kxorb %k3, %k2, %k1
	kxorw %k3, %k2, %k1
	kxord %k3, %k2, %k1
	kxorq %k3, %k2, %k1
	knotb %k2, %k1
	knotw %k2, %k1
	knotd %k2, %k1
	knotq %k2, %k1
	kortestb %k2, %k1
	kortestw %k2, %k1
	kortestd %k2, %k1
	kortestq %k2, %k1
	ktestb %k2, %k1
	ktestw %k2, %k1
	ktestd %k2, %k1
	ktestq %k2, %k1
	kshiftlb $0x00, %k2, %k1
	kshiftlw $0x00, %k2, %k1
	kshiftld $0x00, %k2, %k1
	kshiftlq $0x00, %k2, %k1
	kshiftrb $0x00, %k2, %k1
	kshiftrw $0x00, %k2, %k1
	kshiftrd $0x00, %k2, %k1
	kshiftrq $0x00, %k2, %k1
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
	rsqrtps %xmm1, %xmm0
	rsqrtps (%rax), %xmm0
	sha1msg1 %xmm1, %xmm0
	sha1msg1 (%rax), %xmm0
	sha1msg2 %xmm1, %xmm0
	sha1msg2 (%rax), %xmm0
	sha1nexte %xmm1, %xmm0
	sha1nexte (%rax), %xmm0
	sha256msg1 %xmm1, %xmm0
	sha256msg1 (%rax), %xmm0
	sha256msg2 %xmm1, %xmm0
	sha256msg2 (%rax), %xmm0
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
	rsqrtss %xmm1, %xmm0
	rsqrtss (%rax), %xmm0
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
	vrsqrtss %xmm2, %xmm1, %xmm0
	vrsqrtss (%rax), %xmm1, %xmm0
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
	sha256rnds2 %xmm0, %xmm1, %xmm2
	sha256rnds2 %xmm0, (%rdx), %xmm1
	invept (%rbx), %rax
	invvpid (%rbx), %rax
	vmclear (%ebx)
	vmclear (%rbx)
	vmptrld (%ebx)
	vmptrld (%rbx)
	vmptrst (%ebx)
	vmptrst (%rbx)
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
	packuswb %mm1, %mm0
	packuswb (%rax), %mm0
	packuswb %xmm1, %xmm0
	packuswb (%rbx), %xmm0
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
	vcvtph2ps %xmm1, %xmm0
	vcvtph2ps (%rax), %xmm0
	vcvtph2ps %xmm0, %ymm0
	vcvtph2ps (%rbx), %ymm0
	vcvtps2pd %xmm1, %xmm0
	vcvtps2pd (%rax), %xmm0
	vcvtps2pd %xmm0, %ymm0
	vcvtps2pd (%rbx), %ymm0
	vcvtdq2pd %xmm1, %xmm0
	vcvtdq2pd (%rax), %xmm0
	vcvtdq2pd %xmm0, %ymm0
	vcvtdq2pd (%rbx), %ymm0
	vcvtps2ph $0xFF, %xmm1, %xmm0
	vcvtps2ph $0xFF, %xmm0, (%rax)
	vcvtps2ph $0xFF, %ymm0, %xmm0
	vcvtps2ph $0xFF, %ymm0, (%rbx)
	vfmadd132pd %xmm2, %xmm1, %xmm0
	vfmadd132pd (%rax), %xmm1, %xmm0
	vfmadd132pd %ymm2, %ymm1, %ymm0
	vfmadd132pd (%rbx), %ymm1, %ymm0
	vfmadd213pd %xmm2, %xmm1, %xmm0
	vfmadd213pd (%rax), %xmm1, %xmm0
	vfmadd213pd %ymm2, %ymm1, %ymm0
	vfmadd213pd (%rbx), %ymm1, %ymm0
	vfmadd231pd %xmm2, %xmm1, %xmm0
	vfmadd231pd (%rax), %xmm1, %xmm0
	vfmadd231pd %ymm2, %ymm1, %ymm0
	vfmadd231pd (%rbx), %ymm1, %ymm0
	vfmadd132ps %xmm2, %xmm1, %xmm0
	vfmadd132ps (%rax), %xmm1, %xmm0
	vfmadd132ps %ymm2, %ymm1, %ymm0
	vfmadd132ps (%rbx), %ymm1, %ymm0
	vfmadd213ps %xmm2, %xmm1, %xmm0
	vfmadd213ps (%rax), %xmm1, %xmm0
	vfmadd213ps %ymm2, %ymm1, %ymm0
	vfmadd213ps (%rbx), %ymm1, %ymm0
	vfmadd231ps %xmm2, %xmm1, %xmm0
	vfmadd231ps (%rax), %xmm1, %xmm0
	vfmadd231ps %ymm2, %ymm1, %ymm0
	vfmadd231ps (%rbx), %ymm1, %ymm0
	vfmaddsub132pd %xmm2, %xmm1, %xmm0
	vfmaddsub132pd (%rax), %xmm1, %xmm0
	vfmaddsub132pd %ymm2, %ymm1, %ymm0
	vfmaddsub132pd (%rbx), %ymm1, %ymm0
	vfmaddsub213pd %xmm2, %xmm1, %xmm0
	vfmaddsub213pd (%rax), %xmm1, %xmm0
	vfmaddsub213pd %ymm2, %ymm1, %ymm0
	vfmaddsub213pd (%rbx), %ymm1, %ymm0
	vfmaddsub231pd %xmm2, %xmm1, %xmm0
	vfmaddsub231pd (%rax), %xmm1, %xmm0
	vfmaddsub231pd %ymm2, %ymm1, %ymm0
	vfmaddsub231pd (%rbx), %ymm1, %ymm0
	vfmaddsub132ps %xmm2, %xmm1, %xmm0
	vfmaddsub132ps (%rax), %xmm1, %xmm0
	vfmaddsub132ps %ymm2, %ymm1, %ymm0
	vfmaddsub132ps (%rbx), %ymm1, %ymm0
	vfmaddsub213ps %xmm2, %xmm1, %xmm0
	vfmaddsub213ps (%rax), %xmm1, %xmm0
	vfmaddsub213ps %ymm2, %ymm1, %ymm0
	vfmaddsub213ps (%rbx), %ymm1, %ymm0
	vfmaddsub231ps %xmm2, %xmm1, %xmm0
	vfmaddsub231ps (%rax), %xmm1, %xmm0
	vfmaddsub231ps %ymm2, %ymm1, %ymm0
	vfmaddsub231ps (%rbx), %ymm1, %ymm0
	vfmsubadd132pd %xmm2, %xmm1, %xmm0
	vfmsubadd132pd (%rax), %xmm1, %xmm0
	vfmsubadd132pd %ymm2, %ymm1, %ymm0
	vfmsubadd132pd (%rbx), %ymm1, %ymm0
	vfmsubadd213pd %xmm2, %xmm1, %xmm0
	vfmsubadd213pd (%rax), %xmm1, %xmm0
	vfmsubadd213pd %ymm2, %ymm1, %ymm0
	vfmsubadd213pd (%rbx), %ymm1, %ymm0
	vfmsubadd231pd %xmm2, %xmm1, %xmm0
	vfmsubadd231pd (%rax), %xmm1, %xmm0
	vfmsubadd231pd %ymm2, %ymm1, %ymm0
	vfmsubadd231pd (%rbx), %ymm1, %ymm0
	vfmsubadd132ps %xmm2, %xmm1, %xmm0
	vfmsubadd132ps (%rax), %xmm1, %xmm0
	vfmsubadd132ps %ymm2, %ymm1, %ymm0
	vfmsubadd132ps (%rbx), %ymm1, %ymm0
	vfmsubadd213ps %xmm2, %xmm1, %xmm0
	vfmsubadd213ps (%rax), %xmm1, %xmm0
	vfmsubadd213ps %ymm2, %ymm1, %ymm0
	vfmsubadd213ps (%rbx), %ymm1, %ymm0
	vfmsubadd231ps %xmm2, %xmm1, %xmm0
	vfmsubadd231ps (%rax), %xmm1, %xmm0
	vfmsubadd231ps %ymm2, %ymm1, %ymm0
	vfmsubadd231ps (%rbx), %ymm1, %ymm0
	vfmsub132pd %xmm2, %xmm1, %xmm0
	vfmsub132pd (%rax), %xmm1, %xmm0
	vfmsub132pd %ymm2, %ymm1, %ymm0
	vfmsub132pd (%rbx), %ymm1, %ymm0
	vfmsub213pd %xmm2, %xmm1, %xmm0
	vfmsub213pd (%rax), %xmm1, %xmm0
	vfmsub213pd %ymm2, %ymm1, %ymm0
	vfmsub213pd (%rbx), %ymm1, %ymm0
	vfmsub231pd %xmm2, %xmm1, %xmm0
	vfmsub231pd (%rax), %xmm1, %xmm0
	vfmsub231pd %ymm2, %ymm1, %ymm0
	vfmsub231pd (%rbx), %ymm1, %ymm0
	vfmsub132ps %xmm2, %xmm1, %xmm0
	vfmsub132ps (%rax), %xmm1, %xmm0
	vfmsub132ps %ymm2, %ymm1, %ymm0
	vfmsub132ps (%rbx), %ymm1, %ymm0
	vfmsub213ps %xmm2, %xmm1, %xmm0
	vfmsub213ps (%rax), %xmm1, %xmm0
	vfmsub213ps %ymm2, %ymm1, %ymm0
	vfmsub213ps (%rbx), %ymm1, %ymm0
	vfmsub231ps %xmm2, %xmm1, %xmm0
	vfmsub231ps (%rax), %xmm1, %xmm0
	vfmsub231ps %ymm2, %ymm1, %ymm0
	vfmsub231ps (%rbx), %ymm1, %ymm0
	vfnmadd132pd %xmm2, %xmm1, %xmm0
	vfnmadd132pd (%rax), %xmm1, %xmm0
	vfnmadd132pd %ymm2, %ymm1, %ymm0
	vfnmadd132pd (%rbx), %ymm1, %ymm0
	vfnmadd213pd %xmm2, %xmm1, %xmm0
	vfnmadd213pd (%rax), %xmm1, %xmm0
	vfnmadd213pd %ymm2, %ymm1, %ymm0
	vfnmadd213pd (%rbx), %ymm1, %ymm0
	vfnmadd231pd %xmm2, %xmm1, %xmm0
	vfnmadd231pd (%rax), %xmm1, %xmm0
	vfnmadd231pd %ymm2, %ymm1, %ymm0
	vfnmadd231pd (%rbx), %ymm1, %ymm0
	vfnmadd132ps %xmm2, %xmm1, %xmm0
	vfnmadd132ps (%rax), %xmm1, %xmm0
	vfnmadd132ps %ymm2, %ymm1, %ymm0
	vfnmadd132ps (%rbx), %ymm1, %ymm0
	vfnmadd213ps %xmm2, %xmm1, %xmm0
	vfnmadd213ps (%rax), %xmm1, %xmm0
	vfnmadd213ps %ymm2, %ymm1, %ymm0
	vfnmadd213ps (%rbx), %ymm1, %ymm0
	vfnmadd231ps %xmm2, %xmm1, %xmm0
	vfnmadd231ps (%rax), %xmm1, %xmm0
	vfnmadd231ps %ymm2, %ymm1, %ymm0
	vfnmadd231ps (%rbx), %ymm1, %ymm0
	vfnmsub132pd %xmm2, %xmm1, %xmm0
	vfnmsub132pd (%rax), %xmm1, %xmm0
	vfnmsub132pd %ymm2, %ymm1, %ymm0
	vfnmsub132pd (%rbx), %ymm1, %ymm0
	vfnmsub213pd %xmm2, %xmm1, %xmm0
	vfnmsub213pd (%rax), %xmm1, %xmm0
	vfnmsub213pd %ymm2, %ymm1, %ymm0
	vfnmsub213pd (%rbx), %ymm1, %ymm0
	vfnmsub231pd %xmm2, %xmm1, %xmm0
	vfnmsub231pd (%rax), %xmm1, %xmm0
	vfnmsub231pd %ymm2, %ymm1, %ymm0
	vfnmsub231pd (%rbx), %ymm1, %ymm0
	vfnmsub132ps %xmm2, %xmm1, %xmm0
	vfnmsub132ps (%rax), %xmm1, %xmm0
	vfnmsub132ps %ymm2, %ymm1, %ymm0
	vfnmsub132ps (%rbx), %ymm1, %ymm0
	vfnmsub213ps %xmm2, %xmm1, %xmm0
	vfnmsub213ps (%rax), %xmm1, %xmm0
	vfnmsub213ps %ymm2, %ymm1, %ymm0
	vfnmsub213ps (%rbx), %ymm1, %ymm0
	vfnmsub231ps %xmm2, %xmm1, %xmm0
	vfnmsub231ps (%rax), %xmm1, %xmm0
	vfnmsub231ps %ymm2, %ymm1, %ymm0
	vfnmsub231ps (%rbx), %ymm1, %ymm0
	vaddpd %xmm2, %xmm1, %xmm0
	vaddpd (%rax), %xmm1, %xmm0
	vaddpd %ymm2, %ymm1, %ymm0
	vaddpd (%rbx), %ymm1, %ymm0
	vaddps %xmm2, %xmm1, %xmm0
	vaddps (%rax), %xmm1, %xmm0
	vaddps %ymm2, %ymm1, %ymm0
	vaddps (%rbx), %ymm1, %ymm0
	vsubpd %xmm2, %xmm1, %xmm0
	vsubpd (%rax), %xmm1, %xmm0
	vsubpd %ymm2, %ymm1, %ymm0
	vsubpd (%rbx), %ymm1, %ymm0
	vsubps %xmm2, %xmm1, %xmm0
	vsubps (%rax), %xmm1, %xmm0
	vsubps %ymm2, %ymm1, %ymm0
	vsubps (%rbx), %ymm1, %ymm0
	vmulpd %xmm2, %xmm1, %xmm0
	vmulpd (%rax), %xmm1, %xmm0
	vmulpd %ymm2, %ymm1, %ymm0
	vmulpd (%rbx), %ymm1, %ymm0
	vmulps %xmm2, %xmm1, %xmm0
	vmulps (%rax), %xmm1, %xmm0
	vmulps %ymm2, %ymm1, %ymm0
	vmulps (%rbx), %ymm1, %ymm0
	vdivpd %xmm2, %xmm1, %xmm0
	vdivpd (%rax), %xmm1, %xmm0
	vdivpd %ymm2, %ymm1, %ymm0
	vdivpd (%rbx), %ymm1, %ymm0
	vdivps %xmm2, %xmm1, %xmm0
	vdivps (%rax), %xmm1, %xmm0
	vdivps %ymm2, %ymm1, %ymm0
	vdivps (%rbx), %ymm1, %ymm0
	vminps %xmm2, %xmm1, %xmm0
	vminps (%rax), %xmm1, %xmm0
	vminps %ymm2, %ymm1, %ymm0
	vminps (%rbx), %ymm1, %ymm0
	vminpd %xmm2, %xmm1, %xmm0
	vminpd (%rax), %xmm1, %xmm0
	vminpd %ymm2, %ymm1, %ymm0
	vminpd (%rbx), %ymm1, %ymm0
	vmaxps %xmm2, %xmm1, %xmm0
	vmaxps (%rax), %xmm1, %xmm0
	vmaxps %ymm2, %ymm1, %ymm0
	vmaxps (%rbx), %ymm1, %ymm0
	vmaxpd %xmm2, %xmm1, %xmm0
	vmaxpd (%rax), %xmm1, %xmm0
	vmaxpd %ymm2, %ymm1, %ymm0
	vmaxpd (%rbx), %ymm1, %ymm0
	vhaddps %xmm2, %xmm1, %xmm0
	vhaddps (%rax), %xmm1, %xmm0
	vhaddps %ymm2, %ymm1, %ymm0
	vhaddps (%rbx), %ymm1, %ymm0
	vhaddpd %xmm2, %xmm1, %xmm0
	vhaddpd (%rax), %xmm1, %xmm0
	vhaddpd %ymm2, %ymm1, %ymm0
	vhaddpd (%rbx), %ymm1, %ymm0
	vhsubps %xmm2, %xmm1, %xmm0
	vhsubps (%rax), %xmm1, %xmm0
	vhsubps %ymm2, %ymm1, %ymm0
	vhsubps (%rbx), %ymm1, %ymm0
	vhsubpd %xmm2, %xmm1, %xmm0
	vhsubpd (%rax), %xmm1, %xmm0
	vhsubpd %ymm2, %ymm1, %ymm0
	vhsubpd (%rbx), %ymm1, %ymm0
	vaddsubps %xmm2, %xmm1, %xmm0
	vaddsubps (%rax), %xmm1, %xmm0
	vaddsubps %ymm2, %ymm1, %ymm0
	vaddsubps (%rbx), %ymm1, %ymm0
	vaddsubpd %xmm2, %xmm1, %xmm0
	vaddsubpd (%rax), %xmm1, %xmm0
	vaddsubpd %ymm2, %ymm1, %ymm0
	vaddsubpd (%rbx), %ymm1, %ymm0
	vunpckhpd %xmm2, %xmm1, %xmm0
	vunpckhpd (%rax), %xmm1, %xmm0
	vunpckhpd %ymm2, %ymm1, %ymm0
	vunpckhpd (%rbx), %ymm1, %ymm0
	vunpcklpd %xmm2, %xmm1, %xmm0
	vunpcklpd (%rax), %xmm1, %xmm0
	vunpcklpd %ymm2, %ymm1, %ymm0
	vunpcklpd (%rbx), %ymm1, %ymm0
	vunpckhps %xmm2, %xmm1, %xmm0
	vunpckhps (%rax), %xmm1, %xmm0
	vunpckhps %ymm2, %ymm1, %ymm0
	vunpckhps (%rbx), %ymm1, %ymm0
	vunpcklps %xmm2, %xmm1, %xmm0
	vunpcklps (%rax), %xmm1, %xmm0
	vunpcklps %ymm2, %ymm1, %ymm0
	vunpcklps (%rbx), %ymm1, %ymm0
	vxorps %xmm2, %xmm1, %xmm0
	vxorps (%rax), %xmm1, %xmm0
	vxorps %ymm2, %ymm1, %ymm0
	vxorps (%rbx), %ymm1, %ymm0
	vxorpd %xmm2, %xmm1, %xmm0
	vxorpd (%rax), %xmm1, %xmm0
	vxorpd %ymm2, %ymm1, %ymm0
	vxorpd (%rbx), %ymm1, %ymm0
	vorps %xmm2, %xmm1, %xmm0
	vorps (%rax), %xmm1, %xmm0
	vorps %ymm2, %ymm1, %ymm0
	vorps (%rbx), %ymm1, %ymm0
	vorpd %xmm2, %xmm1, %xmm0
	vorpd (%rax), %xmm1, %xmm0
	vorpd %ymm2, %ymm1, %ymm0
	vorpd (%rbx), %ymm1, %ymm0
	vandps %xmm2, %xmm1, %xmm0
	vandps (%rax), %xmm1, %xmm0
	vandps %ymm2, %ymm1, %ymm0
	vandps (%rbx), %ymm1, %ymm0
	vandpd %xmm2, %xmm1, %xmm0
	vandpd (%rax), %xmm1, %xmm0
	vandpd %ymm2, %ymm1, %ymm0
	vandpd (%rbx), %ymm1, %ymm0
	vandnps %xmm2, %xmm1, %xmm0
	vandnps (%rax), %xmm1, %xmm0
	vandnps %ymm2, %ymm1, %ymm0
	vandnps (%rbx), %ymm1, %ymm0
	vandnpd %xmm2, %xmm1, %xmm0
	vandnpd (%rax), %xmm1, %xmm0
	vandnpd %ymm2, %ymm1, %ymm0
	vandnpd (%rbx), %ymm1, %ymm0
	vsqrtpd %xmm1, %xmm0
	vsqrtpd (%rax), %xmm0
	vsqrtpd %ymm1, %ymm0
	vsqrtpd (%rbx), %ymm0
	vsqrtps %xmm1, %xmm0
	vsqrtps (%rax), %xmm0
	vsqrtps %ymm1, %ymm0
	vsqrtps (%rbx), %ymm0
	vrsqrtps %xmm1, %xmm0
	vrsqrtps (%rax), %xmm0
	vrsqrtps %ymm1, %ymm0
	vrsqrtps (%rbx), %ymm0
	vrcpps %xmm1, %xmm0
	vrcpps (%rax), %xmm0
	vrcpps %ymm1, %ymm0
	vrcpps (%rbx), %ymm0
	vcvtps2dq %xmm1, %xmm0
	vcvtps2dq (%rax), %xmm0
	vcvtps2dq %ymm1, %ymm0
	vcvtps2dq (%rbx), %ymm0
	vcvtdq2ps %xmm1, %xmm0
	vcvtdq2ps (%rax), %xmm0
	vcvtdq2ps %ymm1, %ymm0
	vcvtdq2ps (%rbx), %ymm0
	vcvttps2dq %xmm1, %xmm0
	vcvttps2dq (%rax), %xmm0
	vcvttps2dq %ymm1, %ymm0
	vcvttps2dq (%rbx), %ymm0
	vptest %xmm1, %xmm0
	vptest (%rax), %xmm0
	vptest %ymm1, %ymm0
	vptest (%rbx), %ymm0
	vtestps %xmm1, %xmm0
	vtestps (%rax), %xmm0
	vtestps %ymm1, %ymm0
	vtestps (%rbx), %ymm0
	vtestpd %xmm1, %xmm0
	vtestpd (%rax), %xmm0
	vtestpd %ymm1, %ymm0
	vtestpd (%rbx), %ymm0
	vmovshdup %xmm1, %xmm0
	vmovshdup (%rax), %xmm0
	vmovshdup %ymm1, %ymm0
	vmovshdup (%rbx), %ymm0
	vmovsldup %xmm1, %xmm0
	vmovsldup (%rax), %xmm0
	vmovsldup %ymm1, %ymm0
	vmovsldup (%rbx), %ymm0
	vmovddup %xmm1, %xmm0
	vmovddup (%rax), %xmm0
	vmovddup %ymm1, %ymm0
	vmovddup (%rbx), %ymm0
	vcvtpd2ps %xmm1, %xmm0
	vcvtpd2ps %ymm1, %xmm0
	vcvttpd2dq %xmm1, %xmm0
	vcvttpd2dq %ymm1, %xmm0
	vcvtpd2dq %xmm1, %xmm0
	vcvtpd2dq %ymm1, %xmm0
	vcmpps $0xFF, %xmm2, %xmm1, %xmm0
	vcmpps $0xFF, (%rax), %xmm1, %xmm0
	vcmpps $0xFF, %ymm2, %ymm1, %ymm0
	vcmpps $0xFF, (%rbx), %ymm1, %ymm0
	vcmppd $0xFF, %xmm2, %xmm1, %xmm0
	vcmppd $0xFF, (%rax), %xmm1, %xmm0
	vcmppd $0xFF, %ymm2, %ymm1, %ymm0
	vcmppd $0xFF, (%rbx), %ymm1, %ymm0
	vdpps $0xFF, %xmm2, %xmm1, %xmm0
	vdpps $0xFF, (%rax), %xmm1, %xmm0
	vdpps $0xFF, %ymm2, %ymm1, %ymm0
	vdpps $0xFF, (%rbx), %ymm1, %ymm0
	vblendps $0xFF, %xmm2, %xmm1, %xmm0
	vblendps $0xFF, (%rax), %xmm1, %xmm0
	vblendps $0xFF, %ymm2, %ymm1, %ymm0
	vblendps $0xFF, (%rbx), %ymm1, %ymm0
	vblendpd $0xFF, %xmm2, %xmm1, %xmm0
	vblendpd $0xFF, (%rax), %xmm1, %xmm0
	vblendpd $0xFF, %ymm2, %ymm1, %ymm0
	vblendpd $0xFF, (%rbx), %ymm1, %ymm0
	vshufps $0xFF, %xmm2, %xmm1, %xmm0
	vshufps $0xFF, (%rax), %xmm1, %xmm0
	vshufps $0xFF, %ymm2, %ymm1, %ymm0
	vshufps $0xFF, (%rbx), %ymm1, %ymm0
	vshufpd $0xFF, %xmm2, %xmm1, %xmm0
	vshufpd $0xFF, (%rax), %xmm1, %xmm0
	vshufpd $0xFF, %ymm2, %ymm1, %ymm0
	vshufpd $0xFF, (%rbx), %ymm1, %ymm0
	vroundps $0xFF, %xmm1, %xmm0
	vroundps $0xFF, (%rax), %xmm0
	vroundps $0xFF, %ymm1, %ymm0
	vroundps $0xFF, (%rbx), %ymm0
	vroundpd $0xFF, %xmm1, %xmm0
	vroundpd $0xFF, (%rax), %xmm0
	vroundpd $0xFF, %ymm1, %ymm0
	vroundpd $0xFF, (%rbx), %ymm0
	vmovmskps %xmm0, %eax
	vmovmskps %xmm0, %rax
	vmovmskps %ymm0, %eax
	vmovmskps %ymm0, %rax
	vmovmskpd %xmm0, %eax
	vmovmskpd %xmm0, %rax
	vmovmskpd %ymm0, %eax
	vmovmskpd %ymm0, %rax
	vblendvpd %xmm3, %xmm2, %xmm1, %xmm0
	vblendvpd %xmm3, (%rax), %xmm1, %xmm0
	vblendvpd %ymm3, %ymm2, %ymm1, %ymm0
	vblendvpd %ymm3, (%rax), %ymm1, %ymm0
	vblendvps %xmm3, %xmm2, %xmm1, %xmm0
	vblendvps %xmm3, (%rax), %xmm1, %xmm0
	vblendvps %ymm3, %ymm2, %ymm1, %ymm0
	vblendvps %ymm3, (%rax), %ymm1, %ymm0
	vmaskmovps (%rax), %xmm1, %xmm0
	vmaskmovps (%rbx), %ymm1, %ymm0
	vmaskmovps %xmm1, %xmm0, (%rax)
	vmaskmovps %ymm1, %ymm0, (%rbx)
	vmaskmovpd (%rax), %xmm1, %xmm0
	vmaskmovpd (%rbx), %ymm1, %ymm0
	vmaskmovpd %xmm1, %xmm0, (%rax)
	vmaskmovpd %ymm1, %ymm0, (%rbx)
	vcvtsi2ss %eax, %xmm1, %xmm0
	vcvtsi2ss (%rax), %xmm1, %xmm0
	vcvtsi2ss %rbx, %xmm1, %xmm0
	vcvtsi2ss (%rbx), %xmm1, %xmm0
	vcvtsi2sd %eax, %xmm1, %xmm0
	vcvtsi2sd (%rax), %xmm1, %xmm0
	vcvtsi2sd %rbx, %xmm1, %xmm0
	vcvtsi2sd (%rbx), %xmm1, %xmm0
	nop
	nop %ax
	nopw (%rax)
	nop %eax
	nopl (%rbx)
	pextrw $0xFF, %mm0, %eax
	pextrw $0xFF, %mm0, %rax
	pextrw $0xFF, %xmm0, %eax
	pextrw $0xFF, %xmm0, %rax
	pextrw $0xFF, %xmm0, (%eax)
	kmovb %k2, %k1
	kmovb (%rdx), %k1
	kmovb %k1, (%rdx)
	kmovb %eax, %k1
	kmovb %k2, %eax
	kmovw %k2, %k1
	kmovw (%rdx), %k1
	kmovw %k1, (%rdx)
	kmovw %eax, %k1
	kmovw %k2, %eax
	kmovd %k2, %k1
	kmovd (%rdx), %k1
	kmovd %k1, (%rdx)
	kmovd %eax, %k1
	kmovd %k2, %eax
	kmovq %k2, %k1
	kmovq (%rdx), %k1
	kmovq %k1, (%rdx)
	kmovq %rax, %k1
	kmovq %k2, %rax
	psllw %mm1, %mm0
	psllw (%rax), %mm0
	psllw %xmm1, %xmm0
	psllw (%rbx), %xmm0
	psllw $0xFF, %mm0
	psllw $0xFF, %xmm0
	pslld %mm1, %mm0
	pslld (%rax), %mm0
	pslld %xmm1, %xmm0
	pslld (%rbx), %xmm0
	pslld $0xFF, %mm0
	pslld $0xFF, %xmm0
	psllq %mm1, %mm0
	psllq (%rax), %mm0
	psllq %xmm1, %xmm0
	psllq (%rbx), %xmm0
	psllq $0xFF, %mm0
	psllq $0xFF, %xmm0
	psrlw %mm1, %mm0
	psrlw (%rax), %mm0
	psrlw %xmm1, %xmm0
	psrlw (%rbx), %xmm0
	psrlw $0xFF, %mm0
	psrlw $0xFF, %xmm0
	psrld %mm1, %mm0
	psrld (%rax), %mm0
	psrld %xmm1, %xmm0
	psrld (%rbx), %xmm0
	psrld $0xFF, %mm0
	psrld $0xFF, %xmm0
	psrlq %mm1, %mm0
	psrlq (%rax), %mm0
	psrlq %xmm1, %xmm0
	psrlq (%rbx), %xmm0
	psrlq $0xFF, %mm0
	psrlq $0xFF, %xmm0
	psraw %mm1, %mm0
	psraw (%rax), %mm0
	psraw %xmm1, %xmm0
	psraw (%rbx), %xmm0
	psraw $0xFF, %mm0
	psraw $0xFF, %xmm0
	psrad %mm1, %mm0
	psrad (%rax), %mm0
	psrad %xmm1, %xmm0
	psrad (%rbx), %xmm0
	psrad $0xFF, %mm0
	psrad $0xFF, %xmm0
	cmova %bx, %ax
	cmova (%rax), %ax
	cmova %ebx, %eax
	cmova (%rbx), %eax
	cmova %rbx, %rax
	cmova (%rcx), %rax
	cmovae %bx, %ax
	cmovae (%rax), %ax
	cmovae %ebx, %eax
	cmovae (%rbx), %eax
	cmovae %rbx, %rax
	cmovae (%rcx), %rax
	cmovb %bx, %ax
	cmovb (%rax), %ax
	cmovb %ebx, %eax
	cmovb (%rbx), %eax
	cmovb %rbx, %rax
	cmovb (%rcx), %rax
	cmovbe %bx, %ax
	cmovbe (%rax), %ax
	cmovbe %ebx, %eax
	cmovbe (%rbx), %eax
	cmovbe %rbx, %rax
	cmovbe (%rcx), %rax
	cmovc %bx, %ax
	cmovc (%rax), %ax
	cmovc %ebx, %eax
	cmovc (%rbx), %eax
	cmovc %rbx, %rax
	cmovc (%rcx), %rax
	cmove %bx, %ax
	cmove (%rax), %ax
	cmove %ebx, %eax
	cmove (%rbx), %eax
	cmove %rbx, %rax
	cmove (%rcx), %rax
	cmovg %bx, %ax
	cmovg (%rax), %ax
	cmovg %ebx, %eax
	cmovg (%rbx), %eax
	cmovg %rbx, %rax
	cmovg (%rcx), %rax
	cmovge %bx, %ax
	cmovge (%rax), %ax
	cmovge %ebx, %eax
	cmovge (%rbx), %eax
	cmovge %rbx, %rax
	cmovge (%rcx), %rax
	cmovl %bx, %ax
	cmovl (%rax), %ax
	cmovl %ebx, %eax
	cmovl (%rbx), %eax
	cmovl %rbx, %rax
	cmovl (%rcx), %rax
	cmovle %bx, %ax
	cmovle (%rax), %ax
	cmovle %ebx, %eax
	cmovle (%rbx), %eax
	cmovle %rbx, %rax
	cmovle (%rcx), %rax
	cmovna %bx, %ax
	cmovna (%rax), %ax
	cmovna %ebx, %eax
	cmovna (%rbx), %eax
	cmovna %rbx, %rax
	cmovna (%rcx), %rax
	cmovnae %bx, %ax
	cmovnae (%rax), %ax
	cmovnae %ebx, %eax
	cmovnae (%rbx), %eax
	cmovnae %rbx, %rax
	cmovnae (%rcx), %rax
	cmovnbe %bx, %ax
	cmovnbe (%rax), %ax
	cmovnbe %ebx, %eax
	cmovnbe (%rbx), %eax
	cmovnbe %rbx, %rax
	cmovnbe (%rcx), %rax
	cmovnc %bx, %ax
	cmovnc (%rax), %ax
	cmovnc %ebx, %eax
	cmovnc (%rbx), %eax
	cmovnc %rbx, %rax
	cmovnc (%rcx), %rax
	cmovne %bx, %ax
	cmovne (%rax), %ax
	cmovne %ebx, %eax
	cmovne (%rbx), %eax
	cmovne %rbx, %rax
	cmovne (%rcx), %rax
	cmovng %bx, %ax
	cmovng (%rax), %ax
	cmovng %ebx, %eax
	cmovng (%rbx), %eax
	cmovng %rbx, %rax
	cmovng (%rcx), %rax
	cmovnge %bx, %ax
	cmovnge (%rax), %ax
	cmovnge %ebx, %eax
	cmovnge (%rbx), %eax
	cmovnge %rbx, %rax
	cmovnge (%rcx), %rax
	cmovnl %bx, %ax
	cmovnl (%rax), %ax
	cmovnl %ebx, %eax
	cmovnl (%rbx), %eax
	cmovnl %rbx, %rax
	cmovnl (%rcx), %rax
	cmovnle %bx, %ax
	cmovnle (%rax), %ax
	cmovnle %ebx, %eax
	cmovnle (%rbx), %eax
	cmovnle %rbx, %rax
	cmovnle (%rcx), %rax
	cmovno %bx, %ax
	cmovno (%rax), %ax
	cmovno %ebx, %eax
	cmovno (%rbx), %eax
	cmovno %rbx, %rax
	cmovno (%rcx), %rax
	cmovnp %bx, %ax
	cmovnp (%rax), %ax
	cmovnp %ebx, %eax
	cmovnp (%rbx), %eax
	cmovnp %rbx, %rax
	cmovnp (%rcx), %rax
	cmovns %bx, %ax
	cmovns (%rax), %ax
	cmovns %ebx, %eax
	cmovns (%rbx), %eax
	cmovns %rbx, %rax
	cmovns (%rcx), %rax
	cmovnz %bx, %ax
	cmovnz (%rax), %ax
	cmovnz %ebx, %eax
	cmovnz (%rbx), %eax
	cmovnz %rbx, %rax
	cmovnz (%rcx), %rax
	cmovo %bx, %ax
	cmovo (%rax), %ax
	cmovo %ebx, %eax
	cmovo (%rbx), %eax
	cmovo %rbx, %rax
	cmovo (%rcx), %rax
	cmovp %bx, %ax
	cmovp (%rax), %ax
	cmovp %ebx, %eax
	cmovp (%rbx), %eax
	cmovp %rbx, %rax
	cmovp (%rcx), %rax
	cmovpe %bx, %ax
	cmovpe (%rax), %ax
	cmovpe %ebx, %eax
	cmovpe (%rbx), %eax
	cmovpe %rbx, %rax
	cmovpe (%rcx), %rax
	cmovpo %bx, %ax
	cmovpo (%rax), %ax
	cmovpo %ebx, %eax
	cmovpo (%rbx), %eax
	cmovpo %rbx, %rax
	cmovpo (%rcx), %rax
	cmovs %bx, %ax
	cmovs (%rax), %ax
	cmovs %ebx, %eax
	cmovs (%rbx), %eax
	cmovs %rbx, %rax
	cmovs (%rcx), %rax
	cmovz %bx, %ax
	cmovz (%rax), %ax
	cmovz %ebx, %eax
	cmovz (%rbx), %eax
	cmovz %rbx, %rax
	cmovz (%rcx), %rax
	bsf %bx, %ax
	bsf (%rax), %ax
	bsf %ebx, %eax
	bsf (%rbx), %eax
	bsf %rbx, %rax
	bsf (%rcx), %rax
	bsr %bx, %ax
	bsr (%rax), %ax
	bsr %ebx, %eax
	bsr (%rbx), %eax
	bsr %rbx, %rax
	bsr (%rcx), %rax
	popcnt %bx, %ax
	popcnt (%rax), %ax
	popcnt %ebx, %eax
	popcnt (%rbx), %eax
	popcnt %rbx, %rax
	popcnt (%rcx), %rax
	in $0x00, %al
	in $0x00, %ax
	in $0x00, %eax
	in %dx, %al
	in %dx, %ax
	in %dx, %eax
	out %al, $0x00
	out %ax, $0x00
	out %eax, $0x00
	out %al, %dx
	out %ax, %dx
	out %eax, %dx
	vmovaps %xmm1, %xmm0
	vmovaps (%rax), %xmm0
	vmovaps %xmm0, (%rax)
	vmovaps %ymm2, %ymm0
	vmovaps (%rbx), %ymm0
	vmovaps %ymm0, (%rbx)
	vmovapd %xmm1, %xmm0
	vmovapd (%rax), %xmm0
	vmovapd %xmm0, (%rax)
	vmovapd %ymm2, %ymm0
	vmovapd (%rbx), %ymm0
	vmovapd %ymm0, (%rbx)
	vmovdqa %xmm1, %xmm0
	vmovdqa (%rax), %xmm0
	vmovdqa %xmm0, (%rax)
	vmovdqa %ymm2, %ymm0
	vmovdqa (%rbx), %ymm0
	vmovdqa %ymm0, (%rbx)
	vmovups %xmm1, %xmm0
	vmovups (%rax), %xmm0
	vmovups %xmm0, (%rax)
	vmovups %ymm2, %ymm0
	vmovups (%rbx), %ymm0
	vmovups %ymm0, (%rbx)
	vmovupd %xmm1, %xmm0
	vmovupd (%rax), %xmm0
	vmovupd %xmm0, (%rax)
	vmovupd %ymm2, %ymm0
	vmovupd (%rbx), %ymm0
	vmovupd %ymm0, (%rbx)
	vmovdqu %xmm1, %xmm0
	vmovdqu (%rax), %xmm0
	vmovdqu %xmm0, (%rax)
	vmovdqu %ymm2, %ymm0
	vmovdqu (%rbx), %ymm0
	vmovdqu %ymm0, (%rbx)
gen_Instruction7_Type1_label:
	jmp gen_Instruction7_Type1_label
	jmp *%rax
	jmp *(%rax)
	jmp *(%rbx)
	jmp *(%rbx)
	call gen_Instruction7_Type1_label
	call *%rax
	call *(%rax)
	call *(%rbx)
	call *(%rbx)
	pop %ax
	popw (%rax)
	pop %rcx
	popq (%rcx)
	pop %fs
gen_Instruction7_Type3_label:
	ljmp *gen_Instruction7_Type3_label
	ljmp *(%rax)
	ljmp *(%rbx)
	ljmp *(%rbx)
	lcall *gen_Instruction7_Type3_label
	lcall *(%rax)
	lcall *(%rbx)
	lcall *(%rbx)
	movd %eax, %mm0
	movd (%edx), %mm0
	movd %mm0, %eax
	movd %mm0, (%edx)
	movd %eax, %xmm0
	movd (%edx), %xmm0
	movd %xmm0, %eax
	movd %xmm0, (%edx)
	movq %rax, %mm0
	movq (%rdx), %mm0
	movq %mm0, %rax
	movq %mm0, (%rdx)
	movq %rax, %xmm0
	movq (%rdx), %xmm0
	movq %xmm0, %rax
	movq %xmm0, (%rdx)
	mul %al
	mul %ax
	mul %eax
	mul %rax
	mulb (%rdx)
	mulw (%rdx)
	mull (%rdx)
	mulq (%rdx)
	imul %al
	imul %ax
	imul %eax
	imul %rax
	imulb (%rdx)
	imulw (%rdx)
	imull (%rdx)
	imulq (%rdx)
	div %al
	div %ax
	div %eax
	div %rax
	divb (%rdx)
	divw (%rdx)
	divl (%rdx)
	divq (%rdx)
	idiv %al
	idiv %ax
	idiv %eax
	idiv %rax
	idivb (%rdx)
	idivw (%rdx)
	idivl (%rdx)
	idivq (%rdx)
	neg %al
	neg %ax
	neg %eax
	neg %rax
	negb (%rdx)
	negw (%rdx)
	negl (%rdx)
	negq (%rdx)
	inc %al
	inc %ax
	inc %eax
	inc %rax
	incb (%rdx)
	incw (%rdx)
	incl (%rdx)
	incq (%rdx)
	dec %al
	dec %ax
	dec %eax
	dec %rax
	decb (%rdx)
	decw (%rdx)
	decl (%rdx)
	decq (%rdx)
	not %al
	not %ax
	not %eax
	not %rax
	notb (%rdx)
	notw (%rdx)
	notl (%rdx)
	notq (%rdx)
	xadd %bl, %al
	xadd %cl, (%rdx)
	xadd %bx, %ax
	xadd %cx, (%rdx)
	xadd %ebx, %eax
	xadd %ecx, (%rdx)
	xadd %rbx, %rax
	xadd %rcx, (%rdx)
	cmpxchg %bl, %al
	cmpxchg %cl, (%rdx)
	cmpxchg %bx, %ax
	cmpxchg %cx, (%rdx)
	cmpxchg %ebx, %eax
	cmpxchg %ecx, (%rdx)
	cmpxchg %rbx, %rax
	cmpxchg %rcx, (%rdx)
	vpermilpd %xmm2, %xmm1, %xmm0
	vpermilpd (%rdx), %xmm1, %xmm0
	vpermilpd %ymm2, %ymm1, %ymm0
	vpermilpd (%rdx), %ymm1, %ymm0
	vpermilpd $0xFF, %xmm1, %xmm0
	vpermilpd $0xFF, (%rdx), %xmm0
	vpermilpd $0xFF, %ymm1, %ymm0
	vpermilpd $0xFF, (%rdx), %ymm0
	vpermilps %xmm2, %xmm1, %xmm0
	vpermilps (%rdx), %xmm1, %xmm0
	vpermilps %ymm2, %ymm1, %ymm0
	vpermilps (%rdx), %ymm1, %ymm0
	vpermilps $0xFF, %xmm1, %xmm0
	vpermilps $0xFF, (%rdx), %xmm0
	vpermilps $0xFF, %ymm1, %ymm0
	vpermilps $0xFF, (%rdx), %ymm0
	push %ax
	push %rax
	pushw (%rdx)
	pushq (%rdx)
	push $0xAA
	push $0xAABB
	push %gs
	crc32 %al, %ecx
	crc32b (%rdx), %ecx
	crc32 %ax, %ecx
	crc32w (%rdx), %ecx
	crc32 %eax, %ecx
	crc32l (%rdx), %ecx
	crc32 %al, %rcx
	crc32b (%rdx), %rcx
	crc32 %rax, %rcx
	crc32q (%rdx), %rcx
	bt %bx, %ax
	bt %ax, (%rdx)
	bt %ebx, %eax
	bt %eax, (%rdx)
	bt %rbx, %rax
	bt %rax, (%rdx)
	bt $0x01, %ax
	bt $0x01, %eax
	bt $0x01, %rax
	btw $0x01, (%rdx)
	btl $0x01, (%rdx)
	btq $0x01, (%rdx)
	btc %bx, %ax
	btc %ax, (%rdx)
	btc %ebx, %eax
	btc %eax, (%rdx)
	btc %rbx, %rax
	btc %rax, (%rdx)
	btc $0x01, %ax
	btc $0x01, %eax
	btc $0x01, %rax
	btcw $0x01, (%rdx)
	btcl $0x01, (%rdx)
	btcq $0x01, (%rdx)
	btr %bx, %ax
	btr %ax, (%rdx)
	btr %ebx, %eax
	btr %eax, (%rdx)
	btr %rbx, %rax
	btr %rax, (%rdx)
	btr $0x01, %ax
	btr $0x01, %eax
	btr $0x01, %rax
	btrw $0x01, (%rdx)
	btrl $0x01, (%rdx)
	btrq $0x01, (%rdx)
	bts %bx, %ax
	bts %ax, (%rdx)
	bts %ebx, %eax
	bts %eax, (%rdx)
	bts %rbx, %rax
	bts %rax, (%rdx)
	bts $0x01, %ax
	bts $0x01, %eax
	bts $0x01, %rax
	btsw $0x01, (%rdx)
	btsl $0x01, (%rdx)
	btsq $0x01, (%rdx)
	xchg %bl, %al
	xchg %cl, (%rdx)
	xchg (%rdx), %cl
	xchg %bx, %ax
	xchg %cx, (%rdx)
	xchg (%rdx), %cx
	xchg %ebx, %eax
	xchg %ecx, (%rdx)
	xchg (%rdx), %ecx
	xchg %rbx, %rax
	xchg %rcx, (%rdx)
	xchg (%rdx), %rcx
	movsbw %bl, %ax
	movsbw (%rdx), %ax
	movsbl %bl, %eax
	movsbl (%rdx), %eax
	movsbq %bl, %rax
	movsbq (%rdx), %rax
	movswl %ax, %eax
	movswl (%rdx), %eax
	movswq %bx, %rax
	movswq (%rdx), %rax
	movzbw %bl, %ax
	movzbw (%rdx), %ax
	movzbl %bl, %eax
	movzbl (%rdx), %eax
	movzbq %bl, %rax
	movzbq (%rdx), %rax
	movzwl %ax, %eax
	movzwl (%rdx), %eax
	movzwq %bx, %rax
	movzwq (%rdx), %rax
	shld $0x01, %bx, %ax
	shld $0x01, %bx, (%rdx)
	shld %cl, %bx, %ax
	shld %cl, %bx, (%rdx)
	shld $0x01, %ebx, %eax
	shld $0x01, %ebx, (%rdx)
	shld $0x01, %rbx, %rax
	shld $0x01, %rbx, (%rdx)
	shld %cl, %ebx, %eax
	shld %cl, %ebx, (%rdx)
	shld %cl, %rbx, %rax
	shld %cl, %rbx, (%rdx)
	shrd $0x01, %bx, %ax
	shrd $0x01, %bx, (%rdx)
	shrd %cl, %bx, %ax
	shrd %cl, %bx, (%rdx)
	shrd $0x01, %ebx, %eax
	shrd $0x01, %ebx, (%rdx)
	shrd $0x01, %rbx, %rax
	shrd $0x01, %rbx, (%rdx)
	shrd %cl, %ebx, %eax
	shrd %cl, %ebx, (%rdx)
	shrd %cl, %rbx, %rax
	shrd %cl, %rbx, (%rdx)
	test $0xAA, %al
	testb $0xAA, (%rdx)
	test $0xAABB, %ax
	testw $0xAABB, (%rdx)
	test $0xAABBCCDD, %eax
	testl $0xAABBCCDD, (%rdx)
	test %ah, %al
	test %al, (%rdx)
	test %bx, %ax
	test %ax, (%rdx)
	test %ebx, %eax
	test %eax, (%rdx)
	test %rbx, %rax
	test %rax, (%rdx)
	sal $0x01, %al
	salb $0x01, (%rdx)
	sal %cl, %al
	salb %cl, (%rdx)
	sal $0x01, %ax
	salw $0x01, (%rdx)
	sal %cl, %ax
	salw %cl, (%rdx)
	sal $0x01, %eax
	sall $0x01, (%rdx)
	sal %cl, %eax
	sall %cl, (%rdx)
	sal $0x01, %rax
	salq $0x01, (%rdx)
	sal %cl, %rax
	salq %cl, (%rdx)
	sar $0x01, %al
	sarb $0x01, (%rdx)
	sar %cl, %al
	sarb %cl, (%rdx)
	sar $0x01, %ax
	sarw $0x01, (%rdx)
	sar %cl, %ax
	sarw %cl, (%rdx)
	sar $0x01, %eax
	sarl $0x01, (%rdx)
	sar %cl, %eax
	sarl %cl, (%rdx)
	sar $0x01, %rax
	sarq $0x01, (%rdx)
	sar %cl, %rax
	sarq %cl, (%rdx)
	shl $0x01, %al
	shlb $0x01, (%rdx)
	shl %cl, %al
	shlb %cl, (%rdx)
	shl $0x01, %ax
	shlw $0x01, (%rdx)
	shl %cl, %ax
	shlw %cl, (%rdx)
	shl $0x01, %eax
	shll $0x01, (%rdx)
	shl %cl, %eax
	shll %cl, (%rdx)
	shl $0x01, %rax
	shlq $0x01, (%rdx)
	shl %cl, %rax
	shlq %cl, (%rdx)
	shr $0x01, %al
	shrb $0x01, (%rdx)
	shr %cl, %al
	shrb %cl, (%rdx)
	shr $0x01, %ax
	shrw $0x01, (%rdx)
	shr %cl, %ax
	shrw %cl, (%rdx)
	shr $0x01, %eax
	shrl $0x01, (%rdx)
	shr %cl, %eax
	shrl %cl, (%rdx)
	shr $0x01, %rax
	shrq $0x01, (%rdx)
	shr %cl, %rax
	shrq %cl, (%rdx)
	rcl $0x01, %al
	rclb $0x01, (%rdx)
	rcl %cl, %al
	rclb %cl, (%rdx)
	rcl $0x01, %ax
	rclw $0x01, (%rdx)
	rcl %cl, %ax
	rclw %cl, (%rdx)
	rcl $0x01, %eax
	rcll $0x01, (%rdx)
	rcl %cl, %eax
	rcll %cl, (%rdx)
	rcl $0x01, %rax
	rclq $0x01, (%rdx)
	rcl %cl, %rax
	rclq %cl, (%rdx)
	rcr $0x01, %al
	rcrb $0x01, (%rdx)
	rcr %cl, %al
	rcrb %cl, (%rdx)
	rcr $0x01, %ax
	rcrw $0x01, (%rdx)
	rcr %cl, %ax
	rcrw %cl, (%rdx)
	rcr $0x01, %eax
	rcrl $0x01, (%rdx)
	rcr %cl, %eax
	rcrl %cl, (%rdx)
	rcr $0x01, %rax
	rcrq $0x01, (%rdx)
	rcr %cl, %rax
	rcrq %cl, (%rdx)
	rol $0x01, %al
	rolb $0x01, (%rdx)
	rol %cl, %al
	rolb %cl, (%rdx)
	rol $0x01, %ax
	rolw $0x01, (%rdx)
	rol %cl, %ax
	rolw %cl, (%rdx)
	rol $0x01, %eax
	roll $0x01, (%rdx)
	rol %cl, %eax
	roll %cl, (%rdx)
	rol $0x01, %rax
	rolq $0x01, (%rdx)
	rol %cl, %rax
	rolq %cl, (%rdx)
	ror $0x01, %al
	rorb $0x01, (%rdx)
	ror %cl, %al
	rorb %cl, (%rdx)
	ror $0x01, %ax
	rorw $0x01, (%rdx)
	ror %cl, %ax
	rorw %cl, (%rdx)
	ror $0x01, %eax
	rorl $0x01, (%rdx)
	ror %cl, %eax
	rorl %cl, (%rdx)
	ror $0x01, %rax
	rorq $0x01, (%rdx)
	ror %cl, %rax
	rorq %cl, (%rdx)
	add $0x01, %al
	addb $0x01, (%rdx)
	add $0x0002, %ax
	addw $0x0002, (%rdx)
	add $0x00000003, %eax
	addl $0x00000003, (%rdx)
	add $0x00000003, %rax
	addq $0x00000003, (%rdx)
	add $0x01, %ax
	addw $0x01, (%rdx)
	add $0x01, %eax
	addl $0x01, (%rdx)
	add $0x01, %rax
	addq $0x01, (%rdx)
	add %bl, %al
	add %bl, (%rdx)
	add %bx, %ax
	add %bx, (%rdx)
	add %ebx, %eax
	add %ebx, (%rdx)
	add %rcx, %rax
	add %rcx, (%rdx)
	add (%rdx), %al
	add (%rdx), %ax
	add (%rdx), %eax
	add (%rdx), %rax
	adc $0x01, %al
	adcb $0x01, (%rdx)
	adc $0x0002, %ax
	adcw $0x0002, (%rdx)
	adc $0x00000003, %eax
	adcl $0x00000003, (%rdx)
	adc $0x00000003, %rax
	adcq $0x00000003, (%rdx)
	adc $0x01, %ax
	adcw $0x01, (%rdx)
	adc $0x01, %eax
	adcl $0x01, (%rdx)
	adc $0x01, %rax
	adcq $0x01, (%rdx)
	adc %bl, %al
	adc %bl, (%rdx)
	adc %bx, %ax
	adc %bx, (%rdx)
	adc %ebx, %eax
	adc %ebx, (%rdx)
	adc %rcx, %rax
	adc %rcx, (%rdx)
	adc (%rdx), %al
	adc (%rdx), %ax
	adc (%rdx), %eax
	adc (%rdx), %rax
	sub $0x01, %al
	subb $0x01, (%rdx)
	sub $0x0002, %ax
	subw $0x0002, (%rdx)
	sub $0x00000003, %eax
	subl $0x00000003, (%rdx)
	sub $0x00000003, %rax
	subq $0x00000003, (%rdx)
	sub $0x01, %ax
	subw $0x01, (%rdx)
	sub $0x01, %eax
	subl $0x01, (%rdx)
	sub $0x01, %rax
	subq $0x01, (%rdx)
	sub %bl, %al
	sub %bl, (%rdx)
	sub %bx, %ax
	sub %bx, (%rdx)
	sub %ebx, %eax
	sub %ebx, (%rdx)
	sub %rcx, %rax
	sub %rcx, (%rdx)
	sub (%rdx), %al
	sub (%rdx), %ax
	sub (%rdx), %eax
	sub (%rdx), %rax
	sbb $0x01, %al
	sbbb $0x01, (%rdx)
	sbb $0x0002, %ax
	sbbw $0x0002, (%rdx)
	sbb $0x00000003, %eax
	sbbl $0x00000003, (%rdx)
	sbb $0x00000003, %rax
	sbbq $0x00000003, (%rdx)
	sbb $0x01, %ax
	sbbw $0x01, (%rdx)
	sbb $0x01, %eax
	sbbl $0x01, (%rdx)
	sbb $0x01, %rax
	sbbq $0x01, (%rdx)
	sbb %bl, %al
	sbb %bl, (%rdx)
	sbb %bx, %ax
	sbb %bx, (%rdx)
	sbb %ebx, %eax
	sbb %ebx, (%rdx)
	sbb %rcx, %rax
	sbb %rcx, (%rdx)
	sbb (%rdx), %al
	sbb (%rdx), %ax
	sbb (%rdx), %eax
	sbb (%rdx), %rax
	cmp $0x01, %al
	cmpb $0x01, (%rdx)
	cmp $0x0002, %ax
	cmpw $0x0002, (%rdx)
	cmp $0x00000003, %eax
	cmpl $0x00000003, (%rdx)
	cmp $0x00000003, %rax
	cmpq $0x00000003, (%rdx)
	cmp $0x01, %ax
	cmpw $0x01, (%rdx)
	cmp $0x01, %eax
	cmpl $0x01, (%rdx)
	cmp $0x01, %rax
	cmpq $0x01, (%rdx)
	cmp %bl, %al
	cmp %bl, (%rdx)
	cmp %bx, %ax
	cmp %bx, (%rdx)
	cmp %ebx, %eax
	cmp %ebx, (%rdx)
	cmp %rcx, %rax
	cmp %rcx, (%rdx)
	cmp (%rdx), %al
	cmp (%rdx), %ax
	cmp (%rdx), %eax
	cmp (%rdx), %rax
	and $0x01, %al
	andb $0x01, (%rdx)
	and $0x0002, %ax
	andw $0x0002, (%rdx)
	and $0x00000003, %eax
	andl $0x00000003, (%rdx)
	and $0x00000003, %rax
	andq $0x00000003, (%rdx)
	and $0x01, %ax
	andw $0x01, (%rdx)
	and $0x01, %eax
	andl $0x01, (%rdx)
	and $0x01, %rax
	andq $0x01, (%rdx)
	and %bl, %al
	and %bl, (%rdx)
	and %bx, %ax
	and %bx, (%rdx)
	and %ebx, %eax
	and %ebx, (%rdx)
	and %rcx, %rax
	and %rcx, (%rdx)
	and (%rdx), %al
	and (%rdx), %ax
	and (%rdx), %eax
	and (%rdx), %rax
	or $0x01, %al
	orb $0x01, (%rdx)
	or $0x0002, %ax
	orw $0x0002, (%rdx)
	or $0x00000003, %eax
	orl $0x00000003, (%rdx)
	or $0x00000003, %rax
	orq $0x00000003, (%rdx)
	or $0x01, %ax
	orw $0x01, (%rdx)
	or $0x01, %eax
	orl $0x01, (%rdx)
	or $0x01, %rax
	orq $0x01, (%rdx)
	or %bl, %al
	or %bl, (%rdx)
	or %bx, %ax
	or %bx, (%rdx)
	or %ebx, %eax
	or %ebx, (%rdx)
	or %rcx, %rax
	or %rcx, (%rdx)
	or (%rdx), %al
	or (%rdx), %ax
	or (%rdx), %eax
	or (%rdx), %rax
	xor $0x01, %al
	xorb $0x01, (%rdx)
	xor $0x0002, %ax
	xorw $0x0002, (%rdx)
	xor $0x00000003, %eax
	xorl $0x00000003, (%rdx)
	xor $0x00000003, %rax
	xorq $0x00000003, (%rdx)
	xor $0x01, %ax
	xorw $0x01, (%rdx)
	xor $0x01, %eax
	xorl $0x01, (%rdx)
	xor $0x01, %rax
	xorq $0x01, (%rdx)
	xor %bl, %al
	xor %bl, (%rdx)
	xor %bx, %ax
	xor %bx, (%rdx)
	xor %ebx, %eax
	xor %ebx, (%rdx)
	xor %rcx, %rax
	xor %rcx, (%rdx)
	xor (%rdx), %al
	xor (%rdx), %ax
	xor (%rdx), %eax
	xor (%rdx), %rax
	mov %cl, %al
	mov %cl, (%rdx)
	mov %cx, %ax
	mov %cx, (%rdx)
	mov %ecx, %eax
	mov %ecx, (%rdx)
	mov %rcx, %rax
	mov %rcx, (%rdx)
	mov (%rdx), %al
	mov (%rdx), %ax
	mov (%rdx), %eax
	mov (%rdx), %rax
	mov %ds, %ax
	mov %ds, (%rdx)
	mov %ds, %rax
	mov %ds, (%rdx)
	mov %cx, %ds
	mov (%rdx), %ds
	mov %rcx, %ds
	mov (%rdx), %ds
	mov $0x42, %al
	mov $0x4242, %ax
	mov $0x42424242, %eax
	mov $0x4242424242424242, %rax
	movb $0x42, (%rdx)
	movw $0x4242, (%rdx)
	movl $0x42424242, (%rdx)
	movq $0x42424242, (%rdx)
	mov %cr0, %rax
	mov %rcx, %cr0
	mov %dr0, %rax
	mov %rcx, %dr0
