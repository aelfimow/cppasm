CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

CPPASM_OBJ = ../../src/obj/*.o

.PHONY: compile
.PHONY: link
.PHONY: generate
.PHONY: asm
.PHONY: link_example_windows
.PHONY: run_example_windows

all: compile link generate asm link_example_windows run_example_windows
	@echo "No errors"

compile:
	${CXX} -c generate.cpp -o generate.o -I../../src ${CXXFLAGS}
	${CXX} -c example.cpp -o example.o ${CXXFLAGS}

link:
	${CXX} generate.o ${CPPASM_OBJ} -o generate.exe ${CXXFLAGS}

generate:
	generate.exe > result/xorshift_func.S

asm:
	${AS} result/xorshift_func.S ${ASFLAGS64} -o xorshift_func.o

link_example_windows:
	${CXX} example.o xorshift_func.o -o example.exe ${CXXFLAGS}

run_example_windows:
	example.exe
