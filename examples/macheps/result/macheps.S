.section .text
# void macheps_fp32_init(void *param)
# param is in %rcx
.global macheps_fp32_init
macheps_fp32_init:
	fld1
	fsts (%rcx)
	fstps 4(%rcx)
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
# Load epsilon
	flds 4(%rcx)
# Compute: epsilon /= 2.0
	fdivp
# Save epsilon
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
	fld1
	fstl (%rcx)
	fstpl 8(%rcx)
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
# Load epsilon
	fldl 8(%rcx)
# Compute: epsilon /= 2.0
	fdivp
# Save epsilon
	fstpl 8(%rcx)
# Compute: sum = value + epsilon
	fldl (%rcx)
	fldl 8(%rcx)
	faddp
	fstpl 16(%rcx)
	ret
