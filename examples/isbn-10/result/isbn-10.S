# uint8_t isbn10(const void *p)
# p is in %rcx
.global isbn10
.section .text
isbn10:
	xor %rax, %rax
	ret
