// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhcompute_hw_output_stencil.h for the primary calling header

#include "Vhcompute_hw_output_stencil.h"
#include "Vhcompute_hw_output_stencil__Syms.h"

//==========

VL_CTOR_IMP(Vhcompute_hw_output_stencil) {
    Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp = __VlSymsp = new Vhcompute_hw_output_stencil__Syms(this, name());
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhcompute_hw_output_stencil::__Vconfigure(Vhcompute_hw_output_stencil__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vhcompute_hw_output_stencil::~Vhcompute_hw_output_stencil() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vhcompute_hw_output_stencil::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhcompute_hw_output_stencil::eval\n"); );
    Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("hcompute_hw_output_stencil.v", 17, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vhcompute_hw_output_stencil::_eval_initial_loop(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("hcompute_hw_output_stencil.v", 17, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vhcompute_hw_output_stencil::_combo__TOP__1(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_combo__TOP__1\n"); );
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x2eU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2fU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x30U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [1U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [2U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [3U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [3U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x2fU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0x2dU] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [1U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x21U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x2eU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x1dU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x1eU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x1fU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [4U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [6U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [5U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [5U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x1eU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0x14U] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [4U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x1cU] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x1dU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xdU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x25U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [0x1bU] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xeU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x23U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x26U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x26U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x25U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x29U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xeU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x11U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xdU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x22U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2bU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x24U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xfU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x1aU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x27U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x27U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2bU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x2aU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xfU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x15U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x22U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xbU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                           [0x16U] 
                                           << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x21U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2cU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x2dU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x30U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [7U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0x2fU] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [2U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [3U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [8U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x2dU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xbU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [0x2fU] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x21U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2eU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [8U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [7U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                         [0xaU] << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [2U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x2cU] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x30U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x1cU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x14U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x12U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x16U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xbU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xbU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x14U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [5U] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [4U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x1cU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x1fU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x20U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x1eU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [6U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [5U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xcU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xcU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x20U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [0x13U] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [6U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x12U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x1fU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [7U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x1bU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0xdU] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [8U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xeU] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x23U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x23U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x1bU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x18U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [8U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xaU] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [7U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x20U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x24U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x22U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xcU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0xfU] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x1aU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x1aU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x24U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x19U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xcU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x13U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x20U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x10U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x28U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x17U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x11U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x18U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x29U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x29U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x28U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x25U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x11U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xdU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x10U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x15U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2aU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x19U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x10U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x17U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x28U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x28U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2aU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x27U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x10U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xfU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x15U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [4U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [5U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                         [6U] << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2eU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x30U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x2fU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x2fU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xdU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [7U] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [3U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [8U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xeU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x2fU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [5U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0xbU] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2eU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [4U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xeU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0xdU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                             [0x11U] 
                                             << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [3U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x2dU] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x2fU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x1eU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x22U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x20U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [5U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xcU] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xfU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xfU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x22U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [0x15U] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [5U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x14U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x1eU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xfU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x27U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [0x1aU] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xdU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x1bU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x25U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x25U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x27U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x28U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xdU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x10U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xfU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x16U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [9U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0xbU] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2cU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2dU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xaU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xaU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [9U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                           [7U] << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2cU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x30U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x16U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x12U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x13U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x14U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x16U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xbU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [9U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [9U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x17U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0x10U] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xaU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x11U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x18U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x13U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x19U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x15U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [9U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x10U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x17U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [9U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0x13U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                            [0xcU] 
                                            << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x16U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [6U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x12U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x18U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x17U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x1bU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xaU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [7U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [9U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x17U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x19U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x1aU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [9U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xcU] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x13U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [6U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xcU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                           [5U] << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x30U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2fU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [7U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xbU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x10U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [9U] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2dU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xaU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x11U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [7U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xcU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                           [9U] << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x30U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x16U] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [6U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x11U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x10U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0xdU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2dU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x2fU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xbU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x14U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x15U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x13U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xbU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [9U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x10U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xcU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0x1aU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                              [0xfU] 
                                              << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [7U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xdU] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x1bU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x10U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x15U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0xfU] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0xbU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [5U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0x14U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0x1bU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0x1aU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                               [0x17U] 
                                               << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [7U]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [9U] << 1U)) - vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xcU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [5U] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                 [0xfU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                           [0xcU] << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2fU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [7U] << 1U)) - 
                      vlTOPp->in0_padded16_global_wrapper_stencil
                      [0xdU]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0 
        = (0xffffU & ((((vlTOPp->in0_padded16_global_wrapper_stencil
                         [0xdU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                   [0xfU] + (vlTOPp->in0_padded16_global_wrapper_stencil
                                             [0x10U] 
                                             << 1U))) 
                        - vlTOPp->in0_padded16_global_wrapper_stencil
                        [0x2fU]) - (vlTOPp->in0_padded16_global_wrapper_stencil
                                    [0xbU] << 1U)) 
                      - vlTOPp->in0_padded16_global_wrapper_stencil
                      [5U]));
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1160_1148_1161_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1264_1148_1265_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1585_1148_1586_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1624_1148_1625_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1801_1148_1802_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1838_1148_1839_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1958_1148_1959_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1977_1148_1978_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1147_1148_1149_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1181_1148_1182_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1254_1148_1255_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1283_1148_1284_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1527_1148_1528_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1546_1148_1547_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1595_1148_1596_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1633_1148_1634_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1685_1148_1686_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1704_1148_1705_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1743_1148_1744_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1762_1148_1763_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1819_1148_1820_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1858_1148_1859_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1900_1148_1901_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1919_1148_1920_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1170_1148_1171_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1213_1148_1214_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1274_1148_1275_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1311_1148_1312_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1605_1148_1606_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1642_1148_1643_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1810_1148_1811_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1848_1148_1849_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1192_1148_1193_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1292_1148_1293_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1385_1148_1386_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1404_1148_1405_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1414_1148_1415_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1442_1148_1443_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1461_1148_1462_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1471_1148_1472_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1202_1148_1203_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1234_1148_1235_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1301_1148_1302_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1331_1148_1332_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1395_1148_1396_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1424_1148_1425_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1451_1148_1452_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1481_1148_1482_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1223_1148_1224_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__smax_1321_1148_1322_out 
        = (VL_LTES_III(1,16,16, 0xff01U, (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0))
                                           ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0)
                                           : 0xffU))
            ? (VL_GTES_III(1,16,16, 0xffU, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0))
                ? (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0)
                : 0xffU) : 0xff01U);
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1150_1151_1152_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1147_1148_1149_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1147_1148_1149_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1183_1151_1184_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1181_1148_1182_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1181_1148_1182_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1345_1151_1346_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1147_1148_1149_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1254_1148_1255_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1256_1151_1257_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1254_1148_1255_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1254_1148_1255_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1351_1151_1352_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1181_1148_1182_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1283_1148_1284_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1285_1151_1286_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1283_1148_1284_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1283_1148_1284_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1529_1151_1530_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1527_1148_1528_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1527_1148_1528_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1560_1151_1561_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1527_1148_1528_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1546_1148_1547_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1548_1151_1549_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1546_1148_1547_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1546_1148_1547_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1597_1151_1598_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1595_1148_1596_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1595_1148_1596_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1658_1151_1659_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1595_1148_1596_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1633_1148_1634_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1635_1151_1636_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1633_1148_1634_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1633_1148_1634_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1687_1151_1688_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1685_1148_1686_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1685_1148_1686_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1718_1151_1719_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1685_1148_1686_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1704_1148_1705_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1706_1151_1707_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1704_1148_1705_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1704_1148_1705_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1745_1151_1746_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1743_1148_1744_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1743_1148_1744_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1776_1151_1777_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1743_1148_1744_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1762_1148_1763_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1764_1151_1765_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1762_1148_1763_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1762_1148_1763_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1821_1151_1822_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1819_1148_1820_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1819_1148_1820_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1876_1151_1877_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1819_1148_1820_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1858_1148_1859_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1860_1151_1861_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1858_1148_1859_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1858_1148_1859_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1902_1151_1903_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1900_1148_1901_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1900_1148_1901_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1933_1151_1934_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1900_1148_1901_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1919_1148_1920_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1921_1151_1922_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1919_1148_1920_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1919_1148_1920_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1172_1151_1173_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1170_1148_1171_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1170_1148_1171_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1215_1151_1216_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1213_1148_1214_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1213_1148_1214_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1349_1151_1350_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1170_1148_1171_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1274_1148_1275_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1276_1151_1277_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1274_1148_1275_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1274_1148_1275_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1357_1151_1358_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1213_1148_1214_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1311_1148_1312_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1313_1151_1314_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1311_1148_1312_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1311_1148_1312_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1607_1151_1608_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1605_1148_1606_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1605_1148_1606_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1660_1151_1661_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1605_1148_1606_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1642_1148_1643_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1644_1151_1645_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1642_1148_1643_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1642_1148_1643_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1812_1151_1813_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1810_1148_1811_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1810_1148_1811_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1874_1151_1875_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1810_1148_1811_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1848_1148_1849_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1850_1151_1851_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1848_1148_1849_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1848_1148_1849_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1192_1148_1193_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1192_1148_1193_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1192_1148_1193_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1292_1148_1293_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1292_1148_1293_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1292_1148_1293_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1385_1148_1386_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1385_1148_1386_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1404_1148_1405_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1404_1148_1405_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1414_1148_1415_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1414_1148_1415_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1385_1148_1386_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1442_1148_1443_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1442_1148_1443_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1442_1148_1443_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1404_1148_1405_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1461_1148_1462_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1461_1148_1462_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1461_1148_1462_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1414_1148_1415_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1471_1148_1472_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1471_1148_1472_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1471_1148_1472_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1202_1148_1203_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1202_1148_1203_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1234_1148_1235_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1234_1148_1235_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1202_1148_1203_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1301_1148_1302_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1301_1148_1302_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1301_1148_1302_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1234_1148_1235_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1331_1148_1332_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1331_1148_1332_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1331_1148_1332_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1395_1148_1396_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1395_1148_1396_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1424_1148_1425_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1424_1148_1425_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1395_1148_1396_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1451_1148_1452_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1451_1148_1452_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1451_1148_1452_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1424_1148_1425_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1481_1148_1482_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1481_1148_1482_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1481_1148_1482_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1223_1148_1224_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1223_1148_1224_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1223_1148_1224_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1321_1148_1322_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1321_1148_1322_out) 
                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1321_1148_1322_out))), 7U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1245_1246_1247_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1150_1151_1152_out) 
                                                  + 
                                                  ((0x1ffU 
                                                    & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1160_1148_1161_out) 
                                                        * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1160_1148_1161_out)) 
                                                       >> 7U)) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1172_1151_1173_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1183_1151_1184_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1215_1151_1216_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1538_1246_1539_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1172_1151_1173_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1150_1151_1152_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1529_1151_1530_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1616_1246_1617_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1529_1151_1530_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1172_1151_1173_out) 
                                                   + 
                                                   ((0x1ffU 
                                                     & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1585_1148_1586_out) 
                                                         * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1585_1148_1586_out)) 
                                                        >> 7U)) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1597_1151_1598_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1607_1151_1608_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1696_1246_1697_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1183_1151_1184_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1215_1151_1216_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1687_1151_1688_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1754_1246_1755_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1597_1151_1598_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1607_1151_1608_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1745_1151_1746_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1830_1246_1831_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1215_1151_1216_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1687_1151_1688_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out) 
                                                       + 
                                                       ((0x1ffU 
                                                         & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1801_1148_1802_out) 
                                                             * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1801_1148_1802_out)) 
                                                            >> 7U)) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1812_1151_1813_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1821_1151_1822_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1911_1246_1912_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1821_1151_1822_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1902_1151_1903_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1812_1151_1813_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1969_1246_1970_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1607_1151_1608_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1745_1151_1746_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1812_1151_1813_out) 
                                                        + 
                                                        ((0x1ffU 
                                                          & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1958_1148_1959_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1958_1148_1959_out)) 
                                                             >> 7U)) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1902_1151_1903_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1435_1246_1436_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1569_1246_1570_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1349_1151_1350_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1345_1151_1346_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1560_1151_1561_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1727_1246_1728_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1351_1151_1352_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1357_1151_1358_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1718_1151_1719_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1785_1246_1786_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1658_1151_1659_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1660_1151_1661_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1776_1151_1777_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1942_1246_1943_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1876_1151_1877_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1933_1151_1934_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1874_1151_1875_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1370_1246_1371_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1345_1151_1346_out) 
                                                  + 
                                                  ((0x1ffU 
                                                    & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1160_1148_1161_out) 
                                                        * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1264_1148_1265_out)) 
                                                       >> 7U)) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1349_1151_1350_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1351_1151_1352_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1357_1151_1358_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1669_1246_1670_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1560_1151_1561_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1349_1151_1350_out) 
                                                   + 
                                                   ((0x1ffU 
                                                     & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1585_1148_1586_out) 
                                                         * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1624_1148_1625_out)) 
                                                        >> 7U)) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1658_1151_1659_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1660_1151_1661_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1885_1246_1886_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1357_1151_1358_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1718_1151_1719_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out) 
                                                       + 
                                                       ((0x1ffU 
                                                         & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1801_1148_1802_out) 
                                                             * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1838_1148_1839_out)) 
                                                            >> 7U)) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1874_1151_1875_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1876_1151_1877_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_2000_1246_2001_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1660_1151_1661_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1776_1151_1777_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1874_1151_1875_out) 
                                                        + 
                                                        ((0x1ffU 
                                                          & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1958_1148_1959_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1977_1148_1978_out)) 
                                                             >> 7U)) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1933_1151_1934_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1512_1246_1513_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1342_1246_1343_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1256_1151_1257_out) 
                                                  + 
                                                  ((0x1ffU 
                                                    & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1264_1148_1265_out) 
                                                        * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1264_1148_1265_out)) 
                                                       >> 7U)) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1276_1151_1277_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1285_1151_1286_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1313_1151_1314_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1557_1246_1558_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1276_1151_1277_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1256_1151_1257_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1548_1151_1549_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1653_1246_1654_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1548_1151_1549_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1276_1151_1277_out) 
                                                   + 
                                                   ((0x1ffU 
                                                     & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1624_1148_1625_out) 
                                                         * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1624_1148_1625_out)) 
                                                        >> 7U)) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1635_1151_1636_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1644_1151_1645_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1715_1246_1716_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1285_1151_1286_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1313_1151_1314_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1706_1151_1707_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1773_1246_1774_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1635_1151_1636_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1644_1151_1645_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1764_1151_1765_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1869_1246_1870_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1313_1151_1314_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1706_1151_1707_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out) 
                                                       + 
                                                       ((0x1ffU 
                                                         & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1838_1148_1839_out) 
                                                             * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1838_1148_1839_out)) 
                                                            >> 7U)) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1850_1151_1851_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1860_1151_1861_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1930_1246_1931_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1860_1151_1861_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1921_1151_1922_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1850_1151_1851_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1988_1246_1989_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1644_1151_1645_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1764_1151_1765_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1850_1151_1851_out) 
                                                        + 
                                                        ((0x1ffU 
                                                          & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1977_1148_1978_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__smax_1977_1148_1978_out)) 
                                                             >> 7U)) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1921_1151_1922_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1492_1246_1493_out 
        = (0xffffU & VL_SHIFTRS_III(16,16,16, (0xffffU 
                                               & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out) 
                                                  + 
                                                  ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out) 
                                                   + 
                                                   ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out) 
                                                    + 
                                                    ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out) 
                                                     + 
                                                     ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out) 
                                                      + 
                                                      ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out) 
                                                       + 
                                                       ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out) 
                                                        + 
                                                        ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out) 
                                                         + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out)))))))))), 6U));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1247_1343_1374_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1245_1246_1247_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1342_1246_1343_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1539_1558_1573_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1538_1246_1539_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1557_1246_1558_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1617_1654_1673_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1616_1246_1617_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1653_1246_1654_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1697_1716_1731_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1696_1246_1697_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1715_1246_1716_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1755_1774_1789_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1754_1246_1755_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1773_1246_1774_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1831_1870_1889_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1830_1246_1831_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1869_1246_1870_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1912_1931_1946_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1911_1246_1912_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1930_1246_1931_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1970_1989_2004_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1969_1246_1970_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1988_1246_1989_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__add_1436_1493_1516_out 
        = (0xffffU & ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1435_1246_1436_out) 
                      + (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1492_1246_1493_out)));
    vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out 
        = (0xffffU & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1435_1246_1436_out) 
                        * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1492_1246_1493_out)) 
                       - ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1512_1246_1513_out) 
                          * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1512_1246_1513_out))) 
                      - (0xfffU & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1436_1493_1516_out) 
                                    * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1436_1493_1516_out)) 
                                   >> 4U))));
    vlTOPp->out_hw_output_stencil = (((((((((VL_LTS_III(1,16,16, 
                                                        (0xffffU 
                                                         & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1245_1246_1247_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1342_1246_1343_out)) 
                                                             - 
                                                             ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1370_1246_1371_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1370_1246_1371_out))) 
                                                            - 
                                                            (0xfffU 
                                                             & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1247_1343_1374_out) 
                                                                 * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1247_1343_1374_out)) 
                                                                >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out)) 
                                             & VL_LTS_III(1,16,16, 
                                                          (0xffffU 
                                                           & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1538_1246_1539_out) 
                                                                * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1557_1246_1558_out)) 
                                                               - 
                                                               ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1569_1246_1570_out) 
                                                                * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1569_1246_1570_out))) 
                                                              - 
                                                              (0xfffU 
                                                               & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1539_1558_1573_out) 
                                                                   * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1539_1558_1573_out)) 
                                                                  >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                            & VL_LTS_III(1,16,16, 
                                                         (0xffffU 
                                                          & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1616_1246_1617_out) 
                                                               * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1653_1246_1654_out)) 
                                                              - 
                                                              ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1669_1246_1670_out) 
                                                               * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1669_1246_1670_out))) 
                                                             - 
                                                             (0xfffU 
                                                              & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1617_1654_1673_out) 
                                                                  * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1617_1654_1673_out)) 
                                                                 >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                           & VL_LTS_III(1,16,16, 
                                                        (0xffffU 
                                                         & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1696_1246_1697_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1715_1246_1716_out)) 
                                                             - 
                                                             ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1727_1246_1728_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1727_1246_1728_out))) 
                                                            - 
                                                            (0xfffU 
                                                             & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1697_1716_1731_out) 
                                                                 * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1697_1716_1731_out)) 
                                                                >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                          & VL_LTS_III(1,16,16, 
                                                       (0xffffU 
                                                        & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1754_1246_1755_out) 
                                                             * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1773_1246_1774_out)) 
                                                            - 
                                                            ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1785_1246_1786_out) 
                                                             * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1785_1246_1786_out))) 
                                                           - 
                                                           (0xfffU 
                                                            & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1755_1774_1789_out) 
                                                                * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1755_1774_1789_out)) 
                                                               >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                         & VL_LTS_III(1,16,16, 
                                                      (0xffffU 
                                                       & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1830_1246_1831_out) 
                                                            * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1869_1246_1870_out)) 
                                                           - 
                                                           ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1885_1246_1886_out) 
                                                            * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1885_1246_1886_out))) 
                                                          - 
                                                          (0xfffU 
                                                           & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1831_1870_1889_out) 
                                                               * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1831_1870_1889_out)) 
                                                              >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                        & VL_LTS_III(1,16,16, 
                                                     (0xffffU 
                                                      & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1911_1246_1912_out) 
                                                           * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1930_1246_1931_out)) 
                                                          - 
                                                          ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1942_1246_1943_out) 
                                                           * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1942_1246_1943_out))) 
                                                         - 
                                                         (0xfffU 
                                                          & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1912_1931_1946_out) 
                                                              * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1912_1931_1946_out)) 
                                                             >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                       & VL_LTS_III(1,16,16, 
                                                    (0xffffU 
                                                     & ((((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1969_1246_1970_out) 
                                                          * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_1988_1246_1989_out)) 
                                                         - 
                                                         ((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_2000_1246_2001_out) 
                                                          * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__ashr_2000_1246_2001_out))) 
                                                        - 
                                                        (0xfffU 
                                                         & (((IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1970_1989_2004_out) 
                                                             * (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__add_1970_1989_2004_out)) 
                                                            >> 4U)))), (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out))) 
                                      & VL_LTES_III(1,16,16, 1U, (IData)(vlTOPp->hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out)))
                                      ? 0xffU : 0U);
}

