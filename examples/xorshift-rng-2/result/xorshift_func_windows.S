.section .text
# uint64_t xorshift_func(uint64_t triple, uint64_t rng_state)
# rng_state is in %rdx
# Return value is in %rax
.global xorshift_func
xorshift_func:
	mov %rdx, %rax
	shl %cl, %rdx
	xor %rdx, %rax
	shr $0x08, %rcx
	mov %rax, %rdx
	shr %cl, %rax
	xor %rax, %rdx
	shr $0x08, %rcx
	mov %rdx, %rax
	shl %cl, %rdx
	xor %rdx, %rax
	ret
