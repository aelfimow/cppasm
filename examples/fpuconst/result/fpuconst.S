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
