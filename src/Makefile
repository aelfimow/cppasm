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
	${CXX} -c dr.cpp -o ${OBJDIR}/dr.o ${CXXFLAGS}
	${CXX} -c global.cpp -o ${OBJDIR}/global.o ${CXXFLAGS}
	${CXX} -c imm16.cpp -o ${OBJDIR}/imm16.o ${CXXFLAGS}
	${CXX} -c imm32.cpp -o ${OBJDIR}/imm32.o ${CXXFLAGS}
	${CXX} -c imm64.cpp -o ${OBJDIR}/imm64.o ${CXXFLAGS}
	${CXX} -c imm8.cpp -o ${OBJDIR}/imm8.o ${CXXFLAGS}
	${CXX} -c Instruction.cpp -o ${OBJDIR}/Instruction.o ${CXXFLAGS}
	${CXX} -c Instruction_FST.cpp -o ${OBJDIR}/Instruction_FST.o ${CXXFLAGS}
	${CXX} -c Instruction_Prefix.cpp -o ${OBJDIR}/Instruction_Prefix.o ${CXXFLAGS}
	${CXX} -c Instruction_REP.cpp -o ${OBJDIR}/Instruction_REP.o ${CXXFLAGS}
	${CXX} -c Instruction_StringOp.cpp -o ${OBJDIR}/Instruction_StringOp.o ${CXXFLAGS}
	${CXX} -c label.cpp -o ${OBJDIR}/label.o ${CXXFLAGS}
	${CXX} -c m128.cpp -o ${OBJDIR}/m128.o ${CXXFLAGS}
	${CXX} -c m16.cpp -o ${OBJDIR}/m16.o ${CXXFLAGS}
	${CXX} -c m32.cpp -o ${OBJDIR}/m32.o ${CXXFLAGS}
	${CXX} -c m64.cpp -o ${OBJDIR}/m64.o ${CXXFLAGS}
	${CXX} -c m8.cpp -o ${OBJDIR}/m8.o ${CXXFLAGS}
	${CXX} -c m80.cpp -o ${OBJDIR}/m80.o ${CXXFLAGS}
	${CXX} -c mm.cpp -o ${OBJDIR}/mm.o ${CXXFLAGS}
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
