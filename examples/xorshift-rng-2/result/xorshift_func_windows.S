.section .text
# uint64_t xorshift_func1(uint64_t triple, uint64_t rng_state)
# rng_state is in %rdx
# Return value is in %rax
.global xorshift_func1
xorshift_func1:
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
# uint64_t xorshift_func2(uint64_t triple, uint64_t rng_state)
# rng_state is in %rdx
# Return value is in %rax
.global xorshift_func2
xorshift_func2:
	mov %rdx, %rax
	shr %cl, %rdx
	xor %rdx, %rax
	shr $0x08, %rcx
	mov %rax, %rdx
	shl %cl, %rax
	xor %rax, %rdx
	shr $0x08, %rcx
	mov %rdx, %rax
	shr %cl, %rdx
	xor %rdx, %rax
	ret
# uint64_t xorshift_func3(uint64_t triple, uint64_t rng_state)
# rng_state is in %rdx
# Return value is in %rax
.global xorshift_func3
xorshift_func3:
	mov %rdx, %rax
	shl %cl, %rdx
	xor %rdx, %rax
	shr $0x08, %rcx
	mov %rax, %rdx
	shl %cl, %rax
	xor %rax, %rdx
	shr $0x08, %rcx
	mov %rdx, %rax
	shr %cl, %rdx
	xor %rdx, %rax
	ret
# uint64_t xorshift_func4(uint64_t triple, uint64_t rng_state)
# rng_state is in %rdx
# Return value is in %rax
.global xorshift_func4
xorshift_func4:
	mov %rdx, %rax
	shr %cl, %rdx
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
