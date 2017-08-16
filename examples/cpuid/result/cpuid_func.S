# void execute_cpuid(size_t RAX_value, size_t RCX_value, size_t *pOut)
# RAX_value is in %rcx
# RCX_value is in %rdx
# pOut is in %r8
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
