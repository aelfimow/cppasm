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
.PHONY: link_windows
.PHONY: generate_windows
.PHONY: asm_windows
.PHONY: link_example_windows
.PHONY: run_example_windows

all: compile link_windows generate_windows asm_windows link_example_windows run_example_windows
	@echo "No errors"

compile:
	${CXX} -c generate.cpp -o generate.o -I../../src ${CXXFLAGS}
	${CXX} -c example.cpp -o example.o ${CXXFLAGS}

link_windows:
	${CXX} generate.o ${CPPASM_OBJ} -o generate.exe ${CXXFLAGS}

generate_windows:
	generate.exe windows > result/xorshift_func_windows.S

asm_windows:
	${AS} result/xorshift_func_windows.S ${ASFLAGS64} -o xorshift_func_windows.o

link_example_windows:
	${CXX} example.o xorshift_func_windows.o -o example.exe ${CXXFLAGS}

run_example_windows:
	example.exe
