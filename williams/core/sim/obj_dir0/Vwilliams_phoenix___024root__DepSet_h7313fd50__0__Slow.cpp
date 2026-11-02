// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix___024root.h"

VL_ATTR_COLD void Vwilliams_phoenix_williams_phoenix___eval_static__TOP__williams_phoenix(Vwilliams_phoenix_williams_phoenix* vlSelf);

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_static(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_static\n"); );
    // Body
    Vwilliams_phoenix_williams_phoenix___eval_static__TOP__williams_phoenix((&vlSymsp->TOP__williams_phoenix));
}

VL_ATTR_COLD void Vwilliams_phoenix_williams_phoenix___eval_initial__TOP__williams_phoenix(Vwilliams_phoenix_williams_phoenix* vlSelf);

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_initial(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_initial\n"); );
    // Body
    Vwilliams_phoenix_williams_phoenix___eval_initial__TOP__williams_phoenix((&vlSymsp->TOP__williams_phoenix));
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1;
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
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwilliams_phoenix___024root___dump_triggers__stl(Vwilliams_phoenix___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_triggers__stl(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
    vlSelf->__VstlTriggered.set(1U, ((vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16 
                                      != vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__0) 
                                     | ((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__0))));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__0)));
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU;
    vlSelf->__Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__0 
        = vlSymsp->TOP__williams_phoenix.__PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwilliams_phoenix___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vwilliams_phoenix___024root___stl_sequent__TOP__0(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->boot_mode = vlSymsp->TOP__williams_phoenix.boot_mode;
    vlSelf->audio_r = vlSymsp->TOP__williams_phoenix.audio_r;
    vlSelf->audio_l = vlSymsp->TOP__williams_phoenix.audio_l;
    vlSelf->vid_blank = vlSymsp->TOP__williams_phoenix.vid_blank;
    vlSelf->vid_vsync_n = vlSymsp->TOP__williams_phoenix.vid_vsync_n;
    vlSelf->vid_hsync_n = vlSymsp->TOP__williams_phoenix.vid_hsync_n;
    vlSelf->vid_b = vlSymsp->TOP__williams_phoenix.vid_b;
    vlSelf->vid_g = vlSymsp->TOP__williams_phoenix.vid_g;
    vlSelf->vid_r = vlSymsp->TOP__williams_phoenix.vid_r;
    vlSelf->sd_mosi = (1U & ((IData)(vlSymsp->TOP__williams_phoenix.__PVT__spi_tx) 
                             >> 7U));
    vlSelf->sd_sclk = vlSymsp->TOP__williams_phoenix.__PVT__spi_sclk_r;
    vlSelf->sd_cs_n = (1U & (~ (IData)(vlSymsp->TOP__williams_phoenix.__PVT__spi_sel)));
    vlSelf->sram_oe_n = vlSymsp->TOP__williams_phoenix.sram_oe_n;
    vlSelf->sram_we_n = vlSymsp->TOP__williams_phoenix.sram_we_n;
    vlSelf->sram_doe = vlSymsp->TOP__williams_phoenix.sram_doe;
    vlSelf->sram_dout = vlSymsp->TOP__williams_phoenix.sram_dout;
    vlSelf->sram_addr = vlSymsp->TOP__williams_phoenix.sram_addr;
    vlSelf->run = vlSymsp->TOP__williams_phoenix.run;
}

VL_ATTR_COLD void Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);
VL_ATTR_COLD void Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__1(Vwilliams_phoenix_williams_phoenix* vlSelf);
VL_ATTR_COLD void Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__2(Vwilliams_phoenix_williams_phoenix* vlSelf);
VL_ATTR_COLD void Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__3(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___act_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);
void Vwilliams_phoenix_williams_phoenix___act_comb__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf);

VL_ATTR_COLD void Vwilliams_phoenix___024root___eval_stl(Vwilliams_phoenix___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwilliams_phoenix___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vwilliams_phoenix___024root___stl_sequent__TOP__0(vlSelf);
        Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__1((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__2((&vlSymsp->TOP__williams_phoenix));
        Vwilliams_phoenix_williams_phoenix___stl_sequent__TOP__williams_phoenix__3((&vlSymsp->TOP__williams_phoenix));
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___act_sequent__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
    if ((7ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vwilliams_phoenix_williams_phoenix___act_comb__TOP__williams_phoenix__0((&vlSymsp->TOP__williams_phoenix));
    }
}
