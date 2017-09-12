.section .text
# size_t lea_base_index(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global lea_base_index
lea_base_index:
	lea (%rcx, %rdx), %rax
	ret
# size_t lea_base_2x_index(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global lea_base_2x_index
lea_base_2x_index:
	lea (%rcx, %rdx, 2), %rax
	ret
# size_t lea_base_4x_index(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global lea_base_4x_index
lea_base_4x_index:
	lea (%rcx, %rdx, 4), %rax
	ret
# size_t lea_base_8x_index(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global lea_base_8x_index
lea_base_8x_index:
	lea (%rcx, %rdx, 8), %rax
	ret
