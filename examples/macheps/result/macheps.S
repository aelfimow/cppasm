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
