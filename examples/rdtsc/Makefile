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
.PHONY: check
.PHONY: link_example
.PHONY: run_example

all: compile link generate check link_example run_example
	@echo "No errors"

compile:
	$(CXX) -c generate.cpp -o generate.o -I../../src ${CXXFLAGS}
	$(CXX) -c example.cpp -o example.o ${CXXFLAGS}

link:
	$(CXX) generate.o ${CPPASM_OBJ} -o generate.exe ${CXXFLAGS}

generate:
	generate.exe > result/rdtsc_func.S

check:
	$(AS) result/rdtsc_func.S ${ASFLAGS64} -o rdtsc_func.o

link_example:
	$(CXX) example.o rdtsc_func.o -o example.exe ${CXXFLAGS}

run_example:
	example.exe
