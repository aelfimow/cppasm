CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

OBJDIR = ./obj

all:
	${CXX} -c asmstream.cpp -o ${OBJDIR}/asmstream.o ${CXXFLAGS}
	${CXX} -c cppasm.cpp -o ${OBJDIR}/cppasm.o ${CXXFLAGS}
	${CXX} -c cr.cpp -o ${OBJDIR}/cr.o ${CXXFLAGS}
	${CXX} -c dr.cpp -o ${OBJDIR}/dr.o ${CXXFLAGS}
	${CXX} -c Instruction.cpp -o ${OBJDIR}/Instruction.o ${CXXFLAGS}
	${CXX} -c keyword.cpp -o ${OBJDIR}/keyword.o ${CXXFLAGS}
	${CXX} -c label.cpp -o ${OBJDIR}/label.o ${CXXFLAGS}
	${CXX} -c section.cpp -o ${OBJDIR}/section.o ${CXXFLAGS}
	${CXX} -c st.cpp -o ${OBJDIR}/st.o ${CXXFLAGS}
	@echo No errors
