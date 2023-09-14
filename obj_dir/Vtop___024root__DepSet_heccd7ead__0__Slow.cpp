// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp 
        = ((0x200U & ((IData)(vlSelf->data1_i) << 2U)) 
           | ((0x100U & ((IData)(vlSelf->data1_i) << 1U)) 
              | (IData)(vlSelf->data1_i)));
    vlSelf->top__DOT__dut__DOT_____05FP3P2[0U] = (3U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__Stg1_Muti));
    vlSelf->top__DOT__dut__DOT_____05FP1P0[0U] = (3U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_Muti));
    vlSelf->top__DOT__dut__DOT_____05FP1P0[1U] = vlSelf->top__DOT__dut__DOT__Stg1_P1P0;
    vlSelf->top__DOT__dut__DOT_____05FR5R4R3[0U] = vlSelf->top__DOT__dut__DOT__Stg0_MR_5_to_3;
    vlSelf->top__DOT__dut__DOT_____05FR5R4R3[1U] = vlSelf->top__DOT__dut__DOT__Stg1_MR_5_to_3;
    vlSelf->top__DOT__dut__DOT_____05FR7R6R5[0U] = vlSelf->top__DOT__dut__DOT__Stg0_MR_7_to_5;
    vlSelf->top__DOT__dut__DOT_____05FR7R6R5[1U] = vlSelf->top__DOT__dut__DOT__Stg1_MR_7_to_5;
    vlSelf->top__DOT__dut__DOT_____05FR7R6R5[2U] = vlSelf->top__DOT__dut__DOT__Stg2_MR_7_to_5;
    vlSelf->top__DOT__dut__DOT__multi_result[0U] = 
        (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__Stg0_Muti) 
                  >> 2U));
    vlSelf->top__DOT__dut__DOT__multi_result[1U] = 
        (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__Stg1_Muti) 
                  >> 2U));
    vlSelf->top__DOT__dut__DOT__multi_result[2U] = 
        (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__Stg2_Muti) 
                  >> 2U));
    vlSelf->top__DOT__dut__DOT_____05FMD[0U] = vlSelf->top__DOT__dut__DOT__Stg0_MD;
    vlSelf->top__DOT__dut__DOT_____05FMD[1U] = vlSelf->top__DOT__dut__DOT__Stg1_MD;
    vlSelf->top__DOT__dut__DOT_____05FMD[2U] = vlSelf->top__DOT__dut__DOT__Stg2_MD;
    vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result 
        = (0x3ffU & ((2U & (IData)(vlSelf->data2_i))
                      ? ((1U & (IData)(vlSelf->data2_i))
                          ? ((IData)(0xffffffffU) * (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp))
                          : ((IData)(0xfffffffeU) * (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp)))
                      : ((1U & (IData)(vlSelf->data2_i))
                          ? (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp)
                          : 0U)));
    vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2 
        = ((0x80U & vlSelf->top__DOT__dut__DOT__multi_result
            [0U]) ? (0x300U | vlSelf->top__DOT__dut__DOT__multi_result
                     [0U]) : vlSelf->top__DOT__dut__DOT__multi_result
           [0U]);
    vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2 
        = ((0x80U & vlSelf->top__DOT__dut__DOT__multi_result
            [1U]) ? (0x300U | vlSelf->top__DOT__dut__DOT__multi_result
                     [1U]) : vlSelf->top__DOT__dut__DOT__multi_result
           [1U]);
    vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2 
        = ((0x80U & vlSelf->top__DOT__dut__DOT__multi_result
            [2U]) ? (0x300U | vlSelf->top__DOT__dut__DOT__multi_result
                     [2U]) : vlSelf->top__DOT__dut__DOT__multi_result
           [2U]);
    vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp 
        = ((0x200U & (vlSelf->top__DOT__dut__DOT_____05FMD
                      [0U] << 2U)) | ((0x100U & (vlSelf->top__DOT__dut__DOT_____05FMD
                                                 [0U] 
                                                 << 1U)) 
                                      | vlSelf->top__DOT__dut__DOT_____05FMD
                                      [0U]));
    vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp 
        = ((0x200U & (vlSelf->top__DOT__dut__DOT_____05FMD
                      [1U] << 2U)) | ((0x100U & (vlSelf->top__DOT__dut__DOT_____05FMD
                                                 [1U] 
                                                 << 1U)) 
                                      | vlSelf->top__DOT__dut__DOT_____05FMD
                                      [1U]));
    vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp 
        = ((0x200U & (vlSelf->top__DOT__dut__DOT_____05FMD
                      [2U] << 2U)) | ((0x100U & (vlSelf->top__DOT__dut__DOT_____05FMD
                                                 [2U] 
                                                 << 1U)) 
                                      | vlSelf->top__DOT__dut__DOT_____05FMD
                                      [2U]));
    vlSelf->top__DOT__dut__DOT__result[0U] = (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result));
    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))) {
        vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result 
            = (0x3ffU & ((2U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                          ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                              ? 0U : ((IData)(0xffffffffU) 
                                      * (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp)))
                          : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                              ? ((IData)(0xffffffffU) 
                                 * (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp))
                              : ((IData)(0xfffffffeU) 
                                 * (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp)))));
        vlSelf->top__DOT__dut__DOT__result[1U] = (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result) 
                                                      + 
                                                      (~ (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2)))));
    } else {
        vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result 
            = (0x3ffU & ((2U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                          ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                              ? ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp) 
                                 << 1U) : (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp))
                          : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1))
                              ? (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp)
                              : 0U)));
        vlSelf->top__DOT__dut__DOT__result[1U] = (0x3ffU 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result) 
                                                     + (IData)(vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2)));
    }
    if ((4U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
         [1U])) {
        vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result 
            = (0x3ffU & ((2U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                          [1U]) ? ((1U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                    [1U]) ? 0U : ((IData)(0xffffffffU) 
                                                  * (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp)))
                          : ((1U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                              [1U]) ? ((IData)(0xffffffffU) 
                                       * (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp))
                              : ((IData)(0xfffffffeU) 
                                 * (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp)))));
        vlSelf->top__DOT__dut__DOT__result[2U] = (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result) 
                                                      + 
                                                      (~ (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2)))));
    } else {
        vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result 
            = (0x3ffU & ((2U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                          [1U]) ? ((1U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                                    [1U]) ? ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp) 
                                             << 1U)
                                    : (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp))
                          : ((1U & vlSelf->top__DOT__dut__DOT_____05FR5R4R3
                              [1U]) ? (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp)
                              : 0U)));
        vlSelf->top__DOT__dut__DOT__result[2U] = (0x3ffU 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result) 
                                                     + (IData)(vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2)));
    }
    if ((4U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
         [2U])) {
        vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result 
            = (0x3ffU & ((2U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                          [2U]) ? ((1U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                    [2U]) ? 0U : ((IData)(0xffffffffU) 
                                                  * (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp)))
                          : ((1U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                              [2U]) ? ((IData)(0xffffffffU) 
                                       * (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp))
                              : ((IData)(0xfffffffeU) 
                                 * (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp)))));
        vlSelf->top__DOT__dut__DOT__result[3U] = (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result) 
                                                      + 
                                                      (~ (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2)))));
    } else {
        vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result 
            = (0x3ffU & ((2U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                          [2U]) ? ((1U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                                    [2U]) ? ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp) 
                                             << 1U)
                                    : (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp))
                          : ((1U & vlSelf->top__DOT__dut__DOT_____05FR7R6R5
                              [2U]) ? (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp)
                              : 0U)));
        vlSelf->top__DOT__dut__DOT__result[3U] = (0x3ffU 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result) 
                                                     + (IData)(vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2)));
    }
    vlSelf->result_o = ((vlSelf->top__DOT__dut__DOT__result
                         [3U] << 6U) | ((0x30U & ((IData)(vlSelf->top__DOT__dut__DOT__Stg2_Muti) 
                                                  << 4U)) 
                                        | (((IData)(vlSelf->top__DOT__dut__DOT__Stg2_P3P2) 
                                            << 2U) 
                                           | (IData)(vlSelf->top__DOT__dut__DOT__Stg2_P1P0))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data1_i = VL_RAND_RESET_I(8);
    vlSelf->data2_i = VL_RAND_RESET_I(8);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->result_o = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__result[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT_____05FMD[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__multi_result[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT_____05FR5R4R3[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT_____05FR7R6R5[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT_____05FP1P0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT_____05FP3P2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__dut__DOT__Stg0_MR_7_to_5 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__Stg0_MR_5_to_3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__Stg0_MD = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__Stg0_Muti = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__Stg1_MR_7_to_5 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__Stg1_MR_5_to_3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__Stg1_MD = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__Stg1_Muti = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__Stg1_P1P0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__Stg2_MR_7_to_5 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__Stg2_MD = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__Stg2_Muti = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__Stg2_P1P0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__Stg2_P3P2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand2__DOT__multi_result = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand2__DOT__gen_data2 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand3__DOT__multi_result = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand3__DOT__gen_data2 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand4__DOT__multi_result = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand4__DOT__gen_data2 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
