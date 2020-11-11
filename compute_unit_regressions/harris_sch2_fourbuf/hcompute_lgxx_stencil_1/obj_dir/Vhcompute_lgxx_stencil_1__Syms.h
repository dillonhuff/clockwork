// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VHCOMPUTE_LGXX_STENCIL_1__SYMS_H_
#define _VHCOMPUTE_LGXX_STENCIL_1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vhcompute_lgxx_stencil_1.h"

// SYMS CLASS
class Vhcompute_lgxx_stencil_1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vhcompute_lgxx_stencil_1*      TOPp;
    
    // CREATORS
    Vhcompute_lgxx_stencil_1__Syms(Vhcompute_lgxx_stencil_1* topp, const char* namep);
    ~Vhcompute_lgxx_stencil_1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
