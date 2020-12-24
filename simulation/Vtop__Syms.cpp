// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"



// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top.configure(this, name(), "top", "top", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__d38.configure(this, name(), "top.d38", "d38", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__div.configure(this, name(), "top.div", "div", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__div__counter0.configure(this, name(), "top.div.counter0", "counter0", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"a", &(TOPp->a), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"b", &(TOPp->b), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"c", &(TOPp->c), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOPp->clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"d", &(TOPp->d), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"e", &(TOPp->e), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"f", &(TOPp->f), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"g", &(TOPp->g), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"h", &(TOPp->h), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOPp->rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"a", &(TOPp->top__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"b", &(TOPp->top__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"c", &(TOPp->top__DOT__c), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"clk", &(TOPp->top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"d", &(TOPp->top__DOT__d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"d38_in", &(TOPp->top__DOT__d38_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_top.varInsert(__Vfinal,"div_sig", &(TOPp->top__DOT__div_sig), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"e", &(TOPp->top__DOT__e), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"f", &(TOPp->top__DOT__f), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"g", &(TOPp->top__DOT__g), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"h", &(TOPp->top__DOT__h), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"rst", &(TOPp->top__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__d38.varInsert(__Vfinal,"a", &(TOPp->top__DOT__d38__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_top__d38.varInsert(__Vfinal,"b", &(TOPp->top__DOT__d38__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__div.varInsert(__Vfinal,"clk", &(TOPp->top__DOT__div__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__div.varInsert(__Vfinal,"cnt", &(TOPp->top__DOT__div__DOT__cnt), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__div.varInsert(__Vfinal,"cnt_rst", &(TOPp->top__DOT__div__DOT__cnt_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__div.varInsert(__Vfinal,"out", &(TOPp->top__DOT__div__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__div.varInsert(__Vfinal,"rst", &(TOPp->top__DOT__div__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__div__counter0.varInsert(__Vfinal,"clk", &(TOPp->top__DOT__div__DOT__counter0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__div__counter0.varInsert(__Vfinal,"data", &(TOPp->top__DOT__div__DOT__counter0__DOT__data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__div__counter0.varInsert(__Vfinal,"rst", &(TOPp->top__DOT__div__DOT__counter0__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
