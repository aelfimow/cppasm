CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

CPPASM_OBJ = ../../src/obj/*.o

.PHONY: windows
.PHONY: linux
.PHONY: compile

.PHONY: link_windows
.PHONY: generate_windows
.PHONY: asm_windows
.PHONY: link_example_windows
.PHONY: run_example_windows

.PHONY: link_linux
.PHONY: generate_linux
.PHONY: asm_linux
.PHONY: link_example_linux
.PHONY: run_example_linux

all:
	$(error Specify: windows or linux)

windows: compile link_windows generate_windows asm_windows link_example_windows run_example_windows
	@echo "No errors"

linux: compile link_linux generate_linux asm_linux link_example_linux run_example_linux
	@echo "No errors"

compile:
	${CXX} -c generate.cpp -o generate.o -I../../src ${CXXFLAGS}
	${CXX} -c example.cpp -o example.o ${CXXFLAGS}

link_windows:
	${CXX} generate.o ${CPPASM_OBJ} -o generate.exe ${CXXFLAGS}

generate_windows:
	generate.exe windows > result/clflush_func_windows.S

asm_windows:
	${AS} result/clflush_func_windows.S ${ASFLAGS64} -o clflush_func_windows.o

link_example_windows:
	${CXX} example.o clflush_func_windows.o -o example.exe ${CXXFLAGS}

run_example_windows:
	example.exe


link_linux:
	${CXX} generate.o ${CPPASM_OBJ} -o generate ${CXXFLAGS}

generate_linux:
	generate linux > result/clflush_func_linux.S

asm_linux:
	${AS} result/clflush_func_linux.S ${ASFLAGS64} -o clflush_func_linux.o

link_example_linux:
	${CXX} example.o clflush_func_linux.o -o example ${CXXFLAGS}

run_example_linux:
	./example
