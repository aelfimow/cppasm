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
	getsec
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
	fstcw (%eax)
	fnstcw (%eax)
	fldcw (%eax)
	cmpxchg8b (%eax)
	enter $0xFFFF, $0xFF
	int $0xFF
	xabort $0xFF
	rep stosb
	repe stosb
	repz stosb
	repne stosb
	repnz stosb
	xrelease xchg (%ebx), %eax
	xacquire xchg (%ebx), %eax
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
	movntdqa (%eax), %xmm0
	vbroadcastf32x8 (%ebx), %zmm0
	vbroadcastf32x8 (%ebx), %zmm0{%k1}
	vbroadcastf32x8 (%ebx), %zmm0{%k1}{z}
	vbroadcasti32x8 (%ebx), %zmm0
	vbroadcasti32x8 (%ebx), %zmm0{%k1}
	vbroadcasti32x8 (%ebx), %zmm0{%k1}{z}
	vbroadcastf64x4 (%ebx), %zmm0
	vbroadcastf64x4 (%ebx), %zmm0{%k1}
	vbroadcastf64x4 (%ebx), %zmm0{%k1}{z}
	vbroadcasti64x4 (%ebx), %zmm0
	vbroadcasti64x4 (%ebx), %zmm0{%k1}
	vbroadcasti64x4 (%ebx), %zmm0{%k1}{z}
	vbroadcastf128 (%eax), %ymm0
	vbroadcasti128 (%eax), %ymm0
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
	aad
	aad $0x00
	aam
	aam $0x00
	ret
	ret $0xFFFF
	lret
	lret $0xFFFF
	rdfsbase %eax
	rdgsbase %eax
	wrfsbase %eax
	wrgsbase %eax
	bswap %eax
	movmskps %xmm0, %eax
	movmskpd %xmm0, %eax
	fxch
	fxch %st(1)
	fucom
	fucom %st(1)
	fucomp
	fucomp %st(1)
	fstsw %ax
	fstsw (%eax)
	fnstsw %ax
	fnstsw (%eax)
	lldt %ax
	lldt (%eax)
	lmsw %ax
	lmsw (%eax)
	verr %ax
	verr (%eax)
	verw %ax
	verw (%eax)
	ltr %ax
	ltr (%eax)
	seta %al
	seta (%eax)
	setae %al
	setae (%eax)
	setb %al
	setb (%eax)
	setbe %al
	setbe (%eax)
	setc %al
	setc (%eax)
	sete %al
	sete (%eax)
	setg %al
	setg (%eax)
	setge %al
	setge (%eax)
	setl %al
	setl (%eax)
	setle %al
	setle (%eax)
	setna %al
	setna (%eax)
	setnae %al
	setnae (%eax)
	setnb %al
	setnb (%eax)
	setnbe %al
	setnbe (%eax)
	setnc %al
	setnc (%eax)
	setne %al
	setne (%eax)
	setng %al
	setng (%eax)
	setnge %al
	setnge (%eax)
	setnl %al
	setnl (%eax)
	setle %al
	setle (%eax)
	setno %al
	setno (%eax)
	setnp %al
	setnp (%eax)
	setns %al
	setns (%eax)
	setnz %al
	setnz (%eax)
	seto %al
	seto (%eax)
	setp %al
	setp (%eax)
	setpe %al
	setpe (%eax)
	setpo %al
	setpo (%eax)
	sets %al
	sets (%eax)
	setz %al
	setz (%eax)
	bound %bx, (%eax)
	bound %ebx, (%eax)
	movhps (%eax), %xmm0
	movhps %xmm0, (%eax)
	movlps (%eax), %xmm0
	movlps %xmm0, (%eax)
	addps %xmm1, %xmm0
	addps (%eax), %xmm0
	subps %xmm1, %xmm0
	subps (%eax), %xmm0
	mulps %xmm1, %xmm0
	mulps (%eax), %xmm0
	divps %xmm1, %xmm0
	divps (%eax), %xmm0
	rcpps %xmm1, %xmm0
	rcpps (%eax), %xmm0
	sqrtps %xmm1, %xmm0
	sqrtps (%eax), %xmm0
	maxps %xmm1, %xmm0
	maxps (%eax), %xmm0
	minps %xmm1, %xmm0
	minps (%eax), %xmm0
	andps %xmm1, %xmm0
	andps (%eax), %xmm0
	andnps %xmm1, %xmm0
	andnps (%eax), %xmm0
	orps %xmm1, %xmm0
	orps (%eax), %xmm0
	xorps %xmm1, %xmm0
	xorps (%eax), %xmm0
	unpckhps %xmm1, %xmm0
	unpckhps (%eax), %xmm0
	unpcklps %xmm1, %xmm0
	unpcklps (%eax), %xmm0
	addpd %xmm1, %xmm0
	addpd (%eax), %xmm0
	subpd %xmm1, %xmm0
	subpd (%eax), %xmm0
	mulpd %xmm1, %xmm0
	mulpd (%eax), %xmm0
	divpd %xmm1, %xmm0
	divpd (%eax), %xmm0
	sqrtpd %xmm1, %xmm0
	sqrtpd (%eax), %xmm0
	maxpd %xmm1, %xmm0
	maxpd (%eax), %xmm0
	minpd %xmm1, %xmm0
	minpd (%eax), %xmm0
	andpd %xmm1, %xmm0
	andpd (%eax), %xmm0
	andnpd %xmm1, %xmm0
	andnpd (%eax), %xmm0
	orpd %xmm1, %xmm0
	orpd (%eax), %xmm0
	xorpd %xmm1, %xmm0
	xorpd (%eax), %xmm0
	unpckhpd %xmm1, %xmm0
	unpckhpd (%eax), %xmm0
	unpcklpd %xmm1, %xmm0
	unpcklpd (%eax), %xmm0
	cvtpd2dq %xmm1, %xmm0
	cvtpd2dq (%eax), %xmm0
	cvttpd2dq %xmm1, %xmm0
	cvttpd2dq (%eax), %xmm0
	cvtpd2ps %xmm1, %xmm0
	cvtpd2ps (%eax), %xmm0
	cvtdq2ps %xmm1, %xmm0
	cvtdq2ps (%eax), %xmm0
	cvtps2dq %xmm1, %xmm0
	cvtps2dq (%eax), %xmm0
	cvttps2dq %xmm1, %xmm0
	cvttps2dq (%eax), %xmm0
	punpckhqdq %xmm1, %xmm0
	punpckhqdq (%eax), %xmm0
	punpcklqdq %xmm1, %xmm0
	punpcklqdq (%eax), %xmm0
	addsubps %xmm1, %xmm0
	addsubps (%eax), %xmm0
	addsubpd %xmm1, %xmm0
	addsubpd (%eax), %xmm0
	haddps %xmm1, %xmm0
	haddps (%eax), %xmm0
	hsubps %xmm1, %xmm0
	hsubps (%eax), %xmm0
	haddpd %xmm1, %xmm0
	haddpd (%eax), %xmm0
	hsubpd %xmm1, %xmm0
	hsubpd (%eax), %xmm0
	movshdup %xmm1, %xmm0
	movshdup (%eax), %xmm0
	movsldup %xmm1, %xmm0
	movsldup (%eax), %xmm0
	pmulld %xmm1, %xmm0
	pmulld (%eax), %xmm0
	pmuldq %xmm1, %xmm0
	pmuldq (%eax), %xmm0
	pminuw %xmm1, %xmm0
	pminuw (%eax), %xmm0
	pminud %xmm1, %xmm0
	pminud (%eax), %xmm0
	pminsb %xmm1, %xmm0
	pminsb (%eax), %xmm0
	pminsd %xmm1, %xmm0
	pminsd (%eax), %xmm0
	pmaxuw %xmm1, %xmm0
	pmaxuw (%eax), %xmm0
	pmaxud %xmm1, %xmm0
	pmaxud (%eax), %xmm0
	pmaxsb %xmm1, %xmm0
	pmaxsb (%eax), %xmm0
	pmaxsd %xmm1, %xmm0
	pmaxsd (%eax), %xmm0
	pcmpgtq %xmm1, %xmm0
	pcmpgtq (%eax), %xmm0
	aesdec %xmm1, %xmm0
	aesdec (%eax), %xmm0
	aesdeclast %xmm1, %xmm0
	aesdeclast (%eax), %xmm0
	aesenc %xmm1, %xmm0
	aesenc (%eax), %xmm0
	aesenclast %xmm1, %xmm0
	aesenclast (%eax), %xmm0
	aesimc %xmm1, %xmm0
	aesimc (%eax), %xmm0
	phminposuw %xmm1, %xmm0
	phminposuw (%eax), %xmm0
	ptest %xmm1, %xmm0
	ptest (%eax), %xmm0
	pcmpeqq %xmm1, %xmm0
	pcmpeqq (%eax), %xmm0
	packusdw %xmm1, %xmm0
	packusdw (%eax), %xmm0
	rsqrtps %xmm1, %xmm0
	rsqrtps (%eax), %xmm0
	sha1msg1 %xmm1, %xmm0
	sha1msg1 (%eax), %xmm0
	sha1msg2 %xmm1, %xmm0
	sha1msg2 (%eax), %xmm0
	sha1nexte %xmm1, %xmm0
	sha1nexte (%eax), %xmm0
	sha256msg1 %xmm1, %xmm0
	sha256msg1 (%eax), %xmm0
	sha256msg2 %xmm1, %xmm0
	sha256msg2 (%eax), %xmm0
	addss %xmm1, %xmm0
	addss (%eax), %xmm0
	subss %xmm1, %xmm0
	subss (%eax), %xmm0
	mulss %xmm1, %xmm0
	mulss (%eax), %xmm0
	divss %xmm1, %xmm0
	divss (%eax), %xmm0
	rcpss %xmm1, %xmm0
	rcpss (%eax), %xmm0
	sqrtss %xmm1, %xmm0
	sqrtss (%eax), %xmm0
	maxss %xmm1, %xmm0
	maxss (%eax), %xmm0
	minss %xmm1, %xmm0
	minss (%eax), %xmm0
	comiss %xmm1, %xmm0
	comiss (%eax), %xmm0
	ucomiss %xmm1, %xmm0
	ucomiss (%eax), %xmm0
	cvtss2sd %xmm1, %xmm0
	cvtss2sd (%eax), %xmm0
	pmovsxbd %xmm1, %xmm0
	pmovsxbd (%eax), %xmm0
	pmovsxwq %xmm1, %xmm0
	pmovsxwq (%eax), %xmm0
	pmovzxbd %xmm1, %xmm0
	pmovzxbd (%eax), %xmm0
	pmovzxwq %xmm1, %xmm0
	pmovzxwq (%eax), %xmm0
	rsqrtss %xmm1, %xmm0
	rsqrtss (%eax), %xmm0
	cmpps $0xFF, %xmm1, %xmm0
	cmpps $0xFF, (%eax), %xmm0
	shufps $0xFF, %xmm1, %xmm0
	shufps $0xFF, (%eax), %xmm0
	cmppd $0xFF, %xmm1, %xmm0
	cmppd $0xFF, (%eax), %xmm0
	shufpd $0xFF, %xmm1, %xmm0
	shufpd $0xFF, (%eax), %xmm0
	pshuflw $0xFF, %xmm1, %xmm0
	pshuflw $0xFF, (%eax), %xmm0
	pshufhw $0xFF, %xmm1, %xmm0
	pshufhw $0xFF, (%eax), %xmm0
	pshufd $0xFF, %xmm1, %xmm0
	pshufd $0xFF, (%eax), %xmm0
	dppd $0xFF, %xmm1, %xmm0
	dppd $0xFF, (%eax), %xmm0
	dpps $0xFF, %xmm1, %xmm0
	dpps $0xFF, (%eax), %xmm0
	blendpd $0xFF, %xmm1, %xmm0
	blendpd $0xFF, (%eax), %xmm0
	blendps $0xFF, %xmm1, %xmm0
	blendps $0xFF, (%eax), %xmm0
	pblendw $0xFF, %xmm1, %xmm0
	pblendw $0xFF, (%eax), %xmm0
	roundps $0xFF, %xmm1, %xmm0
	roundps $0xFF, (%eax), %xmm0
	roundpd $0xFF, %xmm1, %xmm0
	roundpd $0xFF, (%eax), %xmm0
	mpsadbw $0xFF, %xmm1, %xmm0
	mpsadbw $0xFF, (%eax), %xmm0
	pcmpestri $0xFF, %xmm1, %xmm0
	pcmpestri $0xFF, (%eax), %xmm0
	pcmpestrm $0xFF, %xmm1, %xmm0
	pcmpestrm $0xFF, (%eax), %xmm0
	pcmpistri $0xFF, %xmm1, %xmm0
	pcmpistri $0xFF, (%eax), %xmm0
	pcmpistrm $0xFF, %xmm1, %xmm0
	pcmpistrm $0xFF, (%eax), %xmm0
	aeskeygenassist $0xFF, %xmm1, %xmm0
	aeskeygenassist $0xFF, (%eax), %xmm0
	pclmulqdq $0xFF, %xmm1, %xmm0
	pclmulqdq $0xFF, (%eax), %xmm0
	sha1rnds4 $0xFF, %xmm1, %xmm0
	sha1rnds4 $0xFF, (%eax), %xmm0
	cmpss $0xFF, %xmm1, %xmm0
	cmpss $0xFF, (%eax), %xmm0
	roundss $0xFF, %xmm1, %xmm0
	roundss $0xFF, (%eax), %xmm0
	insertps $0xFF, %xmm1, %xmm0
	insertps $0xFF, (%eax), %xmm0
	addsd %xmm1, %xmm0
	addsd (%eax), %xmm0
	subsd %xmm1, %xmm0
	subsd (%eax), %xmm0
	mulsd %xmm1, %xmm0
	mulsd (%eax), %xmm0
	divsd %xmm1, %xmm0
	divsd (%eax), %xmm0
	sqrtsd %xmm1, %xmm0
	sqrtsd (%eax), %xmm0
	maxsd %xmm1, %xmm0
	maxsd (%eax), %xmm0
	minsd %xmm1, %xmm0
	minsd (%eax), %xmm0
	comisd %xmm1, %xmm0
	comisd (%eax), %xmm0
	ucomisd %xmm1, %xmm0
	ucomisd (%eax), %xmm0
	cvtdq2pd %xmm1, %xmm0
	cvtdq2pd (%eax), %xmm0
	cvtps2pd %xmm1, %xmm0
	cvtps2pd (%eax), %xmm0
	cvtsd2ss %xmm1, %xmm0
	cvtsd2ss (%eax), %xmm0
	movddup %xmm1, %xmm0
	movddup (%eax), %xmm0
	pmovsxbw %xmm1, %xmm0
	pmovsxbw (%eax), %xmm0
	pmovsxwd %xmm1, %xmm0
	pmovsxwd (%eax), %xmm0
	pmovsxdq %xmm1, %xmm0
	pmovsxdq (%eax), %xmm0
	pmovzxbw %xmm1, %xmm0
	pmovzxbw (%eax), %xmm0
	pmovzxwd %xmm1, %xmm0
	pmovzxwd (%eax), %xmm0
	pmovzxdq %xmm1, %xmm0
	pmovzxdq (%eax), %xmm0
	cmpsd $0xFF, %xmm1, %xmm0
	cmpsd $0xFF, (%eax), %xmm0
	roundsd $0xFF, %xmm1, %xmm0
	roundsd $0xFF, (%eax), %xmm0
	fist (%eax)
	fistl (%ebx)
	fiadd (%eax)
	fiaddl (%ebx)
	fisub (%eax)
	fisubl (%ebx)
	fisubr (%eax)
	fisubrl (%ebx)
	fimul (%eax)
	fimull (%ebx)
	fidiv (%eax)
	fidivl (%ebx)
	fidivr (%eax)
	fidivrl (%ebx)
	ficom (%eax)
	ficoml (%ebx)
	ficomp (%eax)
	ficompl (%ebx)
	cvtpi2ps %mm0, %xmm0
	cvtpi2ps (%eax), %xmm0
	cvtpi2pd %mm0, %xmm0
	cvtpi2pd (%eax), %xmm0
	cvtps2pi %xmm0, %mm0
	cvtps2pi (%eax), %mm0
	cvttps2pi %xmm0, %mm0
	cvttps2pi (%eax), %mm0
	cvtpd2pi %xmm0, %mm0
	cvtpd2pi (%eax), %mm0
	cvttpd2pi %xmm0, %mm0
	cvttpd2pi (%eax), %mm0
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
	pshufw $0xFF, (%eax), %mm0
	movnti %ecx, (%eax)
	pinsrb $0xFF, %eax, %xmm0
	pinsrb $0xFF, (%eax), %xmm0
	pinsrd $0xFF, %eax, %xmm0
	pinsrd $0xFF, (%ebx), %xmm0
	pmovsxbq %xmm1, %xmm0
	pmovsxbq (%eax), %xmm0
	pmovzxbq %xmm1, %xmm0
	pmovzxbq (%eax), %xmm0
	vfmadd132sd %xmm2, %xmm1, %xmm0
	vfmadd132sd (%eax), %xmm1, %xmm0
	vfmadd213sd %xmm2, %xmm1, %xmm0
	vfmadd213sd (%eax), %xmm1, %xmm0
	vfmadd231sd %xmm2, %xmm1, %xmm0
	vfmadd231sd (%eax), %xmm1, %xmm0
	vfmsub132sd %xmm2, %xmm1, %xmm0
	vfmsub132sd (%eax), %xmm1, %xmm0
	vfmsub213sd %xmm2, %xmm1, %xmm0
	vfmsub213sd (%eax), %xmm1, %xmm0
	vfmsub231sd %xmm2, %xmm1, %xmm0
	vfmsub231sd (%eax), %xmm1, %xmm0
	vfnmadd132sd %xmm2, %xmm1, %xmm0
	vfnmadd132sd (%eax), %xmm1, %xmm0
	vfnmadd213sd %xmm2, %xmm1, %xmm0
	vfnmadd213sd (%eax), %xmm1, %xmm0
	vfnmadd231sd %xmm2, %xmm1, %xmm0
	vfnmadd231sd (%eax), %xmm1, %xmm0
	vfnmsub132sd %xmm2, %xmm1, %xmm0
	vfnmsub132sd (%eax), %xmm1, %xmm0
	vfnmsub213sd %xmm2, %xmm1, %xmm0
	vfnmsub213sd (%eax), %xmm1, %xmm0
	vfnmsub231sd %xmm2, %xmm1, %xmm0
	vfnmsub231sd (%eax), %xmm1, %xmm0
	vfmadd132ss %xmm2, %xmm1, %xmm0
	vfmadd132ss (%eax), %xmm1, %xmm0
	vfmadd213ss %xmm2, %xmm1, %xmm0
	vfmadd213ss (%eax), %xmm1, %xmm0
	vfmadd231ss %xmm2, %xmm1, %xmm0
	vfmadd231ss (%eax), %xmm1, %xmm0
	vfmsub132ss %xmm2, %xmm1, %xmm0
	vfmsub132ss (%eax), %xmm1, %xmm0
	vfmsub213ss %xmm2, %xmm1, %xmm0
	vfmsub213ss (%eax), %xmm1, %xmm0
	vfmsub231ss %xmm2, %xmm1, %xmm0
	vfmsub231ss (%eax), %xmm1, %xmm0
	vfnmadd132ss %xmm2, %xmm1, %xmm0
	vfnmadd132ss (%eax), %xmm1, %xmm0
	vfnmadd213ss %xmm2, %xmm1, %xmm0
	vfnmadd213ss (%eax), %xmm1, %xmm0
	vfnmadd231ss %xmm2, %xmm1, %xmm0
	vfnmadd231ss (%eax), %xmm1, %xmm0
	vfnmsub132ss %xmm2, %xmm1, %xmm0
	vfnmsub132ss (%eax), %xmm1, %xmm0
	vfnmsub213ss %xmm2, %xmm1, %xmm0
	vfnmsub213ss (%eax), %xmm1, %xmm0
	vfnmsub231ss %xmm2, %xmm1, %xmm0
	vfnmsub231ss (%eax), %xmm1, %xmm0
	vrsqrtss %xmm2, %xmm1, %xmm0
	vrsqrtss (%eax), %xmm1, %xmm0
	vdppd $0xFF, %xmm2, %xmm1, %xmm0
	vdppd $0xFF, (%eax), %xmm1, %xmm0
	vlddqu (%eax), %xmm0
	vlddqu (%ebx), %ymm0
	vmovntdqa (%eax), %xmm0
	vmovntdqa (%ebx), %ymm0
	vmovntps %xmm0, (%eax)
	vmovntps %ymm0, (%ebx)
	vmovntdq %xmm0, (%eax)
	vmovntdq %ymm0, (%ebx)
	vextractf128 $0xFF, %ymm0, %xmm0
	vextractf128 $0xFF, %ymm0, (%eax)
	vinsertf128 $0xFF, %xmm0, %ymm1, %ymm0
	vinsertf128 $0xFF, (%eax), %ymm1, %ymm0
	vperm2f128 $0xFF, %ymm2, %ymm1, %ymm0
	vperm2f128 $0xFF, (%eax), %ymm1, %ymm0
	pextrd $0xFF, %xmm0, %eax
	pextrd $0xFF, %xmm0, (%eax)
	sha256rnds2 %xmm0, %xmm1, %xmm2
	sha256rnds2 %xmm0, (%edx), %xmm1
	invept (%ebx), %eax
	invvpid (%ebx), %eax
	vmclear (%ebx)
	vmptrld (%ebx)
	vmptrst (%ebx)
	vbroadcastf32x4 (%ebx), %ymm0
	vbroadcastf32x4 (%ebx), %zmm0
	vbroadcastf32x4 (%ebx), %ymm0{%k1}
	vbroadcastf32x4 (%ebx), %zmm0{%k1}
	vbroadcastf32x4 (%ebx), %ymm0{%k1}{z}
	vbroadcastf32x4 (%ebx), %zmm0{%k1}{z}
	vbroadcastf64x2 (%ebx), %ymm0
	vbroadcastf64x2 (%ebx), %zmm0
	vbroadcastf64x2 (%ebx), %ymm0{%k1}
	vbroadcastf64x2 (%ebx), %zmm0{%k1}
	vbroadcastf64x2 (%ebx), %ymm0{%k1}{z}
	vbroadcastf64x2 (%ebx), %zmm0{%k1}{z}
	vbroadcasti32x4 (%ebx), %ymm0
	vbroadcasti32x4 (%ebx), %zmm0
	vbroadcasti32x4 (%ebx), %ymm0{%k1}
	vbroadcasti32x4 (%ebx), %zmm0{%k1}
	vbroadcasti32x4 (%ebx), %ymm0{%k1}{z}
	vbroadcasti32x4 (%ebx), %zmm0{%k1}{z}
	vbroadcasti64x2 (%ebx), %ymm0
	vbroadcasti64x2 (%ebx), %zmm0
	vbroadcasti64x2 (%ebx), %ymm0{%k1}
	vbroadcasti64x2 (%ebx), %zmm0{%k1}
	vbroadcasti64x2 (%ebx), %ymm0{%k1}{z}
	vbroadcasti64x2 (%ebx), %zmm0{%k1}{z}
	lds (%eax), %ax
	lds (%eax), %eax
	les (%eax), %ax
	les (%eax), %eax
	lfs (%eax), %ax
	lfs (%eax), %eax
	lgs (%eax), %ax
	lgs (%eax), %eax
	lss (%eax), %ax
	lss (%eax), %eax
	lea (%eax), %ax
	lea (%eax), %eax
	rdrand %ax
	rdrand %eax
	rdseed %ax
	rdseed %eax
	movss %xmm1, %xmm0
	movss (%eax), %xmm0
	movss %xmm0, (%eax)
	movsd %xmm1, %xmm0
	movsd (%eax), %xmm0
	movsd %xmm0, (%eax)
	movaps %xmm1, %xmm0
	movaps (%eax), %xmm0
	movaps %xmm0, (%eax)
	movups %xmm1, %xmm0
	movups (%eax), %xmm0
	movups %xmm0, (%eax)
	movapd %xmm1, %xmm0
	movapd (%eax), %xmm0
	movapd %xmm0, (%eax)
	movupd %xmm1, %xmm0
	movupd (%eax), %xmm0
	movupd %xmm0, (%eax)
	movdqa %xmm1, %xmm0
	movdqa (%eax), %xmm0
	movdqa %xmm0, (%eax)
	movdqu %xmm1, %xmm0
	movdqu (%eax), %xmm0
	movdqu %xmm0, (%eax)
	fild (%eax)
	fildl (%ebx)
	fildll (%ecx)
	fistp (%eax)
	fistpl (%ebx)
	fistpll (%ecx)
	fisttp (%eax)
	fisttpl (%ebx)
	fisttpll (%ecx)
	fsts (%eax)
	fstl (%ebx)
	fst %st(0)
	fadds (%eax)
	faddl (%ebx)
	fadd %st(0), %st(1)
	fsubs (%eax)
	fsubl (%ebx)
	fsub %st(0), %st(1)
	fsubrs (%eax)
	fsubrl (%ebx)
	fsubr %st(0), %st(1)
	fmuls (%eax)
	fmull (%ebx)
	fmul %st(0), %st(1)
	fdivs (%eax)
	fdivl (%ebx)
	fdiv %st(0), %st(1)
	fdivrs (%eax)
	fdivrl (%ebx)
	fdivr %st(0), %st(1)
	pextrb $0xFF, %xmm0, %eax
	pextrb $0xFF, %xmm0, (%eax)
	extractps $0xFF, %xmm0, %eax
	extractps $0xFF, %xmm0, (%eax)
	packsswb %mm1, %mm0
	packsswb (%eax), %mm0
	packsswb %xmm1, %xmm0
	packsswb (%ebx), %xmm0
	packuswb %mm1, %mm0
	packuswb (%eax), %mm0
	packuswb %xmm1, %xmm0
	packuswb (%ebx), %xmm0
	packssdw %mm1, %mm0
	packssdw (%eax), %mm0
	packssdw %xmm1, %xmm0
	packssdw (%ebx), %xmm0
	punpckhbw %mm1, %mm0
	punpckhbw (%eax), %mm0
	punpckhbw %xmm1, %xmm0
	punpckhbw (%ebx), %xmm0
	punpckhwd %mm1, %mm0
	punpckhwd (%eax), %mm0
	punpckhwd %xmm1, %xmm0
	punpckhwd (%ebx), %xmm0
	punpckhdq %mm1, %mm0
	punpckhdq (%eax), %mm0
	punpckhdq %xmm1, %xmm0
	punpckhdq (%ebx), %xmm0
	punpcklbw %mm1, %mm0
	punpcklbw (%eax), %mm0
	punpcklbw %xmm1, %xmm0
	punpcklbw (%ebx), %xmm0
	punpcklwd %mm1, %mm0
	punpcklwd (%eax), %mm0
	punpcklwd %xmm1, %xmm0
	punpcklwd (%ebx), %xmm0
	punpckldq %mm1, %mm0
	punpckldq (%eax), %mm0
	punpckldq %xmm1, %xmm0
	punpckldq (%ebx), %xmm0
	paddb %mm1, %mm0
	paddb (%eax), %mm0
	paddb %xmm1, %xmm0
	paddb (%ebx), %xmm0
	paddw %mm1, %mm0
	paddw (%eax), %mm0
	paddw %xmm1, %xmm0
	paddw (%ebx), %xmm0
	paddd %mm1, %mm0
	paddd (%eax), %mm0
	paddd %xmm1, %xmm0
	paddd (%ebx), %xmm0
	paddsb %mm1, %mm0
	paddsb (%eax), %mm0
	paddsb %xmm1, %xmm0
	paddsb (%ebx), %xmm0
	paddsw %mm1, %mm0
	paddsw (%eax), %mm0
	paddsw %xmm1, %xmm0
	paddsw (%ebx), %xmm0
	paddusb %mm1, %mm0
	paddusb (%eax), %mm0
	paddusb %xmm1, %xmm0
	paddusb (%ebx), %xmm0
	paddusw %mm1, %mm0
	paddusw (%eax), %mm0
	paddusw %xmm1, %xmm0
	paddusw (%ebx), %xmm0
	psubb %mm1, %mm0
	psubb (%eax), %mm0
	psubb %xmm1, %xmm0
	psubb (%ebx), %xmm0
	psubw %mm1, %mm0
	psubw (%eax), %mm0
	psubw %xmm1, %xmm0
	psubw (%ebx), %xmm0
	psubd %mm1, %mm0
	psubd (%eax), %mm0
	psubd %xmm1, %xmm0
	psubd (%ebx), %xmm0
	psubsb %mm1, %mm0
	psubsb (%eax), %mm0
	psubsb %xmm1, %xmm0
	psubsb (%ebx), %xmm0
	psubsw %mm1, %mm0
	psubsw (%eax), %mm0
	psubsw %xmm1, %xmm0
	psubsw (%ebx), %xmm0
	psubusb %mm1, %mm0
	psubusb (%eax), %mm0
	psubusb %xmm1, %xmm0
	psubusb (%ebx), %xmm0
	psubusw %mm1, %mm0
	psubusw (%eax), %mm0
	psubusw %xmm1, %xmm0
	psubusw (%ebx), %xmm0
	pmulhw %mm1, %mm0
	pmulhw (%eax), %mm0
	pmulhw %xmm1, %xmm0
	pmulhw (%ebx), %xmm0
	pmullw %mm1, %mm0
	pmullw (%eax), %mm0
	pmullw %xmm1, %xmm0
	pmullw (%ebx), %xmm0
	pmaddwd %mm1, %mm0
	pmaddwd (%eax), %mm0
	pmaddwd %xmm1, %xmm0
	pmaddwd (%ebx), %xmm0
	pcmpeqb %mm1, %mm0
	pcmpeqb (%eax), %mm0
	pcmpeqb %xmm1, %xmm0
	pcmpeqb (%ebx), %xmm0
	pcmpeqw %mm1, %mm0
	pcmpeqw (%eax), %mm0
	pcmpeqw %xmm1, %xmm0
	pcmpeqw (%ebx), %xmm0
	pcmpeqd %mm1, %mm0
	pcmpeqd (%eax), %mm0
	pcmpeqd %xmm1, %xmm0
	pcmpeqd (%ebx), %xmm0
	pcmpgtb %mm1, %mm0
	pcmpgtb (%eax), %mm0
	pcmpgtb %xmm1, %xmm0
	pcmpgtb (%ebx), %xmm0
	pcmpgtw %mm1, %mm0
	pcmpgtw (%eax), %mm0
	pcmpgtw %xmm1, %xmm0
	pcmpgtw (%ebx), %xmm0
	pcmpgtd %mm1, %mm0
	pcmpgtd (%eax), %mm0
	pcmpgtd %xmm1, %xmm0
	pcmpgtd (%ebx), %xmm0
	pand %mm1, %mm0
	pand (%eax), %mm0
	pand %xmm1, %xmm0
	pand (%ebx), %xmm0
	pandn %mm1, %mm0
	pandn (%eax), %mm0
	pandn %xmm1, %xmm0
	pandn (%ebx), %xmm0
	por %mm1, %mm0
	por (%eax), %mm0
	por %xmm1, %xmm0
	por (%ebx), %xmm0
	pxor %mm1, %mm0
	pxor (%eax), %mm0
	pxor %xmm1, %xmm0
	pxor (%ebx), %xmm0
	pavgb %mm1, %mm0
	pavgb (%eax), %mm0
	pavgb %xmm1, %xmm0
	pavgb (%ebx), %xmm0
	pavgw %mm1, %mm0
	pavgw (%eax), %mm0
	pavgw %xmm1, %xmm0
	pavgw (%ebx), %xmm0
	pmaxub %mm1, %mm0
	pmaxub (%eax), %mm0
	pmaxub %xmm1, %xmm0
	pmaxub (%ebx), %xmm0
	pmaxsw %mm1, %mm0
	pmaxsw (%eax), %mm0
	pmaxsw %xmm1, %xmm0
	pmaxsw (%ebx), %xmm0
	pminub %mm1, %mm0
	pminub (%eax), %mm0
	pminub %xmm1, %xmm0
	pminub (%ebx), %xmm0
	pminsw %mm1, %mm0
	pminsw (%eax), %mm0
	pminsw %xmm1, %xmm0
	pminsw (%ebx), %xmm0
	pmuludq %mm1, %mm0
	pmuludq (%eax), %mm0
	pmuludq %xmm1, %xmm0
	pmuludq (%ebx), %xmm0
	paddq %mm1, %mm0
	paddq (%eax), %mm0
	paddq %xmm1, %xmm0
	paddq (%ebx), %xmm0
	psubq %mm1, %mm0
	psubq (%eax), %mm0
	psubq %xmm1, %xmm0
	psubq (%ebx), %xmm0
	phaddw %mm1, %mm0
	phaddw (%eax), %mm0
	phaddw %xmm1, %xmm0
	phaddw (%ebx), %xmm0
	phaddsw %mm1, %mm0
	phaddsw (%eax), %mm0
	phaddsw %xmm1, %xmm0
	phaddsw (%ebx), %xmm0
	phaddd %mm1, %mm0
	phaddd (%eax), %mm0
	phaddd %xmm1, %xmm0
	phaddd (%ebx), %xmm0
	phsubw %mm1, %mm0
	phsubw (%eax), %mm0
	phsubw %xmm1, %xmm0
	phsubw (%ebx), %xmm0
	phsubsw %mm1, %mm0
	phsubsw (%eax), %mm0
	phsubsw %xmm1, %xmm0
	phsubsw (%ebx), %xmm0
	phsubd %mm1, %mm0
	phsubd (%eax), %mm0
	phsubd %xmm1, %xmm0
	phsubd (%ebx), %xmm0
	pabsb %mm1, %mm0
	pabsb (%eax), %mm0
	pabsb %xmm1, %xmm0
	pabsb (%ebx), %xmm0
	pabsw %mm1, %mm0
	pabsw (%eax), %mm0
	pabsw %xmm1, %xmm0
	pabsw (%ebx), %xmm0
	pabsd %mm1, %mm0
	pabsd (%eax), %mm0
	pabsd %xmm1, %xmm0
	pabsd (%ebx), %xmm0
	pmaddubsw %mm1, %mm0
	pmaddubsw (%eax), %mm0
	pmaddubsw %xmm1, %xmm0
	pmaddubsw (%ebx), %xmm0
	pmulhrsw %mm1, %mm0
	pmulhrsw (%eax), %mm0
	pmulhrsw %xmm1, %xmm0
	pmulhrsw (%ebx), %xmm0
	pshufb %mm1, %mm0
	pshufb (%eax), %mm0
	pshufb %xmm1, %xmm0
	pshufb (%ebx), %xmm0
	psignb %mm1, %mm0
	psignb (%eax), %mm0
	psignb %xmm1, %xmm0
	psignb (%ebx), %xmm0
	psignw %mm1, %mm0
	psignw (%eax), %mm0
	psignw %xmm1, %xmm0
	psignw (%ebx), %xmm0
	psignd %mm1, %mm0
	psignd (%eax), %mm0
	psignd %xmm1, %xmm0
	psignd (%ebx), %xmm0
	pmulhuw %mm1, %mm0
	pmulhuw (%eax), %mm0
	pmulhuw %xmm1, %xmm0
	pmulhuw (%ebx), %xmm0
	psadbw %mm1, %mm0
	psadbw (%eax), %mm0
	psadbw %xmm1, %xmm0
	psadbw (%ebx), %xmm0
	flds (%eax)
	fldl (%ebx)
	fldt (%ecx)
	fld %st(0)
	fstps (%eax)
	fstpl (%ebx)
	fstpt (%ecx)
	fstp %st(0)
	vbroadcastsd (%ebx), %ymm0
	vbroadcastsd %xmm0, %ymm0
	vbroadcastsd (%ebx), %zmm0
	vbroadcastsd %xmm0, %zmm0
	vbroadcastsd (%ebx), %ymm0{%k1}
	vbroadcastsd %xmm0, %ymm0{%k1}
	vbroadcastsd (%ebx), %zmm0{%k1}
	vbroadcastsd %xmm0, %zmm0{%k1}
	vbroadcastsd (%ebx), %ymm0{%k1}{z}
	vbroadcastsd %xmm0, %ymm0{%k1}{z}
	vbroadcastsd (%ebx), %zmm0{%k1}{z}
	vbroadcastsd %xmm0, %zmm0{%k1}{z}
	vbroadcastf32x2 (%ebx), %ymm0
	vbroadcastf32x2 %xmm0, %ymm0
	vbroadcastf32x2 (%ebx), %zmm0
	vbroadcastf32x2 %xmm0, %zmm0
	vbroadcastf32x2 (%ebx), %ymm0{%k1}
	vbroadcastf32x2 %xmm0, %ymm0{%k1}
	vbroadcastf32x2 (%ebx), %zmm0{%k1}
	vbroadcastf32x2 %xmm0, %zmm0{%k1}
	vbroadcastf32x2 (%ebx), %ymm0{%k1}{z}
	vbroadcastf32x2 %xmm0, %ymm0{%k1}{z}
	vbroadcastf32x2 (%ebx), %zmm0{%k1}{z}
	vbroadcastf32x2 %xmm0, %zmm0{%k1}{z}
	palignr $0xFF, %mm1, %mm0
	palignr $0xFF, (%eax), %mm0
	palignr $0xFF, %xmm1, %xmm0
	palignr $0xFF, (%ebx), %xmm0
	vmovd %eax, %xmm0
	vmovd (%eax), %xmm0
	vmovd %xmm0, %eax
	vmovd %xmm0, (%eax)
	adcx %ebx, %eax
	adcx (%eax), %eax
	adox %ebx, %eax
	adox (%eax), %eax
	cvtsi2ss %eax, %xmm0
	cvtsi2ssl (%eax), %xmm0
	cvtsi2sd %eax, %xmm0
	cvtsi2sdl (%eax), %xmm0
	cvtss2si %xmm0, %eax
	cvtss2si (%eax), %eax
	cvttss2si %xmm0, %eax
	cvttss2si (%eax), %eax
	vcvttss2si %xmm0, %eax
	vcvttss2si (%eax), %eax
	vcvtss2si %xmm0, %eax
	vcvtss2si (%eax), %eax
	fcom
	fcom %st(1)
	fcoms (%eax)
	fcoml (%ebx)
	fcomp
	fcomp %st(1)
	fcomps (%eax)
	fcompl (%ebx)
	pinsrw $0xFF, %eax, %mm0
	pinsrw $0xFF, (%eax), %mm0
	pinsrw $0xFF, %eax, %xmm0
	pinsrw $0xFF, (%eax), %xmm0
	pmovmskb %mm0, %eax
	pmovmskb %xmm0, %eax
	cvtsd2si %xmm0, %eax
	cvtsd2si (%eax), %eax
	cvttsd2si %xmm0, %eax
	cvttsd2si (%eax), %eax
	vcvtsd2si %xmm0, %eax
	vcvtsd2si (%eax), %eax
	vcvttsd2si %xmm0, %eax
	vcvttsd2si (%eax), %eax
	blendvpd %xmm1, %xmm0
	blendvpd (%eax), %xmm0
	blendvpd %xmm0, %xmm1, %xmm2
	blendvpd %xmm0, (%eax), %xmm1
	blendvps %xmm1, %xmm0
	blendvps (%eax), %xmm0
	blendvps %xmm0, %xmm1, %xmm2
	blendvps %xmm0, (%eax), %xmm1
	pblendvb %xmm1, %xmm0
	pblendvb (%eax), %xmm0
	pblendvb %xmm0, %xmm1, %xmm2
	pblendvb %xmm0, (%eax), %xmm1
	vcvtph2ps %xmm1, %xmm0
	vcvtph2ps (%eax), %xmm0
	vcvtph2ps %xmm0, %ymm0
	vcvtph2ps (%ebx), %ymm0
	vcvtps2pd %xmm1, %xmm0
	vcvtps2pd (%eax), %xmm0
	vcvtps2pd %xmm0, %ymm0
	vcvtps2pd (%ebx), %ymm0
	vcvtdq2pd %xmm1, %xmm0
	vcvtdq2pd (%eax), %xmm0
	vcvtdq2pd %xmm0, %ymm0
	vcvtdq2pd (%ebx), %ymm0
	vcvtps2ph $0xFF, %xmm1, %xmm0
	vcvtps2ph $0xFF, %xmm0, (%eax)
	vcvtps2ph $0xFF, %ymm0, %xmm0
	vcvtps2ph $0xFF, %ymm0, (%ebx)
	vfmadd132pd %xmm2, %xmm1, %xmm0
	vfmadd132pd (%eax), %xmm1, %xmm0
	vfmadd132pd %ymm2, %ymm1, %ymm0
	vfmadd132pd (%ebx), %ymm1, %ymm0
	vfmadd213pd %xmm2, %xmm1, %xmm0
	vfmadd213pd (%eax), %xmm1, %xmm0
	vfmadd213pd %ymm2, %ymm1, %ymm0
	vfmadd213pd (%ebx), %ymm1, %ymm0
	vfmadd231pd %xmm2, %xmm1, %xmm0
	vfmadd231pd (%eax), %xmm1, %xmm0
	vfmadd231pd %ymm2, %ymm1, %ymm0
	vfmadd231pd (%ebx), %ymm1, %ymm0
	vfmadd132ps %xmm2, %xmm1, %xmm0
	vfmadd132ps (%eax), %xmm1, %xmm0
	vfmadd132ps %ymm2, %ymm1, %ymm0
	vfmadd132ps (%ebx), %ymm1, %ymm0
	vfmadd213ps %xmm2, %xmm1, %xmm0
	vfmadd213ps (%eax), %xmm1, %xmm0
	vfmadd213ps %ymm2, %ymm1, %ymm0
	vfmadd213ps (%ebx), %ymm1, %ymm0
	vfmadd231ps %xmm2, %xmm1, %xmm0
	vfmadd231ps (%eax), %xmm1, %xmm0
	vfmadd231ps %ymm2, %ymm1, %ymm0
	vfmadd231ps (%ebx), %ymm1, %ymm0
	vfmaddsub132pd %xmm2, %xmm1, %xmm0
	vfmaddsub132pd (%eax), %xmm1, %xmm0
	vfmaddsub132pd %ymm2, %ymm1, %ymm0
	vfmaddsub132pd (%ebx), %ymm1, %ymm0
	vfmaddsub213pd %xmm2, %xmm1, %xmm0
	vfmaddsub213pd (%eax), %xmm1, %xmm0
	vfmaddsub213pd %ymm2, %ymm1, %ymm0
	vfmaddsub213pd (%ebx), %ymm1, %ymm0
	vfmaddsub231pd %xmm2, %xmm1, %xmm0
	vfmaddsub231pd (%eax), %xmm1, %xmm0
	vfmaddsub231pd %ymm2, %ymm1, %ymm0
	vfmaddsub231pd (%ebx), %ymm1, %ymm0
	vfmaddsub132ps %xmm2, %xmm1, %xmm0
	vfmaddsub132ps (%eax), %xmm1, %xmm0
	vfmaddsub132ps %ymm2, %ymm1, %ymm0
	vfmaddsub132ps (%ebx), %ymm1, %ymm0
	vfmaddsub213ps %xmm2, %xmm1, %xmm0
	vfmaddsub213ps (%eax), %xmm1, %xmm0
	vfmaddsub213ps %ymm2, %ymm1, %ymm0
	vfmaddsub213ps (%ebx), %ymm1, %ymm0
	vfmaddsub231ps %xmm2, %xmm1, %xmm0
	vfmaddsub231ps (%eax), %xmm1, %xmm0
	vfmaddsub231ps %ymm2, %ymm1, %ymm0
	vfmaddsub231ps (%ebx), %ymm1, %ymm0
	vfmsubadd132pd %xmm2, %xmm1, %xmm0
	vfmsubadd132pd (%eax), %xmm1, %xmm0
	vfmsubadd132pd %ymm2, %ymm1, %ymm0
	vfmsubadd132pd (%ebx), %ymm1, %ymm0
	vfmsubadd213pd %xmm2, %xmm1, %xmm0
	vfmsubadd213pd (%eax), %xmm1, %xmm0
	vfmsubadd213pd %ymm2, %ymm1, %ymm0
	vfmsubadd213pd (%ebx), %ymm1, %ymm0
	vfmsubadd231pd %xmm2, %xmm1, %xmm0
	vfmsubadd231pd (%eax), %xmm1, %xmm0
	vfmsubadd231pd %ymm2, %ymm1, %ymm0
	vfmsubadd231pd (%ebx), %ymm1, %ymm0
	vfmsubadd132ps %xmm2, %xmm1, %xmm0
	vfmsubadd132ps (%eax), %xmm1, %xmm0
	vfmsubadd132ps %ymm2, %ymm1, %ymm0
	vfmsubadd132ps (%ebx), %ymm1, %ymm0
	vfmsubadd213ps %xmm2, %xmm1, %xmm0
	vfmsubadd213ps (%eax), %xmm1, %xmm0
	vfmsubadd213ps %ymm2, %ymm1, %ymm0
	vfmsubadd213ps (%ebx), %ymm1, %ymm0
	vfmsubadd231ps %xmm2, %xmm1, %xmm0
	vfmsubadd231ps (%eax), %xmm1, %xmm0
	vfmsubadd231ps %ymm2, %ymm1, %ymm0
	vfmsubadd231ps (%ebx), %ymm1, %ymm0
	vfmsub132pd %xmm2, %xmm1, %xmm0
	vfmsub132pd (%eax), %xmm1, %xmm0
	vfmsub132pd %ymm2, %ymm1, %ymm0
	vfmsub132pd (%ebx), %ymm1, %ymm0
	vfmsub213pd %xmm2, %xmm1, %xmm0
	vfmsub213pd (%eax), %xmm1, %xmm0
	vfmsub213pd %ymm2, %ymm1, %ymm0
	vfmsub213pd (%ebx), %ymm1, %ymm0
	vfmsub231pd %xmm2, %xmm1, %xmm0
	vfmsub231pd (%eax), %xmm1, %xmm0
	vfmsub231pd %ymm2, %ymm1, %ymm0
	vfmsub231pd (%ebx), %ymm1, %ymm0
	vfmsub132ps %xmm2, %xmm1, %xmm0
	vfmsub132ps (%eax), %xmm1, %xmm0
	vfmsub132ps %ymm2, %ymm1, %ymm0
	vfmsub132ps (%ebx), %ymm1, %ymm0
	vfmsub213ps %xmm2, %xmm1, %xmm0
	vfmsub213ps (%eax), %xmm1, %xmm0
	vfmsub213ps %ymm2, %ymm1, %ymm0
	vfmsub213ps (%ebx), %ymm1, %ymm0
	vfmsub231ps %xmm2, %xmm1, %xmm0
	vfmsub231ps (%eax), %xmm1, %xmm0
	vfmsub231ps %ymm2, %ymm1, %ymm0
	vfmsub231ps (%ebx), %ymm1, %ymm0
	vfnmadd132pd %xmm2, %xmm1, %xmm0
	vfnmadd132pd (%eax), %xmm1, %xmm0
	vfnmadd132pd %ymm2, %ymm1, %ymm0
	vfnmadd132pd (%ebx), %ymm1, %ymm0
	vfnmadd213pd %xmm2, %xmm1, %xmm0
	vfnmadd213pd (%eax), %xmm1, %xmm0
	vfnmadd213pd %ymm2, %ymm1, %ymm0
	vfnmadd213pd (%ebx), %ymm1, %ymm0
	vfnmadd231pd %xmm2, %xmm1, %xmm0
	vfnmadd231pd (%eax), %xmm1, %xmm0
	vfnmadd231pd %ymm2, %ymm1, %ymm0
	vfnmadd231pd (%ebx), %ymm1, %ymm0
	vfnmadd132ps %xmm2, %xmm1, %xmm0
	vfnmadd132ps (%eax), %xmm1, %xmm0
	vfnmadd132ps %ymm2, %ymm1, %ymm0
	vfnmadd132ps (%ebx), %ymm1, %ymm0
	vfnmadd213ps %xmm2, %xmm1, %xmm0
	vfnmadd213ps (%eax), %xmm1, %xmm0
	vfnmadd213ps %ymm2, %ymm1, %ymm0
	vfnmadd213ps (%ebx), %ymm1, %ymm0
	vfnmadd231ps %xmm2, %xmm1, %xmm0
	vfnmadd231ps (%eax), %xmm1, %xmm0
	vfnmadd231ps %ymm2, %ymm1, %ymm0
	vfnmadd231ps (%ebx), %ymm1, %ymm0
	vfnmsub132pd %xmm2, %xmm1, %xmm0
	vfnmsub132pd (%eax), %xmm1, %xmm0
	vfnmsub132pd %ymm2, %ymm1, %ymm0
	vfnmsub132pd (%ebx), %ymm1, %ymm0
	vfnmsub213pd %xmm2, %xmm1, %xmm0
	vfnmsub213pd (%eax), %xmm1, %xmm0
	vfnmsub213pd %ymm2, %ymm1, %ymm0
	vfnmsub213pd (%ebx), %ymm1, %ymm0
	vfnmsub231pd %xmm2, %xmm1, %xmm0
	vfnmsub231pd (%eax), %xmm1, %xmm0
	vfnmsub231pd %ymm2, %ymm1, %ymm0
	vfnmsub231pd (%ebx), %ymm1, %ymm0
	vfnmsub132ps %xmm2, %xmm1, %xmm0
	vfnmsub132ps (%eax), %xmm1, %xmm0
	vfnmsub132ps %ymm2, %ymm1, %ymm0
	vfnmsub132ps (%ebx), %ymm1, %ymm0
	vfnmsub213ps %xmm2, %xmm1, %xmm0
	vfnmsub213ps (%eax), %xmm1, %xmm0
	vfnmsub213ps %ymm2, %ymm1, %ymm0
	vfnmsub213ps (%ebx), %ymm1, %ymm0
	vfnmsub231ps %xmm2, %xmm1, %xmm0
	vfnmsub231ps (%eax), %xmm1, %xmm0
	vfnmsub231ps %ymm2, %ymm1, %ymm0
	vfnmsub231ps (%ebx), %ymm1, %ymm0
	vaddpd %xmm2, %xmm1, %xmm0
	vaddpd (%eax), %xmm1, %xmm0
	vaddpd %ymm2, %ymm1, %ymm0
	vaddpd (%ebx), %ymm1, %ymm0
	vaddps %xmm2, %xmm1, %xmm0
	vaddps (%eax), %xmm1, %xmm0
	vaddps %ymm2, %ymm1, %ymm0
	vaddps (%ebx), %ymm1, %ymm0
	vsubpd %xmm2, %xmm1, %xmm0
	vsubpd (%eax), %xmm1, %xmm0
	vsubpd %ymm2, %ymm1, %ymm0
	vsubpd (%ebx), %ymm1, %ymm0
	vsubps %xmm2, %xmm1, %xmm0
	vsubps (%eax), %xmm1, %xmm0
	vsubps %ymm2, %ymm1, %ymm0
	vsubps (%ebx), %ymm1, %ymm0
	vmulpd %xmm2, %xmm1, %xmm0
	vmulpd (%eax), %xmm1, %xmm0
	vmulpd %ymm2, %ymm1, %ymm0
	vmulpd (%ebx), %ymm1, %ymm0
	vmulps %xmm2, %xmm1, %xmm0
	vmulps (%eax), %xmm1, %xmm0
	vmulps %ymm2, %ymm1, %ymm0
	vmulps (%ebx), %ymm1, %ymm0
	vdivpd %xmm2, %xmm1, %xmm0
	vdivpd (%eax), %xmm1, %xmm0
	vdivpd %ymm2, %ymm1, %ymm0
	vdivpd (%ebx), %ymm1, %ymm0
	vdivps %xmm2, %xmm1, %xmm0
	vdivps (%eax), %xmm1, %xmm0
	vdivps %ymm2, %ymm1, %ymm0
	vdivps (%ebx), %ymm1, %ymm0
	vminps %xmm2, %xmm1, %xmm0
	vminps (%eax), %xmm1, %xmm0
	vminps %ymm2, %ymm1, %ymm0
	vminps (%ebx), %ymm1, %ymm0
	vminpd %xmm2, %xmm1, %xmm0
	vminpd (%eax), %xmm1, %xmm0
	vminpd %ymm2, %ymm1, %ymm0
	vminpd (%ebx), %ymm1, %ymm0
	vmaxps %xmm2, %xmm1, %xmm0
	vmaxps (%eax), %xmm1, %xmm0
	vmaxps %ymm2, %ymm1, %ymm0
	vmaxps (%ebx), %ymm1, %ymm0
	vmaxpd %xmm2, %xmm1, %xmm0
	vmaxpd (%eax), %xmm1, %xmm0
	vmaxpd %ymm2, %ymm1, %ymm0
	vmaxpd (%ebx), %ymm1, %ymm0
	vhaddps %xmm2, %xmm1, %xmm0
	vhaddps (%eax), %xmm1, %xmm0
	vhaddps %ymm2, %ymm1, %ymm0
	vhaddps (%ebx), %ymm1, %ymm0
	vhaddpd %xmm2, %xmm1, %xmm0
	vhaddpd (%eax), %xmm1, %xmm0
	vhaddpd %ymm2, %ymm1, %ymm0
	vhaddpd (%ebx), %ymm1, %ymm0
	vhsubps %xmm2, %xmm1, %xmm0
	vhsubps (%eax), %xmm1, %xmm0
	vhsubps %ymm2, %ymm1, %ymm0
	vhsubps (%ebx), %ymm1, %ymm0
	vhsubpd %xmm2, %xmm1, %xmm0
	vhsubpd (%eax), %xmm1, %xmm0
	vhsubpd %ymm2, %ymm1, %ymm0
	vhsubpd (%ebx), %ymm1, %ymm0
	vaddsubps %xmm2, %xmm1, %xmm0
	vaddsubps (%eax), %xmm1, %xmm0
	vaddsubps %ymm2, %ymm1, %ymm0
	vaddsubps (%ebx), %ymm1, %ymm0
	vaddsubpd %xmm2, %xmm1, %xmm0
	vaddsubpd (%eax), %xmm1, %xmm0
	vaddsubpd %ymm2, %ymm1, %ymm0
	vaddsubpd (%ebx), %ymm1, %ymm0
	vunpckhpd %xmm2, %xmm1, %xmm0
	vunpckhpd (%eax), %xmm1, %xmm0
	vunpckhpd %ymm2, %ymm1, %ymm0
	vunpckhpd (%ebx), %ymm1, %ymm0
	vunpcklpd %xmm2, %xmm1, %xmm0
	vunpcklpd (%eax), %xmm1, %xmm0
	vunpcklpd %ymm2, %ymm1, %ymm0
	vunpcklpd (%ebx), %ymm1, %ymm0
	vunpckhps %xmm2, %xmm1, %xmm0
	vunpckhps (%eax), %xmm1, %xmm0
	vunpckhps %ymm2, %ymm1, %ymm0
	vunpckhps (%ebx), %ymm1, %ymm0
	vunpcklps %xmm2, %xmm1, %xmm0
	vunpcklps (%eax), %xmm1, %xmm0
	vunpcklps %ymm2, %ymm1, %ymm0
	vunpcklps (%ebx), %ymm1, %ymm0
	vxorps %xmm2, %xmm1, %xmm0
	vxorps (%eax), %xmm1, %xmm0
	vxorps %ymm2, %ymm1, %ymm0
	vxorps (%ebx), %ymm1, %ymm0
	vxorpd %xmm2, %xmm1, %xmm0
	vxorpd (%eax), %xmm1, %xmm0
	vxorpd %ymm2, %ymm1, %ymm0
	vxorpd (%ebx), %ymm1, %ymm0
	vorps %xmm2, %xmm1, %xmm0
	vorps (%eax), %xmm1, %xmm0
	vorps %ymm2, %ymm1, %ymm0
	vorps (%ebx), %ymm1, %ymm0
	vorpd %xmm2, %xmm1, %xmm0
	vorpd (%eax), %xmm1, %xmm0
	vorpd %ymm2, %ymm1, %ymm0
	vorpd (%ebx), %ymm1, %ymm0
	vandps %xmm2, %xmm1, %xmm0
	vandps (%eax), %xmm1, %xmm0
	vandps %ymm2, %ymm1, %ymm0
	vandps (%ebx), %ymm1, %ymm0
	vandpd %xmm2, %xmm1, %xmm0
	vandpd (%eax), %xmm1, %xmm0
	vandpd %ymm2, %ymm1, %ymm0
	vandpd (%ebx), %ymm1, %ymm0
	vandnps %xmm2, %xmm1, %xmm0
	vandnps (%eax), %xmm1, %xmm0
	vandnps %ymm2, %ymm1, %ymm0
	vandnps (%ebx), %ymm1, %ymm0
	vandnpd %xmm2, %xmm1, %xmm0
	vandnpd (%eax), %xmm1, %xmm0
	vandnpd %ymm2, %ymm1, %ymm0
	vandnpd (%ebx), %ymm1, %ymm0
	vsqrtpd %xmm1, %xmm0
	vsqrtpd (%eax), %xmm0
	vsqrtpd %ymm1, %ymm0
	vsqrtpd (%ebx), %ymm0
	vsqrtps %xmm1, %xmm0
	vsqrtps (%eax), %xmm0
	vsqrtps %ymm1, %ymm0
	vsqrtps (%ebx), %ymm0
	vrsqrtps %xmm1, %xmm0
	vrsqrtps (%eax), %xmm0
	vrsqrtps %ymm1, %ymm0
	vrsqrtps (%ebx), %ymm0
	vrcpps %xmm1, %xmm0
	vrcpps (%eax), %xmm0
	vrcpps %ymm1, %ymm0
	vrcpps (%ebx), %ymm0
	vcvtps2dq %xmm1, %xmm0
	vcvtps2dq (%eax), %xmm0
	vcvtps2dq %ymm1, %ymm0
	vcvtps2dq (%ebx), %ymm0
	vcvtdq2ps %xmm1, %xmm0
	vcvtdq2ps (%eax), %xmm0
	vcvtdq2ps %ymm1, %ymm0
	vcvtdq2ps (%ebx), %ymm0
	vcvttps2dq %xmm1, %xmm0
	vcvttps2dq (%eax), %xmm0
	vcvttps2dq %ymm1, %ymm0
	vcvttps2dq (%ebx), %ymm0
	vptest %xmm1, %xmm0
	vptest (%eax), %xmm0
	vptest %ymm1, %ymm0
	vptest (%ebx), %ymm0
	vtestps %xmm1, %xmm0
	vtestps (%eax), %xmm0
	vtestps %ymm1, %ymm0
	vtestps (%ebx), %ymm0
	vtestpd %xmm1, %xmm0
	vtestpd (%eax), %xmm0
	vtestpd %ymm1, %ymm0
	vtestpd (%ebx), %ymm0
	vmovshdup %xmm1, %xmm0
	vmovshdup (%eax), %xmm0
	vmovshdup %ymm1, %ymm0
	vmovshdup (%ebx), %ymm0
	vmovsldup %xmm1, %xmm0
	vmovsldup (%eax), %xmm0
	vmovsldup %ymm1, %ymm0
	vmovsldup (%ebx), %ymm0
	vmovddup %xmm1, %xmm0
	vmovddup (%eax), %xmm0
	vmovddup %ymm1, %ymm0
	vmovddup (%ebx), %ymm0
	vcvtpd2ps %xmm1, %xmm0
	vcvtpd2ps %ymm1, %xmm0
	vcvttpd2dq %xmm1, %xmm0
	vcvttpd2dq %ymm1, %xmm0
	vcvtpd2dq %xmm1, %xmm0
	vcvtpd2dq %ymm1, %xmm0
	vcmpps $0xFF, %xmm2, %xmm1, %xmm0
	vcmpps $0xFF, (%eax), %xmm1, %xmm0
	vcmpps $0xFF, %ymm2, %ymm1, %ymm0
	vcmpps $0xFF, (%ebx), %ymm1, %ymm0
	vcmppd $0xFF, %xmm2, %xmm1, %xmm0
	vcmppd $0xFF, (%eax), %xmm1, %xmm0
	vcmppd $0xFF, %ymm2, %ymm1, %ymm0
	vcmppd $0xFF, (%ebx), %ymm1, %ymm0
	vdpps $0xFF, %xmm2, %xmm1, %xmm0
	vdpps $0xFF, (%eax), %xmm1, %xmm0
	vdpps $0xFF, %ymm2, %ymm1, %ymm0
	vdpps $0xFF, (%ebx), %ymm1, %ymm0
	vblendps $0xFF, %xmm2, %xmm1, %xmm0
	vblendps $0xFF, (%eax), %xmm1, %xmm0
	vblendps $0xFF, %ymm2, %ymm1, %ymm0
	vblendps $0xFF, (%ebx), %ymm1, %ymm0
	vblendpd $0xFF, %xmm2, %xmm1, %xmm0
	vblendpd $0xFF, (%eax), %xmm1, %xmm0
	vblendpd $0xFF, %ymm2, %ymm1, %ymm0
	vblendpd $0xFF, (%ebx), %ymm1, %ymm0
	vshufps $0xFF, %xmm2, %xmm1, %xmm0
	vshufps $0xFF, (%eax), %xmm1, %xmm0
	vshufps $0xFF, %ymm2, %ymm1, %ymm0
	vshufps $0xFF, (%ebx), %ymm1, %ymm0
	vshufpd $0xFF, %xmm2, %xmm1, %xmm0
	vshufpd $0xFF, (%eax), %xmm1, %xmm0
	vshufpd $0xFF, %ymm2, %ymm1, %ymm0
	vshufpd $0xFF, (%ebx), %ymm1, %ymm0
	vroundps $0xFF, %xmm1, %xmm0
	vroundps $0xFF, (%eax), %xmm0
	vroundps $0xFF, %ymm1, %ymm0
	vroundps $0xFF, (%ebx), %ymm0
	vroundpd $0xFF, %xmm1, %xmm0
	vroundpd $0xFF, (%eax), %xmm0
	vroundpd $0xFF, %ymm1, %ymm0
	vroundpd $0xFF, (%ebx), %ymm0
	vmovmskps %xmm0, %eax
	vmovmskps %ymm0, %eax
	vmovmskpd %xmm0, %eax
	vmovmskpd %ymm0, %eax
	vblendvpd %xmm3, %xmm2, %xmm1, %xmm0
	vblendvpd %xmm3, (%eax), %xmm1, %xmm0
	vblendvpd %ymm3, %ymm2, %ymm1, %ymm0
	vblendvpd %ymm3, (%eax), %ymm1, %ymm0
	vblendvps %xmm3, %xmm2, %xmm1, %xmm0
	vblendvps %xmm3, (%eax), %xmm1, %xmm0
	vblendvps %ymm3, %ymm2, %ymm1, %ymm0
	vblendvps %ymm3, (%eax), %ymm1, %ymm0
	vmaskmovps (%eax), %xmm1, %xmm0
	vmaskmovps (%ebx), %ymm1, %ymm0
	vmaskmovps %xmm1, %xmm0, (%eax)
	vmaskmovps %ymm1, %ymm0, (%ebx)
	vmaskmovpd (%eax), %xmm1, %xmm0
	vmaskmovpd (%ebx), %ymm1, %ymm0
	vmaskmovpd %xmm1, %xmm0, (%eax)
	vmaskmovpd %ymm1, %ymm0, (%ebx)
	vcvtsi2ss %eax, %xmm1, %xmm0
	vcvtsi2ss (%eax), %xmm1, %xmm0
	vcvtsi2sd %eax, %xmm1, %xmm0
	vcvtsi2sd (%eax), %xmm1, %xmm0
	vmread %ebx, %eax
	vmread %ebx, (%edx)
	vmwrite %ebx, %eax
	vmwrite (%edx), %ebx
	nop
	nop %ax
	nopw (%eax)
	nop %eax
	nopl (%ebx)
	pextrw $0xFF, %mm0, %eax
	pextrw $0xFF, %xmm0, %eax
	pextrw $0xFF, %xmm0, (%eax)
	kmovb %k2, %k1
	kmovb (%edx), %k1
	kmovb %k1, (%edx)
	kmovb %eax, %k1
	kmovb %k2, %eax
	kmovw %k2, %k1
	kmovw (%edx), %k1
	kmovw %k1, (%edx)
	kmovw %eax, %k1
	kmovw %k2, %eax
	kmovd %k2, %k1
	kmovd (%edx), %k1
	kmovd %k1, (%edx)
	kmovd %eax, %k1
	kmovd %k2, %eax
	psllw %mm1, %mm0
	psllw (%eax), %mm0
	psllw %xmm1, %xmm0
	psllw (%ebx), %xmm0
	psllw $0xFF, %mm0
	psllw $0xFF, %xmm0
	pslld %mm1, %mm0
	pslld (%eax), %mm0
	pslld %xmm1, %xmm0
	pslld (%ebx), %xmm0
	pslld $0xFF, %mm0
	pslld $0xFF, %xmm0
	psllq %mm1, %mm0
	psllq (%eax), %mm0
	psllq %xmm1, %xmm0
	psllq (%ebx), %xmm0
	psllq $0xFF, %mm0
	psllq $0xFF, %xmm0
	psrlw %mm1, %mm0
	psrlw (%eax), %mm0
	psrlw %xmm1, %xmm0
	psrlw (%ebx), %xmm0
	psrlw $0xFF, %mm0
	psrlw $0xFF, %xmm0
	psrld %mm1, %mm0
	psrld (%eax), %mm0
	psrld %xmm1, %xmm0
	psrld (%ebx), %xmm0
	psrld $0xFF, %mm0
	psrld $0xFF, %xmm0
	psrlq %mm1, %mm0
	psrlq (%eax), %mm0
	psrlq %xmm1, %xmm0
	psrlq (%ebx), %xmm0
	psrlq $0xFF, %mm0
	psrlq $0xFF, %xmm0
	psraw %mm1, %mm0
	psraw (%eax), %mm0
	psraw %xmm1, %xmm0
	psraw (%ebx), %xmm0
	psraw $0xFF, %mm0
	psraw $0xFF, %xmm0
	psrad %mm1, %mm0
	psrad (%eax), %mm0
	psrad %xmm1, %xmm0
	psrad (%ebx), %xmm0
	psrad $0xFF, %mm0
	psrad $0xFF, %xmm0
	cmova %bx, %ax
	cmova (%eax), %ax
	cmova %ebx, %eax
	cmova (%ebx), %eax
	cmovae %bx, %ax
	cmovae (%eax), %ax
	cmovae %ebx, %eax
	cmovae (%ebx), %eax
	cmovb %bx, %ax
	cmovb (%eax), %ax
	cmovb %ebx, %eax
	cmovb (%ebx), %eax
	cmovbe %bx, %ax
	cmovbe (%eax), %ax
	cmovbe %ebx, %eax
	cmovbe (%ebx), %eax
	cmovc %bx, %ax
	cmovc (%eax), %ax
	cmovc %ebx, %eax
	cmovc (%ebx), %eax
	cmove %bx, %ax
	cmove (%eax), %ax
	cmove %ebx, %eax
	cmove (%ebx), %eax
	cmovg %bx, %ax
	cmovg (%eax), %ax
	cmovg %ebx, %eax
	cmovg (%ebx), %eax
	cmovge %bx, %ax
	cmovge (%eax), %ax
	cmovge %ebx, %eax
	cmovge (%ebx), %eax
	cmovl %bx, %ax
	cmovl (%eax), %ax
	cmovl %ebx, %eax
	cmovl (%ebx), %eax
	cmovle %bx, %ax
	cmovle (%eax), %ax
	cmovle %ebx, %eax
	cmovle (%ebx), %eax
	cmovna %bx, %ax
	cmovna (%eax), %ax
	cmovna %ebx, %eax
	cmovna (%ebx), %eax
	cmovnae %bx, %ax
	cmovnae (%eax), %ax
	cmovnae %ebx, %eax
	cmovnae (%ebx), %eax
	cmovnbe %bx, %ax
	cmovnbe (%eax), %ax
	cmovnbe %ebx, %eax
	cmovnbe (%ebx), %eax
	cmovnc %bx, %ax
	cmovnc (%eax), %ax
	cmovnc %ebx, %eax
	cmovnc (%ebx), %eax
	cmovne %bx, %ax
	cmovne (%eax), %ax
	cmovne %ebx, %eax
	cmovne (%ebx), %eax
	cmovng %bx, %ax
	cmovng (%eax), %ax
	cmovng %ebx, %eax
	cmovng (%ebx), %eax
	cmovnge %bx, %ax
	cmovnge (%eax), %ax
	cmovnge %ebx, %eax
	cmovnge (%ebx), %eax
	cmovnl %bx, %ax
	cmovnl (%eax), %ax
	cmovnl %ebx, %eax
	cmovnl (%ebx), %eax
	cmovnle %bx, %ax
	cmovnle (%eax), %ax
	cmovnle %ebx, %eax
	cmovnle (%ebx), %eax
	cmovno %bx, %ax
	cmovno (%eax), %ax
	cmovno %ebx, %eax
	cmovno (%ebx), %eax
	cmovnp %bx, %ax
	cmovnp (%eax), %ax
	cmovnp %ebx, %eax
	cmovnp (%ebx), %eax
	cmovns %bx, %ax
	cmovns (%eax), %ax
	cmovns %ebx, %eax
	cmovns (%ebx), %eax
	cmovnz %bx, %ax
	cmovnz (%eax), %ax
	cmovnz %ebx, %eax
	cmovnz (%ebx), %eax
	cmovo %bx, %ax
	cmovo (%eax), %ax
	cmovo %ebx, %eax
	cmovo (%ebx), %eax
	cmovp %bx, %ax
	cmovp (%eax), %ax
	cmovp %ebx, %eax
	cmovp (%ebx), %eax
	cmovpe %bx, %ax
	cmovpe (%eax), %ax
	cmovpe %ebx, %eax
	cmovpe (%ebx), %eax
	cmovpo %bx, %ax
	cmovpo (%eax), %ax
	cmovpo %ebx, %eax
	cmovpo (%ebx), %eax
	cmovs %bx, %ax
	cmovs (%eax), %ax
	cmovs %ebx, %eax
	cmovs (%ebx), %eax
	cmovz %bx, %ax
	cmovz (%eax), %ax
	cmovz %ebx, %eax
	cmovz (%ebx), %eax
	bsf %bx, %ax
	bsf (%eax), %ax
	bsf %ebx, %eax
	bsf (%ebx), %eax
	bsr %bx, %ax
	bsr (%eax), %ax
	bsr %ebx, %eax
	bsr (%ebx), %eax
	popcnt %bx, %ax
	popcnt (%eax), %ax
	popcnt %ebx, %eax
	popcnt (%ebx), %eax
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
	vmovaps (%eax), %xmm0
	vmovaps %xmm0, (%eax)
	vmovaps %ymm2, %ymm0
	vmovaps (%ebx), %ymm0
	vmovaps %ymm0, (%ebx)
	vmovapd %xmm1, %xmm0
	vmovapd (%eax), %xmm0
	vmovapd %xmm0, (%eax)
	vmovapd %ymm2, %ymm0
	vmovapd (%ebx), %ymm0
	vmovapd %ymm0, (%ebx)
	vmovdqa %xmm1, %xmm0
	vmovdqa (%eax), %xmm0
	vmovdqa %xmm0, (%eax)
	vmovdqa %ymm2, %ymm0
	vmovdqa (%ebx), %ymm0
	vmovdqa %ymm0, (%ebx)
	vmovups %xmm1, %xmm0
	vmovups (%eax), %xmm0
	vmovups %xmm0, (%eax)
	vmovups %ymm2, %ymm0
	vmovups (%ebx), %ymm0
	vmovups %ymm0, (%ebx)
	vmovupd %xmm1, %xmm0
	vmovupd (%eax), %xmm0
	vmovupd %xmm0, (%eax)
	vmovupd %ymm2, %ymm0
	vmovupd (%ebx), %ymm0
	vmovupd %ymm0, (%ebx)
	vmovdqu %xmm1, %xmm0
	vmovdqu (%eax), %xmm0
	vmovdqu %xmm0, (%eax)
	vmovdqu %ymm2, %ymm0
	vmovdqu (%ebx), %ymm0
	vmovdqu %ymm0, (%ebx)
	vbroadcastss (%ebx), %xmm0
	vbroadcastss (%ebx), %ymm0
	vbroadcastss (%ebx), %zmm0
	vbroadcastss %xmm1, %xmm0
	vbroadcastss %xmm1, %ymm0
	vbroadcastss %xmm1, %zmm0
	vbroadcastss (%ebx), %xmm0{%k1}
	vbroadcastss (%ebx), %ymm0{%k1}
	vbroadcastss (%ebx), %zmm0{%k1}
	vbroadcastss %xmm1, %xmm0{%k1}
	vbroadcastss %xmm1, %ymm0{%k1}
	vbroadcastss %xmm1, %zmm0{%k1}
	vbroadcastss (%ebx), %xmm0{%k1}{z}
	vbroadcastss (%ebx), %ymm0{%k1}{z}
	vbroadcastss (%ebx), %zmm0{%k1}{z}
	vbroadcastss %xmm1, %xmm0{%k1}{z}
	vbroadcastss %xmm1, %ymm0{%k1}{z}
	vbroadcastss %xmm1, %zmm0{%k1}{z}
