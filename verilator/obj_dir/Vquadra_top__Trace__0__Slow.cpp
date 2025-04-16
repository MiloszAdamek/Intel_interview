// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vquadra_top___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+10,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+12,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("quadra_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+10,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+12,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dv_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dv_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dv_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,17);
    tracep->declBus(c+14,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"y_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("lut_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,17);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("quadra_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+15,0,"x2_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+17,0,"x2_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+18,0,"bx2_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declArray(c+20,0,"cx2sq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+23,0,"bx2_sft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"cx2_sft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+25,0,"y_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->pushPrefix("sq_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+15,0,"sq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+27,0,"X_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+28,0,"X_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+29,0,"X_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"Y_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+28,0,"Y_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"Y_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_top(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_top\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vquadra_top___024root__trace_register(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_register\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vquadra_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vquadra_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vquadra_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vquadra_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vquadra_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+27,(1U),32);
    bufp->fullIData(oldp+28,(0x17U),32);
    bufp->fullIData(oldp+29,(0x18U),32);
    bufp->fullIData(oldp+30,(2U),32);
    bufp->fullIData(oldp+31,(0x19U),32);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vquadra_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullIData(oldp+1,(vlSelfRef.quadra_top__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelfRef.quadra_top__DOT__b),32);
    bufp->fullIData(oldp+3,(vlSelfRef.quadra_top__DOT__c),32);
    bufp->fullBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p0));
    bufp->fullBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p1));
    bufp->fullBit(oldp+6,(vlSelfRef.quadra_top__DOT__dv_p2));
    bufp->fullBit(oldp+7,(vlSelfRef.clk));
    bufp->fullBit(oldp+8,(vlSelfRef.rst_b));
    bufp->fullIData(oldp+9,(vlSelfRef.x),24);
    bufp->fullBit(oldp+10,(vlSelfRef.x_dv));
    bufp->fullIData(oldp+11,(vlSelfRef.y),25);
    bufp->fullBit(oldp+12,(vlSelfRef.y_dv));
    bufp->fullCData(oldp+13,((0x7fU & (vlSelfRef.x 
                                       >> 0x11U))),7);
    bufp->fullIData(oldp+14,((0x1ffffU & vlSelfRef.x)),17);
    bufp->fullQData(oldp+15,((0x3ffffffffULL & ((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & vlSelfRef.x))) 
                                                * (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & vlSelfRef.x)))))),34);
    bufp->fullIData(oldp+17,((0x1ffffU & vlSelfRef.x)),18);
    bufp->fullQData(oldp+18,((0x1ffffffffffffULL & 
                              VL_MULS_QQQ(49, (0x1ffffffffffffULL 
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
    bufp->fullWData(oldp+20,(__Vtemp_9),66);
    bufp->fullIData(oldp+23,((IData)((0x1ffffffffffffULL 
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
    bufp->fullIData(oldp+24,(__Vtemp_20[0U]),32);
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
    bufp->fullQData(oldp+25,((0x7ffffffffULL & (VL_EXTENDS_QI(35,32, vlSelfRef.quadra_top__DOT__a) 
                                                + (
                                                   VL_EXTENDS_QI(35,32, (IData)(
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
