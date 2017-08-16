# void execute_cpuid(size_t RAX_value, size_t RCX_value, size_t *pOut)
# RAX_value is in %rdi
# RCX_value is in %rsi
# pOut is in %rdx
.global execute_cpuid
.section .text
execute_cpuid:
	push %rbx
	mov %rdx, %r8
	mov %rdi, %rax
	mov %rsi, %rcx
	cpuid
	mov %rax, (%r8)
	mov %rbx, 8(%r8)
	mov %rcx, 16(%r8)
	mov %rdx, 24(%r8)
	pop %rbx
	ret
