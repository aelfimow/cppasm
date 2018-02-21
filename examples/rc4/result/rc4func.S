.section .text
.global rc4init
rc4init:
# void rc4init(const char key[], size_t L, char sbox[])
# key: %rcx
# L: %rdx
# sbox: %r8
# Initialize sbox[]
# for i = 0 to 255
#    sbox[i] := i
	xor %rax, %rax
	mov $0x0000000000000020, %r11
	mov $0x0808080808080808, %r9
	mov $0x0706050403020100, %r10
loop1_s:
	cmp %r11, %rax
	je loop1_e
	mov %r10, (%r8, %rax, 8)
	add %r9, %r10
	inc %rax
	jmp loop1_s
loop1_e:
# Scramble sbox[]
# j := 0
# for i = 0 to 255
#    j := (j + s[i] + k[i mod L]) mod 256
#    swap s[i] with s[j]
	xor %rax, %rax
loop2_s:
	inc %rax
	test %al, %al
	jnz loop2_s
	ret
.global rc4run
rc4run:
# ssize_t rc4run(const char buf_in[], size_t len, char buf_out[], char sbox[])
# buf_in: %rcx
# len: %rdx
# buf_out: %r8
# sbox: %r9
	ret
