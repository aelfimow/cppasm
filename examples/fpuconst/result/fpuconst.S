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
# float fp32_zero(void)
.global fp32_zero
fp32_zero:
	fldz
	ret
# double fp64_zero(void)
.global fp64_zero
fp64_zero:
	fldz
	ret
# long double fp80_zero(void)
.global fp80_zero
fp80_zero:
	fldz
	ret
# float fp32_one(void)
.global fp32_one
fp32_one:
	fld1
	ret
# double fp64_one(void)
.global fp64_one
fp64_one:
	fld1
	ret
# long double fp80_one(void)
.global fp80_one
fp80_one:
	fld1
	ret
