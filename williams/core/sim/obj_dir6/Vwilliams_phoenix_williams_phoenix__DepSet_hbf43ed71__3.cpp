// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7\n"); );
    // Body
    vlSelf->__PVT__mono = (0xffffU & (VL_SHIFTRS_III(16,16,32, 
                                                     ((0x8000U 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h50ceb7af__0)) 
                                                          << 0xfU)) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h522107fc__0) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h5871af2a__0) 
                                                             << 0xdU) 
                                                            | (((IData)(vlSelf->__VdfgTmp_h27633591__0) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h267325da__0) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_h20e03c37__0) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSelf->__VdfgTmp_h7ad61c6d__0) 
                                                                         << 9U) 
                                                                        | ((IData)(vlSelf->__VdfgTmp_h8e98d7f4__0) 
                                                                           << 8U)))))))), 1U) 
                                      + VL_SHIFTRS_III(16,16,32, (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___58_), 1U)));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__a = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__ca1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___167_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___168_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__cb1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___176_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___177_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__ca1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___167_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___168_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__cb1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___176_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___177_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___444_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
            >> 5U) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___183_));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s 
        = (((7U == (7U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                          >> 3U))) << 3U) | (((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                                                   >> 3U))) 
                                              << 2U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                                                      >> 3U))) 
                                                 << 1U) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                                                       >> 3U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b 
        = (8U | ((2U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___165_)) 
                        << 1U)) | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___165_)) 
                                   & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__cb1_edge) 
                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___183_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___183_;
    vlSelf->__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__b)
                                             : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___143_ 
        = vlSelf->__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032564__56__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9\n"); );
    // Init
    CData/*3:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_ic3_y;
    __PVT__soc__DOT__cpu_board__DOT__widget_ic3_y = 0;
    CData/*3:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_ic4_y;
    __PVT__soc__DOT__cpu_board__DOT__widget_ic4_y = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___556_ 
        = (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
                  ? (~ ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___169_) 
                          & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_)) 
                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___173_) 
                            & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                               >> 3U))) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___178_) 
                                            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_)) 
                                           | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                              & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                                                 >> 3U)))))
                  : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___557_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                               ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                      >> 6U)) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                                 >> 6U))
                               : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                  >> 6U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___173_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                         ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)) 
                                            >> 6U) : 
                                        ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                         >> 6U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___032_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032193__25__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___178_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                               ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                      >> 7U)) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                                 >> 7U))
                               : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                  >> 7U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___169_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_))
                                             ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_) 
                                                >> 7U)
                                             : (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h626016ef__0))
                                         : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                            >> 7U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___033_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032197__26__Vfuncout;
    __PVT__soc__DOT__cpu_board__DOT__widget_ic3_y = 
        (0xfU & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___444_)
                     ? (IData)(vlSelf->__PVT__ja) : (IData)(vlSelf->__PVT__jb))));
    __PVT__soc__DOT__cpu_board__DOT__widget_ic4_y = 
        (0xfU & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___444_)
                     ? ((IData)(vlSelf->__PVT__ja) 
                        >> 4U) : ((IData)(vlSelf->__PVT__jb) 
                                  >> 4U))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                  << 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                                      ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                          & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)) 
                                         >> 2U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                                   >> 2U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                                      >> 2U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___028_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032177__40__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b 
        = ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_)) 
           | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                       ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)) 
                          >> 3U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                    >> 3U)) << 2U)) 
              | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                        >> 2U)) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                          ? ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                              ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                 >> 3U)
                                              : ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y) 
                                                 >> 3U))
                                          : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                             >> 3U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___029_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032181__41__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                  << 3U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                                      ? ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_))
                                          ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)
                                          : (vlSelf->__PVT__in_g 
                                             >> 4U))
                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                                       ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_)
                                                       : (IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y))
                                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___026_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032169__38__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                  << 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                                      ? ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_) 
                                             >> 1U)
                                          : (vlSelf->__PVT__in_g 
                                             >> 5U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                         >> 1U)) << 2U)) 
                             | ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_)) 
                                | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                          ? ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                              ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                 >> 1U)
                                              : ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y) 
                                                 >> 1U))
                                          : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                             >> 1U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___027_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032173__39__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                  >> 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                                      ? ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_) 
                                             >> 4U)
                                          : ((IData)(vlSelf->__VdfgExtracted_h3619c605__0) 
                                             >> 3U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                         >> 4U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                                       >> 3U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                       >> 4U)
                                                       : (IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                                      >> 4U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___030_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032185__42__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                  >> 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                                      ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_) 
                                             >> 5U)
                                          : ((IData)(vlSelf->__VdfgExtracted_h3619c605__0) 
                                             >> 2U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                         >> 5U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                                       >> 4U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                       >> 5U)
                                                       : 
                                                      ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                                       >> 1U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                                      >> 5U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___031_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032189__43__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                               ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)) 
                                  >> 6U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                            >> 6U)) 
                             << 2U)) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___173_) 
                                         << 1U) | (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                        >> 6U)
                                                        : 
                                                       ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                                       >> 6U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___032_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032193__44__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___178_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                               ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)) 
                                  >> 7U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                            >> 7U)) 
                             << 2U)) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___169_) 
                                         << 1U) | (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                                                       ? 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                                        >> 7U)
                                                        : 
                                                       ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                                        >> 3U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                                       >> 7U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___033_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032197__45__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__10(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__10\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s = 0;
    // Body
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                  << 3U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                                      ? ((1U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                                          ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_)
                                          : (IData)(vlSelf->__PVT__soc__DOT___56_))
                                      : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                                      ? (IData)(vlSelf->__VdfgTmp_h8e98d7f4__0)
                                                      : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___026_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032169__263__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                  << 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                                      ? ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                             >> 1U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 1U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                         >> 1U)) << 2U)) 
                             | ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_)) 
                                | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                          ? (IData)(vlSelf->__VdfgTmp_h7ad61c6d__0)
                                          : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             >> 1U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___027_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032173__264__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                  << 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                                      ? ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                             >> 2U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 2U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                         >> 2U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                       >> 1U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                                      ? (IData)(vlSelf->__VdfgTmp_h20e03c37__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                                      >> 2U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___028_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032177__265__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b 
        = ((8U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_)) 
           | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                       ? ((8U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                           ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                              >> 3U) : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                        >> 3U)) : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                                   >> 3U)) 
                     << 2U)) | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                       >> 2U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                                      ? (IData)(vlSelf->__VdfgTmp_h267325da__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                                      >> 3U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___029_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032181__266__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                  >> 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                                      ? ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                             >> 4U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 4U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                         >> 4U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                       >> 3U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                                      ? (IData)(vlSelf->__VdfgTmp_h27633591__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                                      >> 4U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___030_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032185__267__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                  >> 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                                      ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                             >> 5U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 5U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                         >> 5U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                       >> 4U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                                      ? (IData)(vlSelf->__VdfgTmp_h5871af2a__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                                      >> 5U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___031_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032189__268__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__11(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__11\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s = 0;
    // Body
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___178_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                               ? ((0x80U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_))
                                   ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                      >> 7U) : (IData)(vlSelf->__PVT__soc__DOT___54_))
                               : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                  >> 7U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___169_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                         ? (IData)(vlSelf->__VdfgTmp_h50ceb7af__0)
                                         : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                            >> 7U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___033_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032197__270__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__12(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__12\n"); );
    // Init
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___049_;
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___049_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___050_;
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___050_ = 0;
    CData/*5:0*/ __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___051_;
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___051_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___052_;
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___052_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___053_;
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___053_ = 0;
    CData/*5:0*/ __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___054_;
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___054_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___049_;
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___049_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___050_;
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___050_ = 0;
    CData/*5:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___051_;
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___051_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___052_;
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___052_ = 0;
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___053_;
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___053_ = 0;
    CData/*5:0*/ __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___054_;
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___054_ = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__a;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s = 0;
    // Body
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b 
        = (4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___055_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032245__54__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
        = ((0xfff000U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                          << 0x12U) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                                       << 0xcU))) | 
           ((0xfc0U & ((IData)(vlSelf->soc__DOT__cpu_board__DOT__mpu_data_in) 
                       << 6U)) | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__a))))));
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___051_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032237__31__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
        = ((0xfc0000U & ((IData)(vlSelf->soc__DOT__cpu_board__DOT__mpu_data_in) 
                         << 0x12U)) | (0x3ffffU & (
                                                   ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__a))))));
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___054_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032240__34__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
        = ((0xfff000U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                          << 0x12U) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                                       << 0xcU))) | 
           ((0xfc0U & ((IData)(vlSelf->soc__DOT__cpu_board__DOT__mpu_data_in) 
                       << 6U)) | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__a))))));
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___051_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032237__50__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
        = ((0xfc0000U & ((IData)(vlSelf->soc__DOT__cpu_board__DOT__mpu_data_in) 
                         << 0x12U)) | (0x3ffffU & (
                                                   ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__a))))));
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___054_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032240__53__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__a))))));
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___049_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032235__29__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__a))))));
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___050_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032236__30__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__a))))));
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___052_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032238__32__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__a))))));
    __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___053_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032239__33__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__a))))));
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___049_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032235__48__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
               ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
               : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__a))))));
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___050_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032236__49__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__a))))));
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___052_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032238__51__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__a))))));
    __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___053_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032239__52__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
            >> 2U) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___521_));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___034_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032202__27__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b 
        = (0xfffffffcU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                          & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___521_) 
                             << 2U)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___035_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032207__28__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
            >> 2U) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___523_));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___034_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032202__46__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b 
        = (0xfffffffcU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                          & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___523_) 
                             << 2U)));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___035_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____032207__47__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                  << 3U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                                      ? ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_)) 
                                         | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_))
                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_))
                                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___026_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032169__19__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                  << 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                             >> 1U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                            >> 1U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                         >> 1U)) << 2U)) 
                             | ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_)) 
                                | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                          ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)) 
                                             >> 1U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                             >> 1U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___027_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032173__20__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                  << 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                            >> 2U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                         >> 2U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                                       >> 1U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                                      ? 
                                                     (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)) 
                                                      >> 2U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                      >> 2U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___028_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032177__21__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b 
        = ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_)) 
           | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                       ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                              >> 3U)) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                         >> 3U)) : 
                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                       >> 3U)) << 2U)) | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                                                 >> 2U)) 
                                          | (1U & (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                     & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)) 
                                                    >> 3U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                    >> 3U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___029_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032181__22__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                  >> 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                             >> 5U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                            >> 5U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                         >> 5U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                                       >> 4U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                                      ? 
                                                     (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                      >> 5U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___031_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032189__24__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                  >> 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                                      ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                             >> 4U)) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_) 
                                            >> 4U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                         >> 4U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                                       >> 3U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_) 
                                                       >> 4U)
                                                       : 
                                                      ((IData)(vlSelf->__VdfgExtracted_h3619c605__0) 
                                                       >> 1U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                                      >> 4U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___030_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____032185__23__Vfuncout;
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___037_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___157_ 
            = __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___051_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___163_ 
            = __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___054_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___153_ 
            = __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___049_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___155_ 
            = __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___050_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___159_ 
            = __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___052_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___161_ 
            = __PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___053_;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___157_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___163_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___153_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___155_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___159_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___161_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_;
    }
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___037_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___157_ 
            = __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___051_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___163_ 
            = __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___054_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___153_ 
            = __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___049_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___155_ 
            = __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___050_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___159_ 
            = __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___052_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___161_ 
            = __PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___053_;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___157_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___163_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___153_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___155_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___159_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___161_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_;
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__13(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__13\n"); );
    // Init
    CData/*7:0*/ __PVT__soc__DOT__cpu_board__DOT__video_prom_address;
    __PVT__soc__DOT__cpu_board__DOT__video_prom_address = 0;
    // Body
    if ((2U & (IData)(vlSelf->__PVT__boot_g))) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address 
            = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                        >> 8U));
        __PVT__soc__DOT__cpu_board__DOT__video_prom_address 
            = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_) 
                        >> 6U));
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address 
            = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___353_));
        __PVT__soc__DOT__cpu_board__DOT__video_prom_address 
            = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___356_));
    }
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___229_ 
        = (((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__hiram_access)) 
            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_))
            ? ((3U == (3U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address) 
                             >> 6U))) ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)
                : ((0xc000U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address) 
                               << 8U)) | ((0x3fc0U 
                                           & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                                              << 6U)) 
                                          | (0x3fU 
                                             & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__pseudo_address)))))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address));
    vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h27e85ef7__0 
        = (((IData)(__PVT__soc__DOT__cpu_board__DOT__video_prom_address) 
            << 6U) | (0x3fU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___274_ 
        = ((1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                  & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
                     >> 7U))) ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___229_)
            : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___223_)
                ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___229_)
                : ((0x100U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
                    ? (0x8000U | (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h27e85ef7__0))
                    : ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
                        ? (0x4000U | (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h27e85ef7__0))
                        : ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
                            ? (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h27e85ef7__0)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_))))));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__15(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__15\n"); );
    // Init
    CData/*0:0*/ __PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_;
    __PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_ = 0;
    CData/*2:0*/ soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0;
    soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0 = 0;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___31_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___50_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___59_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___01_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___59_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___50_));
    soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0 
        = ((6U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___54_) 
                  << 1U)) | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___46_));
    __PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_ 
        = (((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___46_)) 
            & VL_LTES_III(10, 0x180U, (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_))) 
           | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT___46_) 
              & VL_GTES_III(10, 0x280U, (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___26_ 
        = (0x3ffU & ((IData)(__PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_)
                      ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_)
                      : ((IData)(1U) + ((IData)(vlSelf->soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h7b6ed283__0) 
                                        + VL_SHIFTRS_III(10,10,31, 
                                                         (0x3ffU 
                                                          & (~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___57_))), 4U)))));
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___01_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___53_ 
            = soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___55_ 
            = (0xfffU & ((IData)(__PVT__soc__DOT__sound_board__DOT__ic1__DOT___07_)
                          ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___56_)
                          : (((0U == (IData)(soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0)) 
                              | (7U == (IData)(soc__DOT__sound_board__DOT__ic1__DOT____VdfgTmp_h0371f73f__0)))
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

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__16(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__16\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1062_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___551_)
            ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_)
                ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1044_)
                : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))
            : 0U);
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
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__a = 0;
    QData/*39:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__a = 0;
    QData/*39:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__a = 0;
    QData/*39:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__b = 0;
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__a = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s = 0;
    CData/*6:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__a = 0;
    QData/*34:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b = 0;
    CData/*4:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__b = 0;
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__a = 0;
    SData/*15:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__b = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di 
        = ((0U == (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                            >> 8U))) ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_ram__DOT___1_)
            : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia_cs)
                ? (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___033_) 
                    << 7U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___032_) 
                               << 6U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___031_) 
                                          << 5U) | 
                                         (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___030_) 
                                           << 4U) | 
                                          (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___029_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___028_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___027_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___026_))))))))
                : ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                                     >> 0xcU))) ? (IData)(vlSelf->__PVT__soc__DOT___65_)
                    : (((0xeU >= (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                                          >> 0xcU))) 
                        & (0xbU <= (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_) 
                                            >> 0xcU))))
                        ? (IData)(vlSelf->__PVT__soc__DOT___68_)
                        : 0x55U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__s 
        = (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1047_)) 
            << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1047_)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__b 
        = (1U | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                 << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1063_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__Vfuncout 
        = (0xffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__s)))
                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__b)
                     : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__s)))
                         ? ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__b) 
                            >> 8U) : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__a))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0091_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032979__111__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                       << 3U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
        = (0xfeULL | ((QData)((IData)((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_) 
                                        << 0x18U) | 
                                       (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                            << 8U) 
                                           | (0xffU 
                                              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_))))))) 
                      << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__a 
        = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__Vfuncout 
        = (0xffU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x20U))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0031_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032771__96__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                       << 3U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__a 
        = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1070_) 
                    >> 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__Vfuncout 
        = (0xffU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x20U))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0032_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032775__97__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s 
        = (((6U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
            << 4U) | (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
                       << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
                                  << 2U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1046_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
        = ((QData)((IData)(((0xffff0000U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                             << 0x18U) 
                                            | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                               << 0x10U))) 
                            | ((0xff00U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                                           << 8U)) 
                               | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1065_))))) 
           << 8U);
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__a 
        = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__Vfuncout 
        = (0xffU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x20U))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x18U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 0x10U))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b 
                                                >> 8U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0043_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032816__99__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s 
        = (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1049_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
            << 0x18U) | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                         << 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1064_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__a))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0051_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032843__101__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1050_)) 
            << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1050_)) 
                       << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1050_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
            << 0x10U) | (0xff00U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                    << 8U)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1065_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__Vfuncout 
        = (0xffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__s)))
                     ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__b
                     : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__s)))
                         ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__b 
                            >> 8U) : ((4U == (4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__s)))
                                       ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__b 
                                          >> 0x10U)
                                       : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__a)))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0056_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032858__102__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
            << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
            << 0x18U) | ((0xff0000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                                       << 0x10U)) | 
                         (0xff00U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                     << 8U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__a 
        = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__a))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0062_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032877__103__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
            << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1051_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
        = ((0xff000000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                           << 0x10U)) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                          << 0x10U) 
                                         | (0xff00U 
                                            & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__a 
        = (0xffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1067_) 
                    >> 8U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__a))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0063_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032882__104__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                       << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                  << 3U)) | ((4U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__cpu_di) 
                                    << 2U)) | (2U & 
                                               ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0179_) 
                                                << 1U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__a 
        = (1U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1071_));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__Vfuncout 
        = (1U & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                  ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                      ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 3U))))
                      : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 4U)))))
                  : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                      ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 3U))))
                      : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                          ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : 
                                                ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                                 >> 2U)))
                          : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                              ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                  ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                  : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b) 
                                     >> 1U)) : ((1U 
                                                 & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__s))
                                                 ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__b)
                                                 : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0074_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032921__106__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s 
        = (((5U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
            << 4U) | (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                       << 3U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                  << 2U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1048_))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__a 
        = (0x7fU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1071_) 
                    >> 1U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__Vfuncout 
        = (0x7fU & ((0x10U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                     ? ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0x15U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0x1cU))))))
                     : ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                         ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0x15U)))))
                         : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 0xeU))))
                             : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b 
                                                >> 7U)))
                                 : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__s))
                                     ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__b)
                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__a)))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0075_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032928__107__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__s 
        = (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1052_)) 
            << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1052_)) 
                       << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1052_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__b 
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1066_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__Vfuncout 
        = (0xffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__s)))
                     ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__b
                     : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__s)))
                         ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__b 
                            >> 8U) : ((4U == (4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__s)))
                                       ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__b 
                                          >> 0x10U)
                                       : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__a)))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0081_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032948__109__Vfuncout;
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
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___078_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__ca1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___034_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___169_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___088_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___171_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___172_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___034_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___173_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___123_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__cb1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___035_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___178_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___133_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___171_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___172_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___035_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___078_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__ca1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___034_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___169_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___088_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___171_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___172_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___034_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___173_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___123_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__cb1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___035_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___178_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___133_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___180_)
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___181_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___035_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_)));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__19(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__19\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___502_ 
        = ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
             >> 8U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read)))
            ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___323_)
                ? (IData)(vlSelf->ext_din) : ((IData)(
                                                      (0xcb00U 
                                                       == 
                                                       (0xff01U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))
                                               ? (0xfcU 
                                                  & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_) 
                                                     >> 6U))
                                               : ((0xc80cU 
                                                   == 
                                                   (0xff0cU 
                                                    & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___033_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___032_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___031_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___030_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___029_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___028_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___027_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___026_))))))))
                                                   : 
                                                  ((0xc804U 
                                                    == 
                                                    (0xff0cU 
                                                     & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___033_) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___032_) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___031_) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___030_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___029_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___028_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___027_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___026_))))))))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_) 
                                                     | ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___516_) 
                                                          & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___030_)) 
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
                                                     : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___503_))))))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___503_));
}
