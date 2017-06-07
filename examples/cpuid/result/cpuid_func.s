# void execute_cpuid(uint64_t cmd1, uint64_t cmd2, uint64_t *p_output)
# cmd1 is in %rcx
# cmd2 is in %rdx
# p_output is in %r8
.global execute_cpuid
.section .text
execute_cpuid:
	push %rbx
	mov %rcx, %rax
	mov %rdx, %rcx
	cpuid
	mov %rax, (%r8)
	mov %rbx, 8(%r8)
	mov %rcx, 16(%r8)
	mov %rdx, 24(%r8)
	pop %rbx
	ret
