CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++11

ASFLAGS32  = --32
ASFLAGS32 += -march=corei7

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

OBJDIR = .

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
CPPASM_OBJ += ${OBJDIR}/Instruction_AAA.o
CPPASM_OBJ += ${OBJDIR}/Instruction_AAD.o
CPPASM_OBJ += ${OBJDIR}/Instruction_AAM.o
CPPASM_OBJ += ${OBJDIR}/Instruction_AAS.o
CPPASM_OBJ += ${OBJDIR}/Instruction_ADC.o
CPPASM_OBJ += ${OBJDIR}/Instruction_ADCX.o
CPPASM_OBJ += ${OBJDIR}/Instruction_MONITOR.o
CPPASM_OBJ += ${OBJDIR}/Instruction_MOV.o
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
CPPASM_OBJ += ${OBJDIR}/section.o
CPPASM_OBJ += ${OBJDIR}/cppasm.o
CPPASM_OBJ += ${OBJDIR}/asmstream.o

all:
	$(CXX) -c asmstream.cpp -o ${OBJDIR}/asmstream.o ${CXXFLAGS}
	$(CXX) -c section.cpp -o ${OBJDIR}/section.o ${CXXFLAGS}
	$(CXX) -c cr.cpp -o ${OBJDIR}/cr.o ${CXXFLAGS}
	$(CXX) -c dr.cpp -o ${OBJDIR}/dr.o ${CXXFLAGS}
	$(CXX) -c disp8.cpp -o ${OBJDIR}/disp8.o ${CXXFLAGS}
	$(CXX) -c disp16.cpp -o ${OBJDIR}/disp16.o ${CXXFLAGS}
	$(CXX) -c disp32.cpp -o ${OBJDIR}/disp32.o ${CXXFLAGS}
	$(CXX) -c m8.cpp -o ${OBJDIR}/m8.o ${CXXFLAGS}
	$(CXX) -c m16.cpp -o ${OBJDIR}/m16.o ${CXXFLAGS}
	$(CXX) -c m32.cpp -o ${OBJDIR}/m32.o ${CXXFLAGS}
	$(CXX) -c m64.cpp -o ${OBJDIR}/m64.o ${CXXFLAGS}
	$(CXX) -c Sreg.cpp -o ${OBJDIR}/Sreg.o ${CXXFLAGS}
	$(CXX) -c Instruction.cpp -o ${OBJDIR}/Instruction.o ${CXXFLAGS}
	$(CXX) -c Instruction_AAA.cpp -o ${OBJDIR}/Instruction_AAA.o ${CXXFLAGS}
	$(CXX) -c Instruction_AAD.cpp -o ${OBJDIR}/Instruction_AAD.o ${CXXFLAGS}
	$(CXX) -c Instruction_AAM.cpp -o ${OBJDIR}/Instruction_AAM.o ${CXXFLAGS}
	$(CXX) -c Instruction_AAS.cpp -o ${OBJDIR}/Instruction_AAS.o ${CXXFLAGS}
	$(CXX) -c Instruction_ADC.cpp -o ${OBJDIR}/Instruction_ADC.o ${CXXFLAGS}
	$(CXX) -c Instruction_ADCX.cpp -o ${OBJDIR}/Instruction_ADCX.o ${CXXFLAGS}
	$(CXX) -c Instruction_MONITOR.cpp -o ${OBJDIR}/Instruction_MONITOR.o ${CXXFLAGS}
	$(CXX) -c Instruction_MOV.cpp -o ${OBJDIR}/Instruction_MOV.o ${CXXFLAGS}
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

.PHONY: test32
test32:
	$(CXX) -c test32.cpp -o test32/test32.o ${CXXFLAGS}
	$(CXX) test32/test32.o ${CPPASM_OBJ} -o test32/test32.exe ${CXXFLAGS}
	.\\test32\\test32.exe > test32/test32.s
	$(AS) test32/test32.s ${ASFLAGS32} -o test32/test32.o

.PHONY: test64
test64:
	$(CXX) -c test64.cpp -o test64/test64.o ${CXXFLAGS}
	$(CXX) test64/test64.o ${CPPASM_OBJ} -o test64/test64.exe ${CXXFLAGS}
	.\\test64\\test64.exe > test64/test64.s
	$(AS) test64/test64.s ${ASFLAGS64} -o test64/test64.o
