# size_t collatz_length(size_t value)
# value is in %rdi
.global collatz_length
.section .text
collatz_length:
	xor %rax, %rax
	ret
