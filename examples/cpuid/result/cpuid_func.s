# void execute_cpuid(uint32_t cmd1, uint32_t cmd2, uint32_t *p_output)
# cmd1 is in %ecx
# cmd2 is in %edx
# p_output is in %r8
.global execute_cpuid
.section .text
execute_cpuid:
	push %rbx
	mov %ecx, %eax
	mov %edx, %ecx
	cpuid
	mov %rax, (%r8)
	mov %rbx, 8(%r8)
	mov %rcx, 16(%r8)
	mov %rdx, 24(%r8)
	pop %rbx
	retq
