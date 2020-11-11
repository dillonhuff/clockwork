// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VHCOMPUTE_HW_OUTPUT_STENCIL__SYMS_H_
#define _VHCOMPUTE_HW_OUTPUT_STENCIL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vhcompute_hw_output_stencil.h"

// SYMS CLASS
class Vhcompute_hw_output_stencil__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vhcompute_hw_output_stencil*   TOPp;
    
    // CREATORS
    Vhcompute_hw_output_stencil__Syms(Vhcompute_hw_output_stencil* topp, const char* namep);
    ~Vhcompute_hw_output_stencil__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
