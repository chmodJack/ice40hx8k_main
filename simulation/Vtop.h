// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;

//----------

SC_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> clk;
    sc_in<bool> rst;
    sc_out<bool> a;
    sc_out<bool> b;
    sc_out<bool> c;
    sc_out<bool> d;
    sc_out<bool> e;
    sc_out<bool> f;
    sc_out<bool> g;
    sc_out<bool> h;
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ top__DOT__div_sig;
    CData/*0:0*/ top__DOT__div__DOT__cnt_rst;
    CData/*0:0*/ top__DOT__clk;
    CData/*0:0*/ top__DOT__rst;
    CData/*0:0*/ top__DOT__a;
    CData/*0:0*/ top__DOT__b;
    CData/*0:0*/ top__DOT__c;
    CData/*0:0*/ top__DOT__d;
    CData/*0:0*/ top__DOT__e;
    CData/*0:0*/ top__DOT__f;
    CData/*0:0*/ top__DOT__g;
    CData/*0:0*/ top__DOT__h;
    CData/*2:0*/ top__DOT__d38_in;
    CData/*2:0*/ top__DOT__d38__DOT__a;
    CData/*7:0*/ top__DOT__d38__DOT__b;
    CData/*0:0*/ top__DOT__div__DOT__clk;
    CData/*0:0*/ top__DOT__div__DOT__rst;
    CData/*0:0*/ top__DOT__div__DOT__out;
    CData/*0:0*/ top__DOT__div__DOT__counter0__DOT__clk;
    CData/*0:0*/ top__DOT__div__DOT__counter0__DOT__rst;
    IData/*31:0*/ top__DOT__div__DOT__cnt;
    IData/*31:0*/ top__DOT__div__DOT__counter0__DOT__data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vcellinp__top__rst;
    CData/*0:0*/ __Vcellinp__top__clk;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__top__rst;
    CData/*0:0*/ __VinpClk__TOP__top__DOT__div__DOT__cnt_rst;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__top__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__div__DOT__cnt_rst;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__div_sig;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__top__rst;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__div__DOT__cnt_rst;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    SC_CTOR(Vtop);
    virtual ~Vtop();
    
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
