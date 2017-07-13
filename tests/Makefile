CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS32  = --32
ASFLAGS32 += -march=corei7

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

CPPASM_OBJ = ../src/obj/*.o
OUTDIR = ./output

all: test32 test64

.PHONY: test32
test32:
	$(CXX) -c test32.cpp -o ${OUTDIR}/test32.o -I../src ${CXXFLAGS}
	$(CXX) ${OUTDIR}/test32.o ${CPPASM_OBJ} -o test32.exe ${CXXFLAGS}
	test32.exe > ${OUTDIR}/test32.S
	$(AS) ${OUTDIR}/test32.S ${ASFLAGS32} -o ${OUTDIR}/test32.o

.PHONY: test64
test64:
	$(CXX) -c test64.cpp -o ${OUTDIR}/test64.o -I../src ${CXXFLAGS}
	$(CXX) ${OUTDIR}/test64.o ${CPPASM_OBJ} -o test64.exe ${CXXFLAGS}
	test64.exe > ${OUTDIR}/test64.S
	$(AS) ${OUTDIR}/test64.S ${ASFLAGS64} -o ${OUTDIR}/test64.o
