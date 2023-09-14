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
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__dut__DOT__multi_result[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__multi_result[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__multi_result[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__Stg0_MR_7_to_5),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__Stg0_MR_5_to_3),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__Stg0_MD),8);
        bufp->chgSData(oldp+7,(vlSelf->top__DOT__dut__DOT__Stg0_Muti),10);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__Stg1_MR_7_to_5),3);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__Stg1_MR_5_to_3),3);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__Stg1_MD),8);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__dut__DOT__Stg1_Muti),10);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__Stg1_P1P0),2);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__Stg2_MR_7_to_5),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__Stg2_MD),8);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__dut__DOT__Stg2_Muti),10);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__dut__DOT__Stg2_P1P0),2);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__Stg2_P3P2),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT_____05FMD
                                [0U]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__multi_result
                                [0U]),8);
        bufp->chgSData(oldp+20,((0x3ffU & ((4U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                                            ? ((IData)(1U) 
                                               + ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result) 
                                                  + 
                                                  (~ (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2))))
                                            : ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result) 
                                               + (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2))))),10);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result),10);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2),10);
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1) 
                                     >> 2U))));
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp),10);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__dut__DOT_____05FMD
                                [1U]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT__multi_result
                                [1U]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                [1U]),3);
        bufp->chgSData(oldp+28,((0x3ffU & ((4U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                            [1U]) ? 
                                           ((IData)(1U) 
                                            + ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result) 
                                               + (~ (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2))))
                                            : ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result) 
                                               + (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2))))),10);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result),10);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2),10);
        bufp->chgBit(oldp+31,((1U & (vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                     [1U] >> 2U))));
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp),10);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__dut__DOT_____05FMD
                                [2U]),8);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__dut__DOT__multi_result
                                [2U]),8);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                [2U]),3);
        bufp->chgSData(oldp+36,((0x3ffU & ((4U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                            [2U]) ? 
                                           ((IData)(1U) 
                                            + ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result) 
                                               + (~ (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2))))
                                            : ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result) 
                                               + (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2))))),10);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result),10);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2),10);
        bufp->chgBit(oldp+39,((1U & (vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                     [2U] >> 2U))));
        bufp->chgSData(oldp+40,(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp),10);
    }
    bufp->chgCData(oldp+41,(vlSelf->data1_i),8);
    bufp->chgCData(oldp+42,(vlSelf->data2_i),8);
    bufp->chgBit(oldp+43,(vlSelf->clk_i));
    bufp->chgSData(oldp+44,(vlSelf->result_o),16);
    bufp->chgSData(oldp+45,(vlSelf->top__DOT__dut__DOT__result[0]),10);
    bufp->chgSData(oldp+46,(vlSelf->top__DOT__dut__DOT__result[1]),10);
    bufp->chgSData(oldp+47,(vlSelf->top__DOT__dut__DOT__result[2]),10);
    bufp->chgSData(oldp+48,(vlSelf->top__DOT__dut__DOT__result[3]),10);
    bufp->chgCData(oldp+49,((6U & ((IData)(vlSelf->data2_i) 
                                   << 1U))),3);
    bufp->chgSData(oldp+50,((0x3ffU & (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result))),10);
    bufp->chgSData(oldp+51,(vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result),10);
    bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->data2_i) 
                                 >> 1U))));
    bufp->chgSData(oldp+53,(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp),10);
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
}
