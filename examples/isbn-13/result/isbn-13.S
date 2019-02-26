# uint8_t isbn13(const void *p)
# p is in %rcx
.global isbn13
.section .text
isbn13:
# Initialize total sum
	xor %rax, %rax
# Load 12 ISBN numbers
	mov (%rcx), %r8
	mov 8(%rcx), %r9d
# Sum up first 8 numbers
	movzbq %r8b, %r10
	add %r10, %rax
	shr $0x08, %r8
	movzbq %r8b, %r10
	movzbq %r8b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
	movzbq %r8b, %r10
	add %r10, %rax
	shr $0x08, %r8
	movzbq %r8b, %r10
	movzbq %r8b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
	movzbq %r8b, %r10
	add %r10, %rax
	shr $0x08, %r8
	movzbq %r8b, %r10
	movzbq %r8b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
	movzbq %r8b, %r10
	add %r10, %rax
	shr $0x08, %r8
	movzbq %r8b, %r10
	movzbq %r8b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
# Sum up next 4 numbers
	movzbq %r9b, %r10
	add %r10, %rax
	shr $0x08, %r9
	movzbq %r9b, %r10
	movzbq %r9b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
	movzbq %r9b, %r10
	add %r10, %rax
	shr $0x08, %r9
	movzbq %r9b, %r10
	movzbq %r9b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
	movzbq %r9b, %r10
	add %r10, %rax
	shr $0x08, %r9
	movzbq %r9b, %r10
	movzbq %r9b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
	movzbq %r9b, %r10
	add %r10, %rax
	shr $0x08, %r9
	movzbq %r9b, %r10
	movzbq %r9b, %r11
	shl $0x01, %r10
	add %r11, %r10
	add %r10, %rax
# Compute ISBN
	mov $0x000000000000000A, %r10
	xor %rdx, %rdx
	div %r10
	mov %r10, %rax
	sub %rdx, %rax
	xor %rdx, %rdx
	div %r10
	mov %rdx, %rax
	ret