gen_Instruction7_Type1_label:
	jmp gen_Instruction7_Type1_label
	jmp *%ax
	jmp *%eax
	jmp *(%eax)
	jmp *(%ebx)
	call gen_Instruction7_Type1_label
	call *%ax
	call *%eax
	call *(%eax)
	call *(%ebx)
	pop %ax
	popw (%eax)
	pop %ebx
	popl (%ebx)
	pop %ds
gen_Instruction7_Type3_label:
	ljmp *gen_Instruction7_Type3_label
	ljmp *(%eax)
	ljmp *(%ebx)
	lcall *gen_Instruction7_Type3_label
	lcall *(%eax)
	lcall *(%ebx)
	movd %eax, %mm0
	movd (%edx), %mm0
	movd %mm0, %eax
	movd %mm0, (%edx)
	movd %eax, %xmm0
	movd (%edx), %xmm0
	movd %xmm0, %eax
	movd %xmm0, (%edx)
	movq (%edx), %mm0
	movq %mm0, (%edx)
	movq (%edx), %xmm0
	movq %xmm0, (%edx)
	mul %al
	mul %ax
	mul %eax
	mulb (%edx)
	mulw (%edx)
	mull (%edx)
	imul %al
	imul %ax
	imul %eax
	imulb (%edx)
	imulw (%edx)
	imull (%edx)
	div %al
	div %ax
	div %eax
	divb (%edx)
	divw (%edx)
	divl (%edx)
	idiv %al
	idiv %ax
	idiv %eax
	idivb (%edx)
	idivw (%edx)
	idivl (%edx)
	neg %al
	neg %ax
	neg %eax
	negb (%edx)
	negw (%edx)
	negl (%edx)
	inc %al
	inc %ax
	inc %eax
	incb (%edx)
	incw (%edx)
	incl (%edx)
	dec %al
	dec %ax
	dec %eax
	decb (%edx)
	decw (%edx)
	decl (%edx)
	not %al
	not %ax
	not %eax
	notb (%edx)
	notw (%edx)
	notl (%edx)
	xadd %bl, %al
	xadd %cl, (%edx)
	xadd %bx, %ax
	xadd %cx, (%edx)
	xadd %ebx, %eax
	xadd %ecx, (%edx)
	cmpxchg %bl, %al
	cmpxchg %cl, (%edx)
	cmpxchg %bx, %ax
	cmpxchg %cx, (%edx)
	cmpxchg %ebx, %eax
	cmpxchg %ecx, (%edx)
	vpermilpd %xmm2, %xmm1, %xmm0
	vpermilpd (%edx), %xmm1, %xmm0
	vpermilpd %ymm2, %ymm1, %ymm0
	vpermilpd (%edx), %ymm1, %ymm0
	vpermilpd $0xFF, %xmm1, %xmm0
	vpermilpd $0xFF, (%edx), %xmm0
	vpermilpd $0xFF, %ymm1, %ymm0
	vpermilpd $0xFF, (%edx), %ymm0
	vpermilps %xmm2, %xmm1, %xmm0
	vpermilps (%edx), %xmm1, %xmm0
	vpermilps %ymm2, %ymm1, %ymm0
	vpermilps (%edx), %ymm1, %ymm0
	vpermilps $0xFF, %xmm1, %xmm0
	vpermilps $0xFF, (%edx), %xmm0
	vpermilps $0xFF, %ymm1, %ymm0
	vpermilps $0xFF, (%edx), %ymm0
	push %ax
	push %eax
	pushw (%edx)
	pushl (%edx)
	push $0xAA
	push $0xAABB
	push $0xAABBCCDD
	push %gs
	crc32 %al, %ecx
	crc32b (%edx), %ecx
	crc32 %ax, %ecx
	crc32w (%edx), %ecx
	crc32 %eax, %ecx
	crc32l (%edx), %ecx
	bt %bx, %ax
	bt %ax, (%edx)
	bt %ebx, %eax
	bt %eax, (%edx)
	bt $0x01, %ax
	bt $0x01, %eax
	btw $0x01, (%edx)
	btl $0x01, (%edx)
	btc %bx, %ax
	btc %ax, (%edx)
	btc %ebx, %eax
	btc %eax, (%edx)
	btc $0x01, %ax
	btc $0x01, %eax
	btcw $0x01, (%edx)
	btcl $0x01, (%edx)
	btr %bx, %ax
	btr %ax, (%edx)
	btr %ebx, %eax
	btr %eax, (%edx)
	btr $0x01, %ax
	btr $0x01, %eax
	btrw $0x01, (%edx)
	btrl $0x01, (%edx)
	bts %bx, %ax
	bts %ax, (%edx)
	bts %ebx, %eax
	bts %eax, (%edx)
	bts $0x01, %ax
	bts $0x01, %eax
	btsw $0x01, (%edx)
	btsl $0x01, (%edx)
	xchg %bl, %al
	xchg %cl, (%edx)
	xchg (%edx), %cl
	xchg %bx, %ax
	xchg %cx, (%edx)
	xchg (%edx), %cx
	xchg %ebx, %eax
	xchg %ecx, (%edx)
	xchg (%edx), %ecx
	movsbw %bl, %ax
	movsbw (%edx), %ax
	movsbl %bl, %eax
	movsbl (%edx), %eax
	movswl %ax, %eax
	movswl (%edx), %eax
	movzbw %bl, %ax
	movzbw (%edx), %ax
	movzbl %bl, %eax
	movzbl (%edx), %eax
	movzwl %ax, %eax
	movzwl (%edx), %eax
	shld $0x01, %bx, %ax
	shld $0x01, %bx, (%edx)
	shld %cl, %bx, %ax
	shld %cl, %bx, (%edx)
	shld $0x01, %ebx, %eax
	shld $0x01, %ebx, (%edx)
	shld %cl, %ebx, %eax
	shld %cl, %ebx, (%edx)
	shrd $0x01, %bx, %ax
	shrd $0x01, %bx, (%edx)
	shrd %cl, %bx, %ax
	shrd %cl, %bx, (%edx)
	shrd $0x01, %ebx, %eax
	shrd $0x01, %ebx, (%edx)
	shrd %cl, %ebx, %eax
	shrd %cl, %ebx, (%edx)
	test $0xAA, %al
	testb $0xAA, (%edx)
	test $0xAABB, %ax
	testw $0xAABB, (%edx)
	test $0xAABBCCDD, %eax
	testl $0xAABBCCDD, (%edx)
	test %ah, %al
	test %al, (%edx)
	test %bx, %ax
	test %ax, (%edx)
	test %ebx, %eax
	test %eax, (%edx)
	sal $0x01, %al
	salb $0x01, (%edx)
	sal %cl, %al
	salb %cl, (%edx)
	sal $0x01, %ax
	salw $0x01, (%edx)
	sal %cl, %ax
	salw %cl, (%edx)
	sal $0x01, %eax
	sall $0x01, (%edx)
	sal %cl, %eax
	sall %cl, (%edx)
	sar $0x01, %al
	sarb $0x01, (%edx)
	sar %cl, %al
	sarb %cl, (%edx)
	sar $0x01, %ax
	sarw $0x01, (%edx)
	sar %cl, %ax
	sarw %cl, (%edx)
	sar $0x01, %eax
	sarl $0x01, (%edx)
	sar %cl, %eax
	sarl %cl, (%edx)
	shl $0x01, %al
	shlb $0x01, (%edx)
	shl %cl, %al
	shlb %cl, (%edx)
	shl $0x01, %ax
	shlw $0x01, (%edx)
	shl %cl, %ax
	shlw %cl, (%edx)
	shl $0x01, %eax
	shll $0x01, (%edx)
	shl %cl, %eax
	shll %cl, (%edx)
	shr $0x01, %al
	shrb $0x01, (%edx)
	shr %cl, %al
	shrb %cl, (%edx)
	shr $0x01, %ax
	shrw $0x01, (%edx)
	shr %cl, %ax
	shrw %cl, (%edx)
	shr $0x01, %eax
	shrl $0x01, (%edx)
	shr %cl, %eax
	shrl %cl, (%edx)
	rcl $0x01, %al
	rclb $0x01, (%edx)
	rcl %cl, %al
	rclb %cl, (%edx)
	rcl $0x01, %ax
	rclw $0x01, (%edx)
	rcl %cl, %ax
	rclw %cl, (%edx)
	rcl $0x01, %eax
	rcll $0x01, (%edx)
	rcl %cl, %eax
	rcll %cl, (%edx)
	rcr $0x01, %al
	rcrb $0x01, (%edx)
	rcr %cl, %al
	rcrb %cl, (%edx)
	rcr $0x01, %ax
	rcrw $0x01, (%edx)
	rcr %cl, %ax
	rcrw %cl, (%edx)
	rcr $0x01, %eax
	rcrl $0x01, (%edx)
	rcr %cl, %eax
	rcrl %cl, (%edx)
	rol $0x01, %al
	rolb $0x01, (%edx)
	rol %cl, %al
	rolb %cl, (%edx)
	rol $0x01, %ax
	rolw $0x01, (%edx)
	rol %cl, %ax
	rolw %cl, (%edx)
	rol $0x01, %eax
	roll $0x01, (%edx)
	rol %cl, %eax
	roll %cl, (%edx)
	ror $0x01, %al
	rorb $0x01, (%edx)
	ror %cl, %al
	rorb %cl, (%edx)
	ror $0x01, %ax
	rorw $0x01, (%edx)
	ror %cl, %ax
	rorw %cl, (%edx)
	ror $0x01, %eax
	rorl $0x01, (%edx)
	ror %cl, %eax
	rorl %cl, (%edx)
	add $0x01, %al
	addb $0x01, (%edx)
	add $0x0002, %ax
	addw $0x0002, (%edx)
	add $0x00000003, %eax
	addl $0x00000003, (%edx)
	add $0x01, %ax
	addw $0x01, (%edx)
	add $0x01, %eax
	addl $0x01, (%edx)
	add %bl, %al
	add %bl, (%edx)
	add %bx, %ax
	add %bx, (%edx)
	add %ebx, %eax
	add %ebx, (%edx)
	add (%edx), %al
	add (%edx), %ax
	add (%edx), %eax
	adc $0x01, %al
	adcb $0x01, (%edx)
	adc $0x0002, %ax
	adcw $0x0002, (%edx)
	adc $0x00000003, %eax
	adcl $0x00000003, (%edx)
	adc $0x01, %ax
	adcw $0x01, (%edx)
	adc $0x01, %eax
	adcl $0x01, (%edx)
	adc %bl, %al
	adc %bl, (%edx)
	adc %bx, %ax
	adc %bx, (%edx)
	adc %ebx, %eax
	adc %ebx, (%edx)
	adc (%edx), %al
	adc (%edx), %ax
	adc (%edx), %eax
	sub $0x01, %al
	subb $0x01, (%edx)
	sub $0x0002, %ax
	subw $0x0002, (%edx)
	sub $0x00000003, %eax
	subl $0x00000003, (%edx)
	sub $0x01, %ax
	subw $0x01, (%edx)
	sub $0x01, %eax
	subl $0x01, (%edx)
	sub %bl, %al
	sub %bl, (%edx)
	sub %bx, %ax
	sub %bx, (%edx)
	sub %ebx, %eax
	sub %ebx, (%edx)
	sub (%edx), %al
	sub (%edx), %ax
	sub (%edx), %eax
	sbb $0x01, %al
	sbbb $0x01, (%edx)
	sbb $0x0002, %ax
	sbbw $0x0002, (%edx)
	sbb $0x00000003, %eax
	sbbl $0x00000003, (%edx)
	sbb $0x01, %ax
	sbbw $0x01, (%edx)
	sbb $0x01, %eax
	sbbl $0x01, (%edx)
	sbb %bl, %al
	sbb %bl, (%edx)
	sbb %bx, %ax
	sbb %bx, (%edx)
	sbb %ebx, %eax
	sbb %ebx, (%edx)
	sbb (%edx), %al
	sbb (%edx), %ax
	sbb (%edx), %eax
	cmp $0x01, %al
	cmpb $0x01, (%edx)
	cmp $0x0002, %ax
	cmpw $0x0002, (%edx)
	cmp $0x00000003, %eax
	cmpl $0x00000003, (%edx)
	cmp $0x01, %ax
	cmpw $0x01, (%edx)
	cmp $0x01, %eax
	cmpl $0x01, (%edx)
	cmp %bl, %al
	cmp %bl, (%edx)
	cmp %bx, %ax
	cmp %bx, (%edx)
	cmp %ebx, %eax
	cmp %ebx, (%edx)
	cmp (%edx), %al
	cmp (%edx), %ax
	cmp (%edx), %eax
	and $0x01, %al
	andb $0x01, (%edx)
	and $0x0002, %ax
	andw $0x0002, (%edx)
	and $0x00000003, %eax
	andl $0x00000003, (%edx)
	and $0x01, %ax
	andw $0x01, (%edx)
	and $0x01, %eax
	andl $0x01, (%edx)
	and %bl, %al
	and %bl, (%edx)
	and %bx, %ax
	and %bx, (%edx)
	and %ebx, %eax
	and %ebx, (%edx)
	and (%edx), %al
	and (%edx), %ax
	and (%edx), %eax
	or $0x01, %al
	orb $0x01, (%edx)
	or $0x0002, %ax
	orw $0x0002, (%edx)
	or $0x00000003, %eax
	orl $0x00000003, (%edx)
	or $0x01, %ax
	orw $0x01, (%edx)
	or $0x01, %eax
	orl $0x01, (%edx)
	or %bl, %al
	or %bl, (%edx)
	or %bx, %ax
	or %bx, (%edx)
	or %ebx, %eax
	or %ebx, (%edx)
	or (%edx), %al
	or (%edx), %ax
	or (%edx), %eax
	xor $0x01, %al
	xorb $0x01, (%edx)
	xor $0x0002, %ax
	xorw $0x0002, (%edx)
	xor $0x00000003, %eax
	xorl $0x00000003, (%edx)
	xor $0x01, %ax
	xorw $0x01, (%edx)
	xor $0x01, %eax
	xorl $0x01, (%edx)
	xor %bl, %al
	xor %bl, (%edx)
	xor %bx, %ax
	xor %bx, (%edx)
	xor %ebx, %eax
	xor %ebx, (%edx)
	xor (%edx), %al
	xor (%edx), %ax
	xor (%edx), %eax
	mov %cl, %al
	mov %cl, (%edx)
	mov %cx, %ax
	mov %cx, (%edx)
	mov %ecx, %eax
	mov %ecx, (%edx)
	mov (%edx), %al
	mov (%edx), %ax
	mov (%edx), %eax
	mov %ds, %ax
	mov %ds, (%edx)
	mov %cx, %ds
	mov (%edx), %ds
	mov $0x42, %al
	mov $0x4242, %ax
	mov $0x42424242, %eax
	movb $0x42, (%edx)
	movw $0x4242, (%edx)
	movl $0x42424242, (%edx)
	mov %cr0, %eax
	mov %ecx, %cr0
	mov %dr0, %eax
	mov %ecx, %dr0
