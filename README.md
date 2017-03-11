# cppasm
A library of C++ classes for experimenting with assembly source code
generation for x86 CPUs in AT&T.

The idea behind this library is to encapsulate every instruction and CPU register
in its own class. Every class name can be found in the Intel's developer's manuals, e.g.
imm8 class represents an 8-bit immediate value, m16 class represents a memory address of
a 16-bit data word.

All instructions are implemented as function objects, e.g. instruction MOV can be used like this:
    MOV(EAX, EBX);

EAX and EBX are global instances of corresponding CPU registers and the "function call"
prints out:
    mov %ebx, %eax

This library does not attempt to convince people to write assembly source code.
Programmers, who writes functions or programs in assembly language,
has their reasons for it.

I hope, anyone, a hobby programmer or someone, who is just tired thinking about
portability of his code all the time, will find this library helpful :)
