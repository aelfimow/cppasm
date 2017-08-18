.section .text
# uint64_t xorshift_func_1_1_54(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_1_54
xorshift_func_1_1_54:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x36, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_1_55(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_1_55
xorshift_func_1_1_55:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_3_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_3_45
xorshift_func_1_3_45:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_7_9(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_7_9
xorshift_func_1_7_9:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_7_44(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_7_44
xorshift_func_1_7_44:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_7_46(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_7_46
xorshift_func_1_7_46:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_9_50(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_9_50
xorshift_func_1_9_50:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x32, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_11_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_11_35
xorshift_func_1_11_35:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_11_50(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_11_50
xorshift_func_1_11_50:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x32, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_13_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_13_45
xorshift_func_1_13_45:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_15_4(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_15_4
xorshift_func_1_15_4:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_15_63(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_15_63
xorshift_func_1_15_63:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_19_6(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_19_6
xorshift_func_1_19_6:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_19_16(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_19_16
xorshift_func_1_19_16:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_23_14(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_23_14
xorshift_func_1_23_14:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_23_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_23_29
xorshift_func_1_23_29:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_29_34(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_29_34
xorshift_func_1_29_34:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x22, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_35_5(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_35_5
xorshift_func_1_35_5:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_35_11(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_35_11
xorshift_func_1_35_11:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_35_34(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_35_34
xorshift_func_1_35_34:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x22, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_45_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_45_37
xorshift_func_1_45_37:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_51_13(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_51_13
xorshift_func_1_51_13:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x33, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_53_3(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_53_3
xorshift_func_1_53_3:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x35, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_1_59_14(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_1_59_14
xorshift_func_1_59_14:
	mov %rdi, %rax
	shl $0x01, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x3B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_2_13_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_2_13_23
xorshift_func_2_13_23:
	mov %rdi, %rax
	shl $0x02, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_2_31_51(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_2_31_51
xorshift_func_2_31_51:
	mov %rdi, %rax
	shl $0x02, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x33, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_2_31_53(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_2_31_53
xorshift_func_2_31_53:
	mov %rdi, %rax
	shl $0x02, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x35, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_2_43_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_2_43_27
xorshift_func_2_43_27:
	mov %rdi, %rax
	shl $0x02, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_2_47_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_2_47_49
xorshift_func_2_47_49:
	mov %rdi, %rax
	shl $0x02, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_1_11(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_1_11
xorshift_func_3_1_11:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_5_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_5_21
xorshift_func_3_5_21:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_13_59(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_13_59
xorshift_func_3_13_59:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_21_31(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_21_31
xorshift_func_3_21_31:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_25_20(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_25_20
xorshift_func_3_25_20:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_25_31(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_25_31
xorshift_func_3_25_31:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_25_56(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_25_56
xorshift_func_3_25_56:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x38, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_29_40(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_29_40
xorshift_func_3_29_40:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x28, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_29_47(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_29_47
xorshift_func_3_29_47:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_29_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_29_49
xorshift_func_3_29_49:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_35_14(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_35_14
xorshift_func_3_35_14:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_37_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_37_17
xorshift_func_3_37_17:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x25, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_43_4(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_43_4
xorshift_func_3_43_4:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_43_6(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_43_6
xorshift_func_3_43_6:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_43_11(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_43_11
xorshift_func_3_43_11:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_51_16(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_51_16
xorshift_func_3_51_16:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x33, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_53_7(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_53_7
xorshift_func_3_53_7:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x35, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_61_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_61_17
xorshift_func_3_61_17:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x3D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_3_61_26(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_3_61_26
xorshift_func_3_61_26:
	mov %rdi, %rax
	shl $0x03, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x3D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_7_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_7_19
xorshift_func_4_7_19:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_9_13(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_9_13
xorshift_func_4_9_13:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_15_51(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_15_51
xorshift_func_4_15_51:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x33, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_15_53(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_15_53
xorshift_func_4_15_53:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x35, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_29_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_29_45
xorshift_func_4_29_45:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_29_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_29_49
xorshift_func_4_29_49:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_31_33(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_31_33
xorshift_func_4_31_33:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x21, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_35_15(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_35_15
xorshift_func_4_35_15:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_35_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_35_21
xorshift_func_4_35_21:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_37_11(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_37_11
xorshift_func_4_37_11:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x25, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_37_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_37_21
xorshift_func_4_37_21:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x25, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_41_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_41_19
xorshift_func_4_41_19:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_41_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_41_45
xorshift_func_4_41_45:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_43_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_43_21
xorshift_func_4_43_21:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_43_31(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_43_31
xorshift_func_4_43_31:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_4_53_7(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_4_53_7
xorshift_func_4_53_7:
	mov %rdi, %rax
	shl $0x04, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x35, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_9_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_9_23
xorshift_func_5_9_23:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_11_54(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_11_54
xorshift_func_5_11_54:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x36, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_15_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_15_27
xorshift_func_5_15_27:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_17_11(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_17_11
xorshift_func_5_17_11:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_23_36(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_23_36
xorshift_func_5_23_36:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x24, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_33_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_33_29
xorshift_func_5_33_29:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x21, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_41_20(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_41_20
xorshift_func_5_41_20:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_45_16(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_45_16
xorshift_func_5_45_16:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_47_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_47_23
xorshift_func_5_47_23:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_53_20(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_53_20
xorshift_func_5_53_20:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x35, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_59_33(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_59_33
xorshift_func_5_59_33:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x3B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x21, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_59_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_59_35
xorshift_func_5_59_35:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x3B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_5_59_63(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_5_59_63
xorshift_func_5_59_63:
	mov %rdi, %rax
	shl $0x05, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x3B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_1_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_1_17
xorshift_func_6_1_17:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_3_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_3_49
xorshift_func_6_3_49:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_17_47(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_17_47
xorshift_func_6_17_47:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_23_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_23_27
xorshift_func_6_23_27:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_27_7(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_27_7
xorshift_func_6_27_7:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_43_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_43_21
xorshift_func_6_43_21:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_49_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_49_29
xorshift_func_6_49_29:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x31, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_6_55_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_6_55_17
xorshift_func_6_55_17:
	mov %rdi, %rax
	shl $0x06, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x37, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_5_41(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_5_41
xorshift_func_7_5_41:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x29, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_5_47(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_5_47
xorshift_func_7_5_47:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_5_55(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_5_55
xorshift_func_7_5_55:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_7_20(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_7_20
xorshift_func_7_7_20:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_9_38(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_9_38
xorshift_func_7_9_38:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x26, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_11_10(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_11_10
xorshift_func_7_11_10:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_11_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_11_35
xorshift_func_7_11_35:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_13_58(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_13_58
xorshift_func_7_13_58:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_19_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_19_17
xorshift_func_7_19_17:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_19_54(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_19_54
xorshift_func_7_19_54:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x36, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_23_8(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_23_8
xorshift_func_7_23_8:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_25_58(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_25_58
xorshift_func_7_25_58:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_27_59(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_27_59
xorshift_func_7_27_59:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_33_8(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_33_8
xorshift_func_7_33_8:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x21, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_41_40(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_41_40
xorshift_func_7_41_40:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x28, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_43_28(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_43_28
xorshift_func_7_43_28:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_51_24(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_51_24
xorshift_func_7_51_24:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x33, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x18, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_7_57_12(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_7_57_12
xorshift_func_7_57_12:
	mov %rdi, %rax
	shl $0x07, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x39, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_5_59(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_5_59
xorshift_func_8_5_59:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_9_25(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_9_25
xorshift_func_8_9_25:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_13_25(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_13_25
xorshift_func_8_13_25:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_13_61(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_13_61
xorshift_func_8_13_61:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_15_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_15_21
xorshift_func_8_15_21:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_25_59(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_25_59
xorshift_func_8_25_59:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_29_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_29_19
xorshift_func_8_29_19:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_31_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_31_17
xorshift_func_8_31_17:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_37_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_37_21
xorshift_func_8_37_21:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x25, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_8_51_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_8_51_21
xorshift_func_8_51_21:
	mov %rdi, %rax
	shl $0x08, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x33, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_1_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_1_27
xorshift_func_9_1_27:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_5_36(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_5_36
xorshift_func_9_5_36:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x24, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_5_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_5_43
xorshift_func_9_5_43:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_7_18(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_7_18
xorshift_func_9_7_18:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_19_18(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_19_18
xorshift_func_9_19_18:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_21_11(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_21_11
xorshift_func_9_21_11:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_21_20(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_21_20
xorshift_func_9_21_20:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_21_40(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_21_40
xorshift_func_9_21_40:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x28, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_23_57(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_23_57
xorshift_func_9_23_57:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x39, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_27_10(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_27_10
xorshift_func_9_27_10:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_29_12(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_29_12
xorshift_func_9_29_12:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_29_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_29_37
xorshift_func_9_29_37:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_37_31(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_37_31
xorshift_func_9_37_31:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x25, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_9_41_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_9_41_45
xorshift_func_9_41_45:
	mov %rdi, %rax
	shl $0x09, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_10_7_33(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_10_7_33
xorshift_func_10_7_33:
	mov %rdi, %rax
	shl $0x0A, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x21, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_10_27_59(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_10_27_59
xorshift_func_10_27_59:
	mov %rdi, %rax
	shl $0x0A, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_10_53_13(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_10_53_13
xorshift_func_10_53_13:
	mov %rdi, %rax
	shl $0x0A, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x35, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_5_32(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_5_32
xorshift_func_11_5_32:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x20, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_5_34(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_5_34
xorshift_func_11_5_34:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x22, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_5_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_5_43
xorshift_func_11_5_43:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_5_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_5_45
xorshift_func_11_5_45:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_9_14(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_9_14
xorshift_func_11_9_14:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_9_34(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_9_34
xorshift_func_11_9_34:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x22, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_13_40(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_13_40
xorshift_func_11_13_40:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x28, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_15_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_15_37
xorshift_func_11_15_37:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_23_42(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_23_42
xorshift_func_11_23_42:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_23_56(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_23_56
xorshift_func_11_23_56:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x38, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_25_48(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_25_48
xorshift_func_11_25_48:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x30, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_27_26(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_27_26
xorshift_func_11_27_26:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_29_14(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_29_14
xorshift_func_11_29_14:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_31_18(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_31_18
xorshift_func_11_31_18:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_11_53_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_11_53_23
xorshift_func_11_53_23:
	mov %rdi, %rax
	shl $0x0B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x35, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_1_31(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_1_31
xorshift_func_12_1_31:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_3_13(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_3_13
xorshift_func_12_3_13:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_3_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_3_49
xorshift_func_12_3_49:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_7_13(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_7_13
xorshift_func_12_7_13:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_11_47(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_11_47
xorshift_func_12_11_47:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_25_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_25_27
xorshift_func_12_25_27:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_39_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_39_49
xorshift_func_12_39_49:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x27, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_12_43_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_12_43_19
xorshift_func_12_43_19:
	mov %rdi, %rax
	shl $0x0C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_3_40(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_3_40
xorshift_func_13_3_40:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x28, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_3_53(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_3_53
xorshift_func_13_3_53:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x35, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_7_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_7_17
xorshift_func_13_7_17:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_9_15(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_9_15
xorshift_func_13_9_15:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_9_50(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_9_50
xorshift_func_13_9_50:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x32, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_13_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_13_19
xorshift_func_13_13_19:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_17_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_17_43
xorshift_func_13_17_43:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_19_28(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_19_28
xorshift_func_13_19_28:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_19_47(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_19_47
xorshift_func_13_19_47:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_21_18(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_21_18
xorshift_func_13_21_18:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_21_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_21_49
xorshift_func_13_21_49:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_29_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_29_35
xorshift_func_13_29_35:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_35_30(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_35_30
xorshift_func_13_35_30:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_35_38(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_35_38
xorshift_func_13_35_38:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x23, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x26, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_47_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_47_23
xorshift_func_13_47_23:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_13_51_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_13_51_21
xorshift_func_13_51_21:
	mov %rdi, %rax
	shl $0x0D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x33, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_14_13_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_14_13_17
xorshift_func_14_13_17:
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_14_15_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_14_15_19
xorshift_func_14_15_19:
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_14_23_33(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_14_23_33
xorshift_func_14_23_33:
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x21, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_14_31_45(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_14_31_45
xorshift_func_14_31_45:
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_14_47_15(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_14_47_15
xorshift_func_14_47_15:
	mov %rdi, %rax
	shl $0x0E, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_1_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_1_19
xorshift_func_15_1_19:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_5_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_5_37
xorshift_func_15_5_37:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_13_28(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_13_28
xorshift_func_15_13_28:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_13_52(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_13_52
xorshift_func_15_13_52:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x34, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_17_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_17_27
xorshift_func_15_17_27:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_19_63(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_19_63
xorshift_func_15_19_63:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_21_46(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_21_46
xorshift_func_15_21_46:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_23_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_23_23
xorshift_func_15_23_23:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_45_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_45_17
xorshift_func_15_45_17:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_47_16(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_47_16
xorshift_func_15_47_16:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_15_49_26(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_15_49_26
xorshift_func_15_49_26:
	mov %rdi, %rax
	shl $0x0F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x31, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_5_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_5_17
xorshift_func_16_5_17:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_7_39(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_7_39
xorshift_func_16_7_39:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x27, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_11_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_11_19
xorshift_func_16_11_19:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_11_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_11_27
xorshift_func_16_11_27:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_13_55(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_13_55
xorshift_func_16_13_55:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_21_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_21_35
xorshift_func_16_21_35:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_25_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_25_43
xorshift_func_16_25_43:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_27_53(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_27_53
xorshift_func_16_27_53:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x35, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_16_47_17(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_16_47_17
xorshift_func_16_47_17:
	mov %rdi, %rax
	shl $0x10, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_15_58(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_15_58
xorshift_func_17_15_58:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_23_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_23_29
xorshift_func_17_23_29:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_23_51(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_23_51
xorshift_func_17_23_51:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x33, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_23_52(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_23_52
xorshift_func_17_23_52:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x17, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x34, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_27_22(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_27_22
xorshift_func_17_27_22:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x16, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_45_22(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_45_22
xorshift_func_17_45_22:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x16, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_47_28(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_47_28
xorshift_func_17_47_28:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_47_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_47_29
xorshift_func_17_47_29:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_17_47_54(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_17_47_54
xorshift_func_17_47_54:
	mov %rdi, %rax
	shl $0x11, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x36, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_18_1_25(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_18_1_25
xorshift_func_18_1_25:
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_18_3_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_18_3_43
xorshift_func_18_3_43:
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_18_19_19(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_18_19_19
xorshift_func_18_19_19:
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x13, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_18_25_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_18_25_21
xorshift_func_18_25_21:
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_18_41_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_18_41_23
xorshift_func_18_41_23:
	mov %rdi, %rax
	shl $0x12, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_7_36(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_7_36
xorshift_func_19_7_36:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x24, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_7_55(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_7_55
xorshift_func_19_7_55:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_13_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_13_37
xorshift_func_19_13_37:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_15_46(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_15_46
xorshift_func_19_15_46:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_21_52(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_21_52
xorshift_func_19_21_52:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x34, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_25_20(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_25_20
xorshift_func_19_25_20:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_41_21(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_41_21
xorshift_func_19_41_21:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_19_43_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_19_43_27
xorshift_func_19_43_27:
	mov %rdi, %rax
	shl $0x13, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x2B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_20_1_31(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_20_1_31
xorshift_func_20_1_31:
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_20_5_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_20_5_29
xorshift_func_20_5_29:
	mov %rdi, %rax
	shl $0x14, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x05, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_1_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_1_27
xorshift_func_21_1_27:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_9_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_9_29
xorshift_func_21_9_29:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_13_52(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_13_52
xorshift_func_21_13_52:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x34, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_15_28(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_15_28
xorshift_func_21_15_28:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_15_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_15_29
xorshift_func_21_15_29:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_17_24(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_17_24
xorshift_func_21_17_24:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x18, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_17_30(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_17_30
xorshift_func_21_17_30:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_17_48(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_17_48
xorshift_func_21_17_48:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x30, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_32(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_32
xorshift_func_21_21_32:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x20, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_34(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_34
xorshift_func_21_21_34:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x22, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_37
xorshift_func_21_21_37:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_38(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_38
xorshift_func_21_21_38:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x26, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_40(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_40
xorshift_func_21_21_40:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x28, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_41(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_41
xorshift_func_21_21_41:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x29, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_21_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_21_43
xorshift_func_21_21_43:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_21_41_23(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_21_41_23
xorshift_func_21_41_23:
	mov %rdi, %rax
	shl $0x15, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_22_3_39(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_22_3_39
xorshift_func_22_3_39:
	mov %rdi, %rax
	shl $0x16, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x03, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x27, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_9_38(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_9_38
xorshift_func_23_9_38:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x26, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_9_48(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_9_48
xorshift_func_23_9_48:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x30, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_9_57(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_9_57
xorshift_func_23_9_57:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x39, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_13_38(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_13_38
xorshift_func_23_13_38:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x26, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_13_58(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_13_58
xorshift_func_23_13_58:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3A, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_13_61(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_13_61
xorshift_func_23_13_61:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_17_25(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_17_25
xorshift_func_23_17_25:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_17_54(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_17_54
xorshift_func_23_17_54:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x36, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_17_56(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_17_56
xorshift_func_23_17_56:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x38, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_17_62(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_17_62
xorshift_func_23_17_62:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x11, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_41_34(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_41_34
xorshift_func_23_41_34:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x22, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_23_41_51(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_23_41_51
xorshift_func_23_41_51:
	mov %rdi, %rax
	shl $0x17, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x29, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x33, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_24_9_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_24_9_35
xorshift_func_24_9_35:
	mov %rdi, %rax
	shl $0x18, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_24_11_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_24_11_29
xorshift_func_24_11_29:
	mov %rdi, %rax
	shl $0x18, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_24_25_25(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_24_25_25
xorshift_func_24_25_25:
	mov %rdi, %rax
	shl $0x18, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_24_31_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_24_31_35
xorshift_func_24_31_35:
	mov %rdi, %rax
	shl $0x18, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_7_46(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_7_46
xorshift_func_25_7_46:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_7_49(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_7_49
xorshift_func_25_7_49:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x07, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_9_39(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_9_39
xorshift_func_25_9_39:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x27, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_11_57(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_11_57
xorshift_func_25_11_57:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x39, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_13_29(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_13_29
xorshift_func_25_13_29:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_13_39(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_13_39
xorshift_func_25_13_39:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x27, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_13_62(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_13_62
xorshift_func_25_13_62:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0D, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_15_47(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_15_47
xorshift_func_25_15_47:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2F, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_21_44(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_21_44
xorshift_func_25_21_44:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2C, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_27_27(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_27_27
xorshift_func_25_27_27:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x1B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_27_53(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_27_53
xorshift_func_25_27_53:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x35, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_33_36(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_33_36
xorshift_func_25_33_36:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x21, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x24, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_25_39_54(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_25_39_54
xorshift_func_25_39_54:
	mov %rdi, %rax
	shl $0x19, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x27, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x36, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_28_9_55(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_28_9_55
xorshift_func_28_9_55:
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_28_11_53(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_28_11_53
xorshift_func_28_11_53:
	mov %rdi, %rax
	shl $0x1C, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x35, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_29_27_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_29_27_37
xorshift_func_29_27_37:
	mov %rdi, %rax
	shl $0x1D, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_31_1_51(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_31_1_51
xorshift_func_31_1_51:
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x01, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x33, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_31_25_37(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_31_25_37
xorshift_func_31_25_37:
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x19, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x25, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_31_27_35(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_31_27_35
xorshift_func_31_27_35:
	mov %rdi, %rax
	shl $0x1F, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1B, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x23, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_33_31_43(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_33_31_43
xorshift_func_33_31_43:
	mov %rdi, %rax
	shl $0x21, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_33_31_55(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_33_31_55
xorshift_func_33_31_55:
	mov %rdi, %rax
	shl $0x21, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x1F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_43_21_46(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_43_21_46
xorshift_func_43_21_46:
	mov %rdi, %rax
	shl $0x2B, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x15, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x2E, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_49_15_61(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_49_15_61
xorshift_func_49_15_61:
	mov %rdi, %rax
	shl $0x31, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x0F, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x3D, %rdi
	xor %rdi, %rax
	ret
# uint64_t xorshift_func_55_9_56(uint64_t rng_state)
# Argument rng_state is in %rdi
# Return value is in %rax
.global xorshift_func_55_9_56
xorshift_func_55_9_56:
	mov %rdi, %rax
	shl $0x37, %rdi
	xor %rdi, %rax
	mov %rax, %rdi
	shr $0x09, %rax
	xor %rax, %rdi
	mov %rdi, %rax
	shl $0x38, %rdi
	xor %rdi, %rax
	ret
