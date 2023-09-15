// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
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
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(((IData)(vlSelf->result_o) 
                         != (0xffffU & ((IData)(vlSelf->data1_i) 
                                        * (IData)(vlSelf->data2_i)))))) {
            VL_WRITEF("[%0t] %%Error: top.sv:21: Assertion failed in %Ntop: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("top.sv", 21, "");
        }
    }
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
    vlSelf->result_o = vlSelf->top__DOT__dut__DOT__op
        [3U];
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
