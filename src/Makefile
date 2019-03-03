CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

OBJDIR = ./obj

FILES = $(wildcard *.cpp)

.PHONY: all
.PHONY: a
.PHONY: c
.PHONY: i
.PHONY: k
.PHONY: l
.PHONY: s

all: a c i k l s
	@echo No errors

a:
	${CXX} -c asmstream.cpp -o ${OBJDIR}/asmstream.o ${CXXFLAGS}

c:
	${CXX} -c cppasm.cpp -o ${OBJDIR}/cppasm.o ${CXXFLAGS}

i:
	${CXX} -c Instruction.cpp -o ${OBJDIR}/Instruction.o ${CXXFLAGS}

k:
	${CXX} -c keyword.cpp -o ${OBJDIR}/keyword.o ${CXXFLAGS}

l:
	${CXX} -c label.cpp -o ${OBJDIR}/label.o ${CXXFLAGS}

s:
	${CXX} -c streamdest_cout.cpp -o ${OBJDIR}/streamdest_cout.o ${CXXFLAGS}
	${CXX} -c section.cpp -o ${OBJDIR}/section.o ${CXXFLAGS}
	${CXX} -c st.cpp -o ${OBJDIR}/st.o ${CXXFLAGS}

syntax:
	${CXX} -fsyntax-only ${FILES} ${CXXFLAGS}
