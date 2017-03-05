.global execute_cpuid
.section .text
execute_cpuid:
	push %rbx
	mov %ecx, %eax
	mov %edx, %ecx
	cpuid
	retq