void Vhcompute_hw_output_stencil::_eval(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_eval\n"); );
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vhcompute_hw_output_stencil::_eval_initial(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_eval_initial\n"); );
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhcompute_hw_output_stencil::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::final\n"); );
    // Variables
    Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhcompute_hw_output_stencil::_eval_settle(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_eval_settle\n"); );
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vhcompute_hw_output_stencil::_change_request(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_change_request\n"); );
    Vhcompute_hw_output_stencil* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vhcompute_hw_output_stencil::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

void Vhcompute_hw_output_stencil::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhcompute_hw_output_stencil::_ctor_var_reset\n"); );
    // Body
    out_hw_output_stencil = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<49; ++__Vi0) {
            in0_padded16_global_wrapper_stencil[__Vi0] = VL_RAND_RESET_I(16);
    }}
    hcompute_hw_output_stencil__DOT__add_1247_1343_1374_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1436_1493_1516_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1539_1558_1573_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1617_1654_1673_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1697_1716_1731_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1755_1774_1789_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1831_1870_1889_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1912_1931_1946_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__add_1970_1989_2004_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1150_1151_1152_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1172_1151_1173_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1183_1151_1184_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1215_1151_1216_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1245_1246_1247_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1256_1151_1257_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1276_1151_1277_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1285_1151_1286_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1313_1151_1314_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1342_1246_1343_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1345_1151_1346_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1349_1151_1350_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1351_1151_1352_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1357_1151_1358_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1370_1246_1371_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1435_1246_1436_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1492_1246_1493_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1512_1246_1513_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1529_1151_1530_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1538_1246_1539_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1548_1151_1549_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1557_1246_1558_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1560_1151_1561_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1569_1246_1570_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1597_1151_1598_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1607_1151_1608_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1616_1246_1617_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1635_1151_1636_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1644_1151_1645_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1653_1246_1654_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1658_1151_1659_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1660_1151_1661_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1669_1246_1670_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1687_1151_1688_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1696_1246_1697_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1706_1151_1707_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1715_1246_1716_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1718_1151_1719_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1727_1246_1728_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1745_1151_1746_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1754_1246_1755_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1764_1151_1765_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1773_1246_1774_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1776_1151_1777_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1785_1246_1786_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1812_1151_1813_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1821_1151_1822_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1830_1246_1831_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1850_1151_1851_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1860_1151_1861_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1869_1246_1870_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1874_1151_1875_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1876_1151_1877_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1885_1246_1886_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1902_1151_1903_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1911_1246_1912_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1921_1151_1922_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1930_1246_1931_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1933_1151_1934_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1942_1246_1943_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1969_1246_1970_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_1988_1246_1989_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__ashr_2000_1246_2001_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1147_1148_1149_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1160_1148_1161_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1170_1148_1171_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1181_1148_1182_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1192_1148_1193_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1202_1148_1203_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1213_1148_1214_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1223_1148_1224_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1234_1148_1235_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1254_1148_1255_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1264_1148_1265_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1274_1148_1275_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1283_1148_1284_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1292_1148_1293_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1301_1148_1302_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1311_1148_1312_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1321_1148_1322_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1331_1148_1332_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1385_1148_1386_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1395_1148_1396_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1404_1148_1405_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1414_1148_1415_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1424_1148_1425_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1442_1148_1443_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1451_1148_1452_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1461_1148_1462_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1471_1148_1472_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1481_1148_1482_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1527_1148_1528_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1546_1148_1547_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1585_1148_1586_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1595_1148_1596_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1605_1148_1606_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1624_1148_1625_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1633_1148_1634_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1642_1148_1643_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1685_1148_1686_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1704_1148_1705_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1743_1148_1744_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1762_1148_1763_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1801_1148_1802_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1810_1148_1811_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1819_1148_1820_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1838_1148_1839_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1848_1148_1849_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1858_1148_1859_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1900_1148_1901_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1919_1148_1920_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1958_1148_1959_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smax_1977_1148_1978_out = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0 = VL_RAND_RESET_I(16);
    hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out = VL_RAND_RESET_I(16);
}
