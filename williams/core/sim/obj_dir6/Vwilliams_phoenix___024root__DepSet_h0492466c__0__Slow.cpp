// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix___024root.h"

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_final(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_triggers__stl(Vwilliams_phoenix___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__stl(Vwilliams_phoenix___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_stl(Vwilliams_phoenix___024root* vlSelf);

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_settle(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vwilliams_phoenix___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vwilliams_phoenix___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../rtl/williams_phoenix.v", 58, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vwilliams_phoenix___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__stl(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.ALU16 or [hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.ALU)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.pc_p1)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__ico(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__act(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.ALU16 or [hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.ALU)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.pc_p1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk25)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk48)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clk12g)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge clk48)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge clk12)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge clk12g)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge williams_phoenix.soc.cpu_board._488_ or posedge clk12g)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge williams_phoenix.soc.cpu_board._488_ or negedge clk12g)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge williams_phoenix.soc.mc6809is_gen.mc6809.NMIClear or negedge williams_phoenix.soc.mc6809is_gen.mc6809.NMISample2)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge williams_phoenix.soc.sound_board.clk089._0_ or negedge clk12g)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge williams_phoenix.soc.sound_board.clk089._0_ or posedge clk12g)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__nba(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.ALU16 or [hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.ALU)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] williams_phoenix.soc.mc6809is_gen.mc6809.pc_p1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk25)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk48)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clk12g)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge clk48)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge clk12)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge clk12g)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge williams_phoenix.soc.cpu_board._488_ or posedge clk12g)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge williams_phoenix.soc.cpu_board._488_ or negedge clk12g)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge williams_phoenix.soc.mc6809is_gen.mc6809.NMIClear or negedge williams_phoenix.soc.mc6809is_gen.mc6809.NMISample2)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge williams_phoenix.soc.sound_board.clk089._0_ or negedge clk12g)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge williams_phoenix.soc.sound_board.clk089._0_ or posedge clk12g)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwilliams_phoenix___024root___ctor_var_reset(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk25 = VL_RAND_RESET_I(1);
    vlSelf->clk48 = VL_RAND_RESET_I(1);
    vlSelf->clk12 = VL_RAND_RESET_I(1);
    vlSelf->clk12g = VL_RAND_RESET_I(1);
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->game_reset = VL_RAND_RESET_I(1);
    vlSelf->cv1 = VL_RAND_RESET_I(10);
    vlSelf->cv2 = VL_RAND_RESET_I(10);
    vlSelf->snes = VL_RAND_RESET_I(12);
    vlSelf->kb_keys = VL_RAND_RESET_I(16);
    vlSelf->kb_joy = VL_RAND_RESET_I(5);
    vlSelf->sram_addr = VL_RAND_RESET_I(19);
    vlSelf->sram_dout = VL_RAND_RESET_I(8);
    vlSelf->sram_din = VL_RAND_RESET_I(8);
    vlSelf->sram_doe = VL_RAND_RESET_I(1);
    vlSelf->sram_we_n = VL_RAND_RESET_I(1);
    vlSelf->sram_oe_n = VL_RAND_RESET_I(1);
    vlSelf->sd_cs_n = VL_RAND_RESET_I(1);
    vlSelf->sd_sclk = VL_RAND_RESET_I(1);
    vlSelf->sd_mosi = VL_RAND_RESET_I(1);
    vlSelf->sd_miso = VL_RAND_RESET_I(1);
    vlSelf->sd_cd_n = VL_RAND_RESET_I(1);
    vlSelf->vid_r = VL_RAND_RESET_I(8);
    vlSelf->vid_g = VL_RAND_RESET_I(8);
    vlSelf->vid_b = VL_RAND_RESET_I(8);
    vlSelf->vid_hsync_n = VL_RAND_RESET_I(1);
    vlSelf->vid_vsync_n = VL_RAND_RESET_I(1);
    vlSelf->vid_blank = VL_RAND_RESET_I(1);
    vlSelf->audio_l = VL_RAND_RESET_I(16);
    vlSelf->audio_r = VL_RAND_RESET_I(16);
    vlSelf->boot_mode = VL_RAND_RESET_I(1);
    vlSelf->clk_locked = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__0 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__0 = VL_RAND_RESET_I(16);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__1 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk25__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk48__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk12g__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk12__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__cpu_board__DOT___488___0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMISample2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__sound_board__DOT__clk089__DOT___0___0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
