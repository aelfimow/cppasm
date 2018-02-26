.section .text
# void rc4init(const void *key, size_t L, void *sbox)
.global rc4init
rc4init:
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
# void rc4run(const void *buf_in, size_t len, void *buf_out, void *sbox)
.global rc4run
rc4run:
# buf_in: %rcx
# len: %rdx
# buf_out: %r8
# sbox: %r9
	xor %rax, %rax
	xor %r10, %r10
	movq %r10, %xmm0
	movq %r10, %xmm1
rc4run_loop1_s:
	cmp %rax, %rdx
	je rc4run_loop1_e
# i := (i + 1) mod 256
	movq %xmm0, %r10
	inc %r10
	xor %r11, %r11
	mov %r10b, %r11b
	movq %r11, %xmm0
# Load s[i]
	movzbq (%r9, %r11), %r10
# j := (j + s[i]) mod 256
	movq %xmm1, %r11
	movq %r10, %xmm2
	add %r11, %r10
	xor %r11, %r11
	mov %r10b, %r11b
	movq %r11, %xmm1
# Load s[j] and save it in s[i]
	movzbq (%r9, %r11), %r10
	movq %r10, %xmm3
	movq %xmm0, %r11
	mov %r10b, (%r9, %r11)
# Save s[i] in s[j]
	movq %xmm1, %r11
	movq %xmm2, %r10
	mov %r10b, (%r9, %r11)
# Compute (s[i] + s[j]) mod 256
	movq %xmm3, %r11
	add %r11, %r10
	xor %r11, %r11
	mov %r10b, %r11b
# Load s[(s[i] + s[j]) mod 256]
	movzbq (%r9, %r11), %r10
# Load buf_in[n]
	movzbq (%rcx, %rax), %r11
# Encrypt
	xor %r11, %r10
# Save encrypted value
	mov %r10b, (%r8, %rax)
# Next n
	inc %rax
	jmp rc4run_loop1_s
rc4run_loop1_e:
	ret
