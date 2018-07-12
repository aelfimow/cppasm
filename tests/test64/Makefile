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
	${CXX} -c gen_Instruction4.cpp -o ${OUTDIR}/gen_Instruction4.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction5.cpp -o ${OUTDIR}/gen_Instruction5.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction6.cpp -o ${OUTDIR}/gen_Instruction6.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction7.cpp -o ${OUTDIR}/gen_Instruction7.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction8.cpp -o ${OUTDIR}/gen_Instruction8.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction9.cpp -o ${OUTDIR}/gen_Instruction9.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction10.cpp -o ${OUTDIR}/gen_Instruction10.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction12.cpp -o ${OUTDIR}/gen_Instruction12.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction16.cpp -o ${OUTDIR}/gen_Instruction16.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c gen_Instruction26.cpp -o ${OUTDIR}/gen_Instruction26.o -I${INCDIR} ${CXXFLAGS}
	${CXX} -c test64.cpp -o ${OUTDIR}/test64.o -I${INCDIR} ${CXXFLAGS}
	${CXX} ${OUTDIR}/*.o ${CPPASM_OBJ} -o test64.exe ${CXXFLAGS}
	test64.exe > ${OUTDIR}/test64.S
	${AS} ${OUTDIR}/test64.S ${ASFLAGS64} -o ${OUTDIR}/test64.o
