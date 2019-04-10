#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"
#include "div_arithm.h"


int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    // Function name to be generated
    const std::string func_name { "div_arithm" };
    comment("void " + func_name + "(struct div_param *p)");
    comment("p is in %rcx");

    global(func_name);

    label(func_name);

    r64 &param_reg { RCX };

    m64 Z1_addr;
    Z1_addr.base(param_reg).disp(offsetof(struct div_param, Z1));

    m64 Z2_addr;
    Z2_addr.base(param_reg).disp(offsetof(struct div_param, Z2));

    m64 N_addr;
    N_addr.base(param_reg).disp(offsetof(struct div_param, N));

    m64 div_result_addr;
    div_result_addr.base(param_reg).disp(offsetof(struct div_param, div_result));

    m64 mod_result_addr;
    mod_result_addr.base(param_reg).disp(offsetof(struct div_param, mod_result));

    MOV(RAX, Z1_addr);
    MOV(RDX, Z2_addr);
    MOV(R9, N_addr);

    DIV(R9);

    MOV(div_result_addr, RAX);
    MOV(mod_result_addr, RDX);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
