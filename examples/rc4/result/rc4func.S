.section .text
.global rc4init
rc4init:
# ssize_t rc4init(const char key[], size_t L, char sbox[])
# key: %rcx
# L: %rdx
# sbox: %r8
	mov $0x0808080808080808, %r9
	mov $0x0706050403020100, %rax
# Initialize sbox
	mov %rax, (%r8)
	add %r9, %rax
	mov %rax, 8(%r8)
	add %r9, %rax
	mov %rax, 16(%r8)
	add %r9, %rax
	mov %rax, 24(%r8)
	add %r9, %rax
	mov %rax, 32(%r8)
	add %r9, %rax
	mov %rax, 40(%r8)
	add %r9, %rax
	mov %rax, 48(%r8)
	add %r9, %rax
	mov %rax, 56(%r8)
	add %r9, %rax
	mov %rax, 64(%r8)
	add %r9, %rax
	mov %rax, 72(%r8)
	add %r9, %rax
	mov %rax, 80(%r8)
	add %r9, %rax
	mov %rax, 88(%r8)
	add %r9, %rax
	mov %rax, 96(%r8)
	add %r9, %rax
	mov %rax, 104(%r8)
	add %r9, %rax
	mov %rax, 112(%r8)
	add %r9, %rax
	mov %rax, 120(%r8)
	add %r9, %rax
	mov %rax, 128(%r8)
	add %r9, %rax
	mov %rax, 136(%r8)
	add %r9, %rax
	mov %rax, 144(%r8)
	add %r9, %rax
	mov %rax, 152(%r8)
	add %r9, %rax
	mov %rax, 160(%r8)
	add %r9, %rax
	mov %rax, 168(%r8)
	add %r9, %rax
	mov %rax, 176(%r8)
	add %r9, %rax
	mov %rax, 184(%r8)
	add %r9, %rax
	mov %rax, 192(%r8)
	add %r9, %rax
	mov %rax, 200(%r8)
	add %r9, %rax
	mov %rax, 208(%r8)
	add %r9, %rax
	mov %rax, 216(%r8)
	add %r9, %rax
	mov %rax, 224(%r8)
	add %r9, %rax
	mov %rax, 232(%r8)
	add %r9, %rax
	mov %rax, 240(%r8)
	add %r9, %rax
	mov %rax, 248(%r8)
	add %r9, %rax
	ret
.global rc4run
rc4run:
# ssize_t rc4run(const char buf_in[], size_t len, char buf_out[], char sbox[])
# buf_in: %rcx
# len: %rdx
# buf_out: %r8
# sbox: %r9
	ret
