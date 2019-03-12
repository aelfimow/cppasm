# void clflush_func(void *p1, void *p2)
# p1 is in %rdi
# p2 is in %rsi
.global clflush_func
.section .text
clflush_func:
	mov (%rdi), %rax
	mov (%rdi), %rax
	mov (%rdi), %rax
	mov (%rsi), %rax
	mov (%rsi), %rax
	mov (%rsi), %rax
	clflush (%rdi)
	clflush (%rsi)
	ret
