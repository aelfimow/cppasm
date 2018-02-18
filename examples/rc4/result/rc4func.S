.section .text
.global rc4init
rc4init:
# void rc4init(const char key[], size_t L, char sbox[])
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
	xor %r9, %r9
	xor %r10, %r10
	movzbq (%r8), %r11
	add %r10, %r11
	mov $0x0000000000000000, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq (%r8), %r11
	mov %al, (%r8)
	mov %r11b, (%r8, %r10)
	movzbq 1(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000001, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 1(%r8), %r11
	mov %al, 1(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 2(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000002, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 2(%r8), %r11
	mov %al, 2(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 3(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000003, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 3(%r8), %r11
	mov %al, 3(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 4(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000004, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 4(%r8), %r11
	mov %al, 4(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 5(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000005, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 5(%r8), %r11
	mov %al, 5(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 6(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000006, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 6(%r8), %r11
	mov %al, 6(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 7(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000007, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 7(%r8), %r11
	mov %al, 7(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 8(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000008, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 8(%r8), %r11
	mov %al, 8(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 9(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000009, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 9(%r8), %r11
	mov %al, 9(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 10(%r8), %r11
	add %r10, %r11
	mov $0x000000000000000A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 10(%r8), %r11
	mov %al, 10(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 11(%r8), %r11
	add %r10, %r11
	mov $0x000000000000000B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 11(%r8), %r11
	mov %al, 11(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 12(%r8), %r11
	add %r10, %r11
	mov $0x000000000000000C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 12(%r8), %r11
	mov %al, 12(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 13(%r8), %r11
	add %r10, %r11
	mov $0x000000000000000D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 13(%r8), %r11
	mov %al, 13(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 14(%r8), %r11
	add %r10, %r11
	mov $0x000000000000000E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 14(%r8), %r11
	mov %al, 14(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 15(%r8), %r11
	add %r10, %r11
	mov $0x000000000000000F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 15(%r8), %r11
	mov %al, 15(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 16(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000010, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 16(%r8), %r11
	mov %al, 16(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 17(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000011, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 17(%r8), %r11
	mov %al, 17(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 18(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000012, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 18(%r8), %r11
	mov %al, 18(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 19(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000013, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 19(%r8), %r11
	mov %al, 19(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 20(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000014, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 20(%r8), %r11
	mov %al, 20(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 21(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000015, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 21(%r8), %r11
	mov %al, 21(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 22(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000016, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 22(%r8), %r11
	mov %al, 22(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 23(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000017, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 23(%r8), %r11
	mov %al, 23(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 24(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000018, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 24(%r8), %r11
	mov %al, 24(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 25(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000019, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 25(%r8), %r11
	mov %al, 25(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 26(%r8), %r11
	add %r10, %r11
	mov $0x000000000000001A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 26(%r8), %r11
	mov %al, 26(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 27(%r8), %r11
	add %r10, %r11
	mov $0x000000000000001B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 27(%r8), %r11
	mov %al, 27(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 28(%r8), %r11
	add %r10, %r11
	mov $0x000000000000001C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 28(%r8), %r11
	mov %al, 28(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 29(%r8), %r11
	add %r10, %r11
	mov $0x000000000000001D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 29(%r8), %r11
	mov %al, 29(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 30(%r8), %r11
	add %r10, %r11
	mov $0x000000000000001E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 30(%r8), %r11
	mov %al, 30(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 31(%r8), %r11
	add %r10, %r11
	mov $0x000000000000001F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 31(%r8), %r11
	mov %al, 31(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 32(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000020, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 32(%r8), %r11
	mov %al, 32(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 33(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000021, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 33(%r8), %r11
	mov %al, 33(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 34(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000022, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 34(%r8), %r11
	mov %al, 34(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 35(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000023, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 35(%r8), %r11
	mov %al, 35(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 36(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000024, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 36(%r8), %r11
	mov %al, 36(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 37(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000025, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 37(%r8), %r11
	mov %al, 37(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 38(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000026, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 38(%r8), %r11
	mov %al, 38(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 39(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000027, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 39(%r8), %r11
	mov %al, 39(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 40(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000028, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 40(%r8), %r11
	mov %al, 40(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 41(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000029, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 41(%r8), %r11
	mov %al, 41(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 42(%r8), %r11
	add %r10, %r11
	mov $0x000000000000002A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 42(%r8), %r11
	mov %al, 42(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 43(%r8), %r11
	add %r10, %r11
	mov $0x000000000000002B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 43(%r8), %r11
	mov %al, 43(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 44(%r8), %r11
	add %r10, %r11
	mov $0x000000000000002C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 44(%r8), %r11
	mov %al, 44(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 45(%r8), %r11
	add %r10, %r11
	mov $0x000000000000002D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 45(%r8), %r11
	mov %al, 45(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 46(%r8), %r11
	add %r10, %r11
	mov $0x000000000000002E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 46(%r8), %r11
	mov %al, 46(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 47(%r8), %r11
	add %r10, %r11
	mov $0x000000000000002F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 47(%r8), %r11
	mov %al, 47(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 48(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000030, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 48(%r8), %r11
	mov %al, 48(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 49(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000031, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 49(%r8), %r11
	mov %al, 49(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 50(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000032, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 50(%r8), %r11
	mov %al, 50(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 51(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000033, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 51(%r8), %r11
	mov %al, 51(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 52(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000034, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 52(%r8), %r11
	mov %al, 52(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 53(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000035, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 53(%r8), %r11
	mov %al, 53(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 54(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000036, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 54(%r8), %r11
	mov %al, 54(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 55(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000037, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 55(%r8), %r11
	mov %al, 55(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 56(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000038, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 56(%r8), %r11
	mov %al, 56(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 57(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000039, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 57(%r8), %r11
	mov %al, 57(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 58(%r8), %r11
	add %r10, %r11
	mov $0x000000000000003A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 58(%r8), %r11
	mov %al, 58(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 59(%r8), %r11
	add %r10, %r11
	mov $0x000000000000003B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 59(%r8), %r11
	mov %al, 59(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 60(%r8), %r11
	add %r10, %r11
	mov $0x000000000000003C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 60(%r8), %r11
	mov %al, 60(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 61(%r8), %r11
	add %r10, %r11
	mov $0x000000000000003D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 61(%r8), %r11
	mov %al, 61(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 62(%r8), %r11
	add %r10, %r11
	mov $0x000000000000003E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 62(%r8), %r11
	mov %al, 62(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 63(%r8), %r11
	add %r10, %r11
	mov $0x000000000000003F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 63(%r8), %r11
	mov %al, 63(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 64(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000040, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 64(%r8), %r11
	mov %al, 64(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 65(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000041, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 65(%r8), %r11
	mov %al, 65(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 66(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000042, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 66(%r8), %r11
	mov %al, 66(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 67(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000043, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 67(%r8), %r11
	mov %al, 67(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 68(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000044, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 68(%r8), %r11
	mov %al, 68(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 69(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000045, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 69(%r8), %r11
	mov %al, 69(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 70(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000046, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 70(%r8), %r11
	mov %al, 70(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 71(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000047, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 71(%r8), %r11
	mov %al, 71(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 72(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000048, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 72(%r8), %r11
	mov %al, 72(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 73(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000049, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 73(%r8), %r11
	mov %al, 73(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 74(%r8), %r11
	add %r10, %r11
	mov $0x000000000000004A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 74(%r8), %r11
	mov %al, 74(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 75(%r8), %r11
	add %r10, %r11
	mov $0x000000000000004B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 75(%r8), %r11
	mov %al, 75(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 76(%r8), %r11
	add %r10, %r11
	mov $0x000000000000004C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 76(%r8), %r11
	mov %al, 76(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 77(%r8), %r11
	add %r10, %r11
	mov $0x000000000000004D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 77(%r8), %r11
	mov %al, 77(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 78(%r8), %r11
	add %r10, %r11
	mov $0x000000000000004E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 78(%r8), %r11
	mov %al, 78(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 79(%r8), %r11
	add %r10, %r11
	mov $0x000000000000004F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 79(%r8), %r11
	mov %al, 79(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 80(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000050, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 80(%r8), %r11
	mov %al, 80(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 81(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000051, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 81(%r8), %r11
	mov %al, 81(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 82(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000052, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 82(%r8), %r11
	mov %al, 82(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 83(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000053, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 83(%r8), %r11
	mov %al, 83(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 84(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000054, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 84(%r8), %r11
	mov %al, 84(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 85(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000055, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 85(%r8), %r11
	mov %al, 85(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 86(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000056, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 86(%r8), %r11
	mov %al, 86(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 87(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000057, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 87(%r8), %r11
	mov %al, 87(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 88(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000058, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 88(%r8), %r11
	mov %al, 88(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 89(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000059, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 89(%r8), %r11
	mov %al, 89(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 90(%r8), %r11
	add %r10, %r11
	mov $0x000000000000005A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 90(%r8), %r11
	mov %al, 90(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 91(%r8), %r11
	add %r10, %r11
	mov $0x000000000000005B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 91(%r8), %r11
	mov %al, 91(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 92(%r8), %r11
	add %r10, %r11
	mov $0x000000000000005C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 92(%r8), %r11
	mov %al, 92(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 93(%r8), %r11
	add %r10, %r11
	mov $0x000000000000005D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 93(%r8), %r11
	mov %al, 93(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 94(%r8), %r11
	add %r10, %r11
	mov $0x000000000000005E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 94(%r8), %r11
	mov %al, 94(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 95(%r8), %r11
	add %r10, %r11
	mov $0x000000000000005F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 95(%r8), %r11
	mov %al, 95(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 96(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000060, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 96(%r8), %r11
	mov %al, 96(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 97(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000061, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 97(%r8), %r11
	mov %al, 97(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 98(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000062, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 98(%r8), %r11
	mov %al, 98(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 99(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000063, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 99(%r8), %r11
	mov %al, 99(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 100(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000064, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 100(%r8), %r11
	mov %al, 100(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 101(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000065, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 101(%r8), %r11
	mov %al, 101(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 102(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000066, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 102(%r8), %r11
	mov %al, 102(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 103(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000067, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 103(%r8), %r11
	mov %al, 103(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 104(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000068, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 104(%r8), %r11
	mov %al, 104(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 105(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000069, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 105(%r8), %r11
	mov %al, 105(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 106(%r8), %r11
	add %r10, %r11
	mov $0x000000000000006A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 106(%r8), %r11
	mov %al, 106(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 107(%r8), %r11
	add %r10, %r11
	mov $0x000000000000006B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 107(%r8), %r11
	mov %al, 107(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 108(%r8), %r11
	add %r10, %r11
	mov $0x000000000000006C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 108(%r8), %r11
	mov %al, 108(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 109(%r8), %r11
	add %r10, %r11
	mov $0x000000000000006D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 109(%r8), %r11
	mov %al, 109(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 110(%r8), %r11
	add %r10, %r11
	mov $0x000000000000006E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 110(%r8), %r11
	mov %al, 110(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 111(%r8), %r11
	add %r10, %r11
	mov $0x000000000000006F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 111(%r8), %r11
	mov %al, 111(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 112(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000070, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 112(%r8), %r11
	mov %al, 112(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 113(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000071, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 113(%r8), %r11
	mov %al, 113(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 114(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000072, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 114(%r8), %r11
	mov %al, 114(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 115(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000073, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 115(%r8), %r11
	mov %al, 115(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 116(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000074, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 116(%r8), %r11
	mov %al, 116(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 117(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000075, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 117(%r8), %r11
	mov %al, 117(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 118(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000076, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 118(%r8), %r11
	mov %al, 118(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 119(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000077, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 119(%r8), %r11
	mov %al, 119(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 120(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000078, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 120(%r8), %r11
	mov %al, 120(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 121(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000079, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 121(%r8), %r11
	mov %al, 121(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 122(%r8), %r11
	add %r10, %r11
	mov $0x000000000000007A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 122(%r8), %r11
	mov %al, 122(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 123(%r8), %r11
	add %r10, %r11
	mov $0x000000000000007B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 123(%r8), %r11
	mov %al, 123(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 124(%r8), %r11
	add %r10, %r11
	mov $0x000000000000007C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 124(%r8), %r11
	mov %al, 124(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 125(%r8), %r11
	add %r10, %r11
	mov $0x000000000000007D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 125(%r8), %r11
	mov %al, 125(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 126(%r8), %r11
	add %r10, %r11
	mov $0x000000000000007E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 126(%r8), %r11
	mov %al, 126(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 127(%r8), %r11
	add %r10, %r11
	mov $0x000000000000007F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 127(%r8), %r11
	mov %al, 127(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 128(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000080, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 128(%r8), %r11
	mov %al, 128(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 129(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000081, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 129(%r8), %r11
	mov %al, 129(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 130(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000082, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 130(%r8), %r11
	mov %al, 130(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 131(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000083, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 131(%r8), %r11
	mov %al, 131(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 132(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000084, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 132(%r8), %r11
	mov %al, 132(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 133(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000085, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 133(%r8), %r11
	mov %al, 133(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 134(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000086, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 134(%r8), %r11
	mov %al, 134(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 135(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000087, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 135(%r8), %r11
	mov %al, 135(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 136(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000088, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 136(%r8), %r11
	mov %al, 136(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 137(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000089, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 137(%r8), %r11
	mov %al, 137(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 138(%r8), %r11
	add %r10, %r11
	mov $0x000000000000008A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 138(%r8), %r11
	mov %al, 138(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 139(%r8), %r11
	add %r10, %r11
	mov $0x000000000000008B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 139(%r8), %r11
	mov %al, 139(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 140(%r8), %r11
	add %r10, %r11
	mov $0x000000000000008C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 140(%r8), %r11
	mov %al, 140(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 141(%r8), %r11
	add %r10, %r11
	mov $0x000000000000008D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 141(%r8), %r11
	mov %al, 141(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 142(%r8), %r11
	add %r10, %r11
	mov $0x000000000000008E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 142(%r8), %r11
	mov %al, 142(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 143(%r8), %r11
	add %r10, %r11
	mov $0x000000000000008F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 143(%r8), %r11
	mov %al, 143(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 144(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000090, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 144(%r8), %r11
	mov %al, 144(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 145(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000091, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 145(%r8), %r11
	mov %al, 145(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 146(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000092, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 146(%r8), %r11
	mov %al, 146(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 147(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000093, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 147(%r8), %r11
	mov %al, 147(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 148(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000094, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 148(%r8), %r11
	mov %al, 148(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 149(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000095, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 149(%r8), %r11
	mov %al, 149(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 150(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000096, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 150(%r8), %r11
	mov %al, 150(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 151(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000097, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 151(%r8), %r11
	mov %al, 151(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 152(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000098, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 152(%r8), %r11
	mov %al, 152(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 153(%r8), %r11
	add %r10, %r11
	mov $0x0000000000000099, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 153(%r8), %r11
	mov %al, 153(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 154(%r8), %r11
	add %r10, %r11
	mov $0x000000000000009A, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 154(%r8), %r11
	mov %al, 154(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 155(%r8), %r11
	add %r10, %r11
	mov $0x000000000000009B, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 155(%r8), %r11
	mov %al, 155(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 156(%r8), %r11
	add %r10, %r11
	mov $0x000000000000009C, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 156(%r8), %r11
	mov %al, 156(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 157(%r8), %r11
	add %r10, %r11
	mov $0x000000000000009D, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 157(%r8), %r11
	mov %al, 157(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 158(%r8), %r11
	add %r10, %r11
	mov $0x000000000000009E, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 158(%r8), %r11
	mov %al, 158(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 159(%r8), %r11
	add %r10, %r11
	mov $0x000000000000009F, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 159(%r8), %r11
	mov %al, 159(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 160(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A0, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 160(%r8), %r11
	mov %al, 160(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 161(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A1, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 161(%r8), %r11
	mov %al, 161(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 162(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A2, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 162(%r8), %r11
	mov %al, 162(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 163(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A3, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 163(%r8), %r11
	mov %al, 163(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 164(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A4, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 164(%r8), %r11
	mov %al, 164(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 165(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A5, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 165(%r8), %r11
	mov %al, 165(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 166(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A6, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 166(%r8), %r11
	mov %al, 166(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 167(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A7, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 167(%r8), %r11
	mov %al, 167(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 168(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A8, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 168(%r8), %r11
	mov %al, 168(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 169(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000A9, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 169(%r8), %r11
	mov %al, 169(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 170(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000AA, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 170(%r8), %r11
	mov %al, 170(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 171(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000AB, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 171(%r8), %r11
	mov %al, 171(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 172(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000AC, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 172(%r8), %r11
	mov %al, 172(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 173(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000AD, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 173(%r8), %r11
	mov %al, 173(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 174(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000AE, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 174(%r8), %r11
	mov %al, 174(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 175(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000AF, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 175(%r8), %r11
	mov %al, 175(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 176(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B0, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 176(%r8), %r11
	mov %al, 176(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 177(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B1, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 177(%r8), %r11
	mov %al, 177(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 178(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B2, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 178(%r8), %r11
	mov %al, 178(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 179(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B3, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 179(%r8), %r11
	mov %al, 179(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 180(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B4, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 180(%r8), %r11
	mov %al, 180(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 181(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B5, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 181(%r8), %r11
	mov %al, 181(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 182(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B6, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 182(%r8), %r11
	mov %al, 182(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 183(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B7, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 183(%r8), %r11
	mov %al, 183(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 184(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B8, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 184(%r8), %r11
	mov %al, 184(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 185(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000B9, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 185(%r8), %r11
	mov %al, 185(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 186(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000BA, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 186(%r8), %r11
	mov %al, 186(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 187(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000BB, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 187(%r8), %r11
	mov %al, 187(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 188(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000BC, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 188(%r8), %r11
	mov %al, 188(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 189(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000BD, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 189(%r8), %r11
	mov %al, 189(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 190(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000BE, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 190(%r8), %r11
	mov %al, 190(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 191(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000BF, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 191(%r8), %r11
	mov %al, 191(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 192(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C0, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 192(%r8), %r11
	mov %al, 192(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 193(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C1, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 193(%r8), %r11
	mov %al, 193(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 194(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C2, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 194(%r8), %r11
	mov %al, 194(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 195(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C3, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 195(%r8), %r11
	mov %al, 195(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 196(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C4, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 196(%r8), %r11
	mov %al, 196(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 197(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C5, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 197(%r8), %r11
	mov %al, 197(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 198(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C6, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 198(%r8), %r11
	mov %al, 198(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 199(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C7, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 199(%r8), %r11
	mov %al, 199(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 200(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C8, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 200(%r8), %r11
	mov %al, 200(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 201(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000C9, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 201(%r8), %r11
	mov %al, 201(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 202(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000CA, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 202(%r8), %r11
	mov %al, 202(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 203(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000CB, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 203(%r8), %r11
	mov %al, 203(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 204(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000CC, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 204(%r8), %r11
	mov %al, 204(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 205(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000CD, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 205(%r8), %r11
	mov %al, 205(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 206(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000CE, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 206(%r8), %r11
	mov %al, 206(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 207(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000CF, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 207(%r8), %r11
	mov %al, 207(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 208(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D0, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 208(%r8), %r11
	mov %al, 208(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 209(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D1, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 209(%r8), %r11
	mov %al, 209(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 210(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D2, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 210(%r8), %r11
	mov %al, 210(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 211(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D3, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 211(%r8), %r11
	mov %al, 211(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 212(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D4, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 212(%r8), %r11
	mov %al, 212(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 213(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D5, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 213(%r8), %r11
	mov %al, 213(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 214(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D6, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 214(%r8), %r11
	mov %al, 214(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 215(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D7, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 215(%r8), %r11
	mov %al, 215(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 216(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D8, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 216(%r8), %r11
	mov %al, 216(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 217(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000D9, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 217(%r8), %r11
	mov %al, 217(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 218(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000DA, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 218(%r8), %r11
	mov %al, 218(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 219(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000DB, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 219(%r8), %r11
	mov %al, 219(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 220(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000DC, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 220(%r8), %r11
	mov %al, 220(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 221(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000DD, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 221(%r8), %r11
	mov %al, 221(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 222(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000DE, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 222(%r8), %r11
	mov %al, 222(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 223(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000DF, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 223(%r8), %r11
	mov %al, 223(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 224(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E0, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 224(%r8), %r11
	mov %al, 224(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 225(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E1, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 225(%r8), %r11
	mov %al, 225(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 226(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E2, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 226(%r8), %r11
	mov %al, 226(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 227(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E3, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 227(%r8), %r11
	mov %al, 227(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 228(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E4, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 228(%r8), %r11
	mov %al, 228(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 229(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E5, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 229(%r8), %r11
	mov %al, 229(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 230(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E6, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 230(%r8), %r11
	mov %al, 230(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 231(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E7, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 231(%r8), %r11
	mov %al, 231(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 232(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E8, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 232(%r8), %r11
	mov %al, 232(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 233(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000E9, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 233(%r8), %r11
	mov %al, 233(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 234(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000EA, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 234(%r8), %r11
	mov %al, 234(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 235(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000EB, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 235(%r8), %r11
	mov %al, 235(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 236(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000EC, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 236(%r8), %r11
	mov %al, 236(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 237(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000ED, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 237(%r8), %r11
	mov %al, 237(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 238(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000EE, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 238(%r8), %r11
	mov %al, 238(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 239(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000EF, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 239(%r8), %r11
	mov %al, 239(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 240(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F0, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 240(%r8), %r11
	mov %al, 240(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 241(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F1, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 241(%r8), %r11
	mov %al, 241(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 242(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F2, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 242(%r8), %r11
	mov %al, 242(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 243(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F3, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 243(%r8), %r11
	mov %al, 243(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 244(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F4, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 244(%r8), %r11
	mov %al, 244(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 245(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F5, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 245(%r8), %r11
	mov %al, 245(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 246(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F6, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 246(%r8), %r11
	mov %al, 246(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 247(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F7, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 247(%r8), %r11
	mov %al, 247(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 248(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F8, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 248(%r8), %r11
	mov %al, 248(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 249(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000F9, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 249(%r8), %r11
	mov %al, 249(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 250(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000FA, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 250(%r8), %r11
	mov %al, 250(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 251(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000FB, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 251(%r8), %r11
	mov %al, 251(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 252(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000FC, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 252(%r8), %r11
	mov %al, 252(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 253(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000FD, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 253(%r8), %r11
	mov %al, 253(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 254(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000FE, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 254(%r8), %r11
	mov %al, 254(%r8)
	mov %r11b, (%r8, %r10)
	movzbq 255(%r8), %r11
	add %r10, %r11
	mov $0x00000000000000FF, %rax
	cmp %rax, %rdx
	cmove %r9, %rax
	movzbq (%rcx, %rax), %rax
	add %rax, %r11
	mov %r11b, %r10b
# swap sbox[i] with sbox[j]
	movzbq (%r8, %r10), %rax
	movzbq 255(%r8), %r11
	mov %al, 255(%r8)
	mov %r11b, (%r8, %r10)
	ret
.global rc4run
rc4run:
# ssize_t rc4run(const char buf_in[], size_t len, char buf_out[], char sbox[])
# buf_in: %rcx
# len: %rdx
# buf_out: %r8
# sbox: %r9
	ret
