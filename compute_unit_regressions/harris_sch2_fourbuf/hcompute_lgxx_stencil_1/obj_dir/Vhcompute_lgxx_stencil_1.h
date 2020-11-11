// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHCOMPUTE_LGXX_STENCIL_1_H_
#define _VHCOMPUTE_LGXX_STENCIL_1_H_  // guard

#include "verilated.h"

//==========

class Vhcompute_lgxx_stencil_1__Syms;

//----------

VL_MODULE(Vhcompute_lgxx_stencil_1) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT16(out_lgxx_stencil,15,0);
    VL_IN16(in0_lgxx_stencil[1],15,0);
    VL_IN16(in1_padded16_global_wrapper_stencil[6],15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    SData/*15:0*/ hcompute_lgxx_stencil_1__DOT__smax_289_290_291_out;
    SData/*15:0*/ hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vhcompute_lgxx_stencil_1__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vhcompute_lgxx_stencil_1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vhcompute_lgxx_stencil_1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vhcompute_lgxx_stencil_1();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vhcompute_lgxx_stencil_1__Syms* symsp, bool first);
  private:
    static QData _change_request(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
