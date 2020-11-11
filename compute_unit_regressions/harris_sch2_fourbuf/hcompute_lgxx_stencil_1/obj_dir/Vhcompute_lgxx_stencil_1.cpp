// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhcompute_lgxx_stencil_1.h for the primary calling header

#include "Vhcompute_lgxx_stencil_1.h"
#include "Vhcompute_lgxx_stencil_1__Syms.h"

//==========

VL_CTOR_IMP(Vhcompute_lgxx_stencil_1) {
    Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp = __VlSymsp = new Vhcompute_lgxx_stencil_1__Syms(this, name());
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhcompute_lgxx_stencil_1::__Vconfigure(Vhcompute_lgxx_stencil_1__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vhcompute_lgxx_stencil_1::~Vhcompute_lgxx_stencil_1() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vhcompute_lgxx_stencil_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhcompute_lgxx_stencil_1::eval\n"); );
    Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("hcompute_lgxx_stencil_1.v", 17, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vhcompute_lgxx_stencil_1::_eval_initial_loop(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("hcompute_lgxx_stencil_1.v", 17, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vhcompute_lgxx_stencil_1::_combo__TOP__1(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_combo__TOP__1\n"); );
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0 
        = (0xffffU & ((((vlTOPp->in1_padded16_global_wrapper_stencil
                         [0U] + (vlTOPp->in1_padded16_global_wrapper_stencil
                                 [1U] + (vlTOPp->in1_padded16_global_wrapper_stencil
                                         [2U] << 1U))) 
                        - vlTOPp->in1_padded16_global_wrapper_stencil
                        [3U]) - (vlTOPp->in1_padded16_global_wrapper_stencil
                                 [4U] << 1U)) - vlTOPp->in1_padded16_global_wrapper_stencil
                      [5U]));
    vlTOPp->hcompute_lgxx_stencil_1__DOT__smax_289_290_291_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0))
                                           ? (IData)(vlTOPp->hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0))
                ? (IData)(vlTOPp->hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->out_lgxx_stencil = (0xffffU & (vlTOPp->in0_lgxx_stencil
                                           [0U] + (0x1ffU 
                                                   & (((IData)(vlTOPp->hcompute_lgxx_stencil_1__DOT__smax_289_290_291_out) 
                                                       * (IData)(vlTOPp->hcompute_lgxx_stencil_1__DOT__smax_289_290_291_out)) 
                                                      >> 7U))));
}

void Vhcompute_lgxx_stencil_1::_eval(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_eval\n"); );
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vhcompute_lgxx_stencil_1::_eval_initial(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_eval_initial\n"); );
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhcompute_lgxx_stencil_1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::final\n"); );
    // Variables
    Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhcompute_lgxx_stencil_1::_eval_settle(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_eval_settle\n"); );
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vhcompute_lgxx_stencil_1::_change_request(Vhcompute_lgxx_stencil_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_change_request\n"); );
    Vhcompute_lgxx_stencil_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vhcompute_lgxx_stencil_1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

void Vhcompute_lgxx_stencil_1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_lgxx_stencil_1::_ctor_var_reset\n"); );
    // Body
    out_lgxx_stencil = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            in0_lgxx_stencil[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            in1_padded16_global_wrapper_stencil[__Vi0] = VL_RAND_RESET_I(16);
    }}
    hcompute_lgxx_stencil_1__DOT__smax_289_290_291_out = VL_RAND_RESET_I(16);
    hcompute_lgxx_stencil_1__DOT__smin_287_288_289_in0 = VL_RAND_RESET_I(16);
}
