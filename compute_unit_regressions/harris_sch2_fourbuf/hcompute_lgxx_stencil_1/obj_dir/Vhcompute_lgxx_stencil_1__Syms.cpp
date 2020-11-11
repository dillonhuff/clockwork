// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vhcompute_lgxx_stencil_1__Syms.h"
#include "Vhcompute_lgxx_stencil_1.h"



// FUNCTIONS
Vhcompute_lgxx_stencil_1__Syms::Vhcompute_lgxx_stencil_1__Syms(Vhcompute_lgxx_stencil_1* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
