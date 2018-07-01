CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64
ASFLAGS64 += -march=+avx

CPPASM_OBJ = ../src/obj/*.o
OUTDIR = ./output

all: test64

.PHONY: test64
test64:
	$(CXX) -c test64.cpp -o ${OUTDIR}/test64.o -I../src ${CXXFLAGS}
	$(CXX) ${OUTDIR}/test64.o ${CPPASM_OBJ} -o test64.exe ${CXXFLAGS}
	test64.exe > ${OUTDIR}/test64.S
	$(AS) ${OUTDIR}/test64.S ${ASFLAGS64} -o ${OUTDIR}/test64.o
