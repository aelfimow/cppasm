.section .text
# size_t a_plus_b(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global a_plus_b
a_plus_b:
	lea (%rcx, %rdx), %rax
	ret
# size_t a_plus_2b(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global a_plus_2b
a_plus_2b:
	lea (%rcx, %rdx, 2), %rax
	ret
# size_t a_plus_4b(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global a_plus_4b
a_plus_4b:
	lea (%rcx, %rdx, 4), %rax
	ret
# size_t a_plus_8b(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global a_plus_8b
a_plus_8b:
	lea (%rcx, %rdx, 8), %rax
	ret
