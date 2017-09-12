# size_t lea_base_index(size_t a, size_t b)
# a is in %rcx
# b is in %rdx
.global lea_base_index
.section .text
lea_base_index:
	lea (%rcx, %rdx), %rax
	ret
