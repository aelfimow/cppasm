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
	./generate.exe > result/isbn-13.S

check:
	$(AS) result/isbn-13.S ${ASFLAGS64} -o isbn-13.o

link_example:
	$(CXX) example.o isbn-13.o -o example.exe ${CXXFLAGS}

run_example:
	./example.exe
