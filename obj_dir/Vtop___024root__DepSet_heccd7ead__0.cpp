// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__MD_st__v0;
    SData/*15:0*/ __Vdlyvval__top__DOT__dut__DOT__op_st__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__MR_st__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__MD_st__v1;
    SData/*15:0*/ __Vdlyvval__top__DOT__dut__DOT__op_st__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__MR_st__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__MD_st__v2;
    SData/*15:0*/ __Vdlyvval__top__DOT__dut__DOT__op_st__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__MR_st__v2;
    // Body
    vlSelf->result_o = vlSelf->top__DOT__dut__DOT__op
        [3U];
    __Vdlyvval__top__DOT__dut__DOT__op_st__v0 = vlSelf->top__DOT__dut__DOT__op
        [0U];
    __Vdlyvval__top__DOT__dut__DOT__op_st__v1 = vlSelf->top__DOT__dut__DOT__op
        [1U];
    __Vdlyvval__top__DOT__dut__DOT__op_st__v2 = vlSelf->top__DOT__dut__DOT__op
        [2U];
    __Vdlyvval__top__DOT__dut__DOT__MR_st__v0 = vlSelf->data2_i;
    __Vdlyvval__top__DOT__dut__DOT__MR_st__v1 = vlSelf->top__DOT__dut__DOT_____05FMR
        [0U];
    __Vdlyvval__top__DOT__dut__DOT__MR_st__v2 = vlSelf->top__DOT__dut__DOT_____05FMR
        [1U];
    __Vdlyvval__top__DOT__dut__DOT__MD_st__v0 = vlSelf->data1_i;
    __Vdlyvval__top__DOT__dut__DOT__MD_st__v1 = vlSelf->top__DOT__dut__DOT_____05FMD
        [0U];
    __Vdlyvval__top__DOT__dut__DOT__MD_st__v2 = vlSelf->top__DOT__dut__DOT_____05FMD
        [1U];
    vlSelf->top__DOT__dut__DOT__op_st[0U] = __Vdlyvval__top__DOT__dut__DOT__op_st__v0;
    vlSelf->top__DOT__dut__DOT__op_st[1U] = __Vdlyvval__top__DOT__dut__DOT__op_st__v1;
    vlSelf->top__DOT__dut__DOT__op_st[2U] = __Vdlyvval__top__DOT__dut__DOT__op_st__v2;
    vlSelf->top__DOT__dut__DOT__MR_st[0U] = __Vdlyvval__top__DOT__dut__DOT__MR_st__v0;
    vlSelf->top__DOT__dut__DOT__MR_st[1U] = __Vdlyvval__top__DOT__dut__DOT__MR_st__v1;
    vlSelf->top__DOT__dut__DOT__MR_st[2U] = __Vdlyvval__top__DOT__dut__DOT__MR_st__v2;
    vlSelf->top__DOT__dut__DOT__MD_st[0U] = __Vdlyvval__top__DOT__dut__DOT__MD_st__v0;
    vlSelf->top__DOT__dut__DOT__MD_st[1U] = __Vdlyvval__top__DOT__dut__DOT__MD_st__v1;
    vlSelf->top__DOT__dut__DOT__MD_st[2U] = __Vdlyvval__top__DOT__dut__DOT__MD_st__v2;
    vlSelf->top__DOT__dut__DOT__re_op[0U] = vlSelf->top__DOT__dut__DOT__op_st
        [0U];
    vlSelf->top__DOT__dut__DOT__re_op[1U] = vlSelf->top__DOT__dut__DOT__op_st
        [1U];
    vlSelf->top__DOT__dut__DOT__re_op[2U] = vlSelf->top__DOT__dut__DOT__op_st
        [2U];
    vlSelf->top__DOT__dut__DOT_____05FMR[0U] = vlSelf->top__DOT__dut__DOT__MR_st
        [0U];
    vlSelf->top__DOT__dut__DOT_____05FMR[1U] = vlSelf->top__DOT__dut__DOT__MR_st
        [1U];
    vlSelf->top__DOT__dut__DOT_____05FMR[2U] = vlSelf->top__DOT__dut__DOT__MR_st
        [2U];
    vlSelf->top__DOT__dut__DOT_____05FMD[0U] = vlSelf->top__DOT__dut__DOT__MD_st
        [0U];
    vlSelf->top__DOT__dut__DOT_____05FMD[1U] = vlSelf->top__DOT__dut__DOT__MD_st
        [1U];
    vlSelf->top__DOT__dut__DOT_____05FMD[2U] = vlSelf->top__DOT__dut__DOT__MD_st
        [2U];
    vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp 
        = ((0x100U & (vlSelf->top__DOT__dut__DOT_____05FMD
                      [0U] << 1U)) | vlSelf->top__DOT__dut__DOT_____05FMD
           [0U]);
    vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp 
        = ((0x100U & (vlSelf->top__DOT__dut__DOT_____05FMD
                      [1U] << 1U)) | vlSelf->top__DOT__dut__DOT_____05FMD
           [1U]);
    vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp 
        = ((0x100U & (vlSelf->top__DOT__dut__DOT_____05FMD
                      [2U] << 1U)) | vlSelf->top__DOT__dut__DOT_____05FMD
           [2U]);
    vlSelf->top__DOT__dut__DOT__result[1U] = (0x1ffU 
                                              & ((8U 
                                                  & vlSelf->top__DOT__dut__DOT_____05FMR
                                                  [0U])
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->top__DOT__dut__DOT_____05FMR
                                                   [0U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [0U])
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp))))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [0U])
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     ((IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp) 
                                                      << 1U)))))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->top__DOT__dut__DOT_____05FMR
                                                   [0U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [0U])
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp) 
                                                    << 1U)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [0U])
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp)
                                                    : 0U))));
    vlSelf->top__DOT__dut__DOT__result[2U] = (0x1ffU 
                                              & ((0x20U 
                                                  & vlSelf->top__DOT__dut__DOT_____05FMR
                                                  [1U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->top__DOT__dut__DOT_____05FMR
                                                   [1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [1U])
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp))))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [1U])
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     ((IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp) 
                                                      << 1U)))))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->top__DOT__dut__DOT_____05FMR
                                                   [1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [1U])
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp) 
                                                    << 1U)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [1U])
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp)
                                                    : 0U))));
    vlSelf->top__DOT__dut__DOT__result[3U] = (0x1ffU 
                                              & ((0x80U 
                                                  & vlSelf->top__DOT__dut__DOT_____05FMR
                                                  [2U])
                                                  ? 
                                                 ((0x40U 
                                                   & vlSelf->top__DOT__dut__DOT_____05FMR
                                                   [2U])
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [2U])
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp))))
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [2U])
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     ((IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp) 
                                                      << 1U)))))
                                                  : 
                                                 ((0x40U 
                                                   & vlSelf->top__DOT__dut__DOT_____05FMR
                                                   [2U])
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [2U])
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp) 
                                                    << 1U)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp))
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [2U])
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp)
                                                    : 0U))));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp 
        = ((0x100U & ((IData)(vlSelf->data1_i) << 1U)) 
           | (IData)(vlSelf->data1_i));
    vlSelf->top__DOT__dut__DOT__result[0U] = (0x1ffU 
                                              & ((2U 
                                                  & (IData)(vlSelf->data2_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->data2_i))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp)))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp) 
                                                     << 1U))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->data2_i))
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp)
                                                   : 0U)));
    vlSelf->top__DOT__dut__DOT__mc[0U] = ((0xfe00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__dut__DOT__result
                                                             [0U] 
                                                             >> 8U)))) 
                                              << 9U)) 
                                          | vlSelf->top__DOT__dut__DOT__result
                                          [0U]);
    vlSelf->top__DOT__dut__DOT__mc[1U] = ((0xf800U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__dut__DOT__result
                                                             [1U] 
                                                             >> 8U)))) 
                                              << 0xbU)) 
                                          | (vlSelf->top__DOT__dut__DOT__result
                                             [1U] << 2U));
    vlSelf->top__DOT__dut__DOT__mc[2U] = ((0xe000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__dut__DOT__result
                                                             [2U] 
                                                             >> 8U)))) 
                                              << 0xdU)) 
                                          | (vlSelf->top__DOT__dut__DOT__result
                                             [2U] << 4U));
    vlSelf->top__DOT__dut__DOT__mc[3U] = ((0x8000U 
                                           & (vlSelf->top__DOT__dut__DOT__result
                                              [3U] 
                                              << 7U)) 
                                          | (vlSelf->top__DOT__dut__DOT__result
                                             [3U] << 6U));
    vlSelf->top__DOT__dut__DOT__op[0U] = vlSelf->top__DOT__dut__DOT__mc
        [0U];
    vlSelf->top__DOT__dut__DOT__op[1U] = (0xffffU & 
                                          (vlSelf->top__DOT__dut__DOT__re_op
                                           [0U] + vlSelf->top__DOT__dut__DOT__mc
                                           [1U]));
    vlSelf->top__DOT__dut__DOT__op[2U] = (0xffffU & 
                                          (vlSelf->top__DOT__dut__DOT__re_op
                                           [1U] + vlSelf->top__DOT__dut__DOT__mc
                                           [2U]));
    vlSelf->top__DOT__dut__DOT__op[3U] = (0xffffU & 
                                          (vlSelf->top__DOT__dut__DOT__re_op
                                           [2U] + vlSelf->top__DOT__dut__DOT__mc
                                           [3U]));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
