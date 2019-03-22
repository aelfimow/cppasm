# size_t collatz_length(size_t value)
# value is in %rcx
.global collatz_length
.section .text
collatz_length:
	xor %rax, %rax
	mov $0x0000000000000001, %r9
start:
	cmp %r9, %rcx
	je end
# Compute (3n + 1) using LEA
	lea 1(%rcx, %rcx, 2), %rdx
# Compute (n / 2)
	mov %rcx, %r8
	shr $0x01, %r8
	bt $0x00, %rcx
	cmovc %rdx, %rcx
	cmovnc %r8, %rcx
# Computation performed - count it
	inc %rax
	jmp start
end:
	ret
