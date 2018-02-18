.section .text
.global rc4init
rc4init:
# ssize_t rc4init(const char key[], size_t L, char sbox[])
# key: %rcx
# L: %rdx
# sbox: %r8
	ret
.global rc4run
rc4run:
# ssize_t rc4run(const char buf_in[], size_t len, char buf_out[], char sbox[])
# buf_in: %rcx
# len: %rdx
# buf_out: %r8
# sbox: %r9
	ret
