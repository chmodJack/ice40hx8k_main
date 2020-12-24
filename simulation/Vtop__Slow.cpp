// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_SC_CTOR_IMP(Vtop)
    : clk("clk"), rst("rst"), a("a"), b("b"), c("c"), 
      d("d"), e("e"), f("f"), g("g"), h("h")
 {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Sensitivities on all clocks and combo inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << rst;
    
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__div__DOT__counter0__DOT__rst 
        = vlTOPp->top__DOT__div__DOT__cnt_rst;
    vlTOPp->top__DOT__rst = vlTOPp->__Vcellinp__top__rst;
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__top__clk, vlTOPp->clk);
    vlTOPp->top__DOT__div_sig = vlTOPp->top__DOT__div__DOT__out;
    vlTOPp->top__DOT__div__DOT__cnt = vlTOPp->top__DOT__div__DOT__counter0__DOT__data;
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__top__rst, vlTOPp->rst);
    vlTOPp->top__DOT__d38__DOT__a = vlTOPp->top__DOT__d38_in;
    vlTOPp->top__DOT__d38__DOT__b = ((0U == (IData)(vlTOPp->top__DOT__d38_in))
                                      ? 0x80U : ((1U 
                                                  == (IData)(vlTOPp->top__DOT__d38_in))
                                                  ? 0x40U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->top__DOT__d38_in))
                                                   ? 0x20U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->top__DOT__d38_in))
                                                    ? 0x10U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->top__DOT__d38_in))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->top__DOT__d38_in))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->top__DOT__d38_in))
                                                       ? 2U
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->top__DOT__d38_in))
                                                        ? 1U
                                                        : 0xffU))))))));
    vlTOPp->top__DOT__div__DOT__rst = vlTOPp->top__DOT__rst;
    vlTOPp->top__DOT__clk = vlTOPp->__Vcellinp__top__clk;
    vlTOPp->top__DOT__a = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 7U));
    vlTOPp->top__DOT__b = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 6U));
    vlTOPp->top__DOT__c = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 5U));
    vlTOPp->top__DOT__d = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 4U));
    vlTOPp->top__DOT__e = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 3U));
    vlTOPp->top__DOT__f = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 2U));
    vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__d38__DOT__b) 
                                 >> 1U));
    vlTOPp->top__DOT__h = (1U & (IData)(vlTOPp->top__DOT__d38__DOT__b));
    vlTOPp->top__DOT__div__DOT__clk = vlTOPp->top__DOT__clk;
    VL_ASSIGN_SII(1,vlTOPp->a, vlTOPp->top__DOT__a);
    VL_ASSIGN_SII(1,vlTOPp->b, vlTOPp->top__DOT__b);
    VL_ASSIGN_SII(1,vlTOPp->c, vlTOPp->top__DOT__c);
    VL_ASSIGN_SII(1,vlTOPp->d, vlTOPp->top__DOT__d);
    VL_ASSIGN_SII(1,vlTOPp->e, vlTOPp->top__DOT__e);
    VL_ASSIGN_SII(1,vlTOPp->f, vlTOPp->top__DOT__f);
    VL_ASSIGN_SII(1,vlTOPp->g, vlTOPp->top__DOT__g);
    VL_ASSIGN_SII(1,vlTOPp->h, vlTOPp->top__DOT__h);
    vlTOPp->top__DOT__div__DOT__counter0__DOT__clk 
        = vlTOPp->top__DOT__div__DOT__clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP____Vcellinp__top__clk = vlTOPp->__Vcellinp__top__clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst 
        = vlTOPp->__VinpClk__TOP____Vcellinp__top__rst;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__div__DOT__cnt_rst 
        = vlTOPp->__VinpClk__TOP__top__DOT__div__DOT__cnt_rst;
    vlTOPp->__Vclklast__TOP__top__DOT__div_sig = vlTOPp->top__DOT__div_sig;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    __Vcellinp__top__rst = VL_RAND_RESET_I(1);
    __Vcellinp__top__clk = VL_RAND_RESET_I(1);
    top__DOT__clk = VL_RAND_RESET_I(1);
    top__DOT__rst = VL_RAND_RESET_I(1);
    top__DOT__a = VL_RAND_RESET_I(1);
    top__DOT__b = VL_RAND_RESET_I(1);
    top__DOT__c = VL_RAND_RESET_I(1);
    top__DOT__d = VL_RAND_RESET_I(1);
    top__DOT__e = VL_RAND_RESET_I(1);
    top__DOT__f = VL_RAND_RESET_I(1);
    top__DOT__g = VL_RAND_RESET_I(1);
    top__DOT__h = VL_RAND_RESET_I(1);
    top__DOT__d38_in = VL_RAND_RESET_I(3);
    top__DOT__div_sig = VL_RAND_RESET_I(1);
    top__DOT__d38__DOT__a = VL_RAND_RESET_I(3);
    top__DOT__d38__DOT__b = VL_RAND_RESET_I(8);
    top__DOT__div__DOT__clk = VL_RAND_RESET_I(1);
    top__DOT__div__DOT__rst = VL_RAND_RESET_I(1);
    top__DOT__div__DOT__out = VL_RAND_RESET_I(1);
    top__DOT__div__DOT__cnt = VL_RAND_RESET_I(32);
    top__DOT__div__DOT__cnt_rst = VL_RAND_RESET_I(1);
    top__DOT__div__DOT__counter0__DOT__clk = VL_RAND_RESET_I(1);
    top__DOT__div__DOT__counter0__DOT__rst = VL_RAND_RESET_I(1);
    top__DOT__div__DOT__counter0__DOT__data = VL_RAND_RESET_I(32);
    __VinpClk__TOP____Vcellinp__top__rst = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top__DOT__div__DOT__cnt_rst = VL_RAND_RESET_I(1);
    __Vchglast__TOP____Vcellinp__top__rst = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top__DOT__div__DOT__cnt_rst = VL_RAND_RESET_I(1);
}
