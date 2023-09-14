// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__Stg2_P3P2 = vlSelf->top__DOT__dut__DOT_____05FP3P2
        [0U];
    vlSelf->top__DOT__dut__DOT__Stg1_P1P0 = vlSelf->top__DOT__dut__DOT_____05FP1P0
        [0U];
    vlSelf->top__DOT__dut__DOT__Stg2_P1P0 = vlSelf->top__DOT__dut__DOT_____05FP1P0
        [1U];
    vlSelf->top__DOT__dut__DOT__Stg0_MR_3_to_1 = (7U 
                                                  & ((IData)(vlSelf->data2_i) 
                                                     >> 1U));
    vlSelf->top__DOT__dut__DOT__Stg0_MR_5_to_3 = (7U 
                                                  & ((IData)(vlSelf->data2_i) 
                                                     >> 3U));
    vlSelf->top__DOT__dut__DOT__Stg0_MR_7_to_5 = (7U 
                                                  & ((IData)(vlSelf->data2_i) 
                                                     >> 5U));
    vlSelf->top__DOT__dut__DOT__Stg1_MR_5_to_3 = vlSelf->top__DOT__dut__DOT_____05FR5R4R3
        [0U];
    vlSelf->top__DOT__dut__DOT__Stg2_MR_7_to_5 = vlSelf->top__DOT__dut__DOT_____05FR7R6R5
        [1U];
    vlSelf->top__DOT__dut__DOT__Stg1_MR_7_to_5 = vlSelf->top__DOT__dut__DOT_____05FR7R6R5
        [0U];
    vlSelf->top__DOT__dut__DOT__Stg1_Muti = vlSelf->top__DOT__dut__DOT__result
        [1U];
    vlSelf->top__DOT__dut__DOT__Stg0_Muti = vlSelf->top__DOT__dut__DOT__result
        [0U];
    vlSelf->top__DOT__dut__DOT__Stg2_Muti = vlSelf->top__DOT__dut__DOT__result
        [2U];
    vlSelf->top__DOT__dut__DOT__Stg0_MD = vlSelf->data1_i;
    vlSelf->top__DOT__dut__DOT__Stg2_MD = vlSelf->top__DOT__dut__DOT_____05FMD
        [1U];
    vlSelf->top__DOT__dut__DOT__Stg1_MD = vlSelf->top__DOT__dut__DOT_____05FMD
        [0U];
    vlSelf->top__DOT__dut__DOT_____05FP1P0[1U] = vlSelf->top__DOT__dut__DOT__Stg1_P1P0;
    vlSelf->top__DOT__dut__DOT_____05FR5R4R3[0U] = vlSelf->top__DOT__dut__DOT__Stg0_MR_5_to_3;
    vlSelf->top__DOT__dut__DOT_____05FR7R6R5[0U] = vlSelf->top__DOT__dut__DOT__Stg0_MR_7_to_5;
    vlSelf->top__DOT__dut__DOT_____05FR5R4R3[1U] = vlSelf->top__DOT__dut__DOT__Stg1_MR_5_to_3;
    vlSelf->top__DOT__dut__DOT_____05FR7R6R5[2U] = vlSelf->top__DOT__dut__DOT__Stg2_MR_7_to_5;
    vlSelf->top__DOT__dut__DOT_____05FR7R6R5[1U] = vlSelf->top__DOT__dut__DOT__Stg1_MR_7_to_5;
    vlSelf->top__DOT__dut__DOT_____05FP3P2[0U] = (3U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__Stg1_Muti));
    vlSelf->top__DOT__dut__DOT__multi_result[1U] = 
        (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__Stg1_Muti) 
                  >> 2U));
    vlSelf->top__DOT__dut__DOT_____05FP1P0[0U] = (3U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__Stg0_Muti));
    vlSelf->top__DOT__dut__DOT__multi_result[0U] = 
        (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__Stg0_Muti) 
                  >> 2U));
    vlSelf->top__DOT__dut__DOT__multi_result[2U] = 
        (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__Stg2_Muti) 
                  >> 2U));
    vlSelf->top__DOT__dut__DOT_____05FMD[0U] = vlSelf->top__DOT__dut__DOT__Stg0_MD;
    vlSelf->top__DOT__dut__DOT_____05FMD[2U] = vlSelf->top__DOT__dut__DOT__Stg2_MD;
    vlSelf->top__DOT__dut__DOT_____05FMD[1U] = vlSelf->top__DOT__dut__DOT__Stg1_MD;
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp 
        = ((0x200U & ((IData)(vlSelf->data1_i) << 2U)) 
           | ((0x100U & ((IData)(vlSelf->data1_i) << 1U)) 
              | (IData)(vlSelf->data1_i)));
    vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result 
        = (0x3ffU & ((2U & (IData)(vlSelf->data2_i))
                      ? ((1U & (IData)(vlSelf->data2_i))
                          ? ((IData)(0xffffffffU) * (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp))
                          : ((IData)(0xfffffffeU) * (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp)))
                      : ((1U & (IData)(vlSelf->data2_i))
                          ? (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp)
                          : 0U)));
    vlSelf->top__DOT__dut__DOT__result[0U] = (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__operand1__DOT__multi_result));
    vlSelf->result_o = ((vlSelf->top__DOT__dut__DOT__result
                         [3U] << 6U) | ((0x30U & ((IData)(vlSelf->top__DOT__dut__DOT__Stg2_Muti) 
                                                  << 4U)) 
                                        | (((IData)(vlSelf->top__DOT__dut__DOT__Stg2_P3P2) 
                                            << 2U) 
                                           | (IData)(vlSelf->top__DOT__dut__DOT__Stg2_P1P0))));
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
