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
	xor %r9, %r9
	xor %r10, %r10
loop2_s:
# Compute (j += s[i])
	movzbq (%r8, %rax), %r11
	add %r11, %r9
	movq %r11, %xmm0
# Compute (j += k[i mod L])
	movzbq (%rcx, %r10), %r11
	add %r11, %r9
# Compute (j mod 256)
	xor %r11, %r11
	mov %r9b, %r11b
	xchg %r11, %r9
# Swap s[i] with s[j]
	movzbq (%r8, %r9), %r11
	mov %r11b, (%r8, %rax)
	movq %xmm0, %r11
	mov %r11b, (%r8, %r9)
# Compute (i mod L)
	inc %r10
	xor %r11, %r11
	cmp %r10, %rdx
	cmove %r11, %r10
# Next i
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
