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
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
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
    bufp->chgIData(oldp+10,(vlSelfRef.y),25);
    bufp->chgBit(oldp+11,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+12,((0x7fU & (vlSelfRef.x >> 0x11U))),7);
    bufp->chgIData(oldp+13,((0x1ffffU & vlSelfRef.x)),17);
    bufp->chgQData(oldp+14,((0x3ffffffffULL & ((QData)((IData)(
                                                               (0x1ffffU 
                                                                & vlSelfRef.x))) 
                                               * (QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & vlSelfRef.x)))))),34);
    bufp->chgIData(oldp+16,((0x1ffffU & vlSelfRef.x)),18);
    bufp->chgQData(oldp+17,((0x1ffffffffffffULL & VL_MULS_QQQ(49, 
                                                              (0x1ffffffffffffULL 
                                                               & VL_EXTENDS_QI(49,32, vlSelfRef.quadra_top__DOT__b)), 
                                                              (0x1ffffffffffffULL 
                                                               & VL_EXTENDS_QI(49,18, 
                                                                               (0x1ffffU 
                                                                                & vlSelfRef.x)))))),49);
    VL_EXTENDS_WI(66,32, __Vtemp_3, vlSelfRef.quadra_top__DOT__c);
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (3U & __Vtemp_3[2U]);
    VL_EXTENDS_WQ(66,34, __Vtemp_6, (0x3ffffffffULL 
                                     & ((QData)((IData)(
                                                        (0x1ffffU 
                                                         & vlSelfRef.x))) 
                                        * (QData)((IData)(
                                                          (0x1ffffU 
                                                           & vlSelfRef.x))))));
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (3U & __Vtemp_6[2U]);
    VL_MULS_WWW(66, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    __Vtemp_9[0U] = __Vtemp_8[0U];
    __Vtemp_9[1U] = __Vtemp_8[1U];
    __Vtemp_9[2U] = (3U & __Vtemp_8[2U]);
    bufp->chgWData(oldp+19,(__Vtemp_9),66);
    bufp->chgIData(oldp+22,((IData)((0x1ffffffffffffULL 
                                     & VL_SHIFTRS_QQI(49,49,32, 
                                                      (0x1ffffffffffffULL 
                                                       & VL_MULS_QQQ(49, 
                                                                     (0x1ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(49,32, vlSelfRef.quadra_top__DOT__b)), 
                                                                     (0x1ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(49,18, 
                                                                                (0x1ffffU 
                                                                                & vlSelfRef.x))))), 0x11U)))),32);
    VL_EXTENDS_WI(66,32, __Vtemp_13, vlSelfRef.quadra_top__DOT__c);
    __Vtemp_14[0U] = __Vtemp_13[0U];
    __Vtemp_14[1U] = __Vtemp_13[1U];
    __Vtemp_14[2U] = (3U & __Vtemp_13[2U]);
    VL_EXTENDS_WQ(66,34, __Vtemp_16, (0x3ffffffffULL 
                                      & ((QData)((IData)(
                                                         (0x1ffffU 
                                                          & vlSelfRef.x))) 
                                         * (QData)((IData)(
                                                           (0x1ffffU 
                                                            & vlSelfRef.x))))));
    __Vtemp_17[0U] = __Vtemp_16[0U];
    __Vtemp_17[1U] = __Vtemp_16[1U];
    __Vtemp_17[2U] = (3U & __Vtemp_16[2U]);
    VL_MULS_WWW(66, __Vtemp_18, __Vtemp_14, __Vtemp_17);
    __Vtemp_19[0U] = __Vtemp_18[0U];
    __Vtemp_19[1U] = __Vtemp_18[1U];
    __Vtemp_19[2U] = (3U & __Vtemp_18[2U]);
    VL_SHIFTRS_WWI(66,66,32, __Vtemp_20, __Vtemp_19, 0x22U);
    bufp->chgIData(oldp+23,(__Vtemp_20[0U]),32);
    VL_EXTENDS_WI(66,32, __Vtemp_25, vlSelfRef.quadra_top__DOT__c);
    __Vtemp_26[0U] = __Vtemp_25[0U];
    __Vtemp_26[1U] = __Vtemp_25[1U];
    __Vtemp_26[2U] = (3U & __Vtemp_25[2U]);
    VL_EXTENDS_WQ(66,34, __Vtemp_28, (0x3ffffffffULL 
                                      & ((QData)((IData)(
                                                         (0x1ffffU 
                                                          & vlSelfRef.x))) 
                                         * (QData)((IData)(
                                                           (0x1ffffU 
                                                            & vlSelfRef.x))))));
    __Vtemp_29[0U] = __Vtemp_28[0U];
    __Vtemp_29[1U] = __Vtemp_28[1U];
    __Vtemp_29[2U] = (3U & __Vtemp_28[2U]);
    VL_MULS_WWW(66, __Vtemp_30, __Vtemp_26, __Vtemp_29);
    __Vtemp_31[0U] = __Vtemp_30[0U];
    __Vtemp_31[1U] = __Vtemp_30[1U];
    __Vtemp_31[2U] = (3U & __Vtemp_30[2U]);
    VL_SHIFTRS_WWI(66,66,32, __Vtemp_32, __Vtemp_31, 0x22U);
    bufp->chgQData(oldp+24,((0x7ffffffffULL & (VL_EXTENDS_QI(35,32, vlSelfRef.quadra_top__DOT__a) 
                                               + (VL_EXTENDS_QI(35,32, (IData)(
                                                                               (0x1ffffffffffffULL 
                                                                                & VL_SHIFTRS_QQI(49,49,32, 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_MULS_QQQ(49, 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(49,32, vlSelfRef.quadra_top__DOT__b)), 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(49,18, 
                                                                                (0x1ffffU 
                                                                                & vlSelfRef.x))))), 0x11U)))) 
                                                  + 
                                                  VL_EXTENDS_QI(35,32, 
                                                                __Vtemp_32[0U]))))),35);
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
