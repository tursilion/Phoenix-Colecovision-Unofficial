// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__6(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__6\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___181_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___171_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___167_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___172_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___176_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___172_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___170_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___168_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___166_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___177_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___175_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___178_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___123_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___169_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___078_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___182_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___133_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___173_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___088_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___178_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___123_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___169_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___078_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___182_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___133_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___173_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___088_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___180_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
                 & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___179_))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___171_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
                 & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___170_))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___177_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_) 
                  >> 0xbU)) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___175_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___176_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
                 & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___175_)) 
                    & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_) 
                       >> 0xbU))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___168_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & ((0xfU != (0xfU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_) 
                                >> 0xaU))) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___166_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___167_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___166_)) 
              & (0x3c00U == (0x3c00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_)))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___183_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___143_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___170_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___166_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___175_ = 0U;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___179_ 
        = (1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___170_ 
        = (1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___175_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
                 & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_) 
                    >> 0xbU)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___166_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & (0x3c00U == (0x3c00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_))));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__7(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__7\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___180_ = 0U;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___171_ = 0U;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___168_ = 0U;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___181_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___179_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___172_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___170_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___167_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
                 & (~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___166_))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___177_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & ((IData)(vlSelf->__VdfgTmp_hfa904bdc__0) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___175_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___176_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
                 & ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___175_)) 
                    & (~ (IData)(vlSelf->__VdfgTmp_hfa904bdc__0)))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & VL_LTES_III(32, 0x4b0U, ((IData)(0x59U) 
                                      + vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___6_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___178_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___123_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___169_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___078_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___133_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___173_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
           & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___088_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___179_ = 0U;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___170_ = 0U;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___166_ 
        = (1U & (~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___175_ 
        = (1U & ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)) 
                 & (~ (IData)(vlSelf->__VdfgTmp_hfa904bdc__0))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___6_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_)
            ? 0U : vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___5_);
    vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___5_ 
        = (VL_LTES_III(32, 0x4b0U, ((IData)(0x59U) 
                                    + vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___6_))
            ? ((IData)(0xfffffba9U) + vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___6_)
            : ((IData)(0x59U) + vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___6_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__8(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__8\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___165_ 
        = ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_)) 
           & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___037_) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___055_)));
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_ = 0U;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_ = 0U;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___162_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___161_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___160_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___159_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___156_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___155_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___154_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___153_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___158_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___157_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___164_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___163_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___158_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___157_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___155_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___164_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___163_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___153_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___161_;
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___159_;
    }
    vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h626016ef__0 
        = (1U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                  & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___156_)) 
                 >> 7U));
    vlSelf->__PVT__soc__DOT___56_ = (0xffU & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_)) 
                                              | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___160_) 
                                                 & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___162_))));
    vlSelf->__PVT__soc__DOT___54_ = (1U & ((~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__rom_pia__DOT___154_) 
                                               >> 7U)) 
                                           | (IData)(vlSelf->soc__DOT__cpu_board__DOT____VdfgTmp_h626016ef__0)));
    vlSelf->__VdfgTmp_hfa904bdc__0 = ((IData)(vlSelf->__PVT__soc__DOT___54_) 
                                      & (0x3fU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__soc__DOT___56_))));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__9(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__9\n"); );
    // Body
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_ = 0U;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_ = 0U;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_ = 0U;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_ = 0U;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_ = 0U;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_ = 0U;
    } else {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___161_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___159_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___155_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___163_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___157_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___153_;
    }
    vlSelf->__VdfgTmp_h5871af2a__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 5U));
    vlSelf->__VdfgTmp_h27633591__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 4U));
    vlSelf->__VdfgTmp_h267325da__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 3U));
    vlSelf->__VdfgTmp_h20e03c37__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 2U));
    vlSelf->__VdfgTmp_h7ad61c6d__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 1U));
    vlSelf->__VdfgTmp_h8e98d7f4__0 = (1U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                            & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)));
    vlSelf->__VdfgTmp_h522107fc__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 6U));
    vlSelf->__VdfgTmp_h50ceb7af__0 = (1U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                             & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)) 
                                            >> 7U));
    vlSelf->__PVT__mono = (0xffffU & VL_SHIFTRS_III(16,16,32, 
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
                                                                          << 8U)))))))), 1U));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__10(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__10\n"); );
    // Body
    vlSelf->sram_we_n = vlSelf->__PVT__we_next;
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__11(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__11\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMILatched 
        = ((IData)(vlSelf->__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear) 
           | (IData)(vlSelf->__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIMask));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__0\n"); );
    // Init
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__a;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__a;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__a = 0;
    SData/*15:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s = 0;
    // Body
    vlSelf->__PVT__sc_go = ((IData)(vlSelf->__PVT__sc_tog48) 
                            != (IData)(vlSelf->__PVT__sc_tog));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s 
        = (((3U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_) 
            << 0x18U) | ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___530_)
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
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___141_;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                                : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                 ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                 : (__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__s))
                                                ? __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__b
                                                : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___121_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031943__12__Vfuncout;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s 
        = (((3U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
            << 3U) | (((2U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                       << 2U) | (((1U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)) 
                                  << 1U) | (0U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_)))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_) 
            << 0xcU) | ((0xf00U & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___530_)
                                     ? ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___129_))
                                         ? (IData)(vlSelf->__PVT__mem_do)
                                         : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_))
                                     : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_)) 
                                   << 8U)) | ((((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_)) 
                                               << 4U) 
                                              | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_))));
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__a 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___142_;
    __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__Vfuncout 
        = (0xfU & ((8U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                    ? ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                        ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                               : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                                  >> 8U)))
                        : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                               : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                                  >> 0xcU))))
                    : ((4U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                        ? ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                               : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                                  >> 8U)))
                        : ((2U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                            ? ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                : ((IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b) 
                                   >> 4U)) : ((1U & (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__s))
                                               ? (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__b)
                                               : (IData)(__Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__a))))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___122_ 
        = __Vfunc_soc__DOT__cpu_board__DOT__blt__DOT____031944__13__Vfuncout;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___533_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___120_)
            ? (IData)(vlSelf->__PVT__mem_do) : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___534_));
    vlSelf->__VdfgTmp_h8090fb0b__0 = ((IData)(vlSelf->boot_mode) 
                                      & (IData)(vlSelf->__PVT__sc_go));
    vlSelf->__PVT__io_w = ((IData)(vlSelf->__VdfgTmp_h8090fb0b__0) 
                           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___565_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__13(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__13\n"); );
    // Init
    CData/*0:0*/ __PVT__soc__DOT__cpu_board__DOT___239_;
    __PVT__soc__DOT__cpu_board__DOT___239_ = 0;
    CData/*0:0*/ __PVT__soc__DOT__cpu_board__DOT___314_;
    __PVT__soc__DOT__cpu_board__DOT___314_ = 0;
    CData/*0:0*/ __PVT__soc__DOT__cpu_board__DOT___579_;
    __PVT__soc__DOT__cpu_board__DOT___579_ = 0;
    CData/*0:0*/ __PVT__soc__DOT__cpu_board__DOT___580_;
    __PVT__soc__DOT__cpu_board__DOT___580_ = 0;
    CData/*0:0*/ __PVT__soc__DOT__cpu_board__DOT___581_;
    __PVT__soc__DOT__cpu_board__DOT___581_ = 0;
    CData/*0:0*/ __PVT__soc__DOT__cpu_board__DOT___582_;
    __PVT__soc__DOT__cpu_board__DOT___582_ = 0;
    // Body
    if (vlSelf->__Vdlyvset__lbuf__v0) {
        vlSelf->__PVT__lbuf[vlSelf->__Vdlyvdim0__lbuf__v0] 
            = vlSelf->__Vdlyvval__lbuf__v0;
    }
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__widget_pia__DOT___037_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___523_) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___524_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_ 
        = (1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___551_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT__address 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)
            ? ((3U == (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___140_))
                ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___145_)
                : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__blt__DOT___144_))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___499_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_ 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT___494_;
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_ 
        = vlSelf->__PVT__soc__DOT__cpu_board__DOT___475_;
    vlSelf->ext_a = (0xffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___312_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
                         & (0xca00U == (0xff00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __PVT__soc__DOT__cpu_board__DOT___314_ = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
                                               >> 7U) 
                                              & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                                                 & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
                                                    & (0xc900U 
                                                       == 
                                                       (0xff00U 
                                                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    __PVT__soc__DOT__cpu_board__DOT___579_ = (1U & 
                                              ((~ (1U 
                                                   & (((IData)(0xfU) 
                                                       - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                      >> 3U))) 
                                               & (~ 
                                                  (3U 
                                                   & (((IData)(0xfU) 
                                                       - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                      >> 2U)))));
    __PVT__soc__DOT__cpu_board__DOT___580_ = (1U & 
                                              ((~ (1U 
                                                   & (((IData)(0xfU) 
                                                       - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                      >> 3U))) 
                                               & (((IData)(0xfU) 
                                                   - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                  >> 2U)));
    __PVT__soc__DOT__cpu_board__DOT___581_ = (1U & 
                                              ((~ (3U 
                                                   & (((IData)(0xfU) 
                                                       - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                      >> 2U))) 
                                               & (((IData)(0xfU) 
                                                   - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                  >> 3U)));
    __PVT__soc__DOT__cpu_board__DOT___582_ = (1U & 
                                              ((((IData)(0xfU) 
                                                 - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                >> 3U) 
                                               & (((IData)(0xfU) 
                                                   - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                                  >> 2U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___323_ 
        = (((IData)(vlSelf->__PVT__boot_g) >> 1U) & 
           (0xc400U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___030_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read) 
           & (0x9000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
                         & (0xc000U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))));
    if (vlSelf->__PVT__soc__DOT__cpu_board__DOT___312_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___525_ 
            = (7U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___528_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_;
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___525_ 
            = (7U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___526_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___528_ 
            = vlSelf->__PVT__soc__DOT__cpu_board__DOT___529_;
    }
    if (__PVT__soc__DOT__cpu_board__DOT___314_) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___331_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___332_ 
            = (1U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_) 
                     >> 1U));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___336_ 
            = (1U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_) 
                     >> 2U));
    } else {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___331_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___516_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___332_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___517_));
        vlSelf->__PVT__soc__DOT__cpu_board__DOT___336_ 
            = (1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___531_));
    }
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___585_ 
        = (7U & ((IData)(__PVT__soc__DOT__cpu_board__DOT___579_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___584_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(__PVT__soc__DOT__cpu_board__DOT___579_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___587_ 
        = (7U & ((IData)(__PVT__soc__DOT__cpu_board__DOT___580_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___586_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(__PVT__soc__DOT__cpu_board__DOT___580_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___589_ 
        = (7U & ((IData)(__PVT__soc__DOT__cpu_board__DOT___581_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___588_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(__PVT__soc__DOT__cpu_board__DOT___581_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___591_ 
        = (7U & ((IData)(__PVT__soc__DOT__cpu_board__DOT___582_) 
                 & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                    >> 1U)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___590_ 
        = ((~ (7U & (((IData)(0xfU) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                     >> 1U))) & (IData)(__PVT__soc__DOT__cpu_board__DOT___582_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___295_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
                         & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___323_))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
            & (0x9000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
           | (((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___516_)) 
               & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___030_)) 
              | ((0xc000U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                 & (0x9000U <= (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))));
    vlSelf->__VdfgTmp_hf2219a37__0 = (((IData)(1U) 
                                       - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)) 
                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_));
    vlSelf->__PVT__soc__DOT___59_ = ((0x4000U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___493_)) 
                                     | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___494_ 
        = (0x3fffU & ((0x800U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
                       ? (((0x40ffU != (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___493_))
                            ? ((IData)(1U) + (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___493_))
                            : 0U) | ((1U & ((0x40ffU 
                                             != (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___493_)) 
                                            & (((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___493_)) 
                                               >> 0xeU)))
                                      ? 0x3f00U : 0U))
                       : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___496_ 
        = ((0x20U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
            ? ((0x34U == (0x34U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_))) 
               | ((2U != (0x22U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___495_))) 
                  & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___497_)))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___497_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___475_ 
        = (1U & (((IData)(vlSelf->__PVT__soc_reset_g) 
                  >> 1U) | ((0x64U > (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___487_)) 
                            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___550_ 
        = (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_))
                  ? (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___488_))
                  : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___551_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___614_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___585_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___610_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___584_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___622_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___587_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___618_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___586_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___630_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___589_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___626_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___588_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___638_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___591_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U] 
                         << 0x10U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U] 
                                      >> 0x10U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___634_ 
        = (0xffU & (((~ ((IData)(1U) - (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                     & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___590_) 
                        & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___315_)))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U]));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___563_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___295_)
            ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___204_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
           & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___222_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___198_) 
           & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_) 
              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_)));
    __PVT__soc__DOT__cpu_board__DOT___239_ = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___343_) 
                                              | ((0xcc00U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) 
                                                 | (0xc000U 
                                                    == 
                                                    (0xfc00U 
                                                     & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___640_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___591_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___636_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___590_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[3U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___632_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___589_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___628_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___588_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[2U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___624_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___587_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___620_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___586_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[1U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___616_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___585_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U] 
                         << 8U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U] 
                                   >> 0x18U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___612_ 
        = (0xffU & (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___584_) 
                     & (IData)(vlSelf->__VdfgTmp_hf2219a37__0))
                     ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___501_)
                     : ((vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U] 
                         << 0x18U) | (vlSelf->__PVT__soc__DOT__cpu_board__DOT___532_[0U] 
                                      >> 8U))));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___301_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                      & (IData)(__PVT__soc__DOT__cpu_board__DOT___239_)));
    vlSelf->__PVT__soc__DOT__cpu_board__DOT___298_ 
        = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___489_) 
            >> 7U) & ((~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___509_)) 
                      & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___247_) 
                         & (IData)(__PVT__soc__DOT__cpu_board__DOT___239_))));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__1(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__1\n"); );
    // Init
    CData/*7:0*/ __PVT__rpal;
    __PVT__rpal = 0;
    // Body
    __PVT__rpal = vlSelf->__PVT__pal[(0xfU & ((IData)(vlSelf->__PVT__rnib1)
                                               ? (IData)(vlSelf->__PVT__cb_q)
                                               : ((IData)(vlSelf->__PVT__cb_q) 
                                                  >> 4U)))];
    vlSelf->__PVT__pix = ((IData)(vlSelf->__PVT__rot1)
                           ? ((0xe0U & ((IData)(__PVT__rpal) 
                                        << 5U)) | (
                                                   (0x1cU 
                                                    & ((IData)(__PVT__rpal) 
                                                       >> 1U)) 
                                                   | (3U 
                                                      & ((IData)(__PVT__rpal) 
                                                         >> 6U))))
                           : (IData)(vlSelf->__PVT__lb_q));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__2(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__2\n"); );
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

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__3(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__3\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0506_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_)
            ? ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___551_) 
               & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_))
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__4(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__4\n"); );
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

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__5(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__5\n"); );
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
                     ? (IData)(vlSelf->__VdfgExtracted_he97352b2__0)
                     : (IData)(vlSelf->__VdfgExtracted_hef77368e__0))));
    __PVT__soc__DOT__cpu_board__DOT__widget_ic4_y = 
        (0xfU & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___444_)
                     ? ((IData)(vlSelf->__VdfgExtracted_he97352b2__0) 
                        >> 4U) : ((IData)(vlSelf->__VdfgExtracted_hef77368e__0) 
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
                                          : ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                             >> 2U))
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
                                          : ((IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y) 
                                             >> 3U))
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
                                                        : (IData)(__PVT__soc__DOT__cpu_board__DOT__widget_ic4_y))
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
                                                        >> 1U))
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

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__6(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__6\n"); );
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__cb1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___176_)
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___177_));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__ca1_edge 
        = ((2U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___167_)
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___168_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7\n"); );
    // Init
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s = 0;
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__a = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__a;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__a = 0;
    IData/*23:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s = 0;
    // Body
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
        = ((0xfc0000U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_) 
                         << 0x12U)) | (0x3ffffU & (
                                                   ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___054_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032240__278__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___052_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032238__276__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
            << 0x18U) | ((((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_)) 
                          << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___053_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032239__277__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b 
        = (0xfffffffcU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                          & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia_cs) 
                             << 2U)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___035_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032207__272__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
        = ((0xfff000U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                          << 0x12U) | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                       << 0xcU))) | 
           ((0xfc0U & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_) 
                       << 6U)) | (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__Vfuncout 
        = (0x3fU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                                   >> 0x12U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                                   >> 0xcU)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b 
                                    >> 6U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___051_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032237__275__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
               ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)
               : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___050_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032236__274__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
            >> 2U) & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia_cs));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___034_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032202__271__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
        = ((0xffffff00U & (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                            << 0x18U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                          << 0x10U) 
                                         | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                            << 8U)))) 
           | ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
               ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_)
               : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0020_)));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__Vfuncout 
        = (0xffU & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                     ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                                   >> 0x18U))))
                     : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                         ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                                : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                                   >> 0x10U)))
                         : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                             ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                 ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                 : (__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b 
                                    >> 8U)) : ((1U 
                                                & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__s))
                                                ? __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__b
                                                : (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__a))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___049_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032235__273__Vfuncout;
    if (vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___037_) {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___163_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___054_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___159_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___052_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___161_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___053_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___157_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___051_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___155_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___050_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___153_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___049_;
    } else {
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___163_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___159_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___161_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___157_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___155_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___156_;
        vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___153_ 
            = vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_;
    }
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8\n"); );
    // Init
    CData/*2:0*/ __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_;
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_ = 0;
    SData/*15:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__b;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__b = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__s = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__a;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__a = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s = 0;
    CData/*6:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__Vfuncout = 0;
    VlWide<16>/*489:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b;
    VL_ZERO_W(490, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b);
    VlWide<3>/*69:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s;
    VL_ZERO_W(70, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s);
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__Vfuncout = 0;
    VlWide<7>/*209:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b;
    VL_ZERO_W(210, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b);
    VlWide<3>/*69:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s;
    VL_ZERO_W(70, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s);
    CData/*2:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__Vfuncout = 0;
    VlWide<7>/*209:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b;
    VL_ZERO_W(210, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b);
    VlWide<3>/*69:0*/ __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s;
    VL_ZERO_W(70, __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s);
    CData/*0:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b = 0;
    CData/*3:0*/ __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s;
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_384;
    VlWide<3>/*95:0*/ __Vtemp_765;
    // Body
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_ 
        = ((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1066_) 
               >> 4U)) & ((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___169_) 
                            & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_)) 
                           | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___173_) 
                              & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                                 >> 3U))) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___178_) 
                                              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_)) 
                                             | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
                                                & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                                                   >> 3U)))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s 
        = (((3U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
            << 3U) | (((2U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                       << 2U) | (((1U == (3U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0010_))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b 
        = (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_) 
            << 3U) | ((4U & (((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                               ? ((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                      >> 6U)) | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___162_) 
                                                 >> 6U))
                               : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___160_) 
                                  >> 6U)) << 2U)) | 
                      (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___173_) 
                        << 1U) | (1U & ((4U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                                         ? (IData)(vlSelf->__VdfgTmp_h522107fc__0)
                                         : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___154_) 
                                            >> 6U))))));
    __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__Vfuncout 
        = (1U & ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                  ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                                >> 3U))))
                  : ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                      ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                 >> 1U)) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                                             ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                                             : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                                >> 2U)))
                      : ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                          ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s))
                              ? (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b)
                              : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b) 
                                 >> 1U)) : ((IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__s) 
                                            & (IData)(__Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__b))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___032_ 
        = __Vfunc_soc__DOT__sound_board__DOT__pia__DOT____032193__269__Vfuncout;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___123_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__cb1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___035_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___178_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___133_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___164_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___180_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___181_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___035_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___182_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___078_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT__ca1_edge) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___034_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___169_)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___088_ 
        = (((~ ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_) 
                >> 5U)) & ((0x10U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___158_))
                            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___171_)
                            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___172_))) 
           | ((~ (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___034_)) 
              & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__pia__DOT___173_)));
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U] 
        = __Vtemp_1[0U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U] 
        = __Vtemp_1[1U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U] 
        = __Vtemp_1[2U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] = 0x49249248U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] = 0x92492492U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] = 0x24924924U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] = 0x49249249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] = 0x92492492U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
        = (0x24924900U | ((((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                             ? 3U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                      ? 4U : 1U)) << 5U) 
                          | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_)
                               ? 3U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                        ? 4U : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1010_))) 
                             << 2U)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] = 0x9249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__Vfuncout 
        = (7U & (((((((((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))) 
                        | (0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                       | (0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                      | (0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                     | (0U == (0x10U ^ (0x10U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                    | (0U == (0x20U ^ (0x20U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                   | (0U == (0x40U ^ (0x40U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                  | (0U == (0x80U ^ (0x80U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))))
                  ? ((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U]
                      : ((0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                              << 0x1dU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                           >> 3U)) : 
                         ((0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                               << 0x1aU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                            >> 6U))
                           : ((0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                   << 0x17U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                                >> 9U))
                               : ((0U == (0x10U ^ (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                       << 0x14U) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                       >> 0xcU)) : 
                                  ((0U == (0x20U ^ 
                                           (0x20U & 
                                            __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                    ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                        << 0x11U) | 
                                       (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                        >> 0xfU)) : 
                                   ((0U == (0x40U ^ 
                                            (0x40U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                         << 0xeU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                         >> 0x12U))
                                     : ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                         << 0xbU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                         >> 0x15U)))))))))
                  : (((((((((0U == (0x100U ^ (0x100U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))) 
                            | (0U == (0x200U ^ (0x200U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                           | (0U == (0x400U ^ (0x400U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                          | (0U == (0x800U ^ (0x800U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                         | (0U == (0x1000U ^ (0x1000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                        | (0U == (0x2000U ^ (0x2000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                       | (0U == (0x4000U ^ (0x4000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                      | (0U == (0x8000U ^ (0x8000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))))
                      ? ((0U == (0x100U ^ (0x100U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                              << 8U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                        >> 0x18U)) : 
                         ((0U == (0x200U ^ (0x200U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                               << 5U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                         >> 0x1bU))
                           : ((0U == (0x400U ^ (0x400U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                   << 2U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[0U] 
                                             >> 0x1eU))
                               : ((0U == (0x800U ^ 
                                          (0x800U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                       << 0x1fU) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                       >> 1U)) : ((0U 
                                                   == 
                                                   (0x1000U 
                                                    ^ 
                                                    (0x1000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                    << 0x1cU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                      >> 4U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x2000U 
                                                     ^ 
                                                     (0x2000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                     << 0x19U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                       >> 7U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x4000U 
                                                      ^ 
                                                      (0x4000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                      << 0x16U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                      << 0x13U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                        >> 0xdU)))))))))
                      : (((((((((0U == (0x10000U ^ 
                                        (0x10000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))) 
                                | (0U == (0x20000U 
                                          ^ (0x20000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                               | (0U == (0x40000U ^ 
                                         (0x40000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                              | (0U == (0x80000U ^ 
                                        (0x80000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                             | (0U == (0x100000U ^ 
                                       (0x100000U & 
                                        __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                            | (0U == (0x200000U ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                           | (0U == (0x400000U ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                          | (0U == (0x800000U ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))))
                          ? ((0U == (0x10000U ^ (0x10000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                  << 0x10U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                               >> 0x10U))
                              : ((0U == (0x20000U ^ 
                                         (0x20000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                      << 0xdU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                  >> 0x13U))
                                  : ((0U == (0x40000U 
                                             ^ (0x40000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                          << 0xaU) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                            >> 0x16U))
                                      : ((0U == (0x80000U 
                                                 ^ 
                                                 (0x80000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                              << 7U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                >> 0x19U))
                                          : ((0U == 
                                              (0x100000U 
                                               ^ (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                  << 4U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                    >> 0x1cU))
                                              : ((0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                   << 1U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[1U] 
                                                     >> 0x1fU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x400000U 
                                                    ^ 
                                                    (0x400000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                    << 0x1eU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                    << 0x1bU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                      >> 5U)))))))))
                          : (((((((((0U == (0x1000000U 
                                            ^ (0x1000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))) 
                                    | (0U == (0x2000000U 
                                              ^ (0x2000000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                                   | (0U == (0x4000000U 
                                             ^ (0x4000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                                  | (0U == (0x8000000U 
                                            ^ (0x8000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                                 | (0U == (0x10000000U 
                                           ^ (0x10000000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                                | (0U == (0x20000000U 
                                          ^ (0x20000000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                               | (0U == (0x40000000U 
                                         ^ (0x40000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))) 
                              | (0U == (0x80000000U 
                                        ^ (0x80000000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U]))))
                              ? ((0U == (0x1000000U 
                                         ^ (0x1000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                      << 0x18U) | (
                                                   __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                   >> 8U))
                                  : ((0U == (0x2000000U 
                                             ^ (0x2000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                          << 0x15U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                            >> 0xbU))
                                      : ((0U == (0x4000000U 
                                                 ^ 
                                                 (0x4000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                              << 0x12U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                >> 0xeU))
                                          : ((0U == 
                                              (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                  << 0xfU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                    >> 0x11U))
                                              : ((0U 
                                                  == 
                                                  (0x10000000U 
                                                   ^ 
                                                   (0x10000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                   << 0xcU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                    << 9U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                      >> 0x17U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x40000000U 
                                                     ^ 
                                                     (0x40000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                     << 6U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                       >> 0x1aU))
                                                    : 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                     << 3U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[2U] 
                                                       >> 0x1dU)))))))))
                              : (((((((((0U == (1U 
                                                ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))) 
                                        | (0U == (2U 
                                                  ^ 
                                                  (2U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                       | (0U == (4U 
                                                 ^ 
                                                 (4U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                      | (0U == (8U 
                                                ^ (8U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                     | (0U == (0x10U 
                                               ^ (0x10U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                    | (0U == (0x20U 
                                              ^ (0x20U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                   | (0U == (0x40U 
                                             ^ (0x40U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                  | (0U == (0x80U ^ 
                                            (0x80U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))))
                                  ? ((0U == (1U ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U]
                                      : ((0U == (2U 
                                                 ^ 
                                                 (2U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                              << 0x1dU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                >> 3U))
                                          : ((0U == 
                                              (4U ^ 
                                               (4U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                  << 0x1aU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                    >> 6U))
                                              : ((0U 
                                                  == 
                                                  (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                   << 0x17U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                     >> 9U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x10U 
                                                    ^ 
                                                    (0x10U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                    << 0x14U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                      >> 0xcU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x20U 
                                                     ^ 
                                                     (0x20U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                     << 0x11U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x40U 
                                                      ^ 
                                                      (0x40U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                      << 0xeU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                        >> 0x12U))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                      << 0xbU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                        >> 0x15U)))))))))
                                  : (((((((((0U == 
                                             (0x100U 
                                              ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))) 
                                            | (0U == 
                                               (0x200U 
                                                ^ (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                           | (0U == 
                                              (0x400U 
                                               ^ (0x400U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                          | (0U == 
                                             (0x800U 
                                              ^ (0x800U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                         | (0U == (0x1000U 
                                                   ^ 
                                                   (0x1000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                        | (0U == (0x2000U 
                                                  ^ 
                                                  (0x2000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                       | (0U == (0x4000U 
                                                 ^ 
                                                 (0x4000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                      | (0U == (0x8000U 
                                                ^ (0x8000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))))
                                      ? ((0U == (0x100U 
                                                 ^ 
                                                 (0x100U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                              << 8U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                >> 0x18U))
                                          : ((0U == 
                                              (0x200U 
                                               ^ (0x200U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                  << 5U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                    >> 0x1bU))
                                              : ((0U 
                                                  == 
                                                  (0x400U 
                                                   ^ 
                                                   (0x400U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                   << 2U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[3U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x800U 
                                                    ^ 
                                                    (0x800U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                    << 0x1fU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                      >> 1U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1000U 
                                                     ^ 
                                                     (0x1000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                     << 0x1cU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                       >> 4U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x2000U 
                                                      ^ 
                                                      (0x2000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                      << 0x19U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                        >> 7U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x4000U 
                                                       ^ 
                                                       (0x4000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                       << 0x16U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                         >> 0xaU))
                                                      : 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                       << 0x13U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                         >> 0xdU)))))))))
                                      : (((((((((0U 
                                                 == 
                                                 (0x10000U 
                                                  ^ 
                                                  (0x10000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))) 
                                                | (0U 
                                                   == 
                                                   (0x20000U 
                                                    ^ 
                                                    (0x20000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000U 
                                                   ^ 
                                                   (0x40000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000U 
                                                  ^ 
                                                  (0x80000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x100000U 
                                                 ^ 
                                                 (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                            | (0U == 
                                               (0x200000U 
                                                ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                           | (0U == 
                                              (0x400000U 
                                               ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                          | (0U == 
                                             (0x800000U 
                                              ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))))
                                          ? ((0U == 
                                              (0x10000U 
                                               ^ (0x10000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                  << 0x10U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                    >> 0x10U))
                                              : ((0U 
                                                  == 
                                                  (0x20000U 
                                                   ^ 
                                                   (0x20000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                   << 0xdU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                     >> 0x13U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x40000U 
                                                    ^ 
                                                    (0x40000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                    << 0xaU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                      >> 0x16U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                     << 7U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                       >> 0x19U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x100000U 
                                                      ^ 
                                                      (0x100000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                      << 4U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                        >> 0x1cU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x200000U 
                                                       ^ 
                                                       (0x200000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                       << 1U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[4U] 
                                                         >> 0x1fU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x400000U 
                                                        ^ 
                                                        (0x400000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                        << 0x1eU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                        << 0x1bU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                          >> 5U)))))))))
                                          : (((((((
                                                   ((0U 
                                                     == 
                                                     (0x1000000U 
                                                      ^ 
                                                      (0x1000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))) 
                                                    | (0U 
                                                       == 
                                                       (0x2000000U 
                                                        ^ 
                                                        (0x2000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                                   | (0U 
                                                      == 
                                                      (0x4000000U 
                                                       ^ 
                                                       (0x4000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x10000000U 
                                                     ^ 
                                                     (0x10000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                                | (0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000000U 
                                                   ^ 
                                                   (0x40000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000000U 
                                                  ^ 
                                                  (0x80000000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U]))))
                                              ? ((0U 
                                                  == 
                                                  (0x1000000U 
                                                   ^ 
                                                   (0x1000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                   << 0x18U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                     >> 8U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x2000000U 
                                                    ^ 
                                                    (0x2000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                    << 0x15U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x4000000U 
                                                     ^ 
                                                     (0x4000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                     << 0x12U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                      << 0xfU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                        >> 0x11U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10000000U 
                                                       ^ 
                                                       (0x10000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                       << 0xcU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                         >> 0x14U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20000000U 
                                                        ^ 
                                                        (0x20000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                        << 9U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                          >> 0x17U))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x40000000U 
                                                         ^ 
                                                         (0x40000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[1U])))
                                                        ? 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                         << 6U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                           >> 0x1aU))
                                                        : 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                         << 3U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[5U] 
                                                           >> 0x1dU)))))))))
                                              : ((0U 
                                                  == 
                                                  (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U])))
                                                  ? 
                                                 __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (2U 
                                                    ^ 
                                                    (2U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                    << 0x1dU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                      >> 3U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (4U 
                                                     ^ 
                                                     (4U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                     << 0x1aU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                       >> 6U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (8U 
                                                      ^ 
                                                      (8U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                      << 0x17U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                        >> 9U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10U 
                                                       ^ 
                                                       (0x10U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                       << 0x14U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                         >> 0xcU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20U 
                                                        ^ 
                                                        (0x20U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__s[2U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                        << 0x11U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__b[6U] 
                                                          >> 0xfU))
                                                       : 1U)))))))))))))));
    __PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____036507__256__Vfuncout;
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U] 
        = __Vtemp_384[0U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U] 
        = __Vtemp_384[1U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U] 
        = __Vtemp_384[2U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
        = (0x49070128U | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0852_) 
                           << 0x15U) | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0793_) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1017_)
                                           ? 1U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                                    ? 1U
                                                    : 6U)) 
                                         << 9U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] = 0x994964a2U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] = 0x24924924U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] = 0x49249249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] = 0x92499492U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] = 0x24924924U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] = 0x9249U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__Vfuncout 
        = (7U & (((((((((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))) 
                        | (0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                       | (0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                      | (0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                     | (0U == (0x10U ^ (0x10U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                    | (0U == (0x20U ^ (0x20U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                   | (0U == (0x40U ^ (0x40U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                  | (0U == (0x80U ^ (0x80U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))))
                  ? ((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U]
                      : ((0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                              << 0x1dU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                           >> 3U)) : 
                         ((0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                               << 0x1aU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                            >> 6U))
                           : ((0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                   << 0x17U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                                >> 9U))
                               : ((0U == (0x10U ^ (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                       << 0x14U) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                       >> 0xcU)) : 
                                  ((0U == (0x20U ^ 
                                           (0x20U & 
                                            __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                    ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                        << 0x11U) | 
                                       (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                        >> 0xfU)) : 
                                   ((0U == (0x40U ^ 
                                            (0x40U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                         << 0xeU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                         >> 0x12U))
                                     : ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                         << 0xbU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                         >> 0x15U)))))))))
                  : (((((((((0U == (0x100U ^ (0x100U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))) 
                            | (0U == (0x200U ^ (0x200U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                           | (0U == (0x400U ^ (0x400U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                          | (0U == (0x800U ^ (0x800U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                         | (0U == (0x1000U ^ (0x1000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                        | (0U == (0x2000U ^ (0x2000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                       | (0U == (0x4000U ^ (0x4000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                      | (0U == (0x8000U ^ (0x8000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))))
                      ? ((0U == (0x100U ^ (0x100U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                              << 8U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                        >> 0x18U)) : 
                         ((0U == (0x200U ^ (0x200U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                           ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                               << 5U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                         >> 0x1bU))
                           : ((0U == (0x400U ^ (0x400U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                               ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                   << 2U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[0U] 
                                             >> 0x1eU))
                               : ((0U == (0x800U ^ 
                                          (0x800U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                   ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                       << 0x1fU) | 
                                      (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                       >> 1U)) : ((0U 
                                                   == 
                                                   (0x1000U 
                                                    ^ 
                                                    (0x1000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                    << 0x1cU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                      >> 4U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x2000U 
                                                     ^ 
                                                     (0x2000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                     << 0x19U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                       >> 7U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x4000U 
                                                      ^ 
                                                      (0x4000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                      << 0x16U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                      << 0x13U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                        >> 0xdU)))))))))
                      : (((((((((0U == (0x10000U ^ 
                                        (0x10000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))) 
                                | (0U == (0x20000U 
                                          ^ (0x20000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                               | (0U == (0x40000U ^ 
                                         (0x40000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                              | (0U == (0x80000U ^ 
                                        (0x80000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                             | (0U == (0x100000U ^ 
                                       (0x100000U & 
                                        __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                            | (0U == (0x200000U ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                           | (0U == (0x400000U ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                          | (0U == (0x800000U ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))))
                          ? ((0U == (0x10000U ^ (0x10000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                  << 0x10U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                               >> 0x10U))
                              : ((0U == (0x20000U ^ 
                                         (0x20000U 
                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                      << 0xdU) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                  >> 0x13U))
                                  : ((0U == (0x40000U 
                                             ^ (0x40000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                          << 0xaU) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                            >> 0x16U))
                                      : ((0U == (0x80000U 
                                                 ^ 
                                                 (0x80000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                              << 7U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                >> 0x19U))
                                          : ((0U == 
                                              (0x100000U 
                                               ^ (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                  << 4U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                    >> 0x1cU))
                                              : ((0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                   << 1U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[1U] 
                                                     >> 0x1fU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x400000U 
                                                    ^ 
                                                    (0x400000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                    << 0x1eU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                    << 0x1bU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                      >> 5U)))))))))
                          : (((((((((0U == (0x1000000U 
                                            ^ (0x1000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))) 
                                    | (0U == (0x2000000U 
                                              ^ (0x2000000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                                   | (0U == (0x4000000U 
                                             ^ (0x4000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                                  | (0U == (0x8000000U 
                                            ^ (0x8000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                                 | (0U == (0x10000000U 
                                           ^ (0x10000000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                                | (0U == (0x20000000U 
                                          ^ (0x20000000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                               | (0U == (0x40000000U 
                                         ^ (0x40000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))) 
                              | (0U == (0x80000000U 
                                        ^ (0x80000000U 
                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U]))))
                              ? ((0U == (0x1000000U 
                                         ^ (0x1000000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                  ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                      << 0x18U) | (
                                                   __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                   >> 8U))
                                  : ((0U == (0x2000000U 
                                             ^ (0x2000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                          << 0x15U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                            >> 0xbU))
                                      : ((0U == (0x4000000U 
                                                 ^ 
                                                 (0x4000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                              << 0x12U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                >> 0xeU))
                                          : ((0U == 
                                              (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                  << 0xfU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                    >> 0x11U))
                                              : ((0U 
                                                  == 
                                                  (0x10000000U 
                                                   ^ 
                                                   (0x10000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                   << 0xcU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                    << 9U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                      >> 0x17U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x40000000U 
                                                     ^ 
                                                     (0x40000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                     << 6U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                       >> 0x1aU))
                                                    : 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                     << 3U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[2U] 
                                                       >> 0x1dU)))))))))
                              : (((((((((0U == (1U 
                                                ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))) 
                                        | (0U == (2U 
                                                  ^ 
                                                  (2U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                       | (0U == (4U 
                                                 ^ 
                                                 (4U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                      | (0U == (8U 
                                                ^ (8U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                     | (0U == (0x10U 
                                               ^ (0x10U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                    | (0U == (0x20U 
                                              ^ (0x20U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                   | (0U == (0x40U 
                                             ^ (0x40U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                  | (0U == (0x80U ^ 
                                            (0x80U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))))
                                  ? ((0U == (1U ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                      ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U]
                                      : ((0U == (2U 
                                                 ^ 
                                                 (2U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                              << 0x1dU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                >> 3U))
                                          : ((0U == 
                                              (4U ^ 
                                               (4U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                  << 0x1aU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                    >> 6U))
                                              : ((0U 
                                                  == 
                                                  (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                   << 0x17U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                     >> 9U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x10U 
                                                    ^ 
                                                    (0x10U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                    << 0x14U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                      >> 0xcU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x20U 
                                                     ^ 
                                                     (0x20U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                     << 0x11U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x40U 
                                                      ^ 
                                                      (0x40U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                      << 0xeU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                        >> 0x12U))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                      << 0xbU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                        >> 0x15U)))))))))
                                  : (((((((((0U == 
                                             (0x100U 
                                              ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))) 
                                            | (0U == 
                                               (0x200U 
                                                ^ (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                           | (0U == 
                                              (0x400U 
                                               ^ (0x400U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                          | (0U == 
                                             (0x800U 
                                              ^ (0x800U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                         | (0U == (0x1000U 
                                                   ^ 
                                                   (0x1000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                        | (0U == (0x2000U 
                                                  ^ 
                                                  (0x2000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                       | (0U == (0x4000U 
                                                 ^ 
                                                 (0x4000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                      | (0U == (0x8000U 
                                                ^ (0x8000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))))
                                      ? ((0U == (0x100U 
                                                 ^ 
                                                 (0x100U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                              << 8U) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                >> 0x18U))
                                          : ((0U == 
                                              (0x200U 
                                               ^ (0x200U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                  << 5U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                    >> 0x1bU))
                                              : ((0U 
                                                  == 
                                                  (0x400U 
                                                   ^ 
                                                   (0x400U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                   << 2U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[3U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x800U 
                                                    ^ 
                                                    (0x800U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                    << 0x1fU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                      >> 1U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1000U 
                                                     ^ 
                                                     (0x1000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                     << 0x1cU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                       >> 4U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x2000U 
                                                      ^ 
                                                      (0x2000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                      << 0x19U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                        >> 7U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x4000U 
                                                       ^ 
                                                       (0x4000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                       << 0x16U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                         >> 0xaU))
                                                      : 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                       << 0x13U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                         >> 0xdU)))))))))
                                      : (((((((((0U 
                                                 == 
                                                 (0x10000U 
                                                  ^ 
                                                  (0x10000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))) 
                                                | (0U 
                                                   == 
                                                   (0x20000U 
                                                    ^ 
                                                    (0x20000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000U 
                                                   ^ 
                                                   (0x40000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000U 
                                                  ^ 
                                                  (0x80000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x100000U 
                                                 ^ 
                                                 (0x100000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                            | (0U == 
                                               (0x200000U 
                                                ^ (0x200000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                           | (0U == 
                                              (0x400000U 
                                               ^ (0x400000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                          | (0U == 
                                             (0x800000U 
                                              ^ (0x800000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))))
                                          ? ((0U == 
                                              (0x10000U 
                                               ^ (0x10000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                  << 0x10U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                    >> 0x10U))
                                              : ((0U 
                                                  == 
                                                  (0x20000U 
                                                   ^ 
                                                   (0x20000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                   << 0xdU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                     >> 0x13U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x40000U 
                                                    ^ 
                                                    (0x40000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                    << 0xaU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                      >> 0x16U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                     << 7U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                       >> 0x19U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x100000U 
                                                      ^ 
                                                      (0x100000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                      << 4U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                        >> 0x1cU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x200000U 
                                                       ^ 
                                                       (0x200000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                       << 1U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[4U] 
                                                         >> 0x1fU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x400000U 
                                                        ^ 
                                                        (0x400000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                        << 0x1eU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                        << 0x1bU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                          >> 5U)))))))))
                                          : (((((((
                                                   ((0U 
                                                     == 
                                                     (0x1000000U 
                                                      ^ 
                                                      (0x1000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))) 
                                                    | (0U 
                                                       == 
                                                       (0x2000000U 
                                                        ^ 
                                                        (0x2000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                                   | (0U 
                                                      == 
                                                      (0x4000000U 
                                                       ^ 
                                                       (0x4000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x10000000U 
                                                     ^ 
                                                     (0x10000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                                | (0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x40000000U 
                                                   ^ 
                                                   (0x40000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x80000000U 
                                                  ^ 
                                                  (0x80000000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U]))))
                                              ? ((0U 
                                                  == 
                                                  (0x1000000U 
                                                   ^ 
                                                   (0x1000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                   << 0x18U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                     >> 8U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x2000000U 
                                                    ^ 
                                                    (0x2000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                    << 0x15U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x4000000U 
                                                     ^ 
                                                     (0x4000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                     << 0x12U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                      << 0xfU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                        >> 0x11U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10000000U 
                                                       ^ 
                                                       (0x10000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                       << 0xcU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                         >> 0x14U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20000000U 
                                                        ^ 
                                                        (0x20000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                        << 9U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                          >> 0x17U))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x40000000U 
                                                         ^ 
                                                         (0x40000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[1U])))
                                                        ? 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                         << 6U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                           >> 0x1aU))
                                                        : 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                         << 3U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[5U] 
                                                           >> 0x1dU)))))))))
                                              : ((0U 
                                                  == 
                                                  (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U])))
                                                  ? 
                                                 __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (2U 
                                                    ^ 
                                                    (2U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                    << 0x1dU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                      >> 3U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (4U 
                                                     ^ 
                                                     (4U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                     << 0x1aU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                       >> 6U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (8U 
                                                      ^ 
                                                      (8U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                      << 0x17U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                        >> 9U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10U 
                                                       ^ 
                                                       (0x10U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                       << 0x14U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                         >> 0xcU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20U 
                                                        ^ 
                                                        (0x20U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__s[2U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                        << 0x11U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__b[6U] 
                                                          >> 0xfU))
                                                       : 1U)))))))))))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035901__247__Vfuncout;
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U] 
        = __Vtemp_765[0U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U] 
        = __Vtemp_765[1U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U] 
        = __Vtemp_765[2U];
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
        = (0xd0102200U | ((0x3ffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0884_) 
                                     >> 8U)) | ((0x3ffU 
                                                 & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0851_) 
                                                    >> 0xfU)) 
                                                | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0825_) 
                                                   >> 0x16U))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] = 0xcd9d7660U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] = 0x4078e767U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] = 0xa5099222U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
        = (0xecb962U | ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0976_) 
                        << 0x19U));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
        = (0x876eddbbU | (0x3ffU & ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0976_) 
                                    >> 7U)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] = 0x2a02d40bU;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] = 0x82d5cad6U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] = 0xd12102bdU;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
        = (0x12264a8U | (((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1073_)
                           ? 0x28U : ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1022_)
                                       ? 0x28U : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1009_))) 
                         << 0x1aU));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
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
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] = 0x12fc43d0U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] = 0x5330a185U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xfU] = 0xe4U;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__Vfuncout 
        = (0x7fU & (((((((((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))) 
                           | (0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                          | (0U == (4U ^ (4U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                         | (0U == (8U ^ (8U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                        | (0U == (0x10U ^ (0x10U & 
                                           __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                       | (0U == (0x20U ^ (0x20U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                      | (0U == (0x40U ^ (0x40U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                     | (0U == (0x80U ^ (0x80U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))))
                     ? ((0U == (1U ^ (1U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                         ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U]
                         : ((0U == (2U ^ (2U & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                 << 0x19U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                              >> 7U))
                             : ((0U == (4U ^ (4U & 
                                              __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                 ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                     << 0x12U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                                  >> 0xeU))
                                 : ((0U == (8U ^ (8U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                         << 0xbU) | 
                                        (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                         >> 0x15U))
                                     : ((0U == (0x10U 
                                                ^ (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                         ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                             << 4U) 
                                            | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0U] 
                                               >> 0x1cU))
                                         : ((0U == 
                                             (0x20U 
                                              ^ (0x20U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                                 << 0x1dU) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                                   >> 3U))
                                             : ((0U 
                                                 == 
                                                 (0x40U 
                                                  ^ 
                                                  (0x40U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                                  << 0x16U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                                    >> 0xaU))
                                                 : 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                                  << 0xfU) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                                    >> 0x11U)))))))))
                     : (((((((((0U == (0x100U ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))) 
                               | (0U == (0x200U ^ (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                              | (0U == (0x400U ^ (0x400U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                             | (0U == (0x800U ^ (0x800U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                            | (0U == (0x1000U ^ (0x1000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                           | (0U == (0x2000U ^ (0x2000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                          | (0U == (0x4000U ^ (0x4000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                         | (0U == (0x8000U ^ (0x8000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))))
                         ? ((0U == (0x100U ^ (0x100U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                 << 8U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                           >> 0x18U))
                             : ((0U == (0x200U ^ (0x200U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                 ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                     << 1U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[1U] 
                                               >> 0x1fU))
                                 : ((0U == (0x400U 
                                            ^ (0x400U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                         << 0x1aU) 
                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                           >> 6U)) : 
                                    ((0U == (0x800U 
                                             ^ (0x800U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                          << 0x13U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                            >> 0xdU))
                                      : ((0U == (0x1000U 
                                                 ^ 
                                                 (0x1000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                              << 0xcU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                                >> 0x14U))
                                          : ((0U == 
                                              (0x2000U 
                                               ^ (0x2000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                  << 5U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[2U] 
                                                    >> 0x1bU))
                                              : ((0U 
                                                  == 
                                                  (0x4000U 
                                                   ^ 
                                                   (0x4000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                   << 0x1eU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                     >> 2U))
                                                  : 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                   << 0x17U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                     >> 9U)))))))))
                         : (((((((((0U == (0x10000U 
                                           ^ (0x10000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))) 
                                   | (0U == (0x20000U 
                                             ^ (0x20000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                  | (0U == (0x40000U 
                                            ^ (0x40000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                 | (0U == (0x80000U 
                                           ^ (0x80000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                | (0U == (0x100000U 
                                          ^ (0x100000U 
                                             & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                               | (0U == (0x200000U 
                                         ^ (0x200000U 
                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                              | (0U == (0x400000U ^ 
                                        (0x400000U 
                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                             | (0U == (0x800000U ^ 
                                       (0x800000U & 
                                        __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))))
                             ? ((0U == (0x10000U ^ 
                                        (0x10000U & 
                                         __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                 ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                     << 0x10U) | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                  >> 0x10U))
                                 : ((0U == (0x20000U 
                                            ^ (0x20000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                         << 9U) | (
                                                   __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                                   >> 0x17U))
                                     : ((0U == (0x40000U 
                                                ^ (0x40000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                         ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                             << 2U) 
                                            | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[3U] 
                                               >> 0x1eU))
                                         : ((0U == 
                                             (0x80000U 
                                              ^ (0x80000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                 << 0x1bU) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                   >> 5U))
                                             : ((0U 
                                                 == 
                                                 (0x100000U 
                                                  ^ 
                                                  (0x100000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                  << 0x14U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                    >> 0xcU))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                   << 0xdU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                     >> 0x13U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x400000U 
                                                    ^ 
                                                    (0x400000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                                    << 6U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[4U] 
                                                      >> 0x1aU))
                                                   : 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                                    << 0x1fU) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                                      >> 1U)))))))))
                             : (((((((((0U == (0x1000000U 
                                               ^ (0x1000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))) 
                                       | (0U == (0x2000000U 
                                                 ^ 
                                                 (0x2000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                      | (0U == (0x4000000U 
                                                ^ (0x4000000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                     | (0U == (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                    | (0U == (0x10000000U 
                                              ^ (0x10000000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                   | (0U == (0x20000000U 
                                             ^ (0x20000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                  | (0U == (0x40000000U 
                                            ^ (0x40000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))) 
                                 | (0U == (0x80000000U 
                                           ^ (0x80000000U 
                                              & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U]))))
                                 ? ((0U == (0x1000000U 
                                            ^ (0x1000000U 
                                               & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                     ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                         << 0x18U) 
                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                           >> 8U)) : 
                                    ((0U == (0x2000000U 
                                             ^ (0x2000000U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                      ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                          << 0x11U) 
                                         | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                            >> 0xfU))
                                      : ((0U == (0x4000000U 
                                                 ^ 
                                                 (0x4000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                          ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                              << 0xaU) 
                                             | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                                >> 0x16U))
                                          : ((0U == 
                                              (0x8000000U 
                                               ^ (0x8000000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                              ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                  << 3U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[5U] 
                                                    >> 0x1dU))
                                              : ((0U 
                                                  == 
                                                  (0x10000000U 
                                                   ^ 
                                                   (0x10000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                   << 0x1cU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                     >> 4U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x20000000U 
                                                    ^ 
                                                    (0x20000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                    << 0x15U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x40000000U 
                                                     ^ 
                                                     (0x40000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[0U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                     << 0xeU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                     << 7U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[6U] 
                                                       >> 0x19U)))))))))
                                 : (((((((((0U == (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))) 
                                           | (0U == 
                                              (2U ^ 
                                               (2U 
                                                & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                          | (0U == 
                                             (4U ^ 
                                              (4U & 
                                               __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                         | (0U == (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                        | (0U == (0x10U 
                                                  ^ 
                                                  (0x10U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                       | (0U == (0x20U 
                                                 ^ 
                                                 (0x20U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                      | (0U == (0x40U 
                                                ^ (0x40U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                     | (0U == (0x80U 
                                               ^ (0x80U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))))
                                     ? ((0U == (1U 
                                                ^ (1U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                         ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U]
                                         : ((0U == 
                                             (2U ^ 
                                              (2U & 
                                               __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                 << 0x19U) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                   >> 7U))
                                             : ((0U 
                                                 == 
                                                 (4U 
                                                  ^ 
                                                  (4U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                  << 0x12U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                    >> 0xeU))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (8U 
                                                   ^ 
                                                   (8U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                   << 0xbU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                     >> 0x15U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x10U 
                                                    ^ 
                                                    (0x10U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                    << 4U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[7U] 
                                                      >> 0x1cU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x20U 
                                                     ^ 
                                                     (0x20U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                     << 0x1dU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                       >> 3U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x40U 
                                                      ^ 
                                                      (0x40U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                      << 0x16U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                      << 0xfU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                        >> 0x11U)))))))))
                                     : (((((((((0U 
                                                == 
                                                (0x100U 
                                                 ^ 
                                                 (0x100U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))) 
                                               | (0U 
                                                  == 
                                                  (0x200U 
                                                   ^ 
                                                   (0x200U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x400U 
                                                  ^ 
                                                  (0x400U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x800U 
                                                 ^ 
                                                 (0x800U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                            | (0U == 
                                               (0x1000U 
                                                ^ (0x1000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                           | (0U == 
                                              (0x2000U 
                                               ^ (0x2000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                          | (0U == 
                                             (0x4000U 
                                              ^ (0x4000U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                         | (0U == (0x8000U 
                                                   ^ 
                                                   (0x8000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))))
                                         ? ((0U == 
                                             (0x100U 
                                              ^ (0x100U 
                                                 & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                             ? ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                 << 8U) 
                                                | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                   >> 0x18U))
                                             : ((0U 
                                                 == 
                                                 (0x200U 
                                                  ^ 
                                                  (0x200U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                  << 1U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[8U] 
                                                    >> 0x1fU))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x400U 
                                                   ^ 
                                                   (0x400U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                   << 0x1aU) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                     >> 6U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x800U 
                                                    ^ 
                                                    (0x800U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                    << 0x13U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                      >> 0xdU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1000U 
                                                     ^ 
                                                     (0x1000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                     << 0xcU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                       >> 0x14U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x2000U 
                                                      ^ 
                                                      (0x2000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                      << 5U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[9U] 
                                                        >> 0x1bU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x4000U 
                                                       ^ 
                                                       (0x4000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                       << 0x1eU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                         >> 2U))
                                                      : 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                       << 0x17U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                         >> 9U)))))))))
                                         : ((((((((
                                                   (0U 
                                                    == 
                                                    (0x10000U 
                                                     ^ 
                                                     (0x10000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))) 
                                                   | (0U 
                                                      == 
                                                      (0x20000U 
                                                       ^ 
                                                       (0x20000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x40000U 
                                                      ^ 
                                                      (0x40000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                | (0U 
                                                   == 
                                                   (0x100000U 
                                                    ^ 
                                                    (0x100000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                               | (0U 
                                                  == 
                                                  (0x200000U 
                                                   ^ 
                                                   (0x200000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                              | (0U 
                                                 == 
                                                 (0x400000U 
                                                  ^ 
                                                  (0x400000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                             | (0U 
                                                == 
                                                (0x800000U 
                                                 ^ 
                                                 (0x800000U 
                                                  & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))))
                                             ? ((0U 
                                                 == 
                                                 (0x10000U 
                                                  ^ 
                                                  (0x10000U 
                                                   & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                 ? 
                                                ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                  << 0x10U) 
                                                 | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                    >> 0x10U))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x20000U 
                                                   ^ 
                                                   (0x20000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                   << 9U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                     >> 0x17U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x40000U 
                                                    ^ 
                                                    (0x40000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                    << 2U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xaU] 
                                                      >> 0x1eU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x80000U 
                                                     ^ 
                                                     (0x80000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                     << 0x1bU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                       >> 5U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x100000U 
                                                      ^ 
                                                      (0x100000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                      << 0x14U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                        >> 0xcU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x200000U 
                                                       ^ 
                                                       (0x200000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                       << 0xdU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                         >> 0x13U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x400000U 
                                                        ^ 
                                                        (0x400000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                        << 6U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xbU] 
                                                          >> 0x1aU))
                                                       : 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                        << 0x1fU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                          >> 1U)))))))))
                                             : ((((
                                                   (((((0U 
                                                        == 
                                                        (0x1000000U 
                                                         ^ 
                                                         (0x1000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))) 
                                                       | (0U 
                                                          == 
                                                          (0x2000000U 
                                                           ^ 
                                                           (0x2000000U 
                                                            & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                      | (0U 
                                                         == 
                                                         (0x4000000U 
                                                          ^ 
                                                          (0x4000000U 
                                                           & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                     | (0U 
                                                        == 
                                                        (0x8000000U 
                                                         ^ 
                                                         (0x8000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                    | (0U 
                                                       == 
                                                       (0x10000000U 
                                                        ^ 
                                                        (0x10000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                   | (0U 
                                                      == 
                                                      (0x20000000U 
                                                       ^ 
                                                       (0x20000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                  | (0U 
                                                     == 
                                                     (0x40000000U 
                                                      ^ 
                                                      (0x40000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))) 
                                                 | (0U 
                                                    == 
                                                    (0x80000000U 
                                                     ^ 
                                                     (0x80000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U]))))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x1000000U 
                                                   ^ 
                                                   (0x1000000U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                  ? 
                                                 ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                   << 0x18U) 
                                                  | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                     >> 8U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x2000000U 
                                                    ^ 
                                                    (0x2000000U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                    << 0x11U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                      >> 0xfU))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x4000000U 
                                                     ^ 
                                                     (0x4000000U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                     << 0xaU) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                       >> 0x16U))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x8000000U 
                                                      ^ 
                                                      (0x8000000U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                      << 3U) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xcU] 
                                                        >> 0x1dU))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10000000U 
                                                       ^ 
                                                       (0x10000000U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                       << 0x1cU) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                         >> 4U))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20000000U 
                                                        ^ 
                                                        (0x20000000U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                        << 0x15U) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                          >> 0xbU))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x40000000U 
                                                         ^ 
                                                         (0x40000000U 
                                                          & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[1U])))
                                                        ? 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                         << 0xeU) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                           >> 0x12U))
                                                        : 
                                                       ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                         << 7U) 
                                                        | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xdU] 
                                                           >> 0x19U)))))))))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (1U 
                                                   ^ 
                                                   (1U 
                                                    & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U])))
                                                  ? 
                                                 __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (2U 
                                                    ^ 
                                                    (2U 
                                                     & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U])))
                                                   ? 
                                                  ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                    << 0x19U) 
                                                   | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                      >> 7U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (4U 
                                                     ^ 
                                                     (4U 
                                                      & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U])))
                                                    ? 
                                                   ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                     << 0x12U) 
                                                    | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                       >> 0xeU))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (8U 
                                                      ^ 
                                                      (8U 
                                                       & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U])))
                                                     ? 
                                                    ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                      << 0xbU) 
                                                     | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                        >> 0x15U))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x10U 
                                                       ^ 
                                                       (0x10U 
                                                        & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U])))
                                                      ? 
                                                     ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xfU] 
                                                       << 4U) 
                                                      | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xeU] 
                                                         >> 0x1cU))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x20U 
                                                        ^ 
                                                        (0x20U 
                                                         & __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__s[2U])))
                                                       ? 
                                                      ((__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xfU] 
                                                        << 0x1dU) 
                                                       | (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__b[0xfU] 
                                                          >> 3U))
                                                       : 0xcU)))))))))))))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1044_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____035832__246__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s 
        = (((4U == (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)) 
            << 3U) | (((2U == (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)) 
                       << 2U) | (((3U == (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)) 
                                  << 1U) | (0U == (IData)(__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1054_)))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__a 
        = vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1072_;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__Vfuncout 
        = ((8U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
            ? ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                    ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                        ? 3U : 2U) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                                       ? 3U : 1U)) : 
               ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                     ? 3U : 2U) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                                    ? 3U : 0U))) : 
           ((4U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
             ? ((2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                 ? ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                     ? 3U : 2U) : ((1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                                    ? 3U : 1U)) : (
                                                   (2U 
                                                    & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__s))
                                                     ? 3U
                                                     : (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__a)))));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0087_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032967__110__Vfuncout;
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__s 
        = (((6U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)) 
            << 1U) | (3U == (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1045_)));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__b 
        = (0x10000U | ((0x80U & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_))
                        ? (0xff00U | (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_)))
                        : (0xffU & (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1069_))));
    __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__Vfuncout 
        = (0xffffU & ((1U == (1U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__s)))
                       ? __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__b
                       : ((2U == (2U & (IData)(__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__s)))
                           ? (__Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__b 
                              >> 0x10U) : 0U)));
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0025_ 
        = __Vfunc_soc__DOT__sound_board__DOT__main_cpu__DOT____032753__95__Vfuncout;
    vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0088_ 
        = ((IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__clk089__DOT___7_)
            ? (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___0087_)
            : (IData)(vlSelf->__PVT__soc__DOT__sound_board__DOT__main_cpu__DOT___1072_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9\n"); );
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
}
