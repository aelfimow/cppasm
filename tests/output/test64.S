.section .text
# MOV instruction
MOV_instruction:
	mov $0xAA, %al
	mov $0xAA, %ah
	mov $0xAA, %bl
	mov $0xAA, %bh
	mov $0xAA, %cl
	mov $0xAA, %ch
	mov $0xAA, %dl
	mov $0xAA, %dh
	mov $0xAA, %sil
	mov $0xAA, %dil
	mov $0xAA, %spl
	mov $0xAA, %r8b
	mov $0xAA, %r9b
	mov $0xAA, %r10b
	mov $0xAA, %r11b
	mov $0xAA, %r12b
	mov $0xAA, %r13b
	mov $0xAA, %r14b
	mov $0xAA, %r15b
	mov $0x1122, %ax
	mov $0x1122, %bx
	mov $0x1122, %cx
	mov $0x1122, %dx
	mov $0x1122, %bp
	mov $0x1122, %si
	mov $0x1122, %di
	mov $0x1122, %sp
	mov $0x1122, %r8w
	mov $0x1122, %r9w
	mov $0x1122, %r10w
	mov $0x1122, %r11w
	mov $0x1122, %r12w
	mov $0x1122, %r13w
	mov $0x1122, %r14w
	mov $0x1122, %r15w
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
	mov $0x11223344, %r8d
	mov $0x11223344, %r9d
	mov $0x11223344, %r10d
	mov $0x11223344, %r11d
	mov $0x11223344, %r12d
	mov $0x11223344, %r13d
	mov $0x11223344, %r14d
	mov $0x11223344, %r15d
	mov %rax, %cr0
	mov %rax, %cr1
	mov %rax, %cr2
	mov %rax, %cr3
	mov %rax, %cr4
	mov %rax, %cr5
	mov %rax, %cr6
	mov %rax, %cr7
	mov %rax, %cr8
	mov %cr0, %rax
	mov %cr1, %rax
	mov %cr2, %rax
	mov %cr3, %rax
	mov %cr4, %rax
	mov %cr5, %rax
	mov %cr6, %rax
	mov %cr7, %rax
	mov %cr8, %rax
	mov %rax, %dr0
	mov %rax, %dr1
	mov %rax, %dr2
	mov %rax, %dr3
	mov %rax, %dr4
	mov %rax, %dr5
	mov %rax, %dr6
	mov %rax, %dr7
	mov %dr0, %rax
	mov %dr1, %rax
	mov %dr2, %rax
	mov %dr3, %rax
	mov %dr4, %rax
	mov %dr5, %rax
	mov %dr6, %rax
	mov %dr7, %rax
	mov $0x1122334455667788, %rax
	mov $0x1122334455667788, %rbx
	mov $0x1122334455667788, %rcx
	mov $0x1122334455667788, %rdx
	mov $0x1122334455667788, %rbp
	mov $0x1122334455667788, %rsi
	mov $0x1122334455667788, %rdi
	mov $0x1122334455667788, %rsp
	mov $0x1122334455667788, %r8
	mov $0x1122334455667788, %r9
	mov $0x1122334455667788, %r10
	mov $0x1122334455667788, %r11
	mov $0x1122334455667788, %r12
	mov $0x1122334455667788, %r13
	mov $0x1122334455667788, %r14
	mov $0x1122334455667788, %r15
	mov (%rbx, %rcx), %rax
	mov (%rbx, %rcx, 1), %rax
	mov (%rbx, %rcx, 2), %rax
	mov (%rbx, %rcx, 4), %rax
	mov (%rbx, %rcx, 8), %rax
# ADD instruction
	add $0x11, %al
	add $0x1122, %ax
	add $0x11223344, %eax
	add $0x11223344, %rax
	add (%rbx, %rcx), %dl
	add (%rcx, %rdx), %dx
	add (%rdx, %rsi), %edx
	add (%rsi, %rdi), %rdx
	add %dl, (%rbx, %rcx)
	add %dx, (%rcx, %rdx)
	add %edx, (%rdx, %rsi)
	add %rdx, (%rsi, %rdi)
