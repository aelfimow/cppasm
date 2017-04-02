# void clflush_func(void *p1, void *p2)
# p1 is in %rcx
# p2 is in %rdx
.global clflush_func
.section .text
clflush_func:
	mov (%rcx), %rax
	mov (%rcx), %rax
	mov (%rcx), %rax
	mov (%rdx), %rax
	mov (%rdx), %rax
	mov (%rdx), %rax
	clflush (%rcx)
	clflush (%rdx)
	retq
