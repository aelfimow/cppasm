# uint64_t rdtsc_func(void)
.global rdtsc_func
.section .text
rdtsc_func:
	push %rbx
	xor %rax, %rax
	cpuid
	pop %rbx
	rdtsc
	shl $0x20, %rdx
	xor %rdx, %rax
	retq
