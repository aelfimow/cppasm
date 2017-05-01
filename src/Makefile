CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++11

OBJDIR = ./obj

CPPASM_OBJ  = ${OBJDIR}/r8.o
CPPASM_OBJ += ${OBJDIR}/r16.o
CPPASM_OBJ += ${OBJDIR}/r32.o
CPPASM_OBJ += ${OBJDIR}/r64.o
CPPASM_OBJ += ${OBJDIR}/xmm.o
CPPASM_OBJ += ${OBJDIR}/ymm.o
CPPASM_OBJ += ${OBJDIR}/mm.o
CPPASM_OBJ += ${OBJDIR}/imm8.o
CPPASM_OBJ += ${OBJDIR}/imm16.o
CPPASM_OBJ += ${OBJDIR}/imm32.o
CPPASM_OBJ += ${OBJDIR}/imm64.o
CPPASM_OBJ += ${OBJDIR}/Instruction.o
CPPASM_OBJ += ${OBJDIR}/Instruction_NoOperands.o
CPPASM_OBJ += ${OBJDIR}/Instruction_AAD.o
CPPASM_OBJ += ${OBJDIR}/Instruction_AAM.o
CPPASM_OBJ += ${OBJDIR}/Instruction_ADC.o
CPPASM_OBJ += ${OBJDIR}/Instruction_ADCX.o
CPPASM_OBJ += ${OBJDIR}/Instruction_ADD.o
CPPASM_OBJ += ${OBJDIR}/Instruction_CLFLUSH.o
CPPASM_OBJ += ${OBJDIR}/Instruction_CMOVx.o
CPPASM_OBJ += ${OBJDIR}/Instruction_FST.o
CPPASM_OBJ += ${OBJDIR}/Instruction_Jcc.o
CPPASM_OBJ += ${OBJDIR}/Instruction_Logical.o
CPPASM_OBJ += ${OBJDIR}/Instruction_MOV.o
CPPASM_OBJ += ${OBJDIR}/Instruction_MovWithExt.o
CPPASM_OBJ += ${OBJDIR}/Instruction_NOP.o
CPPASM_OBJ += ${OBJDIR}/Instruction_POP.o
CPPASM_OBJ += ${OBJDIR}/Instruction_PUSH.o
CPPASM_OBJ += ${OBJDIR}/Instruction_RET.o
CPPASM_OBJ += ${OBJDIR}/Instruction_SETcc.o
CPPASM_OBJ += ${OBJDIR}/Instruction_Shift.o
CPPASM_OBJ += ${OBJDIR}/Instruction_TEST.o
CPPASM_OBJ += ${OBJDIR}/Sreg.o
CPPASM_OBJ += ${OBJDIR}/m8.o
CPPASM_OBJ += ${OBJDIR}/m16.o
CPPASM_OBJ += ${OBJDIR}/m32.o
CPPASM_OBJ += ${OBJDIR}/m64.o
CPPASM_OBJ += ${OBJDIR}/disp8.o
CPPASM_OBJ += ${OBJDIR}/disp16.o
CPPASM_OBJ += ${OBJDIR}/disp32.o
CPPASM_OBJ += ${OBJDIR}/cr.o
CPPASM_OBJ += ${OBJDIR}/dr.o
CPPASM_OBJ += ${OBJDIR}/st.o
CPPASM_OBJ += ${OBJDIR}/comment.o
CPPASM_OBJ += ${OBJDIR}/global.o
CPPASM_OBJ += ${OBJDIR}/label.o
CPPASM_OBJ += ${OBJDIR}/section.o
CPPASM_OBJ += ${OBJDIR}/cppasm.o
CPPASM_OBJ += ${OBJDIR}/asmstream.o

