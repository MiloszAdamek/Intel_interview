// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_top__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_top__DOT__b),32);
        bufp->chgIData(oldp+2,(vlSelfRef.quadra_top__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
    }
    bufp->chgBit(oldp+6,(vlSelfRef.clk));
    bufp->chgBit(oldp+7,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+8,(vlSelfRef.x),24);
    bufp->chgBit(oldp+9,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+10,(vlSelfRef.y),24);
    bufp->chgBit(oldp+11,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+12,((0x7fU & (vlSelfRef.x >> 0x11U))),7);
    bufp->chgIData(oldp+13,((0x1ffffU & vlSelfRef.x)),17);
    bufp->chgIData(oldp+14,((0xffffffU & ((IData)((0x3ffffffffULL 
                                                   & VL_EXTENDS_QI(34,32, vlSelfRef.quadra_top__DOT__a))) 
                                          + ((IData)(
                                                     (0x3ffffffffULL 
                                                      & VL_MULS_QQQ(34, 
                                                                    (0x3ffffffffULL 
                                                                     & VL_EXTENDS_QI(34,32, vlSelfRef.quadra_top__DOT__b)), 
                                                                    (0x3ffffffffULL 
                                                                     & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & vlSelfRef.x)))))) 
                                             + (IData)(
                                                       (0x3ffffffffULL 
                                                        & VL_MULS_QQQ(34, 
                                                                      (0x3ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,32, vlSelfRef.quadra_top__DOT__c)), 
                                                                      (0x3ffffffffULL 
                                                                       & ((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlSelfRef.x))) 
                                                                          * (QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlSelfRef.x)))))))))))),24);
    bufp->chgQData(oldp+15,((0x3ffffffffULL & ((QData)((IData)(
                                                               (0x1ffffU 
                                                                & vlSelfRef.x))) 
                                               * (QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & vlSelfRef.x)))))),34);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
