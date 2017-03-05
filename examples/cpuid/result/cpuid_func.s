.global execute_cpuid
.section .text
execute_cpuid:
	push %rbx
	mov %ecx, %eax
	mov %edx, %ecx
	cpuid
	mov %rax, (%r8)
	mov %rbx, (%r8)
	mov %rcx, (%r8)
	mov %rdx, (%r8)
	pop %rbx
	retq
