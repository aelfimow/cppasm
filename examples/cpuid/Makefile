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
	$(CXX) main.o ${CPPASM_OBJ} -o gen_cpuid.exe ${CXXFLAGS}

generate:
	.\\gen_cpuid.exe > result/cpuid_func.s

check:
	$(AS) result/cpuid_func.s ${ASFLAGS64} -o result/cpuid_func.o
