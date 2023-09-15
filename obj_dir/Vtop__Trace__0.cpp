// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__dut__DOT__re_op[0]),16);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT__dut__DOT__re_op[1]),16);
        bufp->chgSData(oldp+2,(vlSelf->top__DOT__dut__DOT__re_op[2]),16);
        bufp->chgSData(oldp+3,(vlSelf->top__DOT__dut__DOT__op_st[0]),16);
        bufp->chgSData(oldp+4,(vlSelf->top__DOT__dut__DOT__op_st[1]),16);
        bufp->chgSData(oldp+5,(vlSelf->top__DOT__dut__DOT__op_st[2]),16);
        bufp->chgSData(oldp+6,(vlSelf->top__DOT__dut__DOT__op_st[3]),16);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__MD_st[0]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__MD_st[1]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__MD_st[2]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__MD_st[3]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__MR_st[0]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__MR_st[1]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__MR_st[2]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__MR_st[3]),8);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__dut__DOT__re_op
                                [0U]),16);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__dut__DOT__re_op
                                [1U]),16);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__dut__DOT__re_op
                                [2U]),16);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT_____05FMD
                                [0U]),8);
        bufp->chgCData(oldp+19,((7U & (vlSelf->top__DOT__dut__DOT_____05FMR
                                       [0U] >> 1U))),3);
        bufp->chgSData(oldp+20,((0x1ffU & ((8U & vlSelf->top__DOT__dut__DOT_____05FMR
                                            [0U]) ? 
                                           ((4U & vlSelf->top__DOT__dut__DOT_____05FMR
                                             [0U]) ? 
                                            ((2U & 
                                              vlSelf->top__DOT__dut__DOT_____05FMR
                                              [0U])
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + (~ (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp))))
                                             : ((2U 
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
                                            : ((4U 
                                                & vlSelf->top__DOT__dut__DOT_____05FMR
                                                [0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [0U])
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp) 
                                                    << 1U)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp))
                                                : (
                                                   (2U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [0U])
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp)
                                                    : 0U))))),9);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp),9);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__dut__DOT_____05FMD
                                [1U]),8);
        bufp->chgCData(oldp+23,((7U & (vlSelf->top__DOT__dut__DOT_____05FMR
                                       [1U] >> 3U))),3);
        bufp->chgSData(oldp+24,((0x1ffU & ((0x20U & 
                                            vlSelf->top__DOT__dut__DOT_____05FMR
                                            [1U]) ? 
                                           ((0x10U 
                                             & vlSelf->top__DOT__dut__DOT_____05FMR
                                             [1U]) ? 
                                            ((8U & 
                                              vlSelf->top__DOT__dut__DOT_____05FMR
                                              [1U])
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + (~ (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp))))
                                             : ((8U 
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
                                            : ((0x10U 
                                                & vlSelf->top__DOT__dut__DOT_____05FMR
                                                [1U])
                                                ? (
                                                   (8U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [1U])
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp) 
                                                    << 1U)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp))
                                                : (
                                                   (8U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [1U])
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp)
                                                    : 0U))))),9);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp),9);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT_____05FMD
                                [2U]),8);
        bufp->chgCData(oldp+27,((7U & (vlSelf->top__DOT__dut__DOT_____05FMR
                                       [2U] >> 5U))),3);
        bufp->chgSData(oldp+28,((0x1ffU & ((0x80U & 
                                            vlSelf->top__DOT__dut__DOT_____05FMR
                                            [2U]) ? 
                                           ((0x40U 
                                             & vlSelf->top__DOT__dut__DOT_____05FMR
                                             [2U]) ? 
                                            ((0x20U 
                                              & vlSelf->top__DOT__dut__DOT_____05FMR
                                              [2U])
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + (~ (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp))))
                                             : ((0x20U 
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
                                            : ((0x40U 
                                                & vlSelf->top__DOT__dut__DOT_____05FMR
                                                [2U])
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [2U])
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp) 
                                                    << 1U)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__dut__DOT_____05FMR
                                                    [2U])
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp)
                                                    : 0U))))),9);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp),9);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__dut__DOT__result[0]),9);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__dut__DOT__result[1]),9);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__dut__DOT__result[2]),9);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__dut__DOT__result[3]),9);
        bufp->chgSData(oldp+34,((0xffffU & (vlSelf->top__DOT__dut__DOT__re_op
                                            [0U] + 
                                            vlSelf->top__DOT__dut__DOT__mc
                                            [1U]))),16);
        bufp->chgSData(oldp+35,((0xffffU & (vlSelf->top__DOT__dut__DOT__re_op
                                            [1U] + 
                                            vlSelf->top__DOT__dut__DOT__mc
                                            [2U]))),16);
        bufp->chgSData(oldp+36,((0xffffU & (vlSelf->top__DOT__dut__DOT__re_op
                                            [2U] + 
                                            vlSelf->top__DOT__dut__DOT__mc
                                            [3U]))),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__dut__DOT__mc[0]),16);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__dut__DOT__mc[1]),16);
        bufp->chgSData(oldp+39,(vlSelf->top__DOT__dut__DOT__mc[2]),16);
        bufp->chgSData(oldp+40,(vlSelf->top__DOT__dut__DOT__mc[3]),16);
        bufp->chgSData(oldp+41,(vlSelf->top__DOT__dut__DOT__op[0]),16);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__dut__DOT__op[1]),16);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__dut__DOT__op[2]),16);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__dut__DOT__op[3]),16);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__dut__DOT__mc
                                [0U]),16);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__dut__DOT__mc
                                [1U]),16);
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__dut__DOT__mc
                                [2U]),16);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__dut__DOT__mc
                                [3U]),16);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp),9);
    }
    bufp->chgCData(oldp+50,(vlSelf->data1_i),8);
    bufp->chgCData(oldp+51,(vlSelf->data2_i),8);
    bufp->chgBit(oldp+52,(vlSelf->clk_i));
    bufp->chgSData(oldp+53,(vlSelf->result_o),16);
    bufp->chgCData(oldp+54,((6U & ((IData)(vlSelf->data2_i) 
                                   << 1U))),3);
    bufp->chgSData(oldp+55,((0x1ffU & ((2U & (IData)(vlSelf->data2_i))
                                        ? ((1U & (IData)(vlSelf->data2_i))
                                            ? ((IData)(1U) 
                                               + (~ (IData)(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp)))
                                            : ((IData)(1U) 
                                               + (~ 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp) 
                                                   << 1U))))
                                        : ((1U & (IData)(vlSelf->data2_i))
                                            ? (IData)(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp)
                                            : 0U)))),9);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
