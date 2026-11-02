// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwilliams_phoenix.h for the primary calling header

#ifndef VERILATED_VWILLIAMS_PHOENIX___024ROOT_H_
#define VERILATED_VWILLIAMS_PHOENIX___024ROOT_H_  // guard

#include "verilated.h"
class Vwilliams_phoenix_williams_phoenix;


class Vwilliams_phoenix__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vwilliams_phoenix___024root final : public VerilatedModule {
  public:
    // CELLS
    Vwilliams_phoenix_williams_phoenix* williams_phoenix;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk25,0,0);
    VL_IN8(clk48,0,0);
    VL_IN8(clk12,0,0);
    VL_IN8(clk12g,0,0);
    VL_OUT8(run,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(game_reset,0,0);
    VL_IN8(kb_joy,4,0);
    VL_OUT8(sram_dout,7,0);
    VL_IN8(sram_din,7,0);
    VL_OUT8(sram_doe,0,0);
    VL_OUT8(sram_we_n,0,0);
    VL_OUT8(sram_oe_n,0,0);
    VL_OUT8(sd_cs_n,0,0);
    VL_OUT8(sd_sclk,0,0);
    VL_OUT8(sd_mosi,0,0);
    VL_IN8(sd_miso,0,0);
    VL_IN8(sd_cd_n,0,0);
    VL_OUT8(vid_r,7,0);
    VL_OUT8(vid_g,7,0);
    VL_OUT8(vid_b,7,0);
    VL_OUT8(vid_hsync_n,0,0);
    VL_OUT8(vid_vsync_n,0,0);
    VL_OUT8(vid_blank,0,0);
    VL_OUT8(boot_mode,0,0);
    VL_IN8(clk_locked,0,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk25__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk48__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk12g__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk12__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__cpu_board__DOT___488___0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMIClear__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__NMISample2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__sound_board__DOT__clk089__DOT___0___0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN16(cv1,9,0);
    VL_IN16(cv2,9,0);
    VL_IN16(snes,11,0);
    VL_IN16(kb_keys,15,0);
    VL_OUT16(audio_l,15,0);
    VL_OUT16(audio_r,15,0);
    SData/*15:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__0;
    SData/*15:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__0;
    SData/*15:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU__1;
    SData/*15:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__pc_p1__1;
    VL_OUT(sram_addr,18,0);
    IData/*23:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*23:0*/ __Vtrigprevexpr___TOP__williams_phoenix____PVT__soc__DOT__mc6809is_gen__02emc6809__DOT__ALU16__1;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vwilliams_phoenix__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vwilliams_phoenix___024root(Vwilliams_phoenix__Syms* symsp, const char* v__name);
    ~Vwilliams_phoenix___024root();
    VL_UNCOPYABLE(Vwilliams_phoenix___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
