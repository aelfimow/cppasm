.section .text
# void macheps_fp32_init(void *param)
# param is in %rcx
.global macheps_fp32_init
macheps_fp32_init:
	xor %rax, %rax
	mov %rax, (%rcx)
	mov %rax, 8(%rcx)
# value = 1.0
	fld1
	fstps (%rcx)
# epsilon = 1.0
	fld1
	fstps 4(%rcx)
# sum = value + epsilon
	flds (%rcx)
	flds 4(%rcx)
	faddp
	fstps 8(%rcx)
	ret
# void macheps_fp32_compute(void *param)
# param is in %rcx
.global macheps_fp32_compute
macheps_fp32_compute:
# Compute: 2.0
	fld1
	fld1
	faddp
# Compute: epsilon /= 2.0
	flds 4(%rcx)
	fdivp
	fstps 4(%rcx)
# Compute: sum = value + epsilon
	flds (%rcx)
	flds 4(%rcx)
	faddp
	fstps 8(%rcx)
	ret
# void macheps_fp64_init(void *param)
# param is in %rcx
.global macheps_fp64_init
macheps_fp64_init:
	xor %rax, %rax
	mov %rax, (%rcx)
	mov %rax, 8(%rcx)
	mov %rax, 16(%rcx)
# value = 1.0
	fld1
	fstpl (%rcx)
# epsilon = 1.0
	fld1
	fstpl 8(%rcx)
# sum = value + epsilon
	fldl (%rcx)
	fldl 8(%rcx)
	faddp
	fstpl 16(%rcx)
	ret
# void macheps_fp64_compute(void *param)
# param is in %rcx
.global macheps_fp64_compute
macheps_fp64_compute:
# Compute: 2.0
	fld1
	fld1
	faddp
# Compute: epsilon /= 2.0
	fldl 8(%rcx)
	fdivp
	fstpl 8(%rcx)
# Compute: sum = value + epsilon
	fldl (%rcx)
	fldl 8(%rcx)
	faddp
	fstpl 16(%rcx)
	ret
# void macheps_fp80_init(void *param)
# param is in %rcx
.global macheps_fp80_init
macheps_fp80_init:
	xor %rax, %rax
	mov %rax, (%rcx)
	mov %rax, 8(%rcx)
	mov %rax, 16(%rcx)
	mov %rax, 24(%rcx)
	mov %rax, 32(%rcx)
	mov %rax, 40(%rcx)
# value = 1.0
	fld1
	fstpt (%rcx)
# epsilon = 1.0
	fld1
	fstpt 16(%rcx)
# sum = value + epsilon
	fldt (%rcx)
	fldt 16(%rcx)
	faddp
	fstpt 32(%rcx)
	ret
# void macheps_fp80_compute(void *param)
# param is in %rcx
.global macheps_fp80_compute
macheps_fp80_compute:
# Compute: 2.0
	fld1
	fld1
	faddp
# Compute: epsilon /= 2.0
	fldt 16(%rcx)
	fdivp
	fstpt 16(%rcx)
# Compute: sum = value + epsilon
	fldt (%rcx)
	fldt 16(%rcx)
	faddp
	fstpt 32(%rcx)
	ret