# ADC instruction
	adc $0x11, %al
	adc $0x1122, %ax
	adc $0x11223344, %eax
	adc $0x11223344, %rax
	adc (%rbx, %rcx), %dl
	adc (%rcx, %rdx), %dx
	adc (%rdx, %rsi), %edx
	adc (%rsi, %rdi), %rdx
	adc %dl, (%rbx, %rcx)
	adc %dx, (%rcx, %rdx)
	adc %edx, (%rdx, %rsi)
	adc %rdx, (%rsi, %rdi)
# SUB instruction
	sub $0x11, %al
	sub $0x1122, %ax
	sub $0x11223344, %eax
	sub $0x11223344, %rax
	sub (%rbx, %rcx), %dl
	sub (%rcx, %rdx), %dx
	sub (%rdx, %rsi), %edx
	sub (%rsi, %rdi), %rdx
	sub %dl, (%rbx, %rcx)
	sub %dx, (%rcx, %rdx)
	sub %edx, (%rdx, %rsi)
	sub %rdx, (%rsi, %rdi)
# SBB instruction
	sbb $0x11, %al
	sbb $0x1122, %ax
	sbb $0x11223344, %eax
	sbb $0x11223344, %rax
	sbb (%rbx, %rcx), %dl
	sbb (%rcx, %rdx), %dx
	sbb (%rdx, %rsi), %edx
	sbb (%rsi, %rdi), %rdx
	sbb %dl, (%rbx, %rcx)
	sbb %dx, (%rcx, %rdx)
	sbb %edx, (%rdx, %rsi)
	sbb %rdx, (%rsi, %rdi)
# CMP instruction
	cmp $0x11, %al
	cmp $0x1122, %ax
	cmp $0x11223344, %eax
	cmp $0x11223344, %rax
	cmp (%rbx, %rcx), %dl
	cmp (%rcx, %rdx), %dx
	cmp (%rdx, %rsi), %edx
	cmp (%rsi, %rdi), %rdx
	cmp %dl, (%rbx, %rcx)
	cmp %dx, (%rcx, %rdx)
	cmp %edx, (%rdx, %rsi)
	cmp %rdx, (%rsi, %rdi)
# AND instruction
	and $0x11, %al
	and $0x1122, %ax
	and $0x11223344, %eax
	and $0x11223344, %rax
	and (%rbx, %rcx), %dl
	and (%rcx, %rdx), %dx
	and (%rdx, %rsi), %edx
	and (%rsi, %rdi), %rdx
	and %dl, (%rbx, %rcx)
	and %dx, (%rcx, %rdx)
	and %edx, (%rdx, %rsi)
	and %rdx, (%rsi, %rdi)
# OR instruction
	or $0x11, %al
	or $0x1122, %ax
	or $0x11223344, %eax
	or $0x11223344, %rax
	or (%rbx, %rcx), %dl
	or (%rcx, %rdx), %dx
	or (%rdx, %rsi), %edx
	or (%rsi, %rdi), %rdx
	or %dl, (%rbx, %rcx)
	or %dx, (%rcx, %rdx)
	or %edx, (%rdx, %rsi)
	or %rdx, (%rsi, %rdi)
