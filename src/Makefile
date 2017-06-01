CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++11

OBJDIR = ./obj

all:
	${CXX} -c asmstream.cpp -o ${OBJDIR}/asmstream.o ${CXXFLAGS}
	${CXX} -c comment.cpp -o ${OBJDIR}/comment.o ${CXXFLAGS}
	${CXX} -c cppasm.cpp -o ${OBJDIR}/cppasm.o ${CXXFLAGS}
	${CXX} -c cr.cpp -o ${OBJDIR}/cr.o ${CXXFLAGS}
	${CXX} -c disp16.cpp -o ${OBJDIR}/disp16.o ${CXXFLAGS}
	${CXX} -c disp32.cpp -o ${OBJDIR}/disp32.o ${CXXFLAGS}
	${CXX} -c disp8.cpp -o ${OBJDIR}/disp8.o ${CXXFLAGS}
	${CXX} -c dr.cpp -o ${OBJDIR}/dr.o ${CXXFLAGS}
	${CXX} -c global.cpp -o ${OBJDIR}/global.o ${CXXFLAGS}
	${CXX} -c imm16.cpp -o ${OBJDIR}/imm16.o ${CXXFLAGS}
	${CXX} -c imm32.cpp -o ${OBJDIR}/imm32.o ${CXXFLAGS}
	${CXX} -c imm64.cpp -o ${OBJDIR}/imm64.o ${CXXFLAGS}
	${CXX} -c imm8.cpp -o ${OBJDIR}/imm8.o ${CXXFLAGS}
	${CXX} -c Instruction.cpp -o ${OBJDIR}/Instruction.o ${CXXFLAGS}
	${CXX} -c Instruction_AAD.cpp -o ${OBJDIR}/Instruction_AAD.o ${CXXFLAGS}
	${CXX} -c Instruction_AAM.cpp -o ${OBJDIR}/Instruction_AAM.o ${CXXFLAGS}
	${CXX} -c Instruction_ADX.cpp -o ${OBJDIR}/Instruction_ADX.o ${CXXFLAGS}
	${CXX} -c Instruction_Arithmetic.cpp -o ${OBJDIR}/Instruction_Arithmetic.o ${CXXFLAGS}
	${CXX} -c Instruction_BitScan.cpp -o ${OBJDIR}/Instruction_BitScan.o ${CXXFLAGS}
	${CXX} -c Instruction_BitTest.cpp -o ${OBJDIR}/Instruction_BitTest.o ${CXXFLAGS}
	${CXX} -c Instruction_BOUND.cpp -o ${OBJDIR}/Instruction_BOUND.o ${CXXFLAGS}
	${CXX} -c Instruction_Branch.cpp -o ${OBJDIR}/Instruction_Branch.o ${CXXFLAGS}
	${CXX} -c Instruction_BSWAP.cpp -o ${OBJDIR}/Instruction_BSWAP.o ${CXXFLAGS}
	${CXX} -c Instruction_CMOVx.cpp -o ${OBJDIR}/Instruction_CMOVx.o ${CXXFLAGS}
	${CXX} -c Instruction_CMPXCHG.cpp -o ${OBJDIR}/Instruction_CMPXCHG.o ${CXXFLAGS}
	${CXX} -c Instruction_CMPXCHG16B.cpp -o ${OBJDIR}/Instruction_CMPXCHG16B.o ${CXXFLAGS}
	${CXX} -c Instruction_CMPXCHG8B.cpp -o ${OBJDIR}/Instruction_CMPXCHG8B.o ${CXXFLAGS}
	${CXX} -c Instruction_ENTER.cpp -o ${OBJDIR}/Instruction_ENTER.o ${CXXFLAGS}
	${CXX} -c Instruction_FSGSBASE.cpp -o ${OBJDIR}/Instruction_FSGSBASE.o ${CXXFLAGS}
	${CXX} -c Instruction_FST.cpp -o ${OBJDIR}/Instruction_FST.o ${CXXFLAGS}
	${CXX} -c Instruction_IN.cpp -o ${OBJDIR}/Instruction_IN.o ${CXXFLAGS}
	${CXX} -c Instruction_INT.cpp -o ${OBJDIR}/Instruction_INT.o ${CXXFLAGS}
	${CXX} -c Instruction_Jcc.cpp -o ${OBJDIR}/Instruction_Jcc.o ${CXXFLAGS}
	${CXX} -c Instruction_Logical.cpp -o ${OBJDIR}/Instruction_Logical.o ${CXXFLAGS}
	${CXX} -c Instruction_LOOPcc.cpp -o ${OBJDIR}/Instruction_LOOPcc.o ${CXXFLAGS}
	${CXX} -c Instruction_MemOperand.cpp -o ${OBJDIR}/Instruction_MemOperand.o ${CXXFLAGS}
	${CXX} -c Instruction_MOV.cpp -o ${OBJDIR}/Instruction_MOV.o ${CXXFLAGS}
	${CXX} -c Instruction_MovWithExt.cpp -o ${OBJDIR}/Instruction_MovWithExt.o ${CXXFLAGS}
	${CXX} -c Instruction_NOP.cpp -o ${OBJDIR}/Instruction_NOP.o ${CXXFLAGS}
	${CXX} -c Instruction_OUT.cpp -o ${OBJDIR}/Instruction_OUT.o ${CXXFLAGS}
	${CXX} -c Instruction_POP.cpp -o ${OBJDIR}/Instruction_POP.o ${CXXFLAGS}
	${CXX} -c Instruction_Prefix.cpp -o ${OBJDIR}/Instruction_Prefix.o ${CXXFLAGS}
	${CXX} -c Instruction_PUSH.cpp -o ${OBJDIR}/Instruction_PUSH.o ${CXXFLAGS}
	${CXX} -c Instruction_RDRAND.cpp -o ${OBJDIR}/Instruction_RDRAND.o ${CXXFLAGS}
	${CXX} -c Instruction_RegMemOperand.cpp -o ${OBJDIR}/Instruction_RegMemOperand.o ${CXXFLAGS}
	${CXX} -c Instruction_REP.cpp -o ${OBJDIR}/Instruction_REP.o ${CXXFLAGS}
	${CXX} -c Instruction_RET.cpp -o ${OBJDIR}/Instruction_RET.o ${CXXFLAGS}
	${CXX} -c Instruction_SETcc.cpp -o ${OBJDIR}/Instruction_SETcc.o ${CXXFLAGS}
	${CXX} -c Instruction_Shift.cpp -o ${OBJDIR}/Instruction_Shift.o ${CXXFLAGS}
	${CXX} -c Instruction_ShiftDouble.cpp -o ${OBJDIR}/Instruction_ShiftDouble.o ${CXXFLAGS}
	${CXX} -c Instruction_StringOp.cpp -o ${OBJDIR}/Instruction_StringOp.o ${CXXFLAGS}
	${CXX} -c Instruction_TEST.cpp -o ${OBJDIR}/Instruction_TEST.o ${CXXFLAGS}
	${CXX} -c Instruction_XADD.cpp -o ${OBJDIR}/Instruction_XADD.o ${CXXFLAGS}
	${CXX} -c Instruction_XCHG.cpp -o ${OBJDIR}/Instruction_XCHG.o ${CXXFLAGS}
	${CXX} -c label.cpp -o ${OBJDIR}/label.o ${CXXFLAGS}
	${CXX} -c m128.cpp -o ${OBJDIR}/m128.o ${CXXFLAGS}
	${CXX} -c m16.cpp -o ${OBJDIR}/m16.o ${CXXFLAGS}
	${CXX} -c m32.cpp -o ${OBJDIR}/m32.o ${CXXFLAGS}
	${CXX} -c m64.cpp -o ${OBJDIR}/m64.o ${CXXFLAGS}
	${CXX} -c m8.cpp -o ${OBJDIR}/m8.o ${CXXFLAGS}
	${CXX} -c m80.cpp -o ${OBJDIR}/m80.o ${CXXFLAGS}
	${CXX} -c mm.cpp -o ${OBJDIR}/mm.o ${CXXFLAGS}
	${CXX} -c op_none.cpp -o ${OBJDIR}/op_none.o ${CXXFLAGS}
	${CXX} -c r16.cpp -o ${OBJDIR}/r16.o ${CXXFLAGS}
	${CXX} -c r32.cpp -o ${OBJDIR}/r32.o ${CXXFLAGS}
	${CXX} -c r64.cpp -o ${OBJDIR}/r64.o ${CXXFLAGS}
	${CXX} -c r8.cpp -o ${OBJDIR}/r8.o ${CXXFLAGS}
	${CXX} -c section.cpp -o ${OBJDIR}/section.o ${CXXFLAGS}
	${CXX} -c Sreg.cpp -o ${OBJDIR}/Sreg.o ${CXXFLAGS}
	${CXX} -c st.cpp -o ${OBJDIR}/st.o ${CXXFLAGS}
	${CXX} -c xmm.cpp -o ${OBJDIR}/xmm.o ${CXXFLAGS}
	${CXX} -c ymm.cpp -o ${OBJDIR}/ymm.o ${CXXFLAGS}
	@echo No errors
