.section .text
	mov $0xAA, %al
	mov $0xAA, %ah
	mov $0xAA, %bl
	mov $0xAA, %bh
	mov $0xAA, %cl
	mov $0xAA, %ch
	mov $0xAA, %dl
	mov $0xAA, %dh
	mov $0x1122, %ax
	mov $0x1122, %bx
	mov $0x1122, %cx
	mov $0x1122, %dx
	mov $0x1122, %bp
	mov $0x1122, %si
	mov $0x1122, %di
	mov $0x1122, %sp
	mov %ax, %cs
	mov %ax, %ds
	mov %ax, %ss
	mov %ax, %es
	mov %ax, %fs
	mov %ax, %gs
	mov $0x11223344, %eax
	mov $0x11223344, %ebx
	mov $0x11223344, %ecx
	mov $0x11223344, %edx
	mov $0x11223344, %ebp
	mov $0x11223344, %esi
	mov $0x11223344, %edi
	mov $0x11223344, %esp
	mov %eax, %cr0
	mov %eax, %cr1
	mov %eax, %cr2
	mov %eax, %cr3
	mov %eax, %cr4
	mov %eax, %cr5
	mov %eax, %cr6
	mov %eax, %cr7
	mov %eax, %cr8
	mov %eax, %dr0
	mov %eax, %dr1
	mov %eax, %dr2
	mov %eax, %dr3
	mov %eax, %dr4
	mov %eax, %dr5
	mov %eax, %dr6
	mov %eax, %dr7
	aaa
	aad
	aad $0x08
	aam
	aam $0x08
	aas
	monitor
	rep movsb
	rep movsw
	rep movsl
	rep cmpsb
	rep cmpsw
	rep cmpsl
	rep scasb
	rep scasw
	rep scasl
	rep lodsb
	rep lodsw
	rep lodsl
	rep stosb
	rep stosw
	rep stosl
	repz movsb
	repz movsw
	repz movsl
	repz cmpsb
	repz cmpsw
	repz cmpsl
	repz scasb
	repz scasw
	repz scasl
	repz lodsb
	repz lodsw
	repz lodsl
	repz stosb
	repz stosw
	repz stosl
	repe movsb
	repe movsw
	repe movsl
	repe cmpsb
	repe cmpsw
	repe cmpsl
	repe scasb
	repe scasw
	repe scasl
	repe lodsb
	repe lodsw
	repe lodsl
	repe stosb
	repe stosw
	repe stosl
	repnz movsb
	repnz movsw
	repnz movsl
	repnz cmpsb
	repnz cmpsw
	repnz cmpsl
	repnz scasb
	repnz scasw
	repnz scasl
	repnz lodsb
	repnz lodsw
	repnz lodsl
	repnz stosb
	repnz stosw
	repnz stosl
	repne movsb
	repne movsw
	repne movsl
	repne cmpsb
	repne cmpsw
	repne cmpsl
	repne scasb
	repne scasw
	repne scasl
	repne lodsb
	repne lodsw
	repne lodsl
	repne stosb
	repne stosw
	repne stosl
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
