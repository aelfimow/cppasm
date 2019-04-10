.section .text
# void div_arithm(struct div_param *p)
# p is in %rcx
.global div_arithm
div_arithm:
	mov (%rcx), %rax
	mov 8(%rcx), %rdx
	mov 16(%rcx), %r9
	div %r9
	mov %rax, 24(%rcx)
	mov %rdx, 32(%rcx)
	ret
