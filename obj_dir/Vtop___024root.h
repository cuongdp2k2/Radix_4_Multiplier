// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(data1_i,7,0);
    VL_IN8(data2_i,7,0);
    CData/*2:0*/ top__DOT__dut__DOT__Stg0_MR_7_to_5;
    CData/*2:0*/ top__DOT__dut__DOT__Stg0_MR_5_to_3;
    CData/*2:0*/ top__DOT__dut__DOT__Stg0_MR_3_to_1;
    CData/*7:0*/ top__DOT__dut__DOT__Stg0_MD;
    CData/*2:0*/ top__DOT__dut__DOT__Stg1_MR_7_to_5;
    CData/*2:0*/ top__DOT__dut__DOT__Stg1_MR_5_to_3;
    CData/*7:0*/ top__DOT__dut__DOT__Stg1_MD;
    CData/*1:0*/ top__DOT__dut__DOT__Stg1_P1P0;
    CData/*2:0*/ top__DOT__dut__DOT__Stg2_MR_7_to_5;
    CData/*7:0*/ top__DOT__dut__DOT__Stg2_MD;
    CData/*1:0*/ top__DOT__dut__DOT__Stg2_P1P0;
    CData/*1:0*/ top__DOT__dut__DOT__Stg2_P3P2;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_OUT16(result_o,15,0);
    SData/*9:0*/ top__DOT__dut__DOT__Stg0_Muti;
    SData/*9:0*/ top__DOT__dut__DOT__Stg1_Muti;
    SData/*9:0*/ top__DOT__dut__DOT__Stg2_Muti;
    SData/*9:0*/ top__DOT__dut__DOT__operand1__DOT__multi_result;
    SData/*9:0*/ top__DOT__dut__DOT__operand1__DOT__multiflexer__DOT__data_temp;
    SData/*9:0*/ top__DOT__dut__DOT__operand2__DOT__multi_result;
    SData/*9:0*/ top__DOT__dut__DOT__operand2__DOT__gen_data2;
    SData/*9:0*/ top__DOT__dut__DOT__operand2__DOT__multiflexer__DOT__data_temp;
    SData/*9:0*/ top__DOT__dut__DOT__operand3__DOT__multi_result;
    SData/*9:0*/ top__DOT__dut__DOT__operand3__DOT__gen_data2;
    SData/*9:0*/ top__DOT__dut__DOT__operand3__DOT__multiflexer__DOT__data_temp;
    SData/*9:0*/ top__DOT__dut__DOT__operand4__DOT__multi_result;
    SData/*9:0*/ top__DOT__dut__DOT__operand4__DOT__gen_data2;
    SData/*9:0*/ top__DOT__dut__DOT__operand4__DOT__multiflexer__DOT__data_temp;
    VlUnpacked<SData/*9:0*/, 4> top__DOT__dut__DOT__result;
    VlUnpacked<CData/*7:0*/, 3> top__DOT__dut__DOT_____05FMD;
    VlUnpacked<CData/*7:0*/, 3> top__DOT__dut__DOT__multi_result;
    VlUnpacked<CData/*2:0*/, 2> top__DOT__dut__DOT_____05FR5R4R3;
    VlUnpacked<CData/*2:0*/, 3> top__DOT__dut__DOT_____05FR7R6R5;
    VlUnpacked<CData/*1:0*/, 3> top__DOT__dut__DOT_____05FP1P0;
    VlUnpacked<CData/*1:0*/, 2> top__DOT__dut__DOT_____05FP3P2;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
