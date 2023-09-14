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
    tracep->declBus(c+42,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+43,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+44,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+42,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+43,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+44,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+42,"MD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+43,"MR_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+44,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+46+i*1,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 9,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"multi_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 7,0);
    }
    tracep->declBus(c+4,"Stg0_MR_7_to_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,"Stg0_MR_5_to_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,"Stg0_MR_3_to_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,"Stg0_MD",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"Stg0_Muti",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,"Stg1_MR_7_to_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,"Stg1_MR_5_to_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,"Stg1_MD",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,"Stg1_Muti",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+13,"Stg1_P1P0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,"Stg2_MR_7_to_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,"Stg2_MD",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,"Stg2_Muti",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+17,"Stg2_P1P0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,"Stg2_P3P2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("operand1 ");
    tracep->declBus(c+42,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+55,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+50,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+51,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+52,"multi_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+56,"gen_data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("add_comp ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+52,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+56,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+53,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("multiflexer ");
    tracep->declBus(c+58,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+59,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+60,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+42,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+50,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+52,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+54,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("operand2 ");
    tracep->declBus(c+19,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+20,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+6,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+21,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+22,"multi_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,"gen_data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("add_comp ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+22,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+23,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+24,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("multiflexer ");
    tracep->declBus(c+58,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+59,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+60,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+19,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+6,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+25,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("operand3 ");
    tracep->declBus(c+26,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+27,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+29,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+30,"multi_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+31,"gen_data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("add_comp ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+30,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+31,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+32,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("multiflexer ");
    tracep->declBus(c+58,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+59,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+60,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+26,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+30,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+33,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("operand4 ");
    tracep->declBus(c+34,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+35,"data2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+36,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+37,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+38,"multi_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,"gen_data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("add_comp ");
    tracep->declBus(c+57,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+38,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+39,"B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+40,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("multiflexer ");
    tracep->declBus(c+58,"Mx0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+59,"Mx1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+60,"Mx1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+61,"Mx2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"Mx_minus2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"Mx_minus1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"Mx_minus1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"Mx0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+34,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+36,"multi_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+38,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+41,"data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->popNamePrefix(4);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__dut__DOT__multi_result[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__dut__DOT__multi_result[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__multi_result[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__Stg0_MR_7_to_5),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__Stg0_MR_5_to_3),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__Stg0_MD),8);
    bufp->fullSData(oldp+8,(vlSelf->top__DOT__dut__DOT__Stg0_Muti),10);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__dut__DOT__Stg1_MR_7_to_5),3);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__Stg1_MR_5_to_3),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__Stg1_MD),8);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__dut__DOT__Stg1_Muti),10);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__Stg1_P1P0),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__Stg2_MR_7_to_5),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__Stg2_MD),8);
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__dut__DOT__Stg2_Muti),10);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__Stg2_P1P0),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__Stg2_P3P2),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT_____05FMD
                             [0U]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__multi_result
                             [0U]),8);
    bufp->fullSData(oldp+21,((0x3ffU & ((4U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                                         ? ((IData)(1U) 
                                            + ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result) 
                                               + (~ (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2))))
                                         : ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result) 
                                            + (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2))))),10);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result),10);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2),10);
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1) 
                                  >> 2U))));
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp),10);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT_____05FMD
                             [1U]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__multi_result
                             [1U]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                             [1U]),3);
    bufp->fullSData(oldp+29,((0x3ffU & ((4U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                         [1U]) ? ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result) 
                                                   + 
                                                   (~ (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2))))
                                         : ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result) 
                                            + (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2))))),10);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2),10);
    bufp->fullBit(oldp+32,((1U & (vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                  [1U] >> 2U))));
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp),10);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__dut__DOT_____05FMD
                             [2U]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__dut__DOT__multi_result
                             [2U]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                             [2U]),3);
    bufp->fullSData(oldp+37,((0x3ffU & ((4U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                         [2U]) ? ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result) 
                                                   + 
                                                   (~ (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2))))
                                         : ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result) 
                                            + (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2))))),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2),10);
    bufp->fullBit(oldp+40,((1U & (vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                  [2U] >> 2U))));
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp),10);
    bufp->fullCData(oldp+42,(vlSelf->data1_i),8);
    bufp->fullCData(oldp+43,(vlSelf->data2_i),8);
    bufp->fullBit(oldp+44,(vlSelf->clk_i));
    bufp->fullSData(oldp+45,(vlSelf->result_o),16);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__dut__DOT__result[0]),10);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__dut__DOT__result[1]),10);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__dut__DOT__result[2]),10);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__dut__DOT__result[3]),10);
    bufp->fullCData(oldp+50,((6U & ((IData)(vlSelf->data2_i) 
                                    << 1U))),3);
    bufp->fullSData(oldp+51,((0x3ffU & (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result))),10);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result),10);
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->data2_i) 
                                  >> 1U))));
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp),10);
    bufp->fullCData(oldp+55,(0U),8);
    bufp->fullSData(oldp+56,(0U),10);
    bufp->fullIData(oldp+57,(0xaU),32);
    bufp->fullCData(oldp+58,(0U),3);
    bufp->fullCData(oldp+59,(1U),3);
    bufp->fullCData(oldp+60,(2U),3);
    bufp->fullCData(oldp+61,(3U),3);
    bufp->fullCData(oldp+62,(4U),3);
    bufp->fullCData(oldp+63,(5U),3);
    bufp->fullCData(oldp+64,(6U),3);
    bufp->fullCData(oldp+65,(7U),3);
}
