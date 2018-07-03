CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS32  = --32
ASFLAGS32 += -march=+avx

CPPASM_OBJ = ../../src/obj/*.o
OUTDIR = ./output

INCDIR = ../../src

all: test32

.PHONY: test32
test32:
	${CXX} -c gen_Instruction1.cpp -o ${OUTDIR}/gen_Instruction1.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c test32.cpp -o ${OUTDIR}/test32.o -I${INCDIR} ${CXXFLAGS}
	${CXX} ${OUTDIR}/*.o ${CPPASM_OBJ} -o test32.exe ${CXXFLAGS}
	test32.exe > ${OUTDIR}/test32.S
	${AS} ${OUTDIR}/test32.S ${ASFLAGS32} -o ${OUTDIR}/test32.o
