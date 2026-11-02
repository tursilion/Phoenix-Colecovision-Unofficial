// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__10(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__10\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s = 0;
    // Body
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___206_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                               ? ((0x80U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                                   ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                      >> 7U) : (IData)(vlSelf->__PVT__soc__DOT___54_))
                               : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                  >> 7U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___197_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                         ? (IData)(vlSelf->__VdfgTmp_hbf486df6__0)
                                         : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                            >> 7U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___061_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310851__549__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__11(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__11\n"); );
    // Body
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0510_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0509_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0068_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0067_;
    } else {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0510_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1074_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0068_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1068_;
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__12(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__12\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s = 0;
    // Body
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b 
        = (4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___083_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310899__54__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
        = ((0xfff000U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                          << 0x12U) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                                       << 0xcU))) | 
           ((0xfc0U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                       << 6U)) | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___079_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310891__31__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
        = ((0xfc0000U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                         << 0x12U)) | (0x3ffffU & (
                                                   ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___082_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310894__34__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
        = ((0xfff000U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                          << 0x12U) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                                       << 0xcU))) | 
           ((0xfc0U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                       << 6U)) | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___079_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310891__50__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
        = ((0xfc0000U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                         << 0x12U)) | (0x3ffffU & (
                                                   ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___082_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310894__53__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___077_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310889__29__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___078_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310890__30__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___080_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310892__32__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___081_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310893__33__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___077_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310889__48__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___078_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310890__49__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___080_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310892__51__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___081_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310893__52__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
            >> 2U) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___062_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310856__27__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b 
        = (0xfffffffcU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                          & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_) 
                             << 2U)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___063_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310861__28__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
            >> 2U) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___534_));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___062_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310856__46__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b 
        = (0xfffffffcU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                          & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___534_) 
                             << 2U)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___063_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310861__47__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                  << 3U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                                      ? ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_)) 
                                         | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_))
                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_))
                                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___054_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310823__19__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                  << 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                             >> 1U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                            >> 1U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                         >> 1U)) << 2U)) 
                             | ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_)) 
                                | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                          ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_)) 
                                             >> 1U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                             >> 1U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___055_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310827__20__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                  << 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                            >> 2U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                         >> 2U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                                       >> 1U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                                      ? 
                                                     (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_)) 
                                                      >> 2U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                      >> 2U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___056_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310831__21__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b 
        = ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_)) 
           | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                       ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                              >> 3U)) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                         >> 3U)) : 
                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                       >> 3U)) << 2U)) | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                                                 >> 2U)) 
                                          | (1U & (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                     & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_)) 
                                                    >> 3U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                    >> 3U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___057_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310835__22__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                  >> 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                             >> 5U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                            >> 5U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                         >> 5U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                                       >> 4U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                                      ? 
                                                     (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_)) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                      >> 5U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___059_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310843__24__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                  >> 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                             >> 4U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                            >> 4U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                         >> 4U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                                       >> 3U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlSelf->__VdfgExtracted_h3619c605__0) 
                                                       >> 1U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                                      >> 4U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___058_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310839__23__Vfuncout;
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___065_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___185_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___079_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___191_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___082_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___181_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___077_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___183_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___078_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___187_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___080_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___189_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___081_;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___185_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___191_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___181_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___183_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___187_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___189_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_;
    }
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___065_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___185_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___079_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___191_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___082_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___181_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___077_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___183_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___078_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___187_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___080_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___189_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___081_;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___185_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___191_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___181_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___183_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___187_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___189_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_;
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__13(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__13\n"); );
    // Body
    if ((2U & (IData)(vlSelf->__PVT__boot_g))) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address 
            = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                        >> 8U));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__video_prom_address 
            = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_) 
                        >> 6U));
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address 
            = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___364_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__video_prom_address 
            = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___367_));
    }
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___240_ 
        = (((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__hiram_access)) 
            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___354_))
            ? ((3U == (3U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address) 
                             >> 6U))) ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)
                : ((0xc000U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address) 
                               << 8U)) | ((0x3fc0U 
                                           & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                                              << 6U)) 
                                          | (0x3fU 
                                             & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address)))))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address));
    vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_hc7595f1b__0 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__video_prom_address) 
            << 6U) | (0x3fU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___285_ 
        = ((1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                  & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
                     >> 7U))) ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___240_)
            : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___234_)
                ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___240_)
                : ((0x100U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
                    ? (0x8000U | (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_hc7595f1b__0))
                    : ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
                        ? (0x4000U | (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_hc7595f1b__0))
                        : ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
                            ? (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_hc7595f1b__0)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___521_))))));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__14(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__14\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___31_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___50_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___59_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___01_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___59_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___50_));
    vlSelf->soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0 
        = ((6U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___54_) 
                  << 1U)) | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___46_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_ 
        = (((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___46_)) 
            & VL_LTES_III(10, 0x180U, (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_))) 
           | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___46_) 
              & VL_GTES_III(10, 0x280U, (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_ 
        = (0x3ffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_)
                      ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_)
                      : ((IData)(1U) + ((IData)(vlSelf->soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h7b6ed283__0) 
                                        + VL_SHIFTRS_III(10,10,31, 
                                                         (0x3ffU 
                                                          & (~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_))), 4U)))));
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___01_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___53_ 
            = vlSelf->soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___55_ 
            = (0xfffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_)
                          ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___56_)
                          : (((0U == (IData)(vlSelf->soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0)) 
                              | (7U == (IData)(vlSelf->soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0)))
                              ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___16_)
                              : ((IData)(0xfc1U) + (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___16_)))));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___50_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___51_ 
            = (0xffffU & (((0x200000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                         << 0xcU)) 
                           | ((0x100000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                            << 0xbU)) 
                              | ((0x80000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                              << 0xaU)) 
                                 | ((0x40000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                                 << 9U)) 
                                    | ((0x20000U & 
                                        ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                         << 8U)) | 
                                       ((0x10000U & 
                                         ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                          << 7U)) | 
                                        ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                         << 6U))))))) 
                          | (0x3fU & (0x20U ^ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_) 
                                               >> 4U)))));
    } else {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___53_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___54_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___55_ 
            = (0xfffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___56_));
        if (vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___31_) {
            vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___50_ 
                = vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_;
            vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___51_ 
                = (0xffffU & (((0x200000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                             << 0xcU)) 
                               | ((0x100000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                                << 0xbU)) 
                                  | ((0x80000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                                  << 0xaU)) 
                                     | ((0x40000U & 
                                         ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                          << 9U)) | 
                                        ((0x20000U 
                                          & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                             << 8U)) 
                                         | ((0x10000U 
                                             & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                                << 7U)) 
                                            | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                               << 6U))))))) 
                              | (0x3fU & (0x20U ^ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___44_) 
                                                   >> 4U)))));
        } else {
            vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___50_ 
                = vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_;
            vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___51_ 
                = (0xffffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___58_));
        }
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__15(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__15\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1062_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___562_)
            ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_)
                ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1044_)
                : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))
            : 0U);
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__16(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__16\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__a = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___151_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__cb1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___063_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___206_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___161_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___208_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___209_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___063_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___210_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___106_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__ca1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___062_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___197_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___116_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___199_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___200_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___062_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___201_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s 
        = (((7U == (7U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                          >> 3U))) << 3U) | (((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                                   >> 3U))) 
                                              << 2U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                                      >> 3U))) 
                                                 << 1U) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                                       >> 3U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b 
        = (8U | ((2U & ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___062_)) 
                        << 1U)) | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___062_)) 
                                   & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__ca1_edge) 
                                      | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___202_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___202_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__b)
                                             : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___126_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311067__559__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__17(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__17\n"); );
    // Init
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0031_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0031_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0032_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0032_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0043_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0043_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0051_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0051_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0056_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0056_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0062_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0062_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0063_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0063_ = 0;
    CData/*0:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0074_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0074_ = 0;
    CData/*6:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0075_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0075_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0081_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0081_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0091_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0091_ = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__a = 0;
    QData/*39:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__a = 0;
    QData/*39:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__a = 0;
    QData/*39:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__b = 0;
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__a = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s = 0;
    CData/*6:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__a = 0;
    QData/*34:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__b = 0;
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__a = 0;
    SData/*15:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__b = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di 
        = ((0U == (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                            >> 8U))) ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_ram__DOT___1_)
            : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia_cs)
                ? (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___061_) 
                    << 7U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___060_) 
                               << 6U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___059_) 
                                          << 5U) | 
                                         (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___058_) 
                                           << 4U) | 
                                          (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___057_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___056_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___055_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___054_))))))))
                : ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                                     >> 0xcU))) ? (IData)(vlSelf->__PVT__soc__DOT___65_)
                    : (((0xeU >= (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                                          >> 0xcU))) 
                        & (0xbU <= (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                                            >> 0xcU))))
                        ? (IData)(vlSelf->__PVT__soc__DOT___68_)
                        : 0x55U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__s 
        = (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1047_)) 
            << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1047_)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__b 
        = (1U | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                 << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1063_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__Vfuncout 
        = (0xffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__s)))
                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__b)
                     : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__s)))
                         ? ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__b) 
                            >> 8U) : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__a))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0091_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311633__390__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                       << 3U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
        = (0xfeULL | ((QData)((IData)((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_) 
                                        << 0x18U) | 
                                       (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                            << 8U) 
                                           | (0xffU 
                                              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_))))))) 
                      << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__a 
        = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__Vfuncout 
        = (0xffU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x20U))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0031_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311425__375__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                       << 3U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
        = (0xffULL | ((QData)((IData)((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_) 
                                            << 8U)) 
                                        | ((0xff00U 
                                            & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_) 
                                               << 8U)) 
                                           | (0xffU 
                                              & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_) 
                                                 >> 8U))))))) 
                      << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__a 
        = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_) 
                    >> 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__Vfuncout 
        = (0xffU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x20U))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0032_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311429__376__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s 
        = (((6U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
            << 4U) | (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
                       << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
                                  << 2U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
        = ((QData)((IData)(((0xffff0000U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                             << 0x18U) 
                                            | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                               << 0x10U))) 
                            | ((0xff00U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                                           << 8U)) 
                               | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1065_))))) 
           << 8U);
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__a 
        = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__Vfuncout 
        = (0xffU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x20U))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0043_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311470__378__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s 
        = (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
            << 0x18U) | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                         << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1064_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__a))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0051_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311497__380__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1050_)) 
            << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1050_)) 
                       << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1050_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
            << 0x10U) | (0xff00U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                    << 8U)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1065_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__Vfuncout 
        = (0xffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__s)))
                     ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__b
                     : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__s)))
                         ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__b 
                            >> 8U) : ((4U == (4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__s)))
                                       ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__b 
                                          >> 0x10U)
                                       : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__a)))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0056_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311512__381__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
            << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
            << 0x18U) | ((0xff0000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                                       << 0x10U)) | 
                         (0xff00U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                     << 8U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__a 
        = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__a))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0062_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311531__382__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
            << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
        = ((0xff000000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                           << 0x10U)) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                          << 0x10U) 
                                         | (0xff00U 
                                            & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__a 
        = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                    >> 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__a))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0063_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311536__383__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                       << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                  << 3U)) | ((4U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                    << 2U)) | (2U & 
                                               ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                                << 1U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__a 
        = (1U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1071_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__Vfuncout 
        = (1U & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                  ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                      ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 3U))))
                      : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 4U)))))
                  : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                      ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 3U))))
                      : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__b)
                                                 : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0074_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311575__385__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                       << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
        = (((QData)((IData)((0x7fU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1071_)))) 
            << 0x1cU) | (QData)((IData)(((0xfe00000U 
                                          & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                             << 0x14U)) 
                                         | ((0x1fc000U 
                                             & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                                << 0xdU)) 
                                            | (0x3f80U 
                                               & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                                  << 6U)))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__a 
        = (0x7fU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1071_) 
                    >> 1U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__Vfuncout 
        = (0x7fU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0x15U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0x1cU))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0x15U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0075_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311582__386__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1052_)) 
            << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1052_)) 
                       << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1052_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__b 
        = (0xd0U | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                     << 0x10U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0498_) 
                                   << 0xfU) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0497_) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0392_) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0380_) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0376_) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0324_) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0493_) 
                                                               << 9U) 
                                                              | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0244_) 
                                                                 << 8U))))))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1066_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__Vfuncout 
        = (0xffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__s)))
                     ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__b
                     : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__s)))
                         ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__b 
                            >> 8U) : ((4U == (4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__s)))
                                       ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__b 
                                          >> 0x10U)
                                       : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__a)))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0081_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311602__388__Vfuncout;
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0092_ 
            = __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0091_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0034_ 
            = (0xffffU & ((((IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0032_) 
                            << 8U) | (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0031_)) 
                          + (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0025_)));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0046_ 
            = (0xffffU & ((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0044_) 
                            << 8U) | (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0043_)) 
                          + (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0037_)));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0052_ 
            = __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0051_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0057_ 
            = __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0056_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0064_ 
            = (((IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0063_) 
                << 8U) | (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0062_));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0077_ 
            = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0076_) 
                << 8U) | (((IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0075_) 
                           << 1U) | (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0074_)));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0082_ 
            = __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0081_;
    } else {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0092_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1063_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0034_ 
            = (0xffffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0046_ 
            = (0xffffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_));
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0052_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1064_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0057_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1065_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0064_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0077_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1071_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0082_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1066_;
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__18(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__18\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___106_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__ca1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___062_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___197_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___116_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___199_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___200_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___062_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___201_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___151_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__cb1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___063_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___206_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___161_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___208_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___209_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___063_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___210_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___106_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__ca1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___062_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___197_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___116_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___199_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___200_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___062_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___201_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___151_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__cb1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___063_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___206_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___161_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___208_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___209_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___063_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___210_)));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__19(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__19\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___513_ 
        = ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
             >> 8U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read)))
            ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___334_)
                ? (IData)(vlSelf->ext_din) : ((IData)(
                                                      (0xcb00U 
                                                       == 
                                                       (0xff01U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))
                                               ? (0xfcU 
                                                  & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_) 
                                                     >> 6U))
                                               : ((0xc80cU 
                                                   == 
                                                   (0xff0cU 
                                                    & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___061_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___060_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___059_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___058_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___057_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___056_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___055_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___054_))))))))
                                                   : 
                                                  ((0xc804U 
                                                    == 
                                                    (0xff0cU 
                                                     & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___061_) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___060_) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___059_) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___058_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___057_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___056_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___055_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___054_))))))))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___354_) 
                                                     | ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___527_) 
                                                          & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___041_)) 
                                                         | ((((IData)(vlSelf->__PVT__boot_g) 
                                                              >> 1U) 
                                                             & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read) 
                                                                & (0xd000U 
                                                                   <= (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))) 
                                                            | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read) 
                                                               & (0xe000U 
                                                                  <= (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))) 
                                                        | (0xcc00U 
                                                           == 
                                                           (0xfc00U 
                                                            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))))
                                                     ? (IData)(vlSelf->__PVT__mem_do)
                                                     : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___514_))))))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___514_));
}
