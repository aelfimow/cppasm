# cppasm
This is a C++ generator for x86 assembly code.

Current assembly source code syntax is: `AT&T`.

The idea behind this generator is to encapsulate every instruction and CPU register
in its own class. Every class name can be found in the Intel's developer's manuals, e.g.
imm8 class represents an 8-bit immediate value, m16 class represents a memory address of
a 16-bit data word.

All instructions are implemented as function objects, e.g.
instruction instance of MOV can be used like this:
```c++
    MOV(EAX, EBX);
```

EAX and EBX are global instances of corresponding CPU registers and the output is:
```assembly
    mov %ebx, %eax
```


See [examples](https://github.com/aelfimow/cppasm/tree/master/examples) for more examples.
See [src](https://github.com/aelfimow/cppasm/tree/master/src) for C++ generator source code.
See [tests](https://github.com/aelfimow/cppasm/tree/master/tests) for some tests.

I am using [mingw-w64](https://mingw-w64.org) to compile the C++ source files and
assemble generated assembly files.

I am compiling the [tests](https://github.com/aelfimow/cppasm/tree/master/tests) also
with Visual Studio 2017, see [Visual Studio 2017](https://github.com/aelfimow/cppasm/tree/master/VisualStudio2017)
for its project files.

This C++ generator does not attempt to convince people to write assembly source code.
Programmers, who write functions or programs in assembly language,
have their reasons for it.

I hope, anyone, a hobby programmer or someone, who is just tired thinking about
portability of his code all the time, will find this generator helpful :)
