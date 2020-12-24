// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__div__DOT__counter0__DOT__rst 
        = vlTOPp->top__DOT__div__DOT__cnt_rst;
    vlTOPp->top__DOT__rst = vlTOPp->__Vcellinp__top__rst;
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__top__clk, vlTOPp->clk);
    vlTOPp->top__DOT__div__DOT__rst = vlTOPp->top__DOT__rst;
    vlTOPp->top__DOT__clk = vlTOPp->__Vcellinp__top__clk;
    vlTOPp->top__DOT__div__DOT__clk = vlTOPp->top__DOT__clk;
    vlTOPp->top__DOT__div__DOT__counter0__DOT__clk 
        = vlTOPp->top__DOT__div__DOT__clk;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vcellinp__top__rst) {
        if ((0xb71affU == vlTOPp->top__DOT__div__DOT__cnt)) {
            vlTOPp->top__DOT__div__DOT__out = (1U & 
                                               (~ (IData)(vlTOPp->top__DOT__div__DOT__out)));
        }
    } else {
        vlTOPp->top__DOT__div__DOT__out = 0U;
    }
    vlTOPp->top__DOT__div_sig = vlTOPp->top__DOT__div__DOT__out;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__div__DOT__counter0__DOT__data 
        = ((IData)(vlTOPp->top__DOT__div__DOT__cnt_rst)
            ? ((IData)(1U) + vlTOPp->top__DOT__div__DOT__counter0__DOT__data)
            : 0U);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__d38_in = ((IData)(vlTOPp->__Vcellinp__top__rst)
                                 ? (7U & ((IData)(1U) 
                                          + (IData)(vlTOPp->top__DOT__d38_in)))
                                 : 0U);
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
    VL_ASSIGN_SII(1,vlTOPp->a, vlTOPp->top__DOT__a);
    VL_ASSIGN_SII(1,vlTOPp->b, vlTOPp->top__DOT__b);
    VL_ASSIGN_SII(1,vlTOPp->c, vlTOPp->top__DOT__c);
    VL_ASSIGN_SII(1,vlTOPp->d, vlTOPp->top__DOT__d);
    VL_ASSIGN_SII(1,vlTOPp->e, vlTOPp->top__DOT__e);
    VL_ASSIGN_SII(1,vlTOPp->f, vlTOPp->top__DOT__f);
    VL_ASSIGN_SII(1,vlTOPp->g, vlTOPp->top__DOT__g);
    VL_ASSIGN_SII(1,vlTOPp->h, vlTOPp->top__DOT__h);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vcellinp__top__rst) {
        vlTOPp->top__DOT__div__DOT__cnt_rst = 1U;
        if ((0xb71affU == vlTOPp->top__DOT__div__DOT__cnt)) {
            vlTOPp->top__DOT__div__DOT__cnt_rst = 0U;
        }
    } else {
        vlTOPp->top__DOT__div__DOT__cnt_rst = 0U;
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__div__DOT__cnt = vlTOPp->top__DOT__div__DOT__counter0__DOT__data;
}

VL_INLINE_OPT void Vtop::_combo__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__top__rst, vlTOPp->rst);
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if ((((IData)(vlTOPp->__Vcellinp__top__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__top__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP____Vcellinp__top__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->__Vcellinp__top__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__top__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__div__DOT__cnt_rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__div__DOT__cnt_rst)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP____Vcellinp__top__rst)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst)) 
         | ((IData)(vlTOPp->top__DOT__div_sig) & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__div_sig))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->__Vcellinp__top__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__top__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP____Vcellinp__top__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->__Vcellinp__top__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__top__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__div__DOT__cnt_rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__div__DOT__cnt_rst)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP____Vcellinp__top__clk = vlTOPp->__Vcellinp__top__clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst 
        = vlTOPp->__VinpClk__TOP____Vcellinp__top__rst;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__div__DOT__cnt_rst 
        = vlTOPp->__VinpClk__TOP__top__DOT__div__DOT__cnt_rst;
    vlTOPp->__Vclklast__TOP__top__DOT__div_sig = vlTOPp->top__DOT__div_sig;
    vlTOPp->__VinpClk__TOP____Vcellinp__top__rst = vlTOPp->__Vcellinp__top__rst;
    vlTOPp->__VinpClk__TOP__top__DOT__div__DOT__cnt_rst 
        = vlTOPp->top__DOT__div__DOT__cnt_rst;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->__Vcellinp__top__rst ^ vlTOPp->__Vchglast__TOP____Vcellinp__top__rst)
         | (vlTOPp->top__DOT__div__DOT__cnt_rst ^ vlTOPp->__Vchglast__TOP__top__DOT__div__DOT__cnt_rst));
    VL_DEBUG_IF( if(__req && ((vlTOPp->__Vcellinp__top__rst ^ vlTOPp->__Vchglast__TOP____Vcellinp__top__rst))) VL_DBG_MSGF("        CHANGE: top.v:4: __Vcellinp__top__rst\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__div__DOT__cnt_rst ^ vlTOPp->__Vchglast__TOP__top__DOT__div__DOT__cnt_rst))) VL_DBG_MSGF("        CHANGE: divider.v:9: top.div.cnt_rst\n"); );
    // Final
    vlTOPp->__Vchglast__TOP____Vcellinp__top__rst = vlTOPp->__Vcellinp__top__rst;
    vlTOPp->__Vchglast__TOP__top__DOT__div__DOT__cnt_rst 
        = vlTOPp->top__DOT__div__DOT__cnt_rst;
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
