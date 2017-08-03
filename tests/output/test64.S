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
	adc $0x11, %al
	adc $0x11, %bl
	adcb $0x11, (%eax, %ebx)
	adc %cl, (%eax, %ebx)
	adc (%eax, %ebx), %cl
	adc $0x1122, %ax
	adc $0x1122, %bx
	adcw $0x1122, (%eax, %ebx)
	adcw $0x42, (%eax, %ebx)
	adc %ax, (%eax, %ebx)
	adc (%eax, %ebx), %ax
	adc $0x42, %dx
	adc $0x11223344, %eax
	adc $0x11223344, %ebx
	adcl $0x11223344, (%eax, %ebx)
	adcl $0x42, (%eax, %ebx)
	adc %ecx, (%eax, %ebx)
	adc (%eax, %ebx), %ecx
	adc $0x42, %ecx
	adc $0x11223344, %rax
	adc $0x11223344, %rbx
	adcq $0x11223344, (%rax, %rbx)
	adcq $0x42, (%rax, %rbx)
	adc $0x42, %rdx
	adc %rcx, (%rax, %rbx)
	adc (%rax, %rbx), %rcx
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
