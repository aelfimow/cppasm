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
	vperm2f128 $0xFF, %ymm2, %ymm1, %ymm0
	vperm2f128 $0xFF, (%eax), %ymm1, %ymm0
	pextrd $0xFF, %xmm0, %eax
	pextrd $0xFF, %xmm0, (%eax)
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
