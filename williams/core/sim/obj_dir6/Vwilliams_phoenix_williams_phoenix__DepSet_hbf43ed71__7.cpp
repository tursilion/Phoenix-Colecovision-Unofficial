// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__15(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__15\n"); );
    // Body
    vlSelf->sram_we_n = vlSelf->__PVT__we_next;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__0\n"); );
    // Init
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__a;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__a;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__a = 0;
    SData/*15:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s = 0;
    // Body
    vlSelf->__PVT__sc_go = ((IData)(vlSelf->__PVT__sc_tog48) 
                            != (IData)(vlSelf->__PVT__sc_tog));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s 
        = (((3U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___541_)
                            ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___129_))
                                ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_) 
                                    << 4U) | (0xfU 
                                              & ((IData)(vlSelf->__PVT__mem_do) 
                                                 >> 4U)))
                                : (IData)(vlSelf->__PVT__mem_do))
                            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___121_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310597__12__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s 
        = (((3U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_) 
            << 0xcU) | ((0xf00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___541_)
                                     ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___129_))
                                         ? (IData)(vlSelf->__PVT__mem_do)
                                         : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_))
                                     : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_)) 
                                   << 8U)) | ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_)) 
                                               << 4U) 
                                              | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__Vfuncout 
        = (0xfU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                    ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                        ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                               : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                                  >> 8U)))
                        : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                               : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                                  >> 0xcU))))
                    : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                        ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                               : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                                  >> 8U)))
                        : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__b)
                                               : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___122_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____0310598__13__Vfuncout;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___544_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___131_)
            ? (IData)(vlSelf->__PVT__mem_do) : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___545_));
    vlSelf->__VdfgTmp_h8090fb0b__0 = ((IData)(vlSelf->boot_mode) 
                                      & (IData)(vlSelf->__PVT__sc_go));
    vlSelf->__PVT__io_w = ((IData)(vlSelf->__VdfgTmp_h8090fb0b__0) 
                           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___576_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__17(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__17\n"); );
    // Body
    if (vlSelf->__Vdlyvset__lbuf__v0) {
        vlSelf->__PVT__lbuf[vlSelf->__Vdlyvdim0__lbuf__v0] 
            = vlSelf->__Vdlyvval__lbuf__v0;
    }
    vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_ 
        = (1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___562_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___065_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___534_) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___535_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__address 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)
            ? ((3U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_))
                ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___145_)
                : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___144_))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_ 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT___505_;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___499_ 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT___486_;
    vlSelf->ext_a = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___323_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
                         & (0xca00U == (0xff00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___325_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
                         & (0xc900U == (0xff00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___590_ 
        = (1U & ((~ (1U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                           >> 3U))) & (~ (3U & (((IData)(0xfU) 
                                                 - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                >> 2U)))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___591_ 
        = (1U & ((~ (1U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                           >> 3U))) & (((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                       >> 2U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___592_ 
        = (1U & ((~ (3U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                           >> 2U))) & (((IData)(0xfU) 
                                        - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                       >> 3U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___593_ 
        = (1U & ((((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                  >> 3U) & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                            >> 2U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___334_ 
        = (((IData)(vlSelf->__PVT__boot_g) >> 1U) & 
           (0xc400U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__hiram_access 
        = ((~ ((IData)(vlSelf->__PVT__boot_g) >> 1U)) 
           & ((0xe000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
              & (0xd000U <= (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___041_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read) 
           & (0x9000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
                         & (0xc000U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT___323_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___536_ 
            = (7U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___539_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___536_ 
            = (7U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___537_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___539_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT___540_;
    }
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT___325_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___342_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_ 
            = (1U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                     >> 1U));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___347_ 
            = (1U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                     >> 2U));
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___342_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___527_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___528_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___347_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___542_));
    }
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___596_ 
        = (7U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___590_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___595_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___590_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___598_ 
        = (7U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___591_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___597_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___591_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___600_ 
        = (7U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___592_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___599_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___592_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___602_ 
        = (7U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___593_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___601_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___593_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___306_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
                         & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___334_))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___354_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
            & (0x9000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
           | (((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___527_)) 
               & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___041_)) 
              | (((0xc000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                  & (0x9000U <= (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                 | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__hiram_access))));
    vlSelf->__VdfgTmp_h69159fe2__0 = (((IData)(1U) 
                                       - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_));
    vlSelf->__PVT__soc__DOT___59_ = ((0x4000U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___504_)) 
                                     | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___505_ 
        = (0x3fffU & ((0x800U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
                       ? (((0x40ffU != (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___504_))
                            ? ((IData)(1U) + (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___504_))
                            : 0U) | ((1U & ((0x40ffU 
                                             != (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___504_)) 
                                            & (((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___504_)) 
                                               >> 0xeU)))
                                      ? 0x3f00U : 0U))
                       : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___507_ 
        = ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
            ? ((0x34U == (0x34U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_))) 
               | ((2U != (0x22U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___506_))) 
                  & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___508_)))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___508_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___486_ 
        = (1U & (((IData)(vlSelf->__PVT__soc_reset_g) 
                  >> 1U) | ((0x64U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___498_)) 
                            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___499_))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___561_ 
        = (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
                  ? (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___499_))
                  : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___562_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___625_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___596_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___621_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___595_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___633_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___598_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___629_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___597_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___641_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___600_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___637_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___599_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___649_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___602_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___645_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___601_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___326_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___574_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___306_)
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___575_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___215_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___354_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___233_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___209_) 
           & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___354_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___250_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___354_) 
           | ((0xcc00U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
              | (0xc000U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___651_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___602_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___647_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___601_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[3U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___643_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___600_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___639_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___599_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[2U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___635_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___598_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___631_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___597_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[1U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___627_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___596_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___623_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___595_) 
                     & (IData)(vlSelf->__VdfgTmp_h69159fe2__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___543_[0U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___312_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___250_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___309_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___520_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___258_) 
                         & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___250_))));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__1(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__1\n"); );
    // Body
    vlSelf->__PVT__rpal = vlSelf->__PVT__pal[(0xfU 
                                              & ((IData)(vlSelf->__PVT__rnib1)
                                                  ? (IData)(vlSelf->__PVT__cb_q)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__cb_q) 
                                                  >> 4U)))];
    vlSelf->__PVT__pix = ((IData)(vlSelf->__PVT__rot1)
                           ? ((0xe0U & ((IData)(vlSelf->__PVT__rpal) 
                                        << 5U)) | (
                                                   (0x1cU 
                                                    & ((IData)(vlSelf->__PVT__rpal) 
                                                       >> 1U)) 
                                                   | (3U 
                                                      & ((IData)(vlSelf->__PVT__rpal) 
                                                         >> 6U))))
                           : (IData)(vlSelf->__PVT__lb_q));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__2(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__2\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__a = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__cb1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___204_)
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___205_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT___50_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
            >> 5U) & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___211_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__ca1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___195_)
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___196_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT___46_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
            >> 5U) & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___202_));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s 
        = (((7U == (7U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                          >> 3U))) << 3U) | (((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                                                   >> 3U))) 
                                              << 2U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                                                      >> 3U))) 
                                                 << 1U) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                                                       >> 3U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b 
        = (8U | ((2U & ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___193_)) 
                        << 1U)) | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___193_)) 
                                   & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__cb1_edge) 
                                      | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___211_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___211_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__b)
                                             : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___171_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0311218__560__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__3(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__3\n"); );
    // Body
    vlSelf->__PVT__mono = (0xffffU & (VL_SHIFTRS_III(16,16,32, 
                                                     ((0x8000U 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_hbf486df6__0)) 
                                                          << 0xfU)) 
                                                      | (((IData)(vlSelf->__VdfgTmp_hcad3408d__0) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->__VdfgTmp_hcca033bd__0) 
                                                             << 0xdU) 
                                                            | (((IData)(vlSelf->__VdfgTmp_hcf4b05e2__0) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_hb67028e5__0) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_hb193d804__0) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSelf->__VdfgTmp_h87f36a60__0) 
                                                                         << 9U) 
                                                                        | ((IData)(vlSelf->__VdfgTmp_h8248d8fd__0) 
                                                                           << 8U)))))))), 1U) 
                                      + VL_SHIFTRS_III(16,16,32, (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__ic1__DOT___58_), 1U)));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__4(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__4\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__a;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__a = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__ca1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___195_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___196_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__cb1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___204_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___205_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT__ca1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___195_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___196_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__cb1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___204_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___205_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___455_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
            >> 5U) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___211_));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s 
        = (((7U == (7U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                          >> 3U))) << 3U) | (((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                                                   >> 3U))) 
                                              << 2U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                                                      >> 3U))) 
                                                 << 1U) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                                                       >> 3U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b 
        = (8U | ((2U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___193_)) 
                        << 1U)) | ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___193_)) 
                                   & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT__cb1_edge) 
                                      | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___211_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___211_;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__b)
                                             : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___171_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0311218__56__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__5(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__5\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s = 0;
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___567_ 
        = (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___500_))
                  ? (~ ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___197_) 
                          & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_)) 
                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___201_) 
                            & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_) 
                               >> 3U))) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___206_) 
                                            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_)) 
                                           | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___210_) 
                                              & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_) 
                                                 >> 3U)))))
                  : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___568_)));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___210_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                               ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                      >> 6U)) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                                 >> 6U))
                               : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                  >> 6U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___201_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                         ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_)) 
                                            >> 6U) : 
                                        ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                         >> 6U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___060_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310847__25__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___206_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___192_))
                               ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                      >> 7U)) | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___190_) 
                                                 >> 7U))
                               : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___188_) 
                                  >> 7U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___197_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___186_))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_))
                                             ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___184_) 
                                                >> 7U)
                                             : (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_ha001a495__0))
                                         : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_) 
                                            >> 7U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___061_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__rom_pia__DOT____0310851__26__Vfuncout;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y 
        = (0xfU & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___455_)
                       ? (IData)(vlSelf->__PVT__ja)
                       : (IData)(vlSelf->__PVT__jb))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y 
        = (0xfU & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___455_)
                       ? ((IData)(vlSelf->__PVT__ja) 
                          >> 4U) : ((IData)(vlSelf->__PVT__jb) 
                                    >> 4U))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                  << 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                                      ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                          & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)) 
                                         >> 2U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                                   >> 2U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                                      >> 2U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___056_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310831__40__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b 
        = ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_)) 
           | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                       ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)) 
                          >> 3U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                    >> 3U)) << 2U)) 
              | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                        >> 2U)) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                          ? ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                              ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                 >> 3U)
                                              : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y) 
                                                 >> 3U))
                                          : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                             >> 3U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___057_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310835__41__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                  << 3U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                                      ? ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_))
                                          ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)
                                          : (vlSelf->__PVT__in_g 
                                             >> 4U))
                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                                       ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_)
                                                       : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y))
                                                      : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___054_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310823__38__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                  << 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                                      ? ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_) 
                                             >> 1U)
                                          : (vlSelf->__PVT__in_g 
                                             >> 5U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                         >> 1U)) << 2U)) 
                             | ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_)) 
                                | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                          ? ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                              ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                 >> 1U)
                                              : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic3_y) 
                                                 >> 1U))
                                          : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                             >> 1U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___055_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310827__39__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                  >> 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                                      ? ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_) 
                                             >> 4U)
                                          : ((IData)(vlSelf->__VdfgExtracted_h3619c605__0) 
                                             >> 3U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                         >> 4U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                                       >> 3U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                       >> 4U)
                                                       : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                                      >> 4U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___058_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310839__42__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_) 
                  >> 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                                      ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_) 
                                             >> 5U)
                                          : ((IData)(vlSelf->__VdfgExtracted_h3619c605__0) 
                                             >> 2U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                         >> 5U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_) 
                                       >> 4U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                       >> 5U)
                                                       : 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                                       >> 1U))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                                      >> 5U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___059_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310843__43__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___210_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                               ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)) 
                                  >> 6U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                            >> 6U)) 
                             << 2U)) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___201_) 
                                         << 1U) | (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                        >> 6U)
                                                        : 
                                                       ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                                       >> 6U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___060_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310847__44__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___206_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___192_))
                               ? (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___190_)) 
                                  >> 7U) : ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___188_) 
                                            >> 7U)) 
                             << 2U)) | (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___197_) 
                                         << 1U) | (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___186_))
                                                       ? 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___184_) 
                                                        >> 7U)
                                                        : 
                                                       ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                                        >> 3U))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_) 
                                                       >> 7U))))));
    __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                                             ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                                             : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s))
                              ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b)
                              : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__s) 
                                            & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__b))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___061_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__widget_pia__DOT____0310851__45__Vfuncout;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__6(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__6\n"); );
    // Init
    SData/*15:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__b = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__s = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__a = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s = 0;
    CData/*6:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__Vfuncout = 0;
    VlWide<16>/*489:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b;
    VL_ZERO_W(490, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b);
    VlWide<3>/*69:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s;
    VL_ZERO_W(70, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s);
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__Vfuncout = 0;
    VlWide<7>/*209:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b;
    VL_ZERO_W(210, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b);
    VlWide<3>/*69:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s;
    VL_ZERO_W(70, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s);
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__Vfuncout = 0;
    VlWide<7>/*209:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b;
    VL_ZERO_W(210, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b);
    VlWide<3>/*69:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s;
    VL_ZERO_W(70, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s);
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_384;
    VlWide<3>/*95:0*/ __Vtemp_765;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_ 
        = ((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1066_) 
               >> 4U)) & ((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___197_) 
                            & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_)) 
                           | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___201_) 
                              & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                 >> 3U))) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___206_) 
                                              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_)) 
                                             | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___210_) 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                                                   >> 3U)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___210_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                               ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                      >> 6U)) | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                                 >> 6U))
                               : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                  >> 6U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___201_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                         ? (IData)(vlSelf->__VdfgTmp_hcad3408d__0)
                                         : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                            >> 6U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___060_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310847__548__Vfuncout;
    __Vtemp_1[0U] = (((IData)((((QData)((IData)((((0x45U 
                                                   == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                  << 0x1fU) 
                                                 | (((0x46U 
                                                      == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                     << 0x1eU) 
                                                    | (((0x42U 
                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                        << 0x1dU) 
                                                       | (((0x43U 
                                                            == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                           << 0x1cU) 
                                                          | (((0x44U 
                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                              << 0x1bU) 
                                                             | (((0x41U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1aU) 
                                                                | (((0x3fU 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x19U) 
                                                                   | (((0x40U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x18U) 
                                                                      | (((0x3dU 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x17U) 
                                                                         | (((0x3eU 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x16U) 
                                                                            | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                               | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0x38U 
                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                              << 0x1fU) 
                                                             | (((0x37U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1eU) 
                                                                | (((0x33U 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x1dU) 
                                                                   | (((0x34U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x1cU) 
                                                                      | (((0x31U 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x1bU) 
                                                                         | (((0x32U 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x1aU) 
                                                                            | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                               | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))))) 
                      << 6U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                 << 5U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                            << 4U) 
                                           | (((1U 
                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                               << 3U) 
                                              | (((0x39U 
                                                   == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                  << 2U) 
                                                 | (((0x3aU 
                                                      == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                     << 1U) 
                                                    | (0U 
                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((((0x45U 
                                                   == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                  << 0x1fU) 
                                                 | (((0x46U 
                                                      == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                     << 0x1eU) 
                                                    | (((0x42U 
                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                        << 0x1dU) 
                                                       | (((0x43U 
                                                            == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                           << 0x1cU) 
                                                          | (((0x44U 
                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                              << 0x1bU) 
                                                             | (((0x41U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1aU) 
                                                                | (((0x3fU 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x19U) 
                                                                   | (((0x40U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x18U) 
                                                                      | (((0x3dU 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x17U) 
                                                                         | (((0x3eU 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x16U) 
                                                                            | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                               | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0x38U 
                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                              << 0x1fU) 
                                                             | (((0x37U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1eU) 
                                                                | (((0x33U 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x1dU) 
                                                                   | (((0x34U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x1cU) 
                                                                      | (((0x31U 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x1bU) 
                                                                         | (((0x32U 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x1aU) 
                                                                            | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                               | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              (((0x45U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x46U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x42U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x43U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x44U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x41U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0x3fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x40U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x3dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((0x38U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1fU) 
                                                                | (((0x37U 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x1eU) 
                                                                   | (((0x33U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x1dU) 
                                                                      | (((0x34U 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x1cU) 
                                                                         | (((0x31U 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x1bU) 
                                                                            | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x1aU) 
                                                                               | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)))))))))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 6U));
    __Vtemp_1[2U] = ((IData)(((((QData)((IData)((((0x45U 
                                                   == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                  << 0x1fU) 
                                                 | (((0x46U 
                                                      == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                     << 0x1eU) 
                                                    | (((0x42U 
                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                        << 0x1dU) 
                                                       | (((0x43U 
                                                            == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                           << 0x1cU) 
                                                          | (((0x44U 
                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                              << 0x1bU) 
                                                             | (((0x41U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1aU) 
                                                                | (((0x3fU 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x19U) 
                                                                   | (((0x40U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x18U) 
                                                                      | (((0x3dU 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x17U) 
                                                                         | (((0x3eU 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x16U) 
                                                                            | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                               | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0x38U 
                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                              << 0x1fU) 
                                                             | (((0x37U 
                                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                 << 0x1eU) 
                                                                | (((0x33U 
                                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                    << 0x1dU) 
                                                                   | (((0x34U 
                                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                       << 0x1cU) 
                                                                      | (((0x31U 
                                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                          << 0x1bU) 
                                                                         | (((0x32U 
                                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                             << 0x1aU) 
                                                                            | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                               | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)))))))))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1aU);
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U] 
        = __Vtemp_1[0U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U] 
        = __Vtemp_1[1U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U] 
        = __Vtemp_1[2U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] = 0x49249248U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] = 0x92492492U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] = 0x24924924U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] = 0x49249249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] = 0x92492492U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
        = (0x24924900U | ((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                             ? 3U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                      ? 4U : 1U)) << 5U) 
                          | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_)
                               ? 3U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                        ? 4U : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1010_))) 
                             << 2U)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] = 0x9249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__Vfuncout 
        = (7U & (((((((((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))) 
                        | (0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                       | (0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                      | (0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                     | (0U == (0x10U ^ (0x10U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                    | (0U == (0x20U ^ (0x20U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                   | (0U == (0x40U ^ (0x40U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                  | (0U == (0x80U ^ (0x80U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))))
                  ? ((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U]
                      : ((0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                              << 0x1dU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                           >> 3U)) : 
                         ((0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                               << 0x1aU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                            >> 6U))
                           : ((0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                   << 0x17U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                                >> 9U))
                               : ((0U == (0x10U ^ (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                       << 0x14U) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                       >> 0xcU)) : 
                                  ((0U == (0x20U ^ 
                                           (0x20U & 
                                            __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                    ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                        << 0x11U) | 
                                       (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                        >> 0xfU)) : 
                                   ((0U == (0x40U ^ 
                                            (0x40U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                         << 0xeU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                         >> 0x12U))
                                     : ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                         << 0xbU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                         >> 0x15U)))))))))
                  : (((((((((0U == (0x100U ^ (0x100U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))) 
                            | (0U == (0x200U ^ (0x200U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                           | (0U == (0x400U ^ (0x400U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                          | (0U == (0x800U ^ (0x800U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                         | (0U == (0x1000U ^ (0x1000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                        | (0U == (0x2000U ^ (0x2000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                       | (0U == (0x4000U ^ (0x4000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                      | (0U == (0x8000U ^ (0x8000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))))
                      ? ((0U == (0x100U ^ (0x100U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                              << 8U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                        >> 0x18U)) : 
                         ((0U == (0x200U ^ (0x200U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                               << 5U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                         >> 0x1bU))
                           : ((0U == (0x400U ^ (0x400U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                   << 2U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[0U] 
                                             >> 0x1eU))
                               : ((0U == (0x800U ^ 
                                          (0x800U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                       << 0x1fU) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                       >> 1U)) : ((0U 
                                                   == 
                                                   (0x1000U 
                                                    ^ 
                                                    (0x1000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                    << 0x1cU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                      >> 4U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x2000U 
                                                     ^ 
                                                     (0x2000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                     << 0x19U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                       >> 7U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x4000U 
                                                      ^ 
                                                      (0x4000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                      << 0x16U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                      << 0x13U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                        >> 0xdU)))))))))
                      : (((((((((0U == (0x10000U ^ 
                                        (0x10000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))) 
                                | (0U == (0x20000U 
                                          ^ (0x20000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                               | (0U == (0x40000U ^ 
                                         (0x40000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                              | (0U == (0x80000U ^ 
                                        (0x80000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                             | (0U == (0x100000U ^ 
                                       (0x100000U & 
                                        __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                            | (0U == (0x200000U ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                           | (0U == (0x400000U ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                          | (0U == (0x800000U ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))))
                          ? ((0U == (0x10000U ^ (0x10000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                  << 0x10U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                               >> 0x10U))
                              : ((0U == (0x20000U ^ 
                                         (0x20000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                      << 0xdU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                  >> 0x13U))
                                  : ((0U == (0x40000U 
                                             ^ (0x40000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                          << 0xaU) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                            >> 0x16U))
                                      : ((0U == (0x80000U 
                                                 ^ 
                                                 (0x80000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                              << 7U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                >> 0x19U))
                                          : ((0U == 
                                              (0x100000U 
                                               ^ (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                  << 4U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                    >> 0x1cU))
                                              : ((0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                   << 1U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[1U] 
                                                     >> 0x1fU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x400000U 
                                                    ^ 
                                                    (0x400000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                    << 0x1eU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                    << 0x1bU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                      >> 5U)))))))))
                          : (((((((((0U == (0x1000000U 
                                            ^ (0x1000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))) 
                                    | (0U == (0x2000000U 
                                              ^ (0x2000000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                                   | (0U == (0x4000000U 
                                             ^ (0x4000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                                  | (0U == (0x8000000U 
                                            ^ (0x8000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                                 | (0U == (0x10000000U 
                                           ^ (0x10000000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                                | (0U == (0x20000000U 
                                          ^ (0x20000000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                               | (0U == (0x40000000U 
                                         ^ (0x40000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))) 
                              | (0U == (0x80000000U 
                                        ^ (0x80000000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U]))))
                              ? ((0U == (0x1000000U 
                                         ^ (0x1000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                      << 0x18U) | (
                                                   __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                   >> 8U))
                                  : ((0U == (0x2000000U 
                                             ^ (0x2000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                          << 0x15U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                            >> 0xbU))
                                      : ((0U == (0x4000000U 
                                                 ^ 
                                                 (0x4000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                              << 0x12U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                >> 0xeU))
                                          : ((0U == 
                                              (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                  << 0xfU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                    >> 0x11U))
                                              : ((0U 
                                                  == 
                                                  (0x10000000U 
                                                   ^ 
                                                   (0x10000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                   << 0xcU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                    << 9U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                      >> 0x17U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x40000000U 
                                                     ^ 
                                                     (0x40000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                     << 6U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                       >> 0x1aU))
                                                    : 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                     << 3U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[2U] 
                                                       >> 0x1dU)))))))))
                              : (((((((((0U == (1U 
                                                ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))) 
                                        | (0U == (2U 
                                                  ^ 
                                                  (2U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                       | (0U == (4U 
                                                 ^ 
                                                 (4U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                      | (0U == (8U 
                                                ^ (8U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                     | (0U == (0x10U 
                                               ^ (0x10U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                    | (0U == (0x20U 
                                              ^ (0x20U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                   | (0U == (0x40U 
                                             ^ (0x40U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                  | (0U == (0x80U ^ 
                                            (0x80U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))))
                                  ? ((0U == (1U ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U]
                                      : ((0U == (2U 
                                                 ^ 
                                                 (2U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                              << 0x1dU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                >> 3U))
                                          : ((0U == 
                                              (4U ^ 
                                               (4U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                  << 0x1aU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                    >> 6U))
                                              : ((0U 
                                                  == 
                                                  (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                   << 0x17U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                     >> 9U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x10U 
                                                    ^ 
                                                    (0x10U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                    << 0x14U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                      >> 0xcU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x20U 
                                                     ^ 
                                                     (0x20U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                     << 0x11U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x40U 
                                                      ^ 
                                                      (0x40U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                      << 0xeU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                        >> 0x12U))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                      << 0xbU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                        >> 0x15U)))))))))
                                  : (((((((((0U == 
                                             (0x100U 
                                              ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))) 
                                            | (0U == 
                                               (0x200U 
                                                ^ (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                           | (0U == 
                                              (0x400U 
                                               ^ (0x400U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                          | (0U == 
                                             (0x800U 
                                              ^ (0x800U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                         | (0U == (0x1000U 
                                                   ^ 
                                                   (0x1000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                        | (0U == (0x2000U 
                                                  ^ 
                                                  (0x2000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                       | (0U == (0x4000U 
                                                 ^ 
                                                 (0x4000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                      | (0U == (0x8000U 
                                                ^ (0x8000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))))
                                      ? ((0U == (0x100U 
                                                 ^ 
                                                 (0x100U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                              << 8U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                >> 0x18U))
                                          : ((0U == 
                                              (0x200U 
                                               ^ (0x200U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                  << 5U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                    >> 0x1bU))
                                              : ((0U 
                                                  == 
                                                  (0x400U 
                                                   ^ 
                                                   (0x400U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                   << 2U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[3U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x800U 
                                                    ^ 
                                                    (0x800U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                    << 0x1fU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                      >> 1U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1000U 
                                                     ^ 
                                                     (0x1000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                     << 0x1cU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                       >> 4U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x2000U 
                                                      ^ 
                                                      (0x2000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                      << 0x19U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                        >> 7U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x4000U 
                                                       ^ 
                                                       (0x4000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                       << 0x16U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                         >> 0xaU))
                                                      : 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                       << 0x13U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                         >> 0xdU)))))))))
                                      : (((((((((0U 
                                                 == 
                                                 (0x10000U 
                                                  ^ 
                                                  (0x10000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))) 
                                                | (0U 
                                                   == 
                                                   (0x20000U 
                                                    ^ 
                                                    (0x20000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000U 
                                                   ^ 
                                                   (0x40000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000U 
                                                  ^ 
                                                  (0x80000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x100000U 
                                                 ^ 
                                                 (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                            | (0U == 
                                               (0x200000U 
                                                ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                           | (0U == 
                                              (0x400000U 
                                               ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                          | (0U == 
                                             (0x800000U 
                                              ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))))
                                          ? ((0U == 
                                              (0x10000U 
                                               ^ (0x10000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                  << 0x10U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                    >> 0x10U))
                                              : ((0U 
                                                  == 
                                                  (0x20000U 
                                                   ^ 
                                                   (0x20000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                   << 0xdU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                     >> 0x13U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x40000U 
                                                    ^ 
                                                    (0x40000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                    << 0xaU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                      >> 0x16U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                     << 7U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                       >> 0x19U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x100000U 
                                                      ^ 
                                                      (0x100000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                      << 4U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                        >> 0x1cU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x200000U 
                                                       ^ 
                                                       (0x200000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                       << 1U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[4U] 
                                                         >> 0x1fU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x400000U 
                                                        ^ 
                                                        (0x400000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                        << 0x1eU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                        << 0x1bU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                          >> 5U)))))))))
                                          : (((((((
                                                   ((0U 
                                                     == 
                                                     (0x1000000U 
                                                      ^ 
                                                      (0x1000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))) 
                                                    | (0U 
                                                       == 
                                                       (0x2000000U 
                                                        ^ 
                                                        (0x2000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                                   | (0U 
                                                      == 
                                                      (0x4000000U 
                                                       ^ 
                                                       (0x4000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x10000000U 
                                                     ^ 
                                                     (0x10000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                                | (0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000000U 
                                                   ^ 
                                                   (0x40000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000000U 
                                                  ^ 
                                                  (0x80000000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U]))))
                                              ? ((0U 
                                                  == 
                                                  (0x1000000U 
                                                   ^ 
                                                   (0x1000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                   << 0x18U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                     >> 8U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x2000000U 
                                                    ^ 
                                                    (0x2000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                    << 0x15U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x4000000U 
                                                     ^ 
                                                     (0x4000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                     << 0x12U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                      << 0xfU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                        >> 0x11U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10000000U 
                                                       ^ 
                                                       (0x10000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                       << 0xcU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                         >> 0x14U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20000000U 
                                                        ^ 
                                                        (0x20000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                        << 9U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                          >> 0x17U))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x40000000U 
                                                         ^ 
                                                         (0x40000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[1U])))
                                                        ? 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                         << 6U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                           >> 0x1aU))
                                                        : 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                         << 3U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[5U] 
                                                           >> 0x1dU)))))))))
                                              : ((0U 
                                                  == 
                                                  (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U])))
                                                  ? 
                                                 __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (2U 
                                                    ^ 
                                                    (2U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                    << 0x1dU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                      >> 3U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (4U 
                                                     ^ 
                                                     (4U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                     << 0x1aU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                       >> 6U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (8U 
                                                      ^ 
                                                      (8U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                      << 0x17U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                        >> 9U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10U 
                                                       ^ 
                                                       (0x10U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                       << 0x14U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                         >> 0xcU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20U 
                                                        ^ 
                                                        (0x20U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__s[2U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                        << 0x11U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__b[6U] 
                                                          >> 0xfU))
                                                       : 1U)))))))))))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0315161__535__Vfuncout;
    __Vtemp_384[0U] = (((IData)((((QData)((IData)((
                                                   ((0x45U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 0x1fU) 
                                                   | (((0x46U 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 0x1eU) 
                                                      | (((0x42U 
                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                          << 0x1dU) 
                                                         | (((0x43U 
                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                             << 0x1cU) 
                                                            | (((0x44U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1bU) 
                                                               | (((0x41U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1aU) 
                                                                  | (((0x3fU 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x19U) 
                                                                     | (((0x40U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x18U) 
                                                                        | (((0x3dU 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x17U) 
                                                                           | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x16U) 
                                                                              | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0x38U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x37U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x33U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x34U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x31U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))))) 
                        << 6U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                   << 5U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                              << 4U) 
                                             | (((1U 
                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                 << 3U) 
                                                | (((0x39U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 2U) 
                                                   | (((0x3aU 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))));
    __Vtemp_384[1U] = (((IData)((((QData)((IData)((
                                                   ((0x45U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 0x1fU) 
                                                   | (((0x46U 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 0x1eU) 
                                                      | (((0x42U 
                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                          << 0x1dU) 
                                                         | (((0x43U 
                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                             << 0x1cU) 
                                                            | (((0x44U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1bU) 
                                                               | (((0x41U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1aU) 
                                                                  | (((0x3fU 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x19U) 
                                                                     | (((0x40U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x18U) 
                                                                        | (((0x3dU 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x17U) 
                                                                           | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x16U) 
                                                                              | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0x38U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x37U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x33U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x34U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x31U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))))) 
                        >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                                (((0x45U 
                                                                   == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                  << 0x1fU) 
                                                                 | (((0x46U 
                                                                      == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                     << 0x1eU) 
                                                                    | (((0x42U 
                                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                        << 0x1dU) 
                                                                       | (((0x43U 
                                                                            == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                           << 0x1cU) 
                                                                          | (((0x44U 
                                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                              << 0x1bU) 
                                                                             | (((0x41U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x1aU) 
                                                                                | (((0x3fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x40U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x3dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((0x38U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1fU) 
                                                                  | (((0x37U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1eU) 
                                                                     | (((0x33U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1dU) 
                                                                        | (((0x34U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1cU) 
                                                                           | (((0x31U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1bU) 
                                                                              | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x1aU) 
                                                                                | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)))))))))))))))))))))))))))))))))))) 
                                              >> 0x20U)) 
                                     << 6U));
    __Vtemp_384[2U] = ((IData)(((((QData)((IData)((
                                                   ((0x45U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 0x1fU) 
                                                   | (((0x46U 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 0x1eU) 
                                                      | (((0x42U 
                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                          << 0x1dU) 
                                                         | (((0x43U 
                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                             << 0x1cU) 
                                                            | (((0x44U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1bU) 
                                                               | (((0x41U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1aU) 
                                                                  | (((0x3fU 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x19U) 
                                                                     | (((0x40U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x18U) 
                                                                        | (((0x3dU 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x17U) 
                                                                           | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x16U) 
                                                                              | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0x38U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x37U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x33U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x34U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x31U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)))))))))))))))))))))))))))))))))))) 
                                >> 0x20U)) >> 0x1aU);
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U] 
        = __Vtemp_384[0U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U] 
        = __Vtemp_384[1U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U] 
        = __Vtemp_384[2U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
        = (0x49070128U | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0852_) 
                           << 0x15U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0793_) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                                           ? 1U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                                    ? 1U
                                                    : 6U)) 
                                         << 9U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] = 0x994964a2U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] = 0x24924924U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] = 0x49249249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] = 0x92499492U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] = 0x24924924U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] = 0x9249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__Vfuncout 
        = (7U & (((((((((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))) 
                        | (0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                       | (0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                      | (0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                     | (0U == (0x10U ^ (0x10U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                    | (0U == (0x20U ^ (0x20U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                   | (0U == (0x40U ^ (0x40U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                  | (0U == (0x80U ^ (0x80U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))))
                  ? ((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U]
                      : ((0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                              << 0x1dU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                           >> 3U)) : 
                         ((0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                               << 0x1aU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                            >> 6U))
                           : ((0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                   << 0x17U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                                >> 9U))
                               : ((0U == (0x10U ^ (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                       << 0x14U) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                       >> 0xcU)) : 
                                  ((0U == (0x20U ^ 
                                           (0x20U & 
                                            __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                    ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                        << 0x11U) | 
                                       (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                        >> 0xfU)) : 
                                   ((0U == (0x40U ^ 
                                            (0x40U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                         << 0xeU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                         >> 0x12U))
                                     : ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                         << 0xbU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                         >> 0x15U)))))))))
                  : (((((((((0U == (0x100U ^ (0x100U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))) 
                            | (0U == (0x200U ^ (0x200U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                           | (0U == (0x400U ^ (0x400U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                          | (0U == (0x800U ^ (0x800U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                         | (0U == (0x1000U ^ (0x1000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                        | (0U == (0x2000U ^ (0x2000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                       | (0U == (0x4000U ^ (0x4000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                      | (0U == (0x8000U ^ (0x8000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))))
                      ? ((0U == (0x100U ^ (0x100U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                              << 8U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                        >> 0x18U)) : 
                         ((0U == (0x200U ^ (0x200U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                               << 5U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                         >> 0x1bU))
                           : ((0U == (0x400U ^ (0x400U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                   << 2U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[0U] 
                                             >> 0x1eU))
                               : ((0U == (0x800U ^ 
                                          (0x800U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                       << 0x1fU) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                       >> 1U)) : ((0U 
                                                   == 
                                                   (0x1000U 
                                                    ^ 
                                                    (0x1000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                    << 0x1cU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                      >> 4U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x2000U 
                                                     ^ 
                                                     (0x2000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                     << 0x19U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                       >> 7U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x4000U 
                                                      ^ 
                                                      (0x4000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                      << 0x16U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                      << 0x13U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                        >> 0xdU)))))))))
                      : (((((((((0U == (0x10000U ^ 
                                        (0x10000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))) 
                                | (0U == (0x20000U 
                                          ^ (0x20000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                               | (0U == (0x40000U ^ 
                                         (0x40000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                              | (0U == (0x80000U ^ 
                                        (0x80000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                             | (0U == (0x100000U ^ 
                                       (0x100000U & 
                                        __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                            | (0U == (0x200000U ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                           | (0U == (0x400000U ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                          | (0U == (0x800000U ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))))
                          ? ((0U == (0x10000U ^ (0x10000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                  << 0x10U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                               >> 0x10U))
                              : ((0U == (0x20000U ^ 
                                         (0x20000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                      << 0xdU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                  >> 0x13U))
                                  : ((0U == (0x40000U 
                                             ^ (0x40000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                          << 0xaU) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                            >> 0x16U))
                                      : ((0U == (0x80000U 
                                                 ^ 
                                                 (0x80000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                              << 7U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                >> 0x19U))
                                          : ((0U == 
                                              (0x100000U 
                                               ^ (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                  << 4U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                    >> 0x1cU))
                                              : ((0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                   << 1U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[1U] 
                                                     >> 0x1fU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x400000U 
                                                    ^ 
                                                    (0x400000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                    << 0x1eU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                    << 0x1bU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                      >> 5U)))))))))
                          : (((((((((0U == (0x1000000U 
                                            ^ (0x1000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))) 
                                    | (0U == (0x2000000U 
                                              ^ (0x2000000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                                   | (0U == (0x4000000U 
                                             ^ (0x4000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                                  | (0U == (0x8000000U 
                                            ^ (0x8000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                                 | (0U == (0x10000000U 
                                           ^ (0x10000000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                                | (0U == (0x20000000U 
                                          ^ (0x20000000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                               | (0U == (0x40000000U 
                                         ^ (0x40000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))) 
                              | (0U == (0x80000000U 
                                        ^ (0x80000000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U]))))
                              ? ((0U == (0x1000000U 
                                         ^ (0x1000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                      << 0x18U) | (
                                                   __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                   >> 8U))
                                  : ((0U == (0x2000000U 
                                             ^ (0x2000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                          << 0x15U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                            >> 0xbU))
                                      : ((0U == (0x4000000U 
                                                 ^ 
                                                 (0x4000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                              << 0x12U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                >> 0xeU))
                                          : ((0U == 
                                              (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                  << 0xfU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                    >> 0x11U))
                                              : ((0U 
                                                  == 
                                                  (0x10000000U 
                                                   ^ 
                                                   (0x10000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                   << 0xcU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                    << 9U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                      >> 0x17U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x40000000U 
                                                     ^ 
                                                     (0x40000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                     << 6U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                       >> 0x1aU))
                                                    : 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                     << 3U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[2U] 
                                                       >> 0x1dU)))))))))
                              : (((((((((0U == (1U 
                                                ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))) 
                                        | (0U == (2U 
                                                  ^ 
                                                  (2U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                       | (0U == (4U 
                                                 ^ 
                                                 (4U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                      | (0U == (8U 
                                                ^ (8U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                     | (0U == (0x10U 
                                               ^ (0x10U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                    | (0U == (0x20U 
                                              ^ (0x20U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                   | (0U == (0x40U 
                                             ^ (0x40U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                  | (0U == (0x80U ^ 
                                            (0x80U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))))
                                  ? ((0U == (1U ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U]
                                      : ((0U == (2U 
                                                 ^ 
                                                 (2U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                              << 0x1dU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                >> 3U))
                                          : ((0U == 
                                              (4U ^ 
                                               (4U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                  << 0x1aU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                    >> 6U))
                                              : ((0U 
                                                  == 
                                                  (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                   << 0x17U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                     >> 9U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x10U 
                                                    ^ 
                                                    (0x10U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                    << 0x14U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                      >> 0xcU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x20U 
                                                     ^ 
                                                     (0x20U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                     << 0x11U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x40U 
                                                      ^ 
                                                      (0x40U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                      << 0xeU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                        >> 0x12U))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                      << 0xbU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                        >> 0x15U)))))))))
                                  : (((((((((0U == 
                                             (0x100U 
                                              ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))) 
                                            | (0U == 
                                               (0x200U 
                                                ^ (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                           | (0U == 
                                              (0x400U 
                                               ^ (0x400U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                          | (0U == 
                                             (0x800U 
                                              ^ (0x800U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                         | (0U == (0x1000U 
                                                   ^ 
                                                   (0x1000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                        | (0U == (0x2000U 
                                                  ^ 
                                                  (0x2000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                       | (0U == (0x4000U 
                                                 ^ 
                                                 (0x4000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                      | (0U == (0x8000U 
                                                ^ (0x8000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))))
                                      ? ((0U == (0x100U 
                                                 ^ 
                                                 (0x100U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                              << 8U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                >> 0x18U))
                                          : ((0U == 
                                              (0x200U 
                                               ^ (0x200U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                  << 5U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                    >> 0x1bU))
                                              : ((0U 
                                                  == 
                                                  (0x400U 
                                                   ^ 
                                                   (0x400U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                   << 2U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[3U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x800U 
                                                    ^ 
                                                    (0x800U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                    << 0x1fU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                      >> 1U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1000U 
                                                     ^ 
                                                     (0x1000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                     << 0x1cU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                       >> 4U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x2000U 
                                                      ^ 
                                                      (0x2000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                      << 0x19U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                        >> 7U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x4000U 
                                                       ^ 
                                                       (0x4000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                       << 0x16U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                         >> 0xaU))
                                                      : 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                       << 0x13U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                         >> 0xdU)))))))))
                                      : (((((((((0U 
                                                 == 
                                                 (0x10000U 
                                                  ^ 
                                                  (0x10000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))) 
                                                | (0U 
                                                   == 
                                                   (0x20000U 
                                                    ^ 
                                                    (0x20000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000U 
                                                   ^ 
                                                   (0x40000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000U 
                                                  ^ 
                                                  (0x80000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x100000U 
                                                 ^ 
                                                 (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                            | (0U == 
                                               (0x200000U 
                                                ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                           | (0U == 
                                              (0x400000U 
                                               ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                          | (0U == 
                                             (0x800000U 
                                              ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))))
                                          ? ((0U == 
                                              (0x10000U 
                                               ^ (0x10000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                  << 0x10U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                    >> 0x10U))
                                              : ((0U 
                                                  == 
                                                  (0x20000U 
                                                   ^ 
                                                   (0x20000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                   << 0xdU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                     >> 0x13U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x40000U 
                                                    ^ 
                                                    (0x40000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                    << 0xaU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                      >> 0x16U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                     << 7U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                       >> 0x19U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x100000U 
                                                      ^ 
                                                      (0x100000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                      << 4U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                        >> 0x1cU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x200000U 
                                                       ^ 
                                                       (0x200000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                       << 1U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[4U] 
                                                         >> 0x1fU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x400000U 
                                                        ^ 
                                                        (0x400000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                        << 0x1eU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                        << 0x1bU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                          >> 5U)))))))))
                                          : (((((((
                                                   ((0U 
                                                     == 
                                                     (0x1000000U 
                                                      ^ 
                                                      (0x1000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))) 
                                                    | (0U 
                                                       == 
                                                       (0x2000000U 
                                                        ^ 
                                                        (0x2000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                                   | (0U 
                                                      == 
                                                      (0x4000000U 
                                                       ^ 
                                                       (0x4000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x10000000U 
                                                     ^ 
                                                     (0x10000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                                | (0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000000U 
                                                   ^ 
                                                   (0x40000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000000U 
                                                  ^ 
                                                  (0x80000000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U]))))
                                              ? ((0U 
                                                  == 
                                                  (0x1000000U 
                                                   ^ 
                                                   (0x1000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                   << 0x18U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                     >> 8U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x2000000U 
                                                    ^ 
                                                    (0x2000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                    << 0x15U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x4000000U 
                                                     ^ 
                                                     (0x4000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                     << 0x12U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                      << 0xfU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                        >> 0x11U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10000000U 
                                                       ^ 
                                                       (0x10000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                       << 0xcU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                         >> 0x14U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20000000U 
                                                        ^ 
                                                        (0x20000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                        << 9U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                          >> 0x17U))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x40000000U 
                                                         ^ 
                                                         (0x40000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[1U])))
                                                        ? 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                         << 6U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                           >> 0x1aU))
                                                        : 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                         << 3U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[5U] 
                                                           >> 0x1dU)))))))))
                                              : ((0U 
                                                  == 
                                                  (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U])))
                                                  ? 
                                                 __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (2U 
                                                    ^ 
                                                    (2U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                    << 0x1dU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                      >> 3U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (4U 
                                                     ^ 
                                                     (4U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                     << 0x1aU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                       >> 6U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (8U 
                                                      ^ 
                                                      (8U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                      << 0x17U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                        >> 9U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10U 
                                                       ^ 
                                                       (0x10U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                       << 0x14U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                         >> 0xcU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20U 
                                                        ^ 
                                                        (0x20U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__s[2U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                        << 0x11U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__b[6U] 
                                                          >> 0xfU))
                                                       : 1U)))))))))))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314555__526__Vfuncout;
    __Vtemp_765[0U] = (((IData)((((QData)((IData)((
                                                   ((0x45U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 0x1fU) 
                                                   | (((0x46U 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 0x1eU) 
                                                      | (((0x42U 
                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                          << 0x1dU) 
                                                         | (((0x43U 
                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                             << 0x1cU) 
                                                            | (((0x44U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1bU) 
                                                               | (((0x41U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1aU) 
                                                                  | (((0x3fU 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x19U) 
                                                                     | (((0x40U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x18U) 
                                                                        | (((0x3dU 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x17U) 
                                                                           | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x16U) 
                                                                              | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0x38U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x37U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x33U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x34U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x31U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))))) 
                        << 6U) | (((7U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                   << 5U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                              << 4U) 
                                             | (((1U 
                                                  == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                 << 3U) 
                                                | (((0x39U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 2U) 
                                                   | (((0x3aU 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))));
    __Vtemp_765[1U] = (((IData)((((QData)((IData)((
                                                   ((0x45U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 0x1fU) 
                                                   | (((0x46U 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 0x1eU) 
                                                      | (((0x42U 
                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                          << 0x1dU) 
                                                         | (((0x43U 
                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                             << 0x1cU) 
                                                            | (((0x44U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1bU) 
                                                               | (((0x41U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1aU) 
                                                                  | (((0x3fU 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x19U) 
                                                                     | (((0x40U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x18U) 
                                                                        | (((0x3dU 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x17U) 
                                                                           | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x16U) 
                                                                              | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0x38U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x37U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x33U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x34U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x31U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))))) 
                        >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                                (((0x45U 
                                                                   == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                  << 0x1fU) 
                                                                 | (((0x46U 
                                                                      == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                     << 0x1eU) 
                                                                    | (((0x42U 
                                                                         == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                        << 0x1dU) 
                                                                       | (((0x43U 
                                                                            == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                           << 0x1cU) 
                                                                          | (((0x44U 
                                                                               == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                              << 0x1bU) 
                                                                             | (((0x41U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x1aU) 
                                                                                | (((0x3fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x40U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x3dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((0x38U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1fU) 
                                                                  | (((0x37U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1eU) 
                                                                     | (((0x33U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1dU) 
                                                                        | (((0x34U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1cU) 
                                                                           | (((0x31U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1bU) 
                                                                              | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x1aU) 
                                                                                | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)))))))))))))))))))))))))))))))))))) 
                                              >> 0x20U)) 
                                     << 6U));
    __Vtemp_765[2U] = ((IData)(((((QData)((IData)((
                                                   ((0x45U 
                                                     == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                    << 0x1fU) 
                                                   | (((0x46U 
                                                        == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                       << 0x1eU) 
                                                      | (((0x42U 
                                                           == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                          << 0x1dU) 
                                                         | (((0x43U 
                                                              == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                             << 0x1cU) 
                                                            | (((0x44U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1bU) 
                                                               | (((0x41U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1aU) 
                                                                  | (((0x3fU 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x19U) 
                                                                     | (((0x40U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x18U) 
                                                                        | (((0x3dU 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x17U) 
                                                                           | (((0x3eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x16U) 
                                                                              | (((0x3bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x3cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x28U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x27U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0x24U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0x26U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0x25U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x23U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x22U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x21U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x20U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x2fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x30U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x2dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x2eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((0x2bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((0x2cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((0x2aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((0x29U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((0x35U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (0x36U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_))))))))))))))))))))))))))))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0x38U 
                                                                 == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                << 0x1fU) 
                                                               | (((0x37U 
                                                                    == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                   << 0x1eU) 
                                                                  | (((0x33U 
                                                                       == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                      << 0x1dU) 
                                                                     | (((0x34U 
                                                                          == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                         << 0x1cU) 
                                                                        | (((0x31U 
                                                                             == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                            << 0x1bU) 
                                                                           | (((0x32U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                               << 0x1aU) 
                                                                              | (((0xaU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x19U) 
                                                                                | (((0x17U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x18U) 
                                                                                | (((0x16U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x17U) 
                                                                                | (((0x15U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x16U) 
                                                                                | (((0x14U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x15U) 
                                                                                | (((0x13U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x14U) 
                                                                                | (((0x12U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x13U) 
                                                                                | (((0x11U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x12U) 
                                                                                | (((0x10U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x11U) 
                                                                                | (((0xfU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0x10U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xfU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xeU) 
                                                                                | (((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xdU) 
                                                                                | (((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xcU) 
                                                                                | (((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xbU) 
                                                                                | (((0x1cU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 0xaU) 
                                                                                | (((0x1bU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 9U) 
                                                                                | (((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 8U) 
                                                                                | (((0x19U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 7U) 
                                                                                | (((0x18U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 6U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 5U) 
                                                                                | (((9U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 4U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 3U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)) 
                                                                                << 1U) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1075_)))))))))))))))))))))))))))))))))))) 
                                >> 0x20U)) >> 0x1aU);
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U] 
        = __Vtemp_765[0U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U] 
        = __Vtemp_765[1U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U] 
        = __Vtemp_765[2U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
        = (IData)((0x800000000ULL | (((QData)((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0792_)) 
                                      << 0x1cU) | (QData)((IData)(
                                                                  (0x5cbaU 
                                                                   | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                                                                        ? 0x20U
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                                                         ? 0x20U
                                                                         : 2U)) 
                                                                      << 0x15U)))))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
        = (0x80000000U | ((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0884_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0851_) 
                                          << 0x11U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0825_) 
                                            << 0xaU))) 
                          | (IData)(((0x800000000ULL 
                                      | (((QData)((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0792_)) 
                                          << 0x1cU) 
                                         | (QData)((IData)(
                                                           (0x5cbaU 
                                                            | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                                                                 ? 0x20U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                                                  ? 0x20U
                                                                  : 2U)) 
                                                               << 0x15U)))))) 
                                     >> 0x20U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
        = (0xd0102200U | ((0x3ffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0884_) 
                                     >> 8U)) | ((0x3ffU 
                                                 & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0851_) 
                                                    >> 0xfU)) 
                                                | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0825_) 
                                                   >> 0x16U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] = 0xcd9d7660U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] = 0x4078e767U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] = 0xa5099222U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
        = (0xecb962U | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0976_) 
                        << 0x19U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
        = (0x876eddbbU | (0x3ffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0976_) 
                                    >> 7U)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] = 0x2a02d40bU;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] = 0x82d5cad6U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] = 0xd12102bdU;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
        = (0x12264a8U | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_)
                           ? 0x28U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                       ? 0x28U : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1009_))) 
                         << 0x1aU));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
        = (0x2ec0ba00U | ((0x3feU & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                                       ? 0x3aU : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                                   ? 0x28U
                                                   : 0x27U)) 
                                     << 1U)) | (0x3ffU 
                                                & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_)
                                                     ? 0x28U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                                      ? 0x28U
                                                      : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1009_))) 
                                                   >> 6U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] = 0x12fc43d0U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] = 0x5330a185U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xfU] = 0xe4U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__Vfuncout 
        = (0x7fU & (((((((((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))) 
                           | (0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                          | (0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                         | (0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                        | (0U == (0x10U ^ (0x10U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                       | (0U == (0x20U ^ (0x20U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                      | (0U == (0x40U ^ (0x40U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                     | (0U == (0x80U ^ (0x80U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))))
                     ? ((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                         ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U]
                         : ((0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                 << 0x19U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                              >> 7U))
                             : ((0U == (4U ^ (4U & 
                                              __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                 ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                     << 0x12U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                                  >> 0xeU))
                                 : ((0U == (8U ^ (8U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                         << 0xbU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                         >> 0x15U))
                                     : ((0U == (0x10U 
                                                ^ (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                         ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                             << 4U) 
                                            | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0U] 
                                               >> 0x1cU))
                                         : ((0U == 
                                             (0x20U 
                                              ^ (0x20U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                                 << 0x1dU) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                                   >> 3U))
                                             : ((0U 
                                                 == 
                                                 (0x40U 
                                                  ^ 
                                                  (0x40U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                                  << 0x16U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                                    >> 0xaU))
                                                 : 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                                  << 0xfU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                                    >> 0x11U)))))))))
                     : (((((((((0U == (0x100U ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))) 
                               | (0U == (0x200U ^ (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                              | (0U == (0x400U ^ (0x400U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                             | (0U == (0x800U ^ (0x800U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                            | (0U == (0x1000U ^ (0x1000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                           | (0U == (0x2000U ^ (0x2000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                          | (0U == (0x4000U ^ (0x4000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                         | (0U == (0x8000U ^ (0x8000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))))
                         ? ((0U == (0x100U ^ (0x100U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                 << 8U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                           >> 0x18U))
                             : ((0U == (0x200U ^ (0x200U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                 ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                     << 1U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[1U] 
                                               >> 0x1fU))
                                 : ((0U == (0x400U 
                                            ^ (0x400U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                         << 0x1aU) 
                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                           >> 6U)) : 
                                    ((0U == (0x800U 
                                             ^ (0x800U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                          << 0x13U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                            >> 0xdU))
                                      : ((0U == (0x1000U 
                                                 ^ 
                                                 (0x1000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                              << 0xcU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                                >> 0x14U))
                                          : ((0U == 
                                              (0x2000U 
                                               ^ (0x2000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                  << 5U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[2U] 
                                                    >> 0x1bU))
                                              : ((0U 
                                                  == 
                                                  (0x4000U 
                                                   ^ 
                                                   (0x4000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                   << 0x1eU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                     >> 2U))
                                                  : 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                   << 0x17U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                     >> 9U)))))))))
                         : (((((((((0U == (0x10000U 
                                           ^ (0x10000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))) 
                                   | (0U == (0x20000U 
                                             ^ (0x20000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                  | (0U == (0x40000U 
                                            ^ (0x40000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                 | (0U == (0x80000U 
                                           ^ (0x80000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                | (0U == (0x100000U 
                                          ^ (0x100000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                               | (0U == (0x200000U 
                                         ^ (0x200000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                              | (0U == (0x400000U ^ 
                                        (0x400000U 
                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                             | (0U == (0x800000U ^ 
                                       (0x800000U & 
                                        __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))))
                             ? ((0U == (0x10000U ^ 
                                        (0x10000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                 ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                     << 0x10U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                  >> 0x10U))
                                 : ((0U == (0x20000U 
                                            ^ (0x20000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                         << 9U) | (
                                                   __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                                   >> 0x17U))
                                     : ((0U == (0x40000U 
                                                ^ (0x40000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                         ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                             << 2U) 
                                            | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[3U] 
                                               >> 0x1eU))
                                         : ((0U == 
                                             (0x80000U 
                                              ^ (0x80000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                 << 0x1bU) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                   >> 5U))
                                             : ((0U 
                                                 == 
                                                 (0x100000U 
                                                  ^ 
                                                  (0x100000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                  << 0x14U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                    >> 0xcU))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                   << 0xdU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                     >> 0x13U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x400000U 
                                                    ^ 
                                                    (0x400000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                                    << 6U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[4U] 
                                                      >> 0x1aU))
                                                   : 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                                    << 0x1fU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                                      >> 1U)))))))))
                             : (((((((((0U == (0x1000000U 
                                               ^ (0x1000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))) 
                                       | (0U == (0x2000000U 
                                                 ^ 
                                                 (0x2000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                      | (0U == (0x4000000U 
                                                ^ (0x4000000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                     | (0U == (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                    | (0U == (0x10000000U 
                                              ^ (0x10000000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                   | (0U == (0x20000000U 
                                             ^ (0x20000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                  | (0U == (0x40000000U 
                                            ^ (0x40000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))) 
                                 | (0U == (0x80000000U 
                                           ^ (0x80000000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U]))))
                                 ? ((0U == (0x1000000U 
                                            ^ (0x1000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                         << 0x18U) 
                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                           >> 8U)) : 
                                    ((0U == (0x2000000U 
                                             ^ (0x2000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                          << 0x11U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                            >> 0xfU))
                                      : ((0U == (0x4000000U 
                                                 ^ 
                                                 (0x4000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                              << 0xaU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                                >> 0x16U))
                                          : ((0U == 
                                              (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                  << 3U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[5U] 
                                                    >> 0x1dU))
                                              : ((0U 
                                                  == 
                                                  (0x10000000U 
                                                   ^ 
                                                   (0x10000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                   << 0x1cU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                     >> 4U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                    << 0x15U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x40000000U 
                                                     ^ 
                                                     (0x40000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                     << 0xeU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                     << 7U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[6U] 
                                                       >> 0x19U)))))))))
                                 : (((((((((0U == (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))) 
                                           | (0U == 
                                              (2U ^ 
                                               (2U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                          | (0U == 
                                             (4U ^ 
                                              (4U & 
                                               __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                         | (0U == (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                        | (0U == (0x10U 
                                                  ^ 
                                                  (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                       | (0U == (0x20U 
                                                 ^ 
                                                 (0x20U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                      | (0U == (0x40U 
                                                ^ (0x40U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                     | (0U == (0x80U 
                                               ^ (0x80U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))))
                                     ? ((0U == (1U 
                                                ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                         ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U]
                                         : ((0U == 
                                             (2U ^ 
                                              (2U & 
                                               __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                 << 0x19U) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                   >> 7U))
                                             : ((0U 
                                                 == 
                                                 (4U 
                                                  ^ 
                                                  (4U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                  << 0x12U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                    >> 0xeU))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                   << 0xbU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                     >> 0x15U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x10U 
                                                    ^ 
                                                    (0x10U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                    << 4U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[7U] 
                                                      >> 0x1cU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x20U 
                                                     ^ 
                                                     (0x20U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                     << 0x1dU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                       >> 3U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x40U 
                                                      ^ 
                                                      (0x40U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                      << 0x16U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                      << 0xfU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                        >> 0x11U)))))))))
                                     : (((((((((0U 
                                                == 
                                                (0x100U 
                                                 ^ 
                                                 (0x100U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))) 
                                               | (0U 
                                                  == 
                                                  (0x200U 
                                                   ^ 
                                                   (0x200U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x400U 
                                                  ^ 
                                                  (0x400U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x800U 
                                                 ^ 
                                                 (0x800U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                            | (0U == 
                                               (0x1000U 
                                                ^ (0x1000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                           | (0U == 
                                              (0x2000U 
                                               ^ (0x2000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                          | (0U == 
                                             (0x4000U 
                                              ^ (0x4000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                         | (0U == (0x8000U 
                                                   ^ 
                                                   (0x8000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))))
                                         ? ((0U == 
                                             (0x100U 
                                              ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                 << 8U) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                   >> 0x18U))
                                             : ((0U 
                                                 == 
                                                 (0x200U 
                                                  ^ 
                                                  (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                  << 1U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[8U] 
                                                    >> 0x1fU))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x400U 
                                                   ^ 
                                                   (0x400U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                   << 0x1aU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                     >> 6U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x800U 
                                                    ^ 
                                                    (0x800U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                    << 0x13U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                      >> 0xdU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1000U 
                                                     ^ 
                                                     (0x1000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                     << 0xcU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                       >> 0x14U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x2000U 
                                                      ^ 
                                                      (0x2000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                      << 5U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[9U] 
                                                        >> 0x1bU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x4000U 
                                                       ^ 
                                                       (0x4000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                       << 0x1eU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                         >> 2U))
                                                      : 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                       << 0x17U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                         >> 9U)))))))))
                                         : ((((((((
                                                   (0U 
                                                    == 
                                                    (0x10000U 
                                                     ^ 
                                                     (0x10000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))) 
                                                   | (0U 
                                                      == 
                                                      (0x20000U 
                                                       ^ 
                                                       (0x20000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x40000U 
                                                      ^ 
                                                      (0x40000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                | (0U 
                                                   == 
                                                   (0x100000U 
                                                    ^ 
                                                    (0x100000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x400000U 
                                                  ^ 
                                                  (0x400000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x800000U 
                                                 ^ 
                                                 (0x800000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))))
                                             ? ((0U 
                                                 == 
                                                 (0x10000U 
                                                  ^ 
                                                  (0x10000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                  << 0x10U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                    >> 0x10U))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x20000U 
                                                   ^ 
                                                   (0x20000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                   << 9U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                     >> 0x17U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x40000U 
                                                    ^ 
                                                    (0x40000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                    << 2U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xaU] 
                                                      >> 0x1eU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                     << 0x1bU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                       >> 5U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x100000U 
                                                      ^ 
                                                      (0x100000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                      << 0x14U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                        >> 0xcU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x200000U 
                                                       ^ 
                                                       (0x200000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                       << 0xdU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                         >> 0x13U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x400000U 
                                                        ^ 
                                                        (0x400000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                        << 6U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xbU] 
                                                          >> 0x1aU))
                                                       : 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                        << 0x1fU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                          >> 1U)))))))))
                                             : ((((
                                                   (((((0U 
                                                        == 
                                                        (0x1000000U 
                                                         ^ 
                                                         (0x1000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))) 
                                                       | (0U 
                                                          == 
                                                          (0x2000000U 
                                                           ^ 
                                                           (0x2000000U 
                                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                      | (0U 
                                                         == 
                                                         (0x4000000U 
                                                          ^ 
                                                          (0x4000000U 
                                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                     | (0U 
                                                        == 
                                                        (0x8000000U 
                                                         ^ 
                                                         (0x8000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                    | (0U 
                                                       == 
                                                       (0x10000000U 
                                                        ^ 
                                                        (0x10000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                   | (0U 
                                                      == 
                                                      (0x20000000U 
                                                       ^ 
                                                       (0x20000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x40000000U 
                                                      ^ 
                                                      (0x40000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x80000000U 
                                                     ^ 
                                                     (0x80000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U]))))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1000000U 
                                                   ^ 
                                                   (0x1000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                   << 0x18U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                     >> 8U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x2000000U 
                                                    ^ 
                                                    (0x2000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                    << 0x11U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                      >> 0xfU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x4000000U 
                                                     ^ 
                                                     (0x4000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                     << 0xaU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                       >> 0x16U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                      << 3U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xcU] 
                                                        >> 0x1dU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10000000U 
                                                       ^ 
                                                       (0x10000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                       << 0x1cU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                         >> 4U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20000000U 
                                                        ^ 
                                                        (0x20000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                        << 0x15U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                          >> 0xbU))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x40000000U 
                                                         ^ 
                                                         (0x40000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[1U])))
                                                        ? 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                         << 0xeU) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                           >> 0x12U))
                                                        : 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                         << 7U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xdU] 
                                                           >> 0x19U)))))))))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U])))
                                                  ? 
                                                 __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (2U 
                                                    ^ 
                                                    (2U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                    << 0x19U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                      >> 7U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (4U 
                                                     ^ 
                                                     (4U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                     << 0x12U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                       >> 0xeU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (8U 
                                                      ^ 
                                                      (8U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                      << 0xbU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                        >> 0x15U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10U 
                                                       ^ 
                                                       (0x10U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xfU] 
                                                       << 4U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xeU] 
                                                         >> 0x1cU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20U 
                                                        ^ 
                                                        (0x20U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__s[2U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xfU] 
                                                        << 0x1dU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__b[0xfU] 
                                                          >> 3U))
                                                       : 0xcU)))))))))))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1044_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0314486__525__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s 
        = (((4U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)) 
                       << 2U) | (((3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1072_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__Vfuncout 
        = ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
            ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                    ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                        ? 3U : 2U) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                                       ? 3U : 1U)) : 
               ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                     ? 3U : 2U) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                                    ? 3U : 0U))) : 
           ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                     ? 3U : 2U) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                                    ? 3U : 1U)) : (
                                                   (2U 
                                                    & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__s))
                                                     ? 3U
                                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__a)))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0087_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311621__389__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__s 
        = (((6U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
            << 1U) | (3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__b 
        = (0x10000U | ((0x80U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_))
                        ? (0xff00U | (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_)))
                        : (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__Vfuncout 
        = (0xffffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__s)))
                       ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__b
                       : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__s)))
                           ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__b 
                              >> 0x10U) : 0U)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0025_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____0311407__374__Vfuncout;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0088_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_)
            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0087_)
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1072_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0506_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_)
            ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___562_) 
               & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_))
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s = 0;
    // Body
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b 
        = (4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___083_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310899__558__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
        = ((0xfff000U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                          << 0x12U) | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                       << 0xcU))) | 
           ((0xfc0U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_) 
                       << 6U)) | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___079_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310891__554__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
        = ((0xfc0000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_) 
                         << 0x12U)) | (0x3ffffU & (
                                                   ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___082_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310894__557__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
               ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_)
               : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___077_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310889__552__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___184_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___184_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___184_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
               ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)
               : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___184_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___184_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___078_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310890__553__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___080_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310892__555__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___081_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310893__556__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b 
        = (0xfffffffcU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                          & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia_cs) 
                             << 2U)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___063_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310861__551__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
            >> 2U) & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia_cs));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___062_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310856__550__Vfuncout;
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___065_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___185_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___079_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___191_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___082_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___181_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___077_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___183_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___078_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___187_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___080_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___189_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___081_;
    } else {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___185_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___191_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___181_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___183_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___184_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___187_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___189_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_;
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s = 0;
    // Body
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                  << 3U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                                      ? ((1U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                                          ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_)
                                          : (IData)(vlSelf->__PVT__soc__DOT___56_))
                                      : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                                      ? (IData)(vlSelf->__VdfgTmp_h8248d8fd__0)
                                                      : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___054_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310823__542__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                  << 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                                      ? ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                             >> 1U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 1U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                         >> 1U)) << 2U)) 
                             | ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_)) 
                                | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                          ? (IData)(vlSelf->__VdfgTmp_h87f36a60__0)
                                          : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                             >> 1U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___055_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310827__543__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                  << 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                                      ? ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                             >> 2U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 2U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                         >> 2U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                       >> 1U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                                      ? (IData)(vlSelf->__VdfgTmp_hb193d804__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                                      >> 2U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___056_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310831__544__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b 
        = ((8U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_)) 
           | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                       ? ((8U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                           ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                              >> 3U) : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                        >> 3U)) : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                                   >> 3U)) 
                     << 2U)) | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                       >> 2U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                                      ? (IData)(vlSelf->__VdfgTmp_hb67028e5__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                                      >> 3U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___057_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310835__545__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                  >> 1U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                                      ? ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                             >> 4U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 4U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                         >> 4U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                       >> 3U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                                      ? (IData)(vlSelf->__VdfgTmp_hcf4b05e2__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                                      >> 4U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___058_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310839__546__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b 
        = ((8U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_) 
                  >> 2U)) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___192_))
                                      ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_))
                                          ? ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___190_) 
                                             >> 5U)
                                          : ((IData)(vlSelf->__PVT__soc__DOT___56_) 
                                             >> 5U))
                                      : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___188_) 
                                         >> 5U)) << 2U)) 
                             | ((2U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_) 
                                       >> 4U)) | (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___186_))
                                                      ? (IData)(vlSelf->__VdfgTmp_hcca033bd__0)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                                      >> 5U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___059_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____0310843__547__Vfuncout;
}
