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
	movntdqa (%eax), %xmm0
	vbroadcastsd (%eax), %ymm0
	vbroadcastf128 (%eax), %ymm0
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
	vbroadcastss (%eax), %xmm0
	vbroadcastss (%eax), %ymm0
	vextractf128 $0xFF, %ymm0, %xmm0
	vextractf128 $0xFF, %ymm0, (%eax)
	vinsertf128 $0xFF, %xmm0, %ymm1, %ymm0
	vinsertf128 $0xFF, (%eax), %ymm1, %ymm0
