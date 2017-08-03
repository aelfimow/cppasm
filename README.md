[![cppasm logo](cppasm-logo.png)](https://github.com/aelfimow/cppasm/blob/master/cppasm-logo.png)
# cppasm
This is a C++ generator for x86 assembly code.

Assembly source code syntax is: `AT&T`.

The idea behind this generator is to encapsulate every instruction and CPU register
in its own class. Every class name can be found in the Intel developer's manuals, e.g.
`imm8` class represents an 8-bit immediate value, `m16` class represents a memory address of
a 16-bit data word.

All instructions are implemented as function objects, e.g.
instruction instance of `MOV` can be used like this:
```c++
#include <cstdlib>
#include "cppasm.h"

int main(int argc, char *argv[])
{
    MOV(EAX, EBX);

    return EXIT_SUCCESS;
}
```

`EAX` and `EBX` are global instances of corresponding CPU registers and the output is
simply (`AT&T` syntax):
```assembly
    mov %ebx, %eax
```

Take a look at the [examples](https://github.com/aelfimow/cppasm/tree/master/examples)
to see how to use the generator.

The generator source code files can be found under [src](https://github.com/aelfimow/cppasm/tree/master/src)
and some test files under [tests](https://github.com/aelfimow/cppasm/tree/master/tests).

I am using [mingw-w64](https://mingw-w64.org) to compile the C++ source files and
assemble generated assembly files.

I am compiling the [tests](https://github.com/aelfimow/cppasm/tree/master/tests) also
with Visual Studio 2017, see [Visual Studio 2017](https://github.com/aelfimow/cppasm/tree/master/VisualStudio2017)
for its project files.

This C++ generator does not attempt to convince people to write assembly source code.
Programmers, who write functions or programs in assembly language,
have their reasons for it.

I hope, anyone, a hobby programmer or someone, who is just tired thinking about
portability of his code all the time, will find this generator helpful.

## Acknowledgements
Thanks to [Marcel Blanck](https://github.com/MarcelBlanck) for taking a look at this repository
from time to time and giving some hints.
