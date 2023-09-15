// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+51,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+52,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+51,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+52,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"MD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+52,"MR_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+54,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+38+i*1,"mc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 15,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+42+i*1,"op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 15,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"re_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 15,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,"op_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 15,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,"MD_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,"MR_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 7,0);
    }
    tracep->pushNamePrefix("add1 ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+58,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+46,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+59,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add2 ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+16,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+47,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+59,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add3 ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+17,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+48,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+59,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add4 ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+18,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+49,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+59,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul1 ");
    tracep->declBus(c+60,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+66,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+67,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+51,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+55,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+56,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+50,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2 ");
    tracep->declBus(c+60,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+66,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+67,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+19,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+20,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+21,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+22,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul3 ");
    tracep->declBus(c+60,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+66,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+67,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+23,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+24,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+25,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+26,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul4 ");
    tracep->declBus(c+60,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+66,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+67,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+27,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+29,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+30,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__dut__DOT__re_op[0]),16);
    bufp->fullSData(oldp+2,(vlSelf->top__DOT__dut__DOT__re_op[1]),16);
    bufp->fullSData(oldp+3,(vlSelf->top__DOT__dut__DOT__re_op[2]),16);
    bufp->fullSData(oldp+4,(vlSelf->top__DOT__dut__DOT__op_st[0]),16);
    bufp->fullSData(oldp+5,(vlSelf->top__DOT__dut__DOT__op_st[1]),16);
    bufp->fullSData(oldp+6,(vlSelf->top__DOT__dut__DOT__op_st[2]),16);
    bufp->fullSData(oldp+7,(vlSelf->top__DOT__dut__DOT__op_st[3]),16);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__MD_st[0]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__dut__DOT__MD_st[1]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__MD_st[2]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__MD_st[3]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__MR_st[0]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__MR_st[1]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__MR_st[2]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__MR_st[3]),8);
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__dut__DOT__re_op
                             [0U]),16);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__dut__DOT__re_op
                             [1U]),16);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__dut__DOT__re_op
                             [2U]),16);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT_____05FMD
                             [0U]),8);
    bufp->fullCData(oldp+20,((7U & (vlSelf->top__DOT__dut__DOT_____05FMR
                                    [0U] >> 1U))),3);
    bufp->fullSData(oldp+21,((0x1ffU & ((8U & vlSelf->top__DOT__dut__DOT_____05FMR
                                         [0U]) ? ((4U 
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
                                         : ((4U & vlSelf->top__DOT__dut__DOT_____05FMR
                                             [0U]) ? 
                                            ((2U & 
                                              vlSelf->top__DOT__dut__DOT_____05FMR
                                              [0U])
                                              ? ((IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp) 
                                                 << 1U)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp))
                                             : ((2U 
                                                 & vlSelf->top__DOT__dut__DOT_____05FMR
                                                 [0U])
                                                 ? (IData)(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp)
                                                 : 0U))))),9);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__dut__DOT__mul2__DOT__data_temp),9);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT_____05FMD
                             [1U]),8);
    bufp->fullCData(oldp+24,((7U & (vlSelf->top__DOT__dut__DOT_____05FMR
                                    [1U] >> 3U))),3);
    bufp->fullSData(oldp+25,((0x1ffU & ((0x20U & vlSelf->top__DOT__dut__DOT_____05FMR
                                         [1U]) ? ((0x10U 
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
                                         : ((0x10U 
                                             & vlSelf->top__DOT__dut__DOT_____05FMR
                                             [1U]) ? 
                                            ((8U & 
                                              vlSelf->top__DOT__dut__DOT_____05FMR
                                              [1U])
                                              ? ((IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp) 
                                                 << 1U)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp))
                                             : ((8U 
                                                 & vlSelf->top__DOT__dut__DOT_____05FMR
                                                 [1U])
                                                 ? (IData)(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp)
                                                 : 0U))))),9);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__dut__DOT__mul3__DOT__data_temp),9);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT_____05FMD
                             [2U]),8);
    bufp->fullCData(oldp+28,((7U & (vlSelf->top__DOT__dut__DOT_____05FMR
                                    [2U] >> 5U))),3);
    bufp->fullSData(oldp+29,((0x1ffU & ((0x80U & vlSelf->top__DOT__dut__DOT_____05FMR
                                         [2U]) ? ((0x40U 
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
                                         : ((0x40U 
                                             & vlSelf->top__DOT__dut__DOT_____05FMR
                                             [2U]) ? 
                                            ((0x20U 
                                              & vlSelf->top__DOT__dut__DOT_____05FMR
                                              [2U])
                                              ? ((IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp) 
                                                 << 1U)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp))
                                             : ((0x20U 
                                                 & vlSelf->top__DOT__dut__DOT_____05FMR
                                                 [2U])
                                                 ? (IData)(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp)
                                                 : 0U))))),9);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__dut__DOT__mul4__DOT__data_temp),9);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__dut__DOT__result[0]),9);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__dut__DOT__result[1]),9);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__dut__DOT__result[2]),9);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__dut__DOT__result[3]),9);
    bufp->fullSData(oldp+35,((0xffffU & (vlSelf->top__DOT__dut__DOT__re_op
                                         [0U] + vlSelf->top__DOT__dut__DOT__mc
                                         [1U]))),16);
    bufp->fullSData(oldp+36,((0xffffU & (vlSelf->top__DOT__dut__DOT__re_op
                                         [1U] + vlSelf->top__DOT__dut__DOT__mc
                                         [2U]))),16);
    bufp->fullSData(oldp+37,((0xffffU & (vlSelf->top__DOT__dut__DOT__re_op
                                         [2U] + vlSelf->top__DOT__dut__DOT__mc
                                         [3U]))),16);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__dut__DOT__mc[0]),16);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__dut__DOT__mc[1]),16);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__dut__DOT__mc[2]),16);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__dut__DOT__mc[3]),16);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__dut__DOT__op[0]),16);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__dut__DOT__op[1]),16);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__dut__DOT__op[2]),16);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__dut__DOT__op[3]),16);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__dut__DOT__mc
                             [0U]),16);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__dut__DOT__mc
                             [1U]),16);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__dut__DOT__mc
                             [2U]),16);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__dut__DOT__mc
                             [3U]),16);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__dut__DOT__mul1__DOT__data_temp),9);
    bufp->fullCData(oldp+51,(vlSelf->data1_i),8);
    bufp->fullCData(oldp+52,(vlSelf->data2_i),8);
    bufp->fullBit(oldp+53,(vlSelf->clk_i));
    bufp->fullSData(oldp+54,(vlSelf->result_o),16);
    bufp->fullCData(oldp+55,((6U & ((IData)(vlSelf->data2_i) 
                                    << 1U))),3);
    bufp->fullSData(oldp+56,((0x1ffU & ((2U & (IData)(vlSelf->data2_i))
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
    bufp->fullIData(oldp+57,(0x10U),32);
    bufp->fullSData(oldp+58,(0U),16);
    bufp->fullBit(oldp+59,(0U));
    bufp->fullCData(oldp+60,(0U),3);
    bufp->fullCData(oldp+61,(1U),3);
    bufp->fullCData(oldp+62,(2U),3);
    bufp->fullCData(oldp+63,(3U),3);
    bufp->fullCData(oldp+64,(4U),3);
    bufp->fullCData(oldp+65,(5U),3);
    bufp->fullCData(oldp+66,(6U),3);
    bufp->fullCData(oldp+67,(7U),3);
}
