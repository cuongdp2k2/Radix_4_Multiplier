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
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_OUT16(result_o,15,0);
    SData/*8:0*/ top__DOT__dut__DOT__mul1__DOT__data_temp;
    SData/*8:0*/ top__DOT__dut__DOT__mul2__DOT__data_temp;
    SData/*8:0*/ top__DOT__dut__DOT__mul3__DOT__data_temp;
    SData/*8:0*/ top__DOT__dut__DOT__mul4__DOT__data_temp;
    VlUnpacked<SData/*15:0*/, 4> top__DOT__dut__DOT__mc;
    VlUnpacked<SData/*8:0*/, 4> top__DOT__dut__DOT__result;
    VlUnpacked<SData/*15:0*/, 4> top__DOT__dut__DOT__op;
    VlUnpacked<SData/*15:0*/, 3> top__DOT__dut__DOT__re_op;
    VlUnpacked<CData/*7:0*/, 3> top__DOT__dut__DOT_____05FMD;
    VlUnpacked<CData/*7:0*/, 3> top__DOT__dut__DOT_____05FMR;
    VlUnpacked<SData/*15:0*/, 4> top__DOT__dut__DOT__op_st;
    VlUnpacked<CData/*7:0*/, 4> top__DOT__dut__DOT__MD_st;
    VlUnpacked<CData/*7:0*/, 4> top__DOT__dut__DOT__MR_st;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
