[![cppasm logo](cppasm-logo.png)](cppasm-logo.png)
# cppasm
This is a C++ generator for x86 assembly code.

Generated assembly source code syntax is: `AT&T`.

The idea behind this generator is to encapsulate every instruction and CPU register
in its own class. Every class name can be found in the Intel developer's manuals, e.g.
`imm8` class represents an 8-bit immediate value, `m16` class represents a memory address of
a 16-bit data word.

All instructions are implemented as function objects, e.g.
instruction instance of `MOV` can be used like this:
```c++
#include "cppasm.h"

int main(int argc, char *argv[])
{
    MOV(EAX, EBX);

    return 0;
}
```

`EAX` and `EBX` are global instances of corresponding CPU registers and the output is
simply (`AT&T` syntax):
```assembly
    mov %ebx, %eax
```

## Examples
Take a look at the [examples](https://github.com/aelfimow/cppasm/tree/master/examples)
to see how to use the generator. The examples follow the same pattern. There is a `generate.cpp`,
generator for some assembly function in the output subdirectory, and an `example.cpp`, a simple
application using generated assembly function.

## Source code
The generator source code files can be found under [src](src).

## Compiler
I am using [mingw-w64](https://mingw-w64.org) to compile the C++ source files and
assemble generated assembly files.

## Tests
The idea behind testing the generator is to generate as much as possible of supported
instructions and to assemble it using GNU assembler.
The test is successful, if the assembler does not complain.
Additionally, the generated assembler code has been reviewed and added to the git repository,
so `git status` output must be checked for any changes.
The tests are divided into [32-bit](tests/test32) and [64-bit](tests/test64) tests.
The test code is also compiled with [Visual Studio 2017](VisualStudio2017), but
the source code is just compiled only and the assembly source code output is ignored.

Currently, improved [tests](https://github.com/aelfimow/cppasm-test)
have been started using [googletest](https://github.com/google/googletest) framework.

## Notes
This C++ generator does not attempt to convince people to write assembly source code.
Programmers, who write functions or programs in assembly language,
have their reasons for it.

I hope, anyone, a hobby programmer or someone, who is just tired thinking about
portability of his code all the time, will find this generator helpful.

## Acknowledgements
Thanks to [Marcel Blanck](https://github.com/MarcelBlanck) for taking a look at this repository
from time to time and giving some hints.
