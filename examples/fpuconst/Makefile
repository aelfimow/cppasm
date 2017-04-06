CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++11

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

CPPASM_OBJ = ../../src/obj/*.o

.PHONY: compile
.PHONY: link
.PHONY: generate
.PHONY: check

all: compile link generate check
	@echo "No errors"

compile:
	$(CXX) -c main.cpp -o main.o -I../../src ${CXXFLAGS}

link:
	$(CXX) main.o ${CPPASM_OBJ} -o gen.exe ${CXXFLAGS}

generate:
	.\\gen.exe > result/fpuconst.s

check:
	$(AS) result/fpuconst.s ${ASFLAGS64} -o result/fpuconst.o