# XOR instruction
	xor $0x11, %al
	xor $0x1122, %ax
	xor $0x11223344, %eax
	xor $0x11223344, %rax
	xor (%rbx, %rcx), %dl
	xor (%rcx, %rdx), %dx
	xor (%rdx, %rsi), %edx
	xor (%rsi, %rdi), %rdx
	xor %dl, (%rbx, %rcx)
	xor %dx, (%rcx, %rdx)
	xor %edx, (%rdx, %rsi)
	xor %rdx, (%rsi, %rdi)
	rep movsb
	rep movsw
	rep movsl
	rep movsq
	rep cmpsb
	rep cmpsw
	rep cmpsl
	rep cmpsq
	rep scasb
	rep scasw
	rep scasl
	rep scasq
	rep lodsb
	rep lodsw
	rep lodsl
	rep lodsq
	rep stosb
	rep stosw
	rep stosl
	rep stosq
	repe movsb
	repe movsw
	repe movsl
	repe movsq
	repe cmpsb
	repe cmpsw
	repe cmpsl
	repe cmpsq
	repe scasb
	repe scasw
	repe scasl
	repe scasq
	repe lodsb
	repe lodsw
	repe lodsl
	repe lodsq
	repe stosb
	repe stosw
	repe stosl
	repe stosq
	repz movsb
	repz movsw
	repz movsl
	repz movsq
	repz cmpsb
	repz cmpsw
	repz cmpsl
	repz cmpsq
	repz scasb
	repz scasw
	repz scasl
	repz scasq
	repz lodsb
	repz lodsw
	repz lodsl
	repz lodsq
	repz stosb
	repz stosw
	repz stosl
	repz stosq
	repne movsb
	repne movsw
	repne movsl
	repne movsq
	repne cmpsb
	repne cmpsw
	repne cmpsl
	repne cmpsq
	repne scasb
	repne scasw
	repne scasl
	repne scasq
	repne lodsb
	repne lodsw
	repne lodsl
	repne lodsq
	repne stosb
	repne stosw
	repne stosl
	repne stosq
	repnz movsb
	repnz movsw
	repnz movsl
	repnz movsq
	repnz cmpsb
	repnz cmpsw
	repnz cmpsl
	repnz cmpsq
	repnz scasb
	repnz scasw
	repnz scasl
	repnz scasq
	repnz lodsb
	repnz lodsw
	repnz lodsl
	repnz lodsq
	repnz stosb
	repnz stosw
	repnz stosl
	repnz stosq
	fisttp (%rax)
	fisttpl (%rbx)
	fisttpll (%rcx)
	lddqu (%rax), %xmm0
	addsubps %xmm1, %xmm0
	addsubpd %xmm1, %xmm0
	addsubps (%rax), %xmm0
	addsubpd (%rax), %xmm0
	haddps %xmm1, %xmm0
	hsubps %xmm1, %xmm0
	haddpd %xmm1, %xmm0
	hsubpd %xmm1, %xmm0
	haddps (%rax), %xmm0
	hsubps (%rax), %xmm0
	haddpd (%rax), %xmm0
	hsubpd (%rax), %xmm0
	movshdup %xmm1, %xmm0
	movshdup (%rax), %xmm0
	movsldup %xmm1, %xmm0
	movsldup (%rax), %xmm0
	movddup %xmm1, %xmm0
	movddup (%rax), %xmm0
	monitor
	mwait
	cwtd
	cltd
	cqto
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
	popfq
	stc
	sti
	std
	.byte 0x0F, 0xFF
	ud1
	ud2
	cpuid
	xlat
	fprem
	fprem1
	fabs
	fchs
	frndint
	fscale
	fsqrt
	fxtract
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
	syscall
	sysret
	vfmadd132pd %xmm2, %xmm1, %xmm0
	vfmadd213pd %xmm2, %xmm1, %xmm0
	vfmadd231pd %xmm2, %xmm1, %xmm0
	vfmadd132ps %xmm2, %xmm1, %xmm0
	vfmadd213ps %xmm2, %xmm1, %xmm0
	vfmadd231ps %xmm2, %xmm1, %xmm0
	vfmaddsub132pd %xmm2, %xmm1, %xmm0
	vfmaddsub213pd %xmm2, %xmm1, %xmm0
	vfmaddsub231pd %xmm2, %xmm1, %xmm0
	vfmaddsub132ps %xmm2, %xmm1, %xmm0
	vfmaddsub213ps %xmm2, %xmm1, %xmm0
	vfmaddsub231ps %xmm2, %xmm1, %xmm0
	vfmsubadd132pd %xmm2, %xmm1, %xmm0
	vfmsubadd213pd %xmm2, %xmm1, %xmm0
	vfmsubadd231pd %xmm2, %xmm1, %xmm0
	vfmsubadd132ps %xmm2, %xmm1, %xmm0
	vfmsubadd213ps %xmm2, %xmm1, %xmm0
	vfmsubadd231ps %xmm2, %xmm1, %xmm0
	vfmsub132pd %xmm2, %xmm1, %xmm0
	vfmsub213pd %xmm2, %xmm1, %xmm0
	vfmsub231pd %xmm2, %xmm1, %xmm0
	vfmsub132ps %xmm2, %xmm1, %xmm0
	vfmsub213ps %xmm2, %xmm1, %xmm0
	vfmsub231ps %xmm2, %xmm1, %xmm0
	vfnmadd132pd %xmm2, %xmm1, %xmm0
	vfnmadd213pd %xmm2, %xmm1, %xmm0
	vfnmadd231pd %xmm2, %xmm1, %xmm0
	vfnmadd132ps %xmm2, %xmm1, %xmm0
	vfnmadd213ps %xmm2, %xmm1, %xmm0
	vfnmadd231ps %xmm2, %xmm1, %xmm0
	vfnmsub132pd %xmm2, %xmm1, %xmm0
	vfnmsub213pd %xmm2, %xmm1, %xmm0
	vfnmsub231pd %xmm2, %xmm1, %xmm0
	vfnmsub132ps %xmm2, %xmm1, %xmm0
	vfnmsub213ps %xmm2, %xmm1, %xmm0
	vfnmsub231ps %xmm2, %xmm1, %xmm0
	vfmadd132pd %ymm2, %ymm1, %ymm0
	vfmadd213pd %ymm2, %ymm1, %ymm0
	vfmadd231pd %ymm2, %ymm1, %ymm0
	vfmadd132ps %ymm2, %ymm1, %ymm0
	vfmadd213ps %ymm2, %ymm1, %ymm0
	vfmadd231ps %ymm2, %ymm1, %ymm0
	vfmaddsub132pd %ymm2, %ymm1, %ymm0
	vfmaddsub213pd %ymm2, %ymm1, %ymm0
	vfmaddsub231pd %ymm2, %ymm1, %ymm0
	vfmaddsub132ps %ymm2, %ymm1, %ymm0
	vfmaddsub213ps %ymm2, %ymm1, %ymm0
	vfmaddsub231ps %ymm2, %ymm1, %ymm0
	vfmsubadd132pd %ymm2, %ymm1, %ymm0
	vfmsubadd213pd %ymm2, %ymm1, %ymm0
	vfmsubadd231pd %ymm2, %ymm1, %ymm0
	vfmsubadd132ps %ymm2, %ymm1, %ymm0
	vfmsubadd213ps %ymm2, %ymm1, %ymm0
	vfmsubadd231ps %ymm2, %ymm1, %ymm0
	vfmsub132pd %ymm2, %ymm1, %ymm0
	vfmsub213pd %ymm2, %ymm1, %ymm0
	vfmsub231pd %ymm2, %ymm1, %ymm0
	vfmsub132ps %ymm2, %ymm1, %ymm0
	vfmsub213ps %ymm2, %ymm1, %ymm0
	vfmsub231ps %ymm2, %ymm1, %ymm0
	vfnmadd132pd %ymm2, %ymm1, %ymm0
	vfnmadd213pd %ymm2, %ymm1, %ymm0
	vfnmadd231pd %ymm2, %ymm1, %ymm0
	vfnmadd132ps %ymm2, %ymm1, %ymm0
	vfnmadd213ps %ymm2, %ymm1, %ymm0
	vfnmadd231ps %ymm2, %ymm1, %ymm0
	vfnmsub132pd %ymm2, %ymm1, %ymm0
	vfnmsub213pd %ymm2, %ymm1, %ymm0
	vfnmsub231pd %ymm2, %ymm1, %ymm0
	vfnmsub132ps %ymm2, %ymm1, %ymm0
	vfnmsub213ps %ymm2, %ymm1, %ymm0
	vfnmsub231ps %ymm2, %ymm1, %ymm0
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
	clflush (%rax)
	lgdt (%rax)
	lidt (%rax)
	sidt (%rax)
	invlpg (%rax)
	xrstors (%rax)
	xrstors64 (%rax)
	xsaves (%rax)
	xsaves64 (%rax)