all:
	$(CXX) -c asmstream.cpp -o ${OBJDIR}/asmstream.o ${CXXFLAGS}
	$(CXX) -c comment.cpp -o ${OBJDIR}/comment.o ${CXXFLAGS}
	$(CXX) -c global.cpp -o ${OBJDIR}/global.o ${CXXFLAGS}
	$(CXX) -c label.cpp -o ${OBJDIR}/label.o ${CXXFLAGS}
	$(CXX) -c section.cpp -o ${OBJDIR}/section.o ${CXXFLAGS}
	$(CXX) -c cr.cpp -o ${OBJDIR}/cr.o ${CXXFLAGS}
	$(CXX) -c dr.cpp -o ${OBJDIR}/dr.o ${CXXFLAGS}
	$(CXX) -c st.cpp -o ${OBJDIR}/st.o ${CXXFLAGS}
	$(CXX) -c disp8.cpp -o ${OBJDIR}/disp8.o ${CXXFLAGS}
	$(CXX) -c disp16.cpp -o ${OBJDIR}/disp16.o ${CXXFLAGS}
	$(CXX) -c disp32.cpp -o ${OBJDIR}/disp32.o ${CXXFLAGS}
	$(CXX) -c m8.cpp -o ${OBJDIR}/m8.o ${CXXFLAGS}
	$(CXX) -c m16.cpp -o ${OBJDIR}/m16.o ${CXXFLAGS}
	$(CXX) -c m32.cpp -o ${OBJDIR}/m32.o ${CXXFLAGS}
	$(CXX) -c m64.cpp -o ${OBJDIR}/m64.o ${CXXFLAGS}
	$(CXX) -c m80.cpp -o ${OBJDIR}/m80.o ${CXXFLAGS}
	$(CXX) -c Sreg.cpp -o ${OBJDIR}/Sreg.o ${CXXFLAGS}
	$(CXX) -c Instruction.cpp -o ${OBJDIR}/Instruction.o ${CXXFLAGS}
	$(CXX) -c Instruction_NoOperands.cpp -o ${OBJDIR}/Instruction_NoOperands.o ${CXXFLAGS}
	$(CXX) -c Instruction_AAD.cpp -o ${OBJDIR}/Instruction_AAD.o ${CXXFLAGS}
	$(CXX) -c Instruction_AAM.cpp -o ${OBJDIR}/Instruction_AAM.o ${CXXFLAGS}
	$(CXX) -c Instruction_ADC.cpp -o ${OBJDIR}/Instruction_ADC.o ${CXXFLAGS}
	$(CXX) -c Instruction_ADCX.cpp -o ${OBJDIR}/Instruction_ADCX.o ${CXXFLAGS}
	$(CXX) -c Instruction_ADD.cpp -o ${OBJDIR}/Instruction_ADD.o ${CXXFLAGS}
	$(CXX) -c Instruction_CLFLUSH.cpp -o ${OBJDIR}/Instruction_CLFLUSH.o ${CXXFLAGS}
	$(CXX) -c Instruction_CMOVx.cpp -o ${OBJDIR}/Instruction_CMOVx.o ${CXXFLAGS}
	$(CXX) -c Instruction_FST.cpp -o ${OBJDIR}/Instruction_FST.o ${CXXFLAGS}
	$(CXX) -c Instruction_Jcc.cpp -o ${OBJDIR}/Instruction_Jcc.o ${CXXFLAGS}
	$(CXX) -c Instruction_Logical.cpp -o ${OBJDIR}/Instruction_Logical.o ${CXXFLAGS}
	$(CXX) -c Instruction_MOV.cpp -o ${OBJDIR}/Instruction_MOV.o ${CXXFLAGS}
	$(CXX) -c Instruction_MovWithExt.cpp -o ${OBJDIR}/Instruction_MovWithExt.o ${CXXFLAGS}
	$(CXX) -c Instruction_NOP.cpp -o ${OBJDIR}/Instruction_NOP.o ${CXXFLAGS}
	$(CXX) -c Instruction_POP.cpp -o ${OBJDIR}/Instruction_POP.o ${CXXFLAGS}
	$(CXX) -c Instruction_PUSH.cpp -o ${OBJDIR}/Instruction_PUSH.o ${CXXFLAGS}
	$(CXX) -c Instruction_RET.cpp -o ${OBJDIR}/Instruction_RET.o ${CXXFLAGS}
	$(CXX) -c Instruction_SETcc.cpp -o ${OBJDIR}/Instruction_SETcc.o ${CXXFLAGS}
	$(CXX) -c Instruction_Shift.cpp -o ${OBJDIR}/Instruction_Shift.o ${CXXFLAGS}
	$(CXX) -c Instruction_TEST.cpp -o ${OBJDIR}/Instruction_TEST.o ${CXXFLAGS}
	$(CXX) -c r8.cpp -o ${OBJDIR}/r8.o ${CXXFLAGS}
	$(CXX) -c r16.cpp -o ${OBJDIR}/r16.o ${CXXFLAGS}
	$(CXX) -c r32.cpp -o ${OBJDIR}/r32.o ${CXXFLAGS}
	$(CXX) -c r64.cpp -o ${OBJDIR}/r64.o ${CXXFLAGS}
	$(CXX) -c xmm.cpp -o ${OBJDIR}/xmm.o ${CXXFLAGS}
	$(CXX) -c ymm.cpp -o ${OBJDIR}/ymm.o ${CXXFLAGS}
	$(CXX) -c mm.cpp -o ${OBJDIR}/mm.o ${CXXFLAGS}
	$(CXX) -c imm8.cpp -o ${OBJDIR}/imm8.o ${CXXFLAGS}
	$(CXX) -c imm16.cpp -o ${OBJDIR}/imm16.o ${CXXFLAGS}
	$(CXX) -c imm32.cpp -o ${OBJDIR}/imm32.o ${CXXFLAGS}
	$(CXX) -c imm64.cpp -o ${OBJDIR}/imm64.o ${CXXFLAGS}
	$(CXX) -c cppasm.cpp -o ${OBJDIR}/cppasm.o ${CXXFLAGS}
	@echo "No errors"
