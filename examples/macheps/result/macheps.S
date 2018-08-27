.section .text
# void fpuconst_fp32(float *p)
# p is in %rcx
.global fpuconst_fp32
fpuconst_fp32:
	fld1
	fldl2t
	fldl2e
	fldpi
	fldlg2
	fldln2
	fldz
	fstps (%rcx)
	add $0x04, %rcx
	fstps (%rcx)
	add $0x04, %rcx
	fstps (%rcx)
	add $0x04, %rcx
	fstps (%rcx)
	add $0x04, %rcx
	fstps (%rcx)
	add $0x04, %rcx
	fstps (%rcx)
	add $0x04, %rcx
	fstps (%rcx)
	ret
# void fpuconst_fp64(double *p)
# p is in %rcx
.global fpuconst_fp64
fpuconst_fp64:
	fld1
	fldl2t
	fldl2e
	fldpi
	fldlg2
	fldln2
	fldz
	fstpl (%rcx)
	add $0x08, %rcx
	fstpl (%rcx)
	add $0x08, %rcx
	fstpl (%rcx)
	add $0x08, %rcx
	fstpl (%rcx)
	add $0x08, %rcx
	fstpl (%rcx)
	add $0x08, %rcx
	fstpl (%rcx)
	add $0x08, %rcx
	fstpl (%rcx)
	ret
# void fp32_zero(float *p)
# p is in %rcx
.global fp32_zero
fp32_zero:
	fldz
	fstps (%rcx)
	ret
# void fp64_zero(double *p)
# p is in %rcx
.global fp64_zero
fp64_zero:
	fldz
	fstpl (%rcx)
	ret
# void fp80_zero(long double *p)
# p is in %rcx
.global fp80_zero
fp80_zero:
	fldz
	fstpt (%rcx)
	ret
# void fp32_one(float *p)
# p is in %rcx
.global fp32_one
fp32_one:
	fld1
	fstps (%rcx)
	ret
# void fp64_one(double *p)
# p is in %rcx
.global fp64_one
fp64_one:
	fld1
	fstpl (%rcx)
	ret
# void fp80_one(long double *p)
# p is in %rcx
.global fp80_one
fp80_one:
	fld1
	fstpt (%rcx)
	ret
