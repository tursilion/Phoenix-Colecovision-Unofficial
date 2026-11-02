// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__ico(Vwilliams_phoenix___024root* vlSelf);
#endif  // VL_DEBUG

void Vwilliams_phoenix___024root___eval_triggers__ico(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwilliams_phoenix___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vwilliams_phoenix_williams_phoenix___ico_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);

void Vwilliams_phoenix___024root___eval_ico(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___ico_sequent__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__act(Vwilliams_phoenix___024root* vlSelf);
#endif  // VL_DEBUG

void Vwilliams_phoenix___024root___eval_triggers__act(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16 
                                      != vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__1) 
                                     | ((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__1))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clk25) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk25__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->clk48) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk48__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->clk12g) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12g__0))));
    vlSelf->__VactTriggered.set(5U, ((~ (IData)(vlSelf->clk48)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk48__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->clk12) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12__0))));
    vlSelf->__VactTriggered.set(7U, ((~ (IData)(vlSelf->clk12g)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12g__0)));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__cpu_board__DOT___488_) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__cpu_board__DOT___488___0))) 
                                     | ((IData)(vlSelf->clk12g) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12g__0)))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__cpu_board__DOT___488_) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__cpu_board__DOT___488___0))) 
                                     | ((~ (IData)(vlSelf->clk12g)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12g__0))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMISample2)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMISample2__0))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__sound_board__DOT__clk089__DOT___0___0))) 
                                       | ((~ (IData)(vlSelf->clk12g)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12g__0))));
    vlSelf->__VactTriggered.set(0xcU, (((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__sound_board__DOT__clk089__DOT___0___0))) 
                                       | ((IData)(vlSelf->clk12g) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk12g__0)))));
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__1 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__1 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__1 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1;
    vlSelf->__Vtrigprevexpr___TOP__clk25__0 = vlSelf->clk25;
    vlSelf->__Vtrigprevexpr___TOP__clk48__0 = vlSelf->clk48;
    vlSelf->__Vtrigprevexpr___TOP__clk12g__0 = vlSelf->clk12g;
    vlSelf->__Vtrigprevexpr___TOP__clk12__0 = vlSelf->clk12;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__cpu_board__DOT___488___0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__cpu_board__DOT___488_;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMISample2__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMISample2;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__sound_board__DOT__clk089__DOT___0___0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__sound_board__DOT__clk089__DOT___0_;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwilliams_phoenix___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vwilliams_phoenix_williams_phoenix___act_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___act_comb__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);

void Vwilliams_phoenix___024root___eval_act(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___act_sequent__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___act_comb__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
}

VL_INLINE_OPT void Vwilliams_phoenix___024root___nba_sequent__TOP__0(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->sd_cs_n = (1U & (~ (IData)(vlSymsp->TOP__williams_phoenix.__PVT__spi_sel)));
    vlSelf->sram_addr = vlSymsp->TOP__williams_phoenix.sram_addr;
    vlSelf->sram_doe = vlSymsp->TOP__williams_phoenix.sram_doe;
    vlSelf->sram_oe_n = vlSymsp->TOP__williams_phoenix.sram_oe_n;
    vlSelf->sram_dout = vlSymsp->TOP__williams_phoenix.sram_dout;
    vlSelf->sd_mosi = (1U & ((IData)(vlSymsp->TOP__williams_phoenix.__PVT__spi_tx) 
                             >> 7U));
    vlSelf->sd_sclk = vlSymsp->TOP__williams_phoenix.__PVT__spi_sclk_r;
}

VL_INLINE_OPT void Vwilliams_phoenix___024root___nba_sequent__TOP__1(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->run = vlSymsp->TOP__williams_phoenix.run;
}

VL_INLINE_OPT void Vwilliams_phoenix___024root___nba_sequent__TOP__2(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->vid_vsync_n = vlSymsp->TOP__williams_phoenix.vid_vsync_n;
    vlSelf->vid_hsync_n = vlSymsp->TOP__williams_phoenix.vid_hsync_n;
    vlSelf->audio_l = vlSymsp->TOP__williams_phoenix.audio_l;
    vlSelf->audio_r = vlSymsp->TOP__williams_phoenix.audio_r;
    vlSelf->vid_b = vlSymsp->TOP__williams_phoenix.vid_b;
    vlSelf->vid_r = vlSymsp->TOP__williams_phoenix.vid_r;
    vlSelf->vid_g = vlSymsp->TOP__williams_phoenix.vid_g;
    vlSelf->vid_blank = vlSymsp->TOP__williams_phoenix.vid_blank;
}

VL_INLINE_OPT void Vwilliams_phoenix___024root___nba_sequent__TOP__3(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->sram_we_n = vlSymsp->TOP__williams_phoenix.sram_we_n;
}

VL_INLINE_OPT void Vwilliams_phoenix___024root___nba_sequent__TOP__4(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->boot_mode = vlSymsp->TOP__williams_phoenix.boot_mode;
}

void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__1(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__2(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__3(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__4(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__5(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__6(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__7(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__8(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__9(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__10(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__11(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__12(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__13(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__1(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__2(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__3(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__4(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__5(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__6(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__10(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__14(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__11(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__12(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__13(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__14(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__16(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__17(Vwilliams_phoenix_williams_phoenix* vlSelf);

void Vwilliams_phoenix___024root___eval_nba(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__1((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__2((&vlSymsp->TOP__williams_phoenix));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__3((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__4((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__5((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__6((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__7((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__8((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__9((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__10((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__11((&vlSymsp->TOP__williams_phoenix));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__12((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__13((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__1((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x880ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__2((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x890ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__3((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__4((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x310ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__5((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__6((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__7((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1880ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__8((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__9((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1980ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__10((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__14((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x110ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__11((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x90ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__12((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1890ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__13((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x1990ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__14((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x92ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___act_sequent__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x310ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__16((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x318ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___nba_comb__TOP__williams_phoenix__17((&vlSymsp->TOP__williams_phoenix));
    }
    if ((0x493ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___act_comb__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
}
