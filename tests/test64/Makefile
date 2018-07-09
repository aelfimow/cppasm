CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64
ASFLAGS64 += -march=+avx

CPPASM_OBJ = ../../src/obj/*.o
OUTDIR = ./output

INCDIR = ../../src

all: test64

.PHONY: test64
test64:
	${CXX} -c gen_Instruction1.cpp -o ${OUTDIR}/gen_Instruction1.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction2.cpp -o ${OUTDIR}/gen_Instruction2.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction3.cpp -o ${OUTDIR}/gen_Instruction3.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c test64.cpp -o ${OUTDIR}/test64.o -I${INCDIR} ${CXXFLAGS}
	${CXX} ${OUTDIR}/*.o ${CPPASM_OBJ} -o test64.exe ${CXXFLAGS}
	test64.exe > ${OUTDIR}/test64.S
	${AS} ${OUTDIR}/test64.S ${ASFLAGS64} -o ${OUTDIR}/test64.o
