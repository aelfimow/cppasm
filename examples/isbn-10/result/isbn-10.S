# uint8_t isbn10(const void *p)
# p is in %rcx
.global isbn10
.section .text
isbn10:
# Load numbers of ISBN
	mov (%rcx), %r8
	movzbq 8(%rcx), %r9
# Index to be incremented from 1 to 9
	xor %r10, %r10
	inc %r10
# Initial value for sum is 0
	xor %rcx, %rcx
# Compute sum for first 8 numbers
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
	movzbq %r8b, %rax
	mul %r10
	shr $0x08, %r8
	inc %r10
	add %rax, %rcx
# Compute sum for remaining 9-th number
	mov %r9, %rax
	mul %r10
	add %rax, %rcx
# Update counter twice to get 11
	inc %r10
	inc %r10
# Compute ISBN
	mov %rcx, %rax
	div %r10
	mov %rdx, %rax
	ret
