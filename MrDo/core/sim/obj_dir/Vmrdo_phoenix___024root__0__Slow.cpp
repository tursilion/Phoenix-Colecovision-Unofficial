// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmrdo_phoenix.h for the primary calling header

#include "Vmrdo_phoenix__pch.h"

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_static__TOP(Vmrdo_phoenix___024root* vlSelf);

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_static(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_static\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmrdo_phoenix___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__game_reset__0 
        = vlSelfRef.game_reset;
    vlSelfRef.__Vtrigprevexpr___TOP__joy1__0 = vlSelfRef.joy1;
    vlSelfRef.__Vtrigprevexpr___TOP__joy2__0 = vlSelfRef.joy2;
    vlSelfRef.__Vtrigprevexpr___TOP__sys__0 = vlSelfRef.sys;
    vlSelfRef.__Vtrigprevexpr___TOP__rot_toggle__0 
        = vlSelfRef.rot_toggle;
    vlSelfRef.__Vtrigprevexpr___TOP__sram_din__0 = vlSelfRef.sram_din;
    vlSelfRef.__Vtrigprevexpr___TOP__sd_miso__0 = vlSelfRef.sd_miso;
    vlSelfRef.__Vtrigprevexpr___TOP__sd_cd_n__0 = vlSelfRef.sd_cd_n;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n__0 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n;
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_initial(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_initial\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 8, 512, 0, "font64.hex"s
                     ,  &(vlSelfRef.mrdo_phoenix__DOT__font)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 8, 2048, 0, "mrdo_boot0.hex"s
                     ,  &(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg0)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 8, 2048, 0, "mrdo_boot1.hex"s
                     ,  &(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg1)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 8, 2048, 0, "mrdo_boot2.hex"s
                     ,  &(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg2)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 8, 2048, 0, "mrdo_boot3.hex"s
                     ,  &(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg3)
                     , 0, ~0ULL);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmrdo_phoenix___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vmrdo_phoenix___024root___stl_sequent__TOP__0(Vmrdo_phoenix___024root* vlSelf);

VL_ATTR_COLD bool Vmrdo_phoenix___024root___eval_stl(Vmrdo_phoenix___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_stl\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmrdo_phoenix___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmrdo_phoenix___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vmrdo_phoenix___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__stl(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_dump_triggers__stl\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmrdo_phoenix___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__ico(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_dump_triggers__ico\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmrdo_phoenix___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__act(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_dump_triggers__act\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmrdo_phoenix___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__nba(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_dump_triggers__nba\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmrdo_phoenix___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__obs(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_dump_triggers__obs\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__react(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_dump_triggers__react\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_final(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_final\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_static__TOP(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_static__TOP\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_addr = 0U;
    vlSelfRef.sram_dout = 0U;
    vlSelfRef.sram_doe = 0U;
    vlSelfRef.sram_wpulse = 0U;
    vlSelfRef.sram_oe_n = 1U;
    vlSelfRef.sd_cs_n = 1U;
    vlSelfRef.sd_sclk = 0U;
    vlSelfRef.sd_mosi = 1U;
    vlSelfRef.vid_r = 0U;
    vlSelfRef.vid_g = 0U;
    vlSelfRef.vid_b = 0U;
    vlSelfRef.vid_hsync_n = 1U;
    vlSelfRef.vid_vsync_n = 1U;
    vlSelfRef.vid_blank = 1U;
    vlSelfRef.boot_mode = 1U;
    vlSelfRef.led_err = 0U;
    vlSelfRef.mrdo_phoenix__DOT__hc = 0U;
    vlSelfRef.mrdo_phoenix__DOT__vc = 0U;
    vlSelfRef.mrdo_phoenix__DOT__cen_pix = 0U;
    vlSelfRef.mrdo_phoenix__DOT__cen_cpu = 0U;
    vlSelfRef.mrdo_phoenix__DOT__acc_pix = 0U;
    vlSelfRef.mrdo_phoenix__DOT__acc_cpu = 0U;
    vlSelfRef.mrdo_phoenix__DOT__go = 0U;
    vlSelfRef.mrdo_phoenix__DOT__acc_psg = 0U;
    vlSelfRef.mrdo_phoenix__DOT__cen_psg = 0U;
    vlSelfRef.mrdo_phoenix__DOT__start_game = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rst_cnt = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__dsw1 = 0xdfU;
    vlSelfRef.mrdo_phoenix__DOT__dsw2 = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__rom_q = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__ld_we = 0U;
    vlSelfRef.mrdo_phoenix__DOT__ld_a = 0U;
    vlSelfRef.mrdo_phoenix__DOT__ld_d = 0U;
    vlSelfRef.mrdo_phoenix__DOT__text_a = 0U;
    vlSelfRef.mrdo_phoenix__DOT__exec_sram = 0U;
    vlSelfRef.mrdo_phoenix__DOT__b_pend = 0U;
    vlSelfRef.mrdo_phoenix__DOT__b_addr = 0U;
    vlSelfRef.mrdo_phoenix__DOT__b_data = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rot = 0U;
    vlSelfRef.mrdo_phoenix__DOT__wbank = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rbank = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rbank_next = 0U;
    vlSelfRef.mrdo_phoenix__DOT__fq_wp = 0U;
    vlSelfRef.mrdo_phoenix__DOT__fq_rp = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rd_pend = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rd_u = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rd_x = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rd_half = 0U;
    vlSelfRef.mrdo_phoenix__DOT__pf_go = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rt_u = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rt_half = 0U;
    vlSelfRef.mrdo_phoenix__DOT__s0_addr = 0U;
    vlSelfRef.mrdo_phoenix__DOT__s0_ok = 0U;
    vlSelfRef.mrdo_phoenix__DOT__wph = 0U;
    vlSelfRef.mrdo_phoenix__DOT__rtag = 0U;
    vlSelfRef.mrdo_phoenix__DOT__lb_we = 0U;
    vlSelfRef.mrdo_phoenix__DOT__lb_wa = 0U;
    vlSelfRef.mrdo_phoenix__DOT__lb_wd = 0U;
    vlSelfRef.mrdo_phoenix__DOT__spi_tx = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__spi_sr = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__spi_rx = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__spi_fast = 0U;
    vlSelfRef.mrdo_phoenix__DOT__spi_start = 0U;
    vlSelfRef.mrdo_phoenix__DOT__spi_busy = 0U;
    vlSelfRef.mrdo_phoenix__DOT__spi_cnt = 0U;
    vlSelfRef.mrdo_phoenix__DOT__spi_div = 0U;
    vlSelfRef.mrdo_phoenix__DOT__wr_n_d = 1U;
    vlSelfRef.mrdo_phoenix__DOT__io_rd_d = 0U;
    vlSelfRef.mrdo_phoenix__DOT__io_q = 0xffU;
    vlSelfRef.mrdo_phoenix__DOT__io_wr_d = 0U;
    vlSelfRef.mrdo_phoenix__DOT__lb_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__area1 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__area2 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__fx1 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__fx2 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__fy1 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__fy2 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__hs = 3U;
    vlSelfRef.mrdo_phoenix__DOT__vs = 3U;
    vlSelfRef.mrdo_phoenix__DOT__bl = 3U;
    vlSelfRef.mrdo_phoenix__DOT__pidx2 = 0U;
    vlSelfRef.audio = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_int = 1U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_n_d = 1U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__ram_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrollx = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrolly = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__flip = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__pal_u001 = 0xffU;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8184125995597919630ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1732245619587558850ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10964689382836863939ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1480252430973524529ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1065920046480943044ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334381717779447139ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2011110639458421288ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3890591524763448818ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16963440467015737144ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5723641302736012899ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8497996196262130297ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__box = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__box_n = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp_stb = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2 = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__dc = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__clip__Vstatic__m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11637221319745760010ull);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq = 1U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq = 1U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd = 1U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr = 1U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2_out = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng = 0x00004000U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__div = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__step = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1_out = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng = 0x00004000U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__div = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__step = 0U;
    vlSelfRef.mrdo_phoenix__DOT__g_h = 0U;
    vlSelfRef.mrdo_phoenix__DOT__g_v = 0U;
    vlSelfRef.mrdo_phoenix__DOT__ev_vbl = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__vram_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__text_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__pix_we = 0U;
    vlSelfRef.mrdo_phoenix__DOT__pix_x = 0U;
    vlSelfRef.mrdo_phoenix__DOT__pix_y = 0U;
    vlSelfRef.mrdo_phoenix__DOT__g_pixel = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bga = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bgc = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fga = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fgc = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_va = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_va = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_code = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_attr = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_code = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_code = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_y = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_attr = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_x = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_ga = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_ga = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg0_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg1_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg0_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg1_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga0_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga1_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga2_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga3_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb_a = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb0_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb1_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb2_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb3_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_we = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wa = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wd = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_ra = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_line = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_color = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_flipx = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_last = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_line = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fx = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fy = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fx = 0U;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fy = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmrdo_phoenix___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmrdo_phoenix___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<8>/*255:0*/ Vmrdo_phoenix__ConstPool__CONST_h7df85da7_0;
extern const VlUnpacked<CData/*7:0*/, 1024> Vmrdo_phoenix__ConstPool__TABLE_h1544183c_0;
extern const VlUnpacked<CData/*7:0*/, 1024> Vmrdo_phoenix__ConstPool__TABLE_h5374dd30_0;

VL_ATTR_COLD void Vmrdo_phoenix___024root___stl_sequent__TOP__0(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___stl_sequent__TOP__0\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 0;
    CData/*0:0*/ mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = 0;
    CData/*7:0*/ mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = 0;
    SData/*8:0*/ mrdo_phoenix__DOT__main__DOT__video__DOT__v_next;
    mrdo_phoenix__DOT__main__DOT__video__DOT__v_next = 0;
    CData/*3:0*/ mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px;
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px = 0;
    CData/*7:0*/ mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b;
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_58;
    __VdfgRegularize_h6e95ff9d_0_58 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    __VdfgRegularize_h6e95ff9d_0_61 = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_65;
    __VdfgRegularize_h6e95ff9d_0_65 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_67;
    __VdfgRegularize_h6e95ff9d_0_67 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_68;
    __VdfgRegularize_h6e95ff9d_0_68 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_71;
    __VdfgRegularize_h6e95ff9d_0_71 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_74;
    __VdfgRegularize_h6e95ff9d_0_74 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_76;
    __VdfgRegularize_h6e95ff9d_0_76 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_77;
    __VdfgRegularize_h6e95ff9d_0_77 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_78;
    __VdfgRegularize_h6e95ff9d_0_78 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_79;
    __VdfgRegularize_h6e95ff9d_0_79 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_81;
    __VdfgRegularize_h6e95ff9d_0_81 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_82;
    __VdfgRegularize_h6e95ff9d_0_82 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_84;
    __VdfgRegularize_h6e95ff9d_0_84 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_86;
    __VdfgRegularize_h6e95ff9d_0_86 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_87;
    __VdfgRegularize_h6e95ff9d_0_87 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_89;
    __VdfgRegularize_h6e95ff9d_0_89 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_90;
    __VdfgRegularize_h6e95ff9d_0_90 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_94;
    __VdfgRegularize_h6e95ff9d_0_94 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_95;
    __VdfgRegularize_h6e95ff9d_0_95 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_96;
    __VdfgRegularize_h6e95ff9d_0_96 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_97;
    __VdfgRegularize_h6e95ff9d_0_97 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_98;
    __VdfgRegularize_h6e95ff9d_0_98 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_99;
    __VdfgRegularize_h6e95ff9d_0_99 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_101;
    __VdfgRegularize_h6e95ff9d_0_101 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_102;
    __VdfgRegularize_h6e95ff9d_0_102 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_104;
    __VdfgRegularize_h6e95ff9d_0_104 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_105;
    __VdfgRegularize_h6e95ff9d_0_105 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_109;
    __VdfgRegularize_h6e95ff9d_0_109 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_110;
    __VdfgRegularize_h6e95ff9d_0_110 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_112;
    __VdfgRegularize_h6e95ff9d_0_112 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_113;
    __VdfgRegularize_h6e95ff9d_0_113 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_122;
    __VdfgRegularize_h6e95ff9d_0_122 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_123;
    __VdfgRegularize_h6e95ff9d_0_123 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_124;
    __VdfgRegularize_h6e95ff9d_0_124 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_125;
    __VdfgRegularize_h6e95ff9d_0_125 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_126;
    __VdfgRegularize_h6e95ff9d_0_126 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_128;
    __VdfgRegularize_h6e95ff9d_0_128 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_129;
    __VdfgRegularize_h6e95ff9d_0_129 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_131;
    __VdfgRegularize_h6e95ff9d_0_131 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_132;
    __VdfgRegularize_h6e95ff9d_0_132 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_133;
    __VdfgRegularize_h6e95ff9d_0_133 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_134;
    __VdfgRegularize_h6e95ff9d_0_134 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_144;
    __VdfgRegularize_h6e95ff9d_0_144 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_146;
    __VdfgRegularize_h6e95ff9d_0_146 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_154;
    __VdfgRegularize_h6e95ff9d_0_154 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_157;
    __VdfgRegularize_h6e95ff9d_0_157 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_159;
    __VdfgRegularize_h6e95ff9d_0_159 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_161;
    __VdfgRegularize_h6e95ff9d_0_161 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_162;
    __VdfgRegularize_h6e95ff9d_0_162 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_163;
    __VdfgRegularize_h6e95ff9d_0_163 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_165;
    __VdfgRegularize_h6e95ff9d_0_165 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_166;
    __VdfgRegularize_h6e95ff9d_0_166 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_167;
    __VdfgRegularize_h6e95ff9d_0_167 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_168;
    __VdfgRegularize_h6e95ff9d_0_168 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_169;
    __VdfgRegularize_h6e95ff9d_0_169 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_170;
    __VdfgRegularize_h6e95ff9d_0_170 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_171;
    __VdfgRegularize_h6e95ff9d_0_171 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_172;
    __VdfgRegularize_h6e95ff9d_0_172 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_174;
    __VdfgRegularize_h6e95ff9d_0_174 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_175;
    __VdfgRegularize_h6e95ff9d_0_175 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_176;
    __VdfgRegularize_h6e95ff9d_0_176 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_177;
    __VdfgRegularize_h6e95ff9d_0_177 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_178;
    __VdfgRegularize_h6e95ff9d_0_178 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_181;
    __VdfgRegularize_h6e95ff9d_0_181 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_182;
    __VdfgRegularize_h6e95ff9d_0_182 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_185;
    __VdfgRegularize_h6e95ff9d_0_185 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_186;
    __VdfgRegularize_h6e95ff9d_0_186 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_187;
    __VdfgRegularize_h6e95ff9d_0_187 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_188;
    __VdfgRegularize_h6e95ff9d_0_188 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_189;
    __VdfgRegularize_h6e95ff9d_0_189 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_192;
    __VdfgRegularize_h6e95ff9d_0_192 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_193;
    __VdfgRegularize_h6e95ff9d_0_193 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_195;
    __VdfgRegularize_h6e95ff9d_0_195 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_196;
    __VdfgRegularize_h6e95ff9d_0_196 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_198;
    __VdfgRegularize_h6e95ff9d_0_198 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_199;
    __VdfgRegularize_h6e95ff9d_0_199 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_200;
    __VdfgRegularize_h6e95ff9d_0_200 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_201;
    __VdfgRegularize_h6e95ff9d_0_201 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_207;
    __VdfgRegularize_h6e95ff9d_0_207 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_212;
    __VdfgRegularize_h6e95ff9d_0_212 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_214;
    __VdfgRegularize_h6e95ff9d_0_214 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_215;
    __VdfgRegularize_h6e95ff9d_0_215 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_216;
    __VdfgRegularize_h6e95ff9d_0_216 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_217;
    __VdfgRegularize_h6e95ff9d_0_217 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_218;
    __VdfgRegularize_h6e95ff9d_0_218 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_219;
    __VdfgRegularize_h6e95ff9d_0_219 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_220;
    __VdfgRegularize_h6e95ff9d_0_220 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_221;
    __VdfgRegularize_h6e95ff9d_0_221 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_222;
    __VdfgRegularize_h6e95ff9d_0_222 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_227;
    __VdfgRegularize_h6e95ff9d_0_227 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_228;
    __VdfgRegularize_h6e95ff9d_0_228 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_230;
    __VdfgRegularize_h6e95ff9d_0_230 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_232;
    __VdfgRegularize_h6e95ff9d_0_232 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_233;
    __VdfgRegularize_h6e95ff9d_0_233 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_235;
    __VdfgRegularize_h6e95ff9d_0_235 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_236;
    __VdfgRegularize_h6e95ff9d_0_236 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_238;
    __VdfgRegularize_h6e95ff9d_0_238 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_239;
    __VdfgRegularize_h6e95ff9d_0_239 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_240;
    __VdfgRegularize_h6e95ff9d_0_240 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_241;
    __VdfgRegularize_h6e95ff9d_0_241 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_244;
    __VdfgRegularize_h6e95ff9d_0_244 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_245;
    __VdfgRegularize_h6e95ff9d_0_245 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_248;
    __VdfgRegularize_h6e95ff9d_0_248 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_251;
    __VdfgRegularize_h6e95ff9d_0_251 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_254;
    __VdfgRegularize_h6e95ff9d_0_254 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_259;
    __VdfgRegularize_h6e95ff9d_0_259 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_260;
    __VdfgRegularize_h6e95ff9d_0_260 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_262;
    __VdfgRegularize_h6e95ff9d_0_262 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_263;
    __VdfgRegularize_h6e95ff9d_0_263 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_264;
    __VdfgRegularize_h6e95ff9d_0_264 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_265;
    __VdfgRegularize_h6e95ff9d_0_265 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_266;
    __VdfgRegularize_h6e95ff9d_0_266 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_269;
    __VdfgRegularize_h6e95ff9d_0_269 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_270;
    __VdfgRegularize_h6e95ff9d_0_270 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_272;
    __VdfgRegularize_h6e95ff9d_0_272 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_273;
    __VdfgRegularize_h6e95ff9d_0_273 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_277;
    __VdfgRegularize_h6e95ff9d_0_277 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_278;
    __VdfgRegularize_h6e95ff9d_0_278 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_279;
    __VdfgRegularize_h6e95ff9d_0_279 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_280;
    __VdfgRegularize_h6e95ff9d_0_280 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_283;
    __VdfgRegularize_h6e95ff9d_0_283 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_284;
    __VdfgRegularize_h6e95ff9d_0_284 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_291;
    __VdfgRegularize_h6e95ff9d_0_291 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_294;
    __VdfgRegularize_h6e95ff9d_0_294 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_296;
    __VdfgRegularize_h6e95ff9d_0_296 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_297;
    __VdfgRegularize_h6e95ff9d_0_297 = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_298;
    __VdfgRegularize_h6e95ff9d_0_298 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_303;
    __VdfgRegularize_h6e95ff9d_0_303 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_304;
    __VdfgRegularize_h6e95ff9d_0_304 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_305;
    __VdfgRegularize_h6e95ff9d_0_305 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_306;
    __VdfgRegularize_h6e95ff9d_0_306 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_311;
    __VdfgRegularize_h6e95ff9d_0_311 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_313;
    __VdfgRegularize_h6e95ff9d_0_313 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_314;
    __VdfgRegularize_h6e95ff9d_0_314 = 0;
    // Body
    vlSelfRef.mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n 
        = (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt));
    vlSelfRef.mrdo_phoenix__DOT__ld_pal = ((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
                                           & (0x00016000U 
                                              == (0x0003ffc0U 
                                                  & vlSelfRef.mrdo_phoenix__DOT__ld_a)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn 
        = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)) 
           & (IData)(vlSelfRef.mrdo_phoenix__DOT__cen_cpu));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__line_start 
        = ((IData)(vlSelfRef.mrdo_phoenix__DOT__cen_pix) 
           & (0x0137U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD 
        = (7U & ((- (IData)((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 5U))))) & 
                 (((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (5U & (- (IData)((7U == (7U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))
                        : (4U & (- (IData)((7U == (7U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))))
                    : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (- (IData)((7U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))
                        : (6U & (- (IData)((7U == (7U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))))) 
                  & (- (IData)((IData)(((0x40U == (0xc0U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                        & ((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                           & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))))))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL 
        = (IData)(((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                   & (0x2fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt 
        = (IData)(((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                   & (0x76U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles)) 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 6U)))))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__mix = (0x000007ffU 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2_out) 
                                                      + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1_out)));
    vlSelfRef.mrdo_phoenix__DOT__fq_empty = ((IData)(vlSelfRef.mrdo_phoenix__DOT__fq_wp) 
                                             == (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_rp));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__d1 = (0x00ffffffU 
                                                  & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp) 
                                                      << 8U) 
                                                     - vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__d2 = (0x00ffffffU 
                                                  & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1 
                                                     - vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__hp = (0x00ffffffU 
                                                  & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2 
                                                     - vlSelfRef.mrdo_phoenix__DOT__main__DOT__dc));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_ci 
        = (0x0000000fU & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q))
                           ? (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ctab
                              [(0x0000001fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q))] 
                              >> 4U) : vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ctab
                          [(0x0000001fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q))]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_315 = ((2U 
                                                   >= (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))
                                                   ? vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period
                                                  [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch]
                                                   : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_316 = ((2U 
                                                   >= (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))
                                                   ? vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period
                                                  [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch]
                                                   : 0U);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait 
        = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) 
              | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_pen 
        = ((2U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg0_q) 
                   >> (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fx)) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg1_q) 
                                   >> (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fx))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_pen 
        = ((2U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg0_q) 
                   >> (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fx)) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg1_q) 
                                   >> (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fx))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310 = (1U 
                                                  & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                                                      & (7U 
                                                         != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) 
                                                     | ((~ 
                                                         ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                                                          | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                           >> 1U))));
    vlSelfRef.mrdo_phoenix__DOT__wait_pt = ((0x0137U 
                                             == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h)) 
                                            & (0x0105U 
                                               == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v)));
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__flip) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__tx 
            = (0x000000ffU & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x)));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ty 
            = (0x000000ffU & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_line)));
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__tx 
            = (0x000000ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ty 
            = (0x000000ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_line));
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_y) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_line)));
    __VdfgRegularize_h6e95ff9d_0_233 = (3U & ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                              >> 1U))))) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                 >> 2U))))) 
                                                 | (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
    mrdo_phoenix__DOT__main__DOT__video__DOT__v_next 
        = (0x000001ffU & (((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v)) 
                          & (- (IData)((0x0105U != (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v))))));
    vlSelfRef.mrdo_phoenix__DOT__text_q = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr;
    __VdfgRegularize_h6e95ff9d_0_259 = (3U & ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                              >> 1U))))) 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                 & (- (IData)(
                                                              (3U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                   >> 2U))))))));
    vlSelfRef.mrdo_phoenix__DOT__m0_addr = ((((IData)(vlSelfRef.boot_mode)
                                               ? 0x10U
                                               : (3U 
                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                     >> 0x0000000dU))) 
                                             << 0x0000000dU) 
                                            | (0x00001fffU 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC 
        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                    [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC]) 
            << 8U) | vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC]);
    vlSelfRef.mrdo_phoenix__DOT__ld_vid = ((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
                                           & (0x00010000U 
                                              == (0x00038000U 
                                                  & vlSelfRef.mrdo_phoenix__DOT__ld_a)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152 = ((0x0000ff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258 = (IData)(
                                                         ((0U 
                                                           == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                                          & (0xc0U 
                                                             == 
                                                             (0xc0U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203 = ((0x36U 
                                                   == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)));
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px 
        = (0x0000000fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_flipx)
                           ? (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col))
                           : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col)));
    __VdfgRegularize_h6e95ff9d_0_251 = ((6U != (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))) 
                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                           >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141 = (1U 
                                                  & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq)) 
                                                     & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr))));
    __VdfgRegularize_h6e95ff9d_0_284 = (7U & ((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275 = (1U 
                                                  & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)));
    __VdfgRegularize_h6e95ff9d_0_74 = ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                        ? 5U : ((1U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                 ? 4U
                                                 : 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_287 = (0x0aU 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                     >> 1U))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_289 = (7U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                     >> 1U))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__intack 
        = (1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1) 
                    | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq))));
    __VdfgRegularize_h6e95ff9d_0_311 = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                 >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118 = (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__vram_q 
        = ((0U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                         >> 0x0000000aU))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bga)
            : ((1U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                             >> 0x0000000aU))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bgc)
                : ((2U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                 >> 0x0000000aU))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fga)
                    : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fgc))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        __VdfgRegularize_h6e95ff9d_0_192 = 5U;
        __VdfgRegularize_h6e95ff9d_0_169 = 4U;
        __VdfgRegularize_h6e95ff9d_0_214 = 1U;
    } else {
        __VdfgRegularize_h6e95ff9d_0_192 = (7U & (5U 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 3U)))))));
        __VdfgRegularize_h6e95ff9d_0_169 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 4U : 3U);
        __VdfgRegularize_h6e95ff9d_0_214 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
    }
    __VdfgRegularize_h6e95ff9d_0_134 = (7U & ((- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                              | (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))));
    __VdfgRegularize_h6e95ff9d_0_264 = (7U & (4U | 
                                              ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))) 
                                               | (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))));
    __VdfgRegularize_h6e95ff9d_0_273 = (7U & (6U | 
                                              ((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 2U))))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                    >> 1U)))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 = ((0xcbU 
                                                   == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                  | (0x36U 
                                                     == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
    __VdfgRegularize_h6e95ff9d_0_262 = ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                        & (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 5U : 
                                            (4U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 2U))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 3U))))))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142 = ((IData)(vlSelfRef.boot_mode) 
                                                  & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq)) 
                                                     & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd))));
    if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                    = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                      >> 1U));
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                    = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                             >> 7U));
            } else {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                    = (0x000000ffU & (1U | (0x000000feU 
                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                               << 1U))));
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                    = (1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                >> 7U)));
            }
        } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                                  | (0x0000007fU & 
                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                      >> 1U))));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                         >> 2U));
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                  << 1U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                = (1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                            >> 2U)));
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                = (0x000000ffU & ((0x00000080U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                  << 7U)) 
                                  | (0x0000007fU & 
                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                      >> 1U))));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                = (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                = (0x000000ffU & ((0x000000feU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                  << 1U)) 
                                  | (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)));
        }
    } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = 
            (0x000000ffU & ((0x00000080U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                            << 7U)) 
                            | (0x0000007fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                              >> 1U))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = 
            (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                   >> 6U));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = 
            (0x000000ffU & ((0x000000feU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                            << 1U)) 
                            | (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                     >> 7U))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = 
            (1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                      >> 6U)));
    }
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        __VdfgRegularize_h6e95ff9d_0_94 = 8U;
        __VdfgRegularize_h6e95ff9d_0_95 = 9U;
        __VdfgRegularize_h6e95ff9d_0_96 = 0x0bU;
        __VdfgRegularize_h6e95ff9d_0_97 = 0x0aU;
        __VdfgRegularize_h6e95ff9d_0_218 = 2U;
        __VdfgRegularize_h6e95ff9d_0_76 = 0x0dU;
        __VdfgRegularize_h6e95ff9d_0_217 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        __VdfgRegularize_h6e95ff9d_0_29 = 5U;
        __VdfgRegularize_h6e95ff9d_0_174 = 5U;
        __VdfgRegularize_h6e95ff9d_0_182 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                             ? 3U : 1U);
        __VdfgRegularize_h6e95ff9d_0_181 = (7U & (5U 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))));
    } else {
        __VdfgRegularize_h6e95ff9d_0_94 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
        __VdfgRegularize_h6e95ff9d_0_95 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
        __VdfgRegularize_h6e95ff9d_0_96 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
        __VdfgRegularize_h6e95ff9d_0_97 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
        __VdfgRegularize_h6e95ff9d_0_218 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        __VdfgRegularize_h6e95ff9d_0_76 = (0x0cU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                          >> 1U)))));
        __VdfgRegularize_h6e95ff9d_0_217 = (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 1U)))))));
        __VdfgRegularize_h6e95ff9d_0_29 = (7U & (5U 
                                                 | (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 1U)))))));
        __VdfgRegularize_h6e95ff9d_0_174 = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 4U : (IData)(__VdfgRegularize_h6e95ff9d_0_169));
        __VdfgRegularize_h6e95ff9d_0_182 = 3U;
        __VdfgRegularize_h6e95ff9d_0_181 = (7U & (5U 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 1U)))))));
    }
    __VdfgRegularize_h6e95ff9d_0_146 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq)) 
                                        & (IData)(vlSelfRef.boot_mode));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106 = (IData)(
                                                         (3U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    __VdfgRegularize_h6e95ff9d_0_157 = (0x0000000fU 
                                        & ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                            ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                               >> 4U)
                                            : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256 = (IData)(
                                                         (8U 
                                                          == 
                                                          (0x0cU 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h7df85da7_0
           [(7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 3U))]);
    __VdfgRegularize_h6e95ff9d_0_123 = (7U & ((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                >> 1U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127 = (IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    if ((3U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 4U)))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183 = 7U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184 = 0x0bU;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72 = 9U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73 = 8U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183 
            = (6U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                     >> 3U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184 
            = (1U | (6U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                           >> 3U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72 = 
            (6U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 3U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73 = 
            (1U | (6U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                         >> 3U)));
    }
    __VdfgRegularize_h6e95ff9d_0_296 = ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                        & (((6U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))) 
                                            << 3U) 
                                           | (7U & 
                                              ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
    __VdfgRegularize_h6e95ff9d_0_294 = (7U & (((4U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 6U
                                                : (6U 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                     >> 3U))))))) 
                                              | (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))));
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180 = 3U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = 
            (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 3U));
        __VdfgRegularize_h6e95ff9d_0_30 = 6U;
        __VdfgRegularize_h6e95ff9d_0_185 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 4U : 3U);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180 
            = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                ? ((0U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 3U))) ? ((0x00000040U 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))
                                              ? 2U : 3U)
                    : ((1U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U))) ? ((0x00000040U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))
                                                  ? 3U
                                                  : 2U)
                        : ((2U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U))) ? 
                           ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))
                             ? 2U : 3U) : ((3U == (3U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))
                                                ? 3U
                                                : 2U)
                                            : 3U))))
                : 3U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = 2U;
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            __VdfgRegularize_h6e95ff9d_0_30 = 4U;
            __VdfgRegularize_h6e95ff9d_0_185 = 5U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_30 = 3U;
            __VdfgRegularize_h6e95ff9d_0_185 = 3U;
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130 = (0x0000000fU 
                                                  & (- (IData)((IData)(
                                                                       (0x20U 
                                                                        == 
                                                                        (0x64U 
                                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
    __VdfgRegularize_h6e95ff9d_0_61 = (1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                              >> 4U) 
                                             | (9U 
                                                < (0x0000000fU 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)))));
    __VdfgRegularize_h6e95ff9d_0_272 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))));
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        __VdfgRegularize_h6e95ff9d_0_84 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 5U : 3U);
        __VdfgRegularize_h6e95ff9d_0_86 = __VdfgRegularize_h6e95ff9d_0_76;
        __VdfgRegularize_h6e95ff9d_0_98 = ((6U == (7U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 2U
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 3U))))
                                            : 2U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194 = 1U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = 3U;
        __VdfgRegularize_h6e95ff9d_0_79 = __VdfgRegularize_h6e95ff9d_0_29;
    } else {
        __VdfgRegularize_h6e95ff9d_0_84 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U);
        __VdfgRegularize_h6e95ff9d_0_86 = __VdfgRegularize_h6e95ff9d_0_272;
        __VdfgRegularize_h6e95ff9d_0_98 = ((IData)(__VdfgRegularize_h6e95ff9d_0_217) 
                                           & (- (IData)(
                                                        (6U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                             >> 3U))))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194 
            = __VdfgRegularize_h6e95ff9d_0_182;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = __VdfgRegularize_h6e95ff9d_0_182;
        __VdfgRegularize_h6e95ff9d_0_79 = __VdfgRegularize_h6e95ff9d_0_181;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295 = ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 4U))) 
                                                  | ((1U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                          >> 4U))) 
                                                     | (2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                            >> 4U)))));
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            __VdfgRegularize_h6e95ff9d_0_77 = 4U;
            __VdfgRegularize_h6e95ff9d_0_170 = 4U;
            __VdfgRegularize_h6e95ff9d_0_82 = 4U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_77 = 3U;
            __VdfgRegularize_h6e95ff9d_0_170 = 3U;
            __VdfgRegularize_h6e95ff9d_0_82 = 3U;
        }
        __VdfgRegularize_h6e95ff9d_0_28 = 4U;
        __VdfgRegularize_h6e95ff9d_0_67 = 5U;
        __VdfgRegularize_h6e95ff9d_0_71 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295)
                                            ? (1U | 
                                               (6U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))
                                            : 8U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = 5U;
    } else {
        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            __VdfgRegularize_h6e95ff9d_0_77 = 5U;
            if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = 5U;
                __VdfgRegularize_h6e95ff9d_0_82 = 4U;
            } else {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = 3U;
                __VdfgRegularize_h6e95ff9d_0_82 = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 4U
                                                    : 3U);
            }
        } else {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                __VdfgRegularize_h6e95ff9d_0_77 = 4U;
                __VdfgRegularize_h6e95ff9d_0_82 = 4U;
            } else {
                __VdfgRegularize_h6e95ff9d_0_77 = 3U;
                __VdfgRegularize_h6e95ff9d_0_82 = 3U;
            }
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = 5U;
        }
        __VdfgRegularize_h6e95ff9d_0_28 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U);
        __VdfgRegularize_h6e95ff9d_0_67 = (4U & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 2U)))));
        __VdfgRegularize_h6e95ff9d_0_170 = __VdfgRegularize_h6e95ff9d_0_169;
        __VdfgRegularize_h6e95ff9d_0_71 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295)
                                             ? (6U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))
                                             : 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                            >> 2U)))));
    }
    __VdfgRegularize_h6e95ff9d_0_113 = (IData)((0x10U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    __VdfgRegularize_h6e95ff9d_0_19 = (IData)((0U != 
                                               (0x41U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282 = ((4U 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 4U))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    __VdfgRegularize_h6e95ff9d_0_128 = (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))));
    __VdfgRegularize_h6e95ff9d_0_51 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                       & (0U != (3U 
                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U))));
    __VdfgRegularize_h6e95ff9d_0_40 = (IData)(((0U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 3U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (1U 
                                                & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (IData)(
                                                        (2U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (IData)(
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (IData)(
                                                        (4U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    __VdfgRegularize_h6e95ff9d_0_133 = (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                          ? 7U : (7U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 2U)))))) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))));
    __VdfgRegularize_h6e95ff9d_0_306 = (0x0000001fU 
                                        & ((0x0000000fU 
                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                                           + ((1U & 
                                               (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                                 >> 1U) 
                                                ^ (IData)(
                                                          ((1U 
                                                            == 
                                                            (5U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))))) 
                                              + (0x0000000fU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                                     ? 
                                                    (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB))
                                                     : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB))))));
    __VdfgRegularize_h6e95ff9d_0_58 = (0x0000000fU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) 
                                          | (- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))));
    vlSelfRef.mrdo_phoenix__DOT__run = (1U & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wait_pt)) 
                                              | (IData)(vlSelfRef.mrdo_phoenix__DOT__go)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bx 
        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrollx) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__tx)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__by 
        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrolly) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ty)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_hit 
        = (IData)(((0x0100U == (0x01f0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum))) 
                   & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_y))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IMode 
        = (3U & ((- (IData)((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))) 
                 | ((- (IData)((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 7U)))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                   >> 6U))))) 
                                                   | (((0x00000020U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                         >> 2U))))) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                            >> 1U))))) 
                                                            | (((1U 
                                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                                 ? 2U
                                                                 : 1U) 
                                                               | (- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                                >> 3U)))))))
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_233))
                                                        : 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? 
                                                         (2U 
                                                          | ((- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                             >> 1U))))) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                                | (- (IData)(
                                                                             (1U 
                                                                              & (~ 
                                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                                >> 2U))))))))
                                                          : 
                                                         (1U 
                                                          | ((- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                             >> 1U))))) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                                | (- (IData)(
                                                                             (1U 
                                                                              & (~ 
                                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                                >> 2U)))))))))
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_233))) 
                                                      | (- (IData)(
                                                                   (0U 
                                                                    == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line 
        = (0x000001ffU & (((IData)(1U) + (IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__v_next)) 
                          & (- (IData)((0x0105U != (IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__v_next))))));
    vlSelfRef.mrdo_phoenix__DOT__ink = (1U & (vlSelfRef.mrdo_phoenix__DOT__font
                                              [((0x000001f8U 
                                                 & (((IData)(vlSelfRef.mrdo_phoenix__DOT__text_q) 
                                                     - (IData)(0x20U)) 
                                                    << 3U)) 
                                                | (IData)(vlSelfRef.mrdo_phoenix__DOT__fy2))] 
                                              >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.mrdo_phoenix__DOT__fx2)))));
    vlSelfRef.mrdo_phoenix__DOT__p0 = (1U & ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__s0_ok) 
                                                 & (vlSelfRef.mrdo_phoenix__DOT__s0_addr 
                                                    == vlSelfRef.mrdo_phoenix__DOT__m0_addr))) 
                                             & ((IData)(vlSelfRef.boot_mode)
                                                 ? 
                                                (0U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                     >> 0x0000000dU)))
                                                 : 
                                                (~ 
                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                  >> 0x0000000fU)))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr 
        = (IData)(((0x00004000U == (0x00006000U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)));
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b 
        = ((0U == (3U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px) 
                         >> 2U))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb0_q)
            : ((1U == (3U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px) 
                             >> 2U))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb1_q)
                : ((2U == (3U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px) 
                                 >> 2U))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb2_q)
                    : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb3_q))));
    vlSelfRef.mrdo_phoenix__DOT__wr_stb = ((IData)(vlSelfRef.mrdo_phoenix__DOT__wr_n_d) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb 
        = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_n_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = ((~ 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 2U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = ((~ 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 1U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 = (IData)(
                                                         ((0xc000U 
                                                           == 
                                                           (0xff00U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301 = ((4U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                      >> 3U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                        >> 3U)));
    vlSelfRef.mrdo_phoenix__DOT__io_wr = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr)) 
                                          & (IData)(__VdfgRegularize_h6e95ff9d_0_146));
    vlSelfRef.mrdo_phoenix__DOT__io_rd = ((IData)(__VdfgRegularize_h6e95ff9d_0_146) 
                                          & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd)) 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetDI 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)) 
                   & (0xf0U == (0xf8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    __VdfgRegularize_h6e95ff9d_0_105 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106));
    __VdfgRegularize_h6e95ff9d_0_43 = ((0x000000f0U 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_157));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = ((~ 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
    __VdfgRegularize_h6e95ff9d_0_266 = ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 2U)))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_123));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237 = (IData)(
                                                         ((0xc0U 
                                                           == 
                                                           (0xc4U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)));
    __VdfgRegularize_h6e95ff9d_0_270 = ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                        & (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                 >> 2U)))))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
    if (__VdfgRegularize_h6e95ff9d_0_61) {
        __VdfgRegularize_h6e95ff9d_0_65 = (0x000001ffU 
                                           & ((IData)(6U) 
                                              + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
        __VdfgRegularize_h6e95ff9d_0_298 = (0x000000ffU 
                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                               - (IData)(6U)));
    } else {
        __VdfgRegularize_h6e95ff9d_0_65 = (0x000001ffU 
                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
        __VdfgRegularize_h6e95ff9d_0_298 = (0x000000ffU 
                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    }
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299 
            = (0x0000000fU & ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                               ? ((5U < (0x0000000fU 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)))
                                   ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                            >> 1U))
                                   : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                      >> 1U)) : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                 >> 1U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = 
            (0x000001ffU & ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                   | (0x99U < (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA))))
                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_298) 
                                - (IData)(0x0160U))
                             : (IData)(__VdfgRegularize_h6e95ff9d_0_298)));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299 
            = (0x0000000fU & ((IData)(__VdfgRegularize_h6e95ff9d_0_61)
                               ? (((9U < (0x0000000fU 
                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA))) 
                                   << 3U) | (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                   >> 1U)))
                               : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                  >> 1U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = 
            (0x000001ffU & ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                   | (9U < (0x0000001fU 
                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_65) 
                                               >> 4U)))))
                             ? ((IData)(0x0060U) + (IData)(__VdfgRegularize_h6e95ff9d_0_65))
                             : (IData)(__VdfgRegularize_h6e95ff9d_0_65)));
    }
    __VdfgRegularize_h6e95ff9d_0_241 = (IData)(((0U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_113)));
    __VdfgRegularize_h6e95ff9d_0_278 = ((IData)(__VdfgRegularize_h6e95ff9d_0_67) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    __VdfgRegularize_h6e95ff9d_0_283 = (7U & ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                              >> 1U))))) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                 | (((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                      ? 2U
                                                      : 
                                                     (2U 
                                                      | (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                        >> 1U))))))) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                      >> 2U)))))))));
    __VdfgRegularize_h6e95ff9d_0_280 = (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 2U)))))) 
                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127))));
    __VdfgRegularize_h6e95ff9d_0_279 = ((- (IData)(
                                                   (6U 
                                                    != 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U))))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_128));
    __VdfgRegularize_h6e95ff9d_0_175 = ((6U == (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))
                                         ? ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_128))
                                         : (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_51));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_40));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54 = (IData)(
                                                        ((6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9));
    __VdfgRegularize_h6e95ff9d_0_297 = (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                                            & ((6U 
                                                                != 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                    >> 3U))) 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276 = ((0x0000000cU 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 4U))) 
                                                  & (- (IData)(
                                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250 = ((6U 
                                                   != 
                                                   (7U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11));
    __VdfgRegularize_h6e95ff9d_0_52 = (IData)(((0x30U 
                                                != 
                                                (0x38U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11));
    __VdfgRegularize_h6e95ff9d_0_42 = (7U & ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                             | (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
    __VdfgRegularize_h6e95ff9d_0_232 = (IData)(((0U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                & ((1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U)))
                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17));
    __VdfgRegularize_h6e95ff9d_0_14 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17));
    __VdfgRegularize_h6e95ff9d_0_291 = ((- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_133));
    __VdfgRegularize_h6e95ff9d_0_132 = ((- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 1U))))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_133));
    __VdfgRegularize_h6e95ff9d_0_305 = (0x0000000fU 
                                        & ((7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 4U)) 
                                           + ((1U & 
                                               ((IData)(__VdfgRegularize_h6e95ff9d_0_306) 
                                                >> 4U)) 
                                              + (7U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                      >> 4U))
                                                     : 
                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                     >> 4U))))));
    __VdfgRegularize_h6e95ff9d_0_129 = ((- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_58));
    __VdfgRegularize_h6e95ff9d_0_314 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17));
    __VdfgRegularize_h6e95ff9d_0_124 = (((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                          ? (0x0dU 
                                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))))
                                          : (0x0cU 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 3U)))))) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                          >> 1U))))));
    __VdfgRegularize_h6e95ff9d_0_126 = (7U & (((4U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? (5U 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))))))
                                                : (5U 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                     >> 3U))))))) 
                                              | (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))));
    __VdfgRegularize_h6e95ff9d_0_125 = (0x0000000fU 
                                        & (((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))
                                             : (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 3U))))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 1U)))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_line 
        = (0x000001ffU & (((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line)) 
                          & (- (IData)((0x0105U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a 
        = (0x00001fffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr)
                           ? vlSelfRef.mrdo_phoenix__DOT__ld_a
                           : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_pen 
        = ((2U & (((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b) 
                   >> (3U & (IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px))) 
                  << 1U)) | (1U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b) 
                                   >> (4U | (3U & (IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px))))));
    __VdfgRegularize_h6e95ff9d_0_144 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
                                         & (~ (IData)(vlSelfRef.boot_mode))) 
                                        & (0x9800U 
                                           == (0xf800U 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (8U == (0xf8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ 
        = (IData)(((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                     & (0x10U == (0xf8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)) 
                   & (0U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246 = (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x0cU 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)));
    __VdfgRegularize_h6e95ff9d_0_104 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 2U)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.mrdo_phoenix__DOT__io_wr_stb = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__io_wr_d)) 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__io_wr));
    vlSelfRef.mrdo_phoenix__DOT__io_rd_stb = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd_d)) 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0xf0U == (0xf0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_105)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix 
        = (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
             ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_259)
                 : (2U & (- (IData)((IData)(((0x0cU 
                                              == (0x0cU 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)))))))
             : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_259)
                 : (1U & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_105)))))) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0xe0U == (0xf0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_105)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_312 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                         >> 6U)) 
                                                     | (0U 
                                                        == (IData)(__VdfgRegularize_h6e95ff9d_0_43))) 
                                                    << 6U) 
                                                   | (0x00000020U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA))) 
                                                  | ((8U 
                                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_157)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             VL_REDXOR_8(__VdfgRegularize_h6e95ff9d_0_43)) 
                                                            << 2U)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255 = (IData)(
                                                         ((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 = ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300 = ((0U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64))
                                                   ? 
                                                  (0x00000011U 
                                                   | (0x0000000eU 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                         >> 2U)))
                                                   : 
                                                  (0x0000000eU 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                      >> 2U)));
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 1U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = 5U;
            __VdfgRegularize_h6e95ff9d_0_212 = (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U));
            __VdfgRegularize_h6e95ff9d_0_215 = (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U));
            __VdfgRegularize_h6e95ff9d_0_68 = ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 4U
                                                : 3U);
            __VdfgRegularize_h6e95ff9d_0_99 = 8U;
            __VdfgRegularize_h6e95ff9d_0_161 = (((4U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 3U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U))))));
            __VdfgRegularize_h6e95ff9d_0_176 = 7U;
            __VdfgRegularize_h6e95ff9d_0_166 = ((- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                >> 2U))))) 
                                                & (((8U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                      >> 4U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                     >> 1U)))))));
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                = ((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 3U))) ? 3U : 2U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = 3U;
            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                __VdfgRegularize_h6e95ff9d_0_212 = 3U;
                __VdfgRegularize_h6e95ff9d_0_215 = 1U;
            } else {
                __VdfgRegularize_h6e95ff9d_0_212 = 
                    ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                      ? 3U : (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                __VdfgRegularize_h6e95ff9d_0_215 = __VdfgRegularize_h6e95ff9d_0_214;
            }
            __VdfgRegularize_h6e95ff9d_0_68 = __VdfgRegularize_h6e95ff9d_0_28;
            __VdfgRegularize_h6e95ff9d_0_99 = (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
            __VdfgRegularize_h6e95ff9d_0_161 = __VdfgRegularize_h6e95ff9d_0_71;
            __VdfgRegularize_h6e95ff9d_0_176 = __VdfgRegularize_h6e95ff9d_0_279;
            __VdfgRegularize_h6e95ff9d_0_166 = __VdfgRegularize_h6e95ff9d_0_67;
        }
        __VdfgRegularize_h6e95ff9d_0_22 = (7U & (2U 
                                                 | ((- (IData)(
                                                               (6U 
                                                                != 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                    >> 3U))))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                         >> 1U)))))))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213 
            = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                     >> 3U));
        __VdfgRegularize_h6e95ff9d_0_219 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        __VdfgRegularize_h6e95ff9d_0_159 = (7U & ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_294)));
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            __VdfgRegularize_h6e95ff9d_0_81 = 4U;
            __VdfgRegularize_h6e95ff9d_0_31 = 4U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_81 = 3U;
            __VdfgRegularize_h6e95ff9d_0_31 = 3U;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
        __VdfgRegularize_h6e95ff9d_0_33 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 & (- (IData)((IData)(
                                                                      ((0x30U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))))));
        __VdfgRegularize_h6e95ff9d_0_221 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        __VdfgRegularize_h6e95ff9d_0_165 = ((IData)(__VdfgRegularize_h6e95ff9d_0_71) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
        __VdfgRegularize_h6e95ff9d_0_78 = ((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_279));
        __VdfgRegularize_h6e95ff9d_0_101 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38;
        __VdfgRegularize_h6e95ff9d_0_162 = ((IData)(__VdfgRegularize_h6e95ff9d_0_67) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
    } else {
        if ((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 3U)))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 3U;
            __VdfgRegularize_h6e95ff9d_0_31 = ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 4U
                                                : (IData)(__VdfgRegularize_h6e95ff9d_0_28));
            __VdfgRegularize_h6e95ff9d_0_33 = (0x0aU 
                                               & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))));
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 1U;
            __VdfgRegularize_h6e95ff9d_0_31 = ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 4U
                                                : 3U);
            __VdfgRegularize_h6e95ff9d_0_33 = 0x0aU;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = 2U;
        __VdfgRegularize_h6e95ff9d_0_22 = (7U & (((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 2U
                                                   : 
                                                  (2U 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                     >> 1U))))))) 
                                                 | (- (IData)(
                                                              (6U 
                                                               != 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                   >> 3U)))))));
        __VdfgRegularize_h6e95ff9d_0_212 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93;
        __VdfgRegularize_h6e95ff9d_0_215 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_219 = ((IData)(__VdfgRegularize_h6e95ff9d_0_214) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U))))));
            __VdfgRegularize_h6e95ff9d_0_101 = __VdfgRegularize_h6e95ff9d_0_51;
        } else {
            __VdfgRegularize_h6e95ff9d_0_219 = (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U));
            __VdfgRegularize_h6e95ff9d_0_101 = __VdfgRegularize_h6e95ff9d_0_40;
        }
        __VdfgRegularize_h6e95ff9d_0_159 = (7U & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))));
        __VdfgRegularize_h6e95ff9d_0_81 = __VdfgRegularize_h6e95ff9d_0_185;
        __VdfgRegularize_h6e95ff9d_0_68 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
        __VdfgRegularize_h6e95ff9d_0_99 = __VdfgRegularize_h6e95ff9d_0_98;
        __VdfgRegularize_h6e95ff9d_0_221 = __VdfgRegularize_h6e95ff9d_0_98;
        __VdfgRegularize_h6e95ff9d_0_165 = __VdfgRegularize_h6e95ff9d_0_296;
        __VdfgRegularize_h6e95ff9d_0_161 = __VdfgRegularize_h6e95ff9d_0_296;
        __VdfgRegularize_h6e95ff9d_0_78 = __VdfgRegularize_h6e95ff9d_0_175;
        __VdfgRegularize_h6e95ff9d_0_176 = __VdfgRegularize_h6e95ff9d_0_175;
        __VdfgRegularize_h6e95ff9d_0_162 = __VdfgRegularize_h6e95ff9d_0_297;
        __VdfgRegularize_h6e95ff9d_0_166 = __VdfgRegularize_h6e95ff9d_0_297;
    }
    __VdfgRegularize_h6e95ff9d_0_236 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237));
    __VdfgRegularize_h6e95ff9d_0_235 = (IData)(((4U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_241)));
    __VdfgRegularize_h6e95ff9d_0_277 = ((- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 1U))))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_278));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = 1U;
                __VdfgRegularize_h6e95ff9d_0_207 = 
                    (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle));
            } else {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = 3U;
                __VdfgRegularize_h6e95ff9d_0_207 = 
                    (1U & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_19)) 
                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                              >> 1U)));
            }
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 = 1U;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = 1U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 
                = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 3U : 1U);
            __VdfgRegularize_h6e95ff9d_0_207 = (1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle));
        }
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = 1U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160;
        __VdfgRegularize_h6e95ff9d_0_207 = (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 = ((0x00000080U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_207)
                                                   : 
                                                  ((~ 
                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 6U)) 
                                                   & (IData)(__VdfgRegularize_h6e95ff9d_0_207)));
    __VdfgRegularize_h6e95ff9d_0_102 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U) & (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15));
    __VdfgRegularize_h6e95ff9d_0_248 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 1U)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_52));
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210 
            = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
               & (IData)(__VdfgRegularize_h6e95ff9d_0_251));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209 
            = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                     | (IData)(__VdfgRegularize_h6e95ff9d_0_251)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100 
            = (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210 
            = __VdfgRegularize_h6e95ff9d_0_52;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209 
            = (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_52));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100 
            = (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_52));
    }
    __VdfgRegularize_h6e95ff9d_0_313 = ((6U != (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36));
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        __VdfgRegularize_h6e95ff9d_0_227 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_40));
        __VdfgRegularize_h6e95ff9d_0_172 = (7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252))));
        __VdfgRegularize_h6e95ff9d_0_171 = (6U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252))));
        __VdfgRegularize_h6e95ff9d_0_34 = (IData)((
                                                   (0x30U 
                                                    == 
                                                    (0x39U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 2U)));
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = 3U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 = 3U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 
                = __VdfgRegularize_h6e95ff9d_0_40;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191 = 1U;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = 2U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 = 2U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 
                = (0U != (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                >> 1U)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191 = 3U;
        }
        __VdfgRegularize_h6e95ff9d_0_89 = __VdfgRegularize_h6e95ff9d_0_86;
        __VdfgRegularize_h6e95ff9d_0_186 = __VdfgRegularize_h6e95ff9d_0_84;
        __VdfgRegularize_h6e95ff9d_0_195 = __VdfgRegularize_h6e95ff9d_0_84;
        __VdfgRegularize_h6e95ff9d_0_196 = (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
        __VdfgRegularize_h6e95ff9d_0_87 = __VdfgRegularize_h6e95ff9d_0_42;
        __VdfgRegularize_h6e95ff9d_0_187 = __VdfgRegularize_h6e95ff9d_0_129;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
    } else {
        __VdfgRegularize_h6e95ff9d_0_227 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115;
        __VdfgRegularize_h6e95ff9d_0_172 = (0x0aU & 
                                            (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
        __VdfgRegularize_h6e95ff9d_0_171 = (7U & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
        __VdfgRegularize_h6e95ff9d_0_34 = (IData)((
                                                   (0x30U 
                                                    == 
                                                    (0x38U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                   & (IData)(__VdfgRegularize_h6e95ff9d_0_14)));
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = 3U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 = 1U;
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                __VdfgRegularize_h6e95ff9d_0_89 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183;
                __VdfgRegularize_h6e95ff9d_0_186 = 5U;
                __VdfgRegularize_h6e95ff9d_0_195 = 4U;
            } else {
                __VdfgRegularize_h6e95ff9d_0_89 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 1U)))));
                __VdfgRegularize_h6e95ff9d_0_186 = 3U;
                __VdfgRegularize_h6e95ff9d_0_195 = 3U;
            }
            __VdfgRegularize_h6e95ff9d_0_87 = __VdfgRegularize_h6e95ff9d_0_29;
            __VdfgRegularize_h6e95ff9d_0_187 = __VdfgRegularize_h6e95ff9d_0_58;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83;
            __VdfgRegularize_h6e95ff9d_0_89 = __VdfgRegularize_h6e95ff9d_0_124;
            __VdfgRegularize_h6e95ff9d_0_186 = __VdfgRegularize_h6e95ff9d_0_82;
            __VdfgRegularize_h6e95ff9d_0_195 = __VdfgRegularize_h6e95ff9d_0_82;
            __VdfgRegularize_h6e95ff9d_0_87 = __VdfgRegularize_h6e95ff9d_0_126;
            __VdfgRegularize_h6e95ff9d_0_187 = __VdfgRegularize_h6e95ff9d_0_125;
        }
        __VdfgRegularize_h6e95ff9d_0_196 = (7U & ((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_126)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204 
            = __VdfgRegularize_h6e95ff9d_0_313;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 
            = __VdfgRegularize_h6e95ff9d_0_313;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53));
    __VdfgRegularize_h6e95ff9d_0_254 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111) 
                                         & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_19))) 
                                        & (6U == (6U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    __VdfgRegularize_h6e95ff9d_0_238 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 1U)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR 
        = (IData)(((((0xa0U == (0xe0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_14)) 
                   & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                      & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))));
    __VdfgRegularize_h6e95ff9d_0_245 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    __VdfgRegularize_h6e95ff9d_0_50 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    __VdfgRegularize_h6e95ff9d_0_131 = ((- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 1U))))) 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                          >> 2U)))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_291)));
    __VdfgRegularize_h6e95ff9d_0_304 = (3U & ((1U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                >> 7U)) 
                                              + ((1U 
                                                  & ((IData)(__VdfgRegularize_h6e95ff9d_0_305) 
                                                     >> 3U)) 
                                                 + 
                                                 (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                       >> 7U))
                                                      : 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                      >> 7U))))));
    __VdfgRegularize_h6e95ff9d_0_240 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_314));
    __VdfgRegularize_h6e95ff9d_0_122 = (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_86)
                                          : ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                             & (IData)(__VdfgRegularize_h6e95ff9d_0_124))) 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 2U)))));
    __VdfgRegularize_h6e95ff9d_0_263 = (7U & ((IData)(__VdfgRegularize_h6e95ff9d_0_181) 
                                              | (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr2 
        = ((2U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_144));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr1 
        = ((1U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_144));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__din = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd)
                                                       ? 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd_stb)
                                                        ? (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_rx)
                                                        : (IData)(vlSelfRef.mrdo_phoenix__DOT__io_q))
                                                       : 
                                                      ((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0xe000U 
                                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)))
                                                        ? 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__exec_sram)
                                                         ? (IData)(vlSelfRef.mrdo_phoenix__DOT__rom_q)
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel))
                                                          ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga0_q)
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel))
                                                           ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga1_q)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel))
                                                            ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga2_q)
                                                            : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga3_q)))))
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x0000001fU 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                           ? (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_rx)
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                            ? 
                                                           (((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_busy) 
                                                             << 7U) 
                                                            | (0x00000040U 
                                                               & ((~ (IData)(vlSelfRef.sd_cd_n)) 
                                                                  << 6U)))
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x0000001fU 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                             ? (IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend)
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0x0000001fU 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                              ? 
                                                             (0x01e0U 
                                                              <= (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))
                                                              : 
                                                             ((6U 
                                                               == 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                               ? Vmrdo_phoenix__ConstPool__TABLE_h1544183c_0
                                                              [
                                                              (((IData)(vlSelfRef.joy1) 
                                                                << 5U) 
                                                               | (IData)(vlSelfRef.sys))]
                                                               : 
                                                              ((7U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                                ? Vmrdo_phoenix__ConstPool__TABLE_h5374dd30_0
                                                               [
                                                               (((IData)(vlSelfRef.joy2) 
                                                                 << 5U) 
                                                                | (IData)(vlSelfRef.sys))]
                                                                : 0xffU)))))) 
                                                         | (- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145))))))
                                                         : 
                                                        (((0x0eU 
                                                           == 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                               >> 0x0000000cU)))
                                                           ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__ram_q)
                                                           : 
                                                          ((8U 
                                                            == 
                                                            (0x0000000fU 
                                                             & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                                >> 0x0000000cU)))
                                                            ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__vram_q)
                                                            : 
                                                           ((- (IData)((IData)(vlSelfRef.boot_mode))) 
                                                            | ((0x00008000U 
                                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))
                                                                ? 
                                                               ((IData)(
                                                                        (0x9803U 
                                                                         == 
                                                                         (0xf803U 
                                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))
                                                                 ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__pal_u001)
                                                                 : 
                                                                (((0U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                                   ? Vmrdo_phoenix__ConstPool__TABLE_h1544183c_0
                                                                  [
                                                                  (((IData)(vlSelfRef.joy1) 
                                                                    << 5U) 
                                                                   | (IData)(vlSelfRef.sys))]
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                                    ? Vmrdo_phoenix__ConstPool__TABLE_h5374dd30_0
                                                                   [
                                                                   (((IData)(vlSelfRef.joy2) 
                                                                     << 5U) 
                                                                    | (IData)(vlSelfRef.sys))]
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                                     ? (IData)(vlSelfRef.mrdo_phoenix__DOT__dsw1)
                                                                     : (IData)(vlSelfRef.mrdo_phoenix__DOT__dsw2)))) 
                                                                 | (- (IData)(
                                                                              (0x14U 
                                                                               != 
                                                                               (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                                                >> 0x0000000bU)))))))
                                                                : (IData)(vlSelfRef.mrdo_phoenix__DOT__rom_q))))) 
                                                         | (- (IData)((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__intack))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_309 = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 3U))) 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U) 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U) 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56) 
                                                  & (0x60U 
                                                     == 
                                                     (0x70U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0x20U == (0x30U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_236)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0x30U == (0x30U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_236)));
    __VdfgRegularize_h6e95ff9d_0_109 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_235));
    __VdfgRegularize_h6e95ff9d_0_230 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U) & (IData)(__VdfgRegularize_h6e95ff9d_0_101));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_249 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 2U) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_248));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118;
        __VdfgRegularize_h6e95ff9d_0_178 = __VdfgRegularize_h6e95ff9d_0_31;
        __VdfgRegularize_h6e95ff9d_0_46 = __VdfgRegularize_h6e95ff9d_0_33;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119;
        __VdfgRegularize_h6e95ff9d_0_163 = (7U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                 >> 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_42)));
        __VdfgRegularize_h6e95ff9d_0_199 = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_129)
                                             : ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_125)));
        __VdfgRegularize_h6e95ff9d_0_220 = __VdfgRegularize_h6e95ff9d_0_99;
        __VdfgRegularize_h6e95ff9d_0_222 = __VdfgRegularize_h6e95ff9d_0_221;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26;
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_178 = __VdfgRegularize_h6e95ff9d_0_30;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
        } else {
            __VdfgRegularize_h6e95ff9d_0_178 = ((1U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_77));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36;
        }
        __VdfgRegularize_h6e95ff9d_0_46 = ((IData)(__VdfgRegularize_h6e95ff9d_0_71) 
                                           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127))));
        __VdfgRegularize_h6e95ff9d_0_163 = (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_159));
        __VdfgRegularize_h6e95ff9d_0_199 = ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_132));
        __VdfgRegularize_h6e95ff9d_0_220 = __VdfgRegularize_h6e95ff9d_0_219;
        __VdfgRegularize_h6e95ff9d_0_222 = __VdfgRegularize_h6e95ff9d_0_219;
    }
    __VdfgRegularize_h6e95ff9d_0_216 = ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213)
                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_215))
                                         : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213)
                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_212)));
    __VdfgRegularize_h6e95ff9d_0_177 = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_176)
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_280));
    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        __VdfgRegularize_h6e95ff9d_0_193 = __VdfgRegularize_h6e95ff9d_0_266;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276;
        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_167 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_289;
            __VdfgRegularize_h6e95ff9d_0_168 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_287;
        } else {
            __VdfgRegularize_h6e95ff9d_0_167 = __VdfgRegularize_h6e95ff9d_0_165;
            __VdfgRegularize_h6e95ff9d_0_168 = __VdfgRegularize_h6e95ff9d_0_166;
        }
    } else {
        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_193 = __VdfgRegularize_h6e95ff9d_0_123;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
            __VdfgRegularize_h6e95ff9d_0_167 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_289;
            __VdfgRegularize_h6e95ff9d_0_168 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_287;
        } else {
            __VdfgRegularize_h6e95ff9d_0_193 = ((- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                >> 1U))))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_270));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 
                = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                       >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38));
            __VdfgRegularize_h6e95ff9d_0_167 = __VdfgRegularize_h6e95ff9d_0_161;
            __VdfgRegularize_h6e95ff9d_0_168 = __VdfgRegularize_h6e95ff9d_0_162;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179 
            = ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 2U) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_238));
    __VdfgRegularize_h6e95ff9d_0_110 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 2U)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_238));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RstP 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0xc6U == (0xc6U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_245)));
    __VdfgRegularize_h6e95ff9d_0_244 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 1U)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_245));
    __VdfgRegularize_h6e95ff9d_0_48 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 2U) & (IData)(__VdfgRegularize_h6e95ff9d_0_34));
    __VdfgRegularize_h6e95ff9d_0_112 = (IData)(((0U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_50)));
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = (IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_305) 
                    >> 3U) ^ ((IData)(__VdfgRegularize_h6e95ff9d_0_304) 
                              >> 1U)));
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x00000080U & ((IData)(__VdfgRegularize_h6e95ff9d_0_304) 
                           << 7U)) | ((0x00000070U 
                                       & ((IData)(__VdfgRegularize_h6e95ff9d_0_305) 
                                          << 4U)) | 
                                      (0x0000000fU 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_306))));
    __VdfgRegularize_h6e95ff9d_0_154 = (2U | ((((4U 
                                                 & ((~ 
                                                     ((IData)(__VdfgRegularize_h6e95ff9d_0_306) 
                                                      >> 4U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                      >> 2U))) 
                                               << 2U) 
                                              | (1U 
                                                 & (~ 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_304) 
                                                     >> 1U)))));
    __VdfgRegularize_h6e95ff9d_0_239 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 2U)) 
                                        & ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_240)
                                            : (IData)(__VdfgRegularize_h6e95ff9d_0_50)));
    __VdfgRegularize_h6e95ff9d_0_265 = ((IData)(__VdfgRegularize_h6e95ff9d_0_89) 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 2U)))));
    __VdfgRegularize_h6e95ff9d_0_269 = (7U & ((IData)(__VdfgRegularize_h6e95ff9d_0_79) 
                                              | (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                               >> 1U))))));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 
            = __VdfgRegularize_h6e95ff9d_0_248;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88;
        __VdfgRegularize_h6e95ff9d_0_90 = __VdfgRegularize_h6e95ff9d_0_186;
        __VdfgRegularize_h6e95ff9d_0_198 = __VdfgRegularize_h6e95ff9d_0_195;
        __VdfgRegularize_h6e95ff9d_0_201 = (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_196));
        __VdfgRegularize_h6e95ff9d_0_189 = __VdfgRegularize_h6e95ff9d_0_187;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39;
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 
                = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 1U : 3U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 = 3U;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80;
        }
        __VdfgRegularize_h6e95ff9d_0_90 = __VdfgRegularize_h6e95ff9d_0_81;
        __VdfgRegularize_h6e95ff9d_0_198 = __VdfgRegularize_h6e95ff9d_0_81;
        __VdfgRegularize_h6e95ff9d_0_201 = (7U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                 >> 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_263)));
        __VdfgRegularize_h6e95ff9d_0_189 = __VdfgRegularize_h6e95ff9d_0_132;
    }
    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206 
            = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 2U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205));
        __VdfgRegularize_h6e95ff9d_0_228 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231;
        __VdfgRegularize_h6e95ff9d_0_200 = __VdfgRegularize_h6e95ff9d_0_199;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206 
            = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 2U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204));
        __VdfgRegularize_h6e95ff9d_0_228 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 2U)) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_227));
        __VdfgRegularize_h6e95ff9d_0_200 = __VdfgRegularize_h6e95ff9d_0_189;
    }
    __VdfgRegularize_h6e95ff9d_0_188 = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_87)
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_269));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
            ? (1U | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                     << 2U)) : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Call 
        = (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
             ? (IData)(__VdfgRegularize_h6e95ff9d_0_109)
             : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_109)
                 : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_235)
                     : (IData)(__VdfgRegularize_h6e95ff9d_0_109)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BC 
        = (IData)((((0xa0U == (0xe4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_244)) 
                   & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                      & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243 = (IData)(
                                                         (((0x44U 
                                                            == 
                                                            (0xc4U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_244)) 
                                                          & (1U 
                                                             != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))));
    if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i 
            = (IData)(((0xd0U == (0xf0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)));
        if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                         >> 3U));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_193)
                            : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (IData)(__VdfgRegularize_h6e95ff9d_0_266)
                                : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_123)
                                    : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_262)
                                        : (IData)(__VdfgRegularize_h6e95ff9d_0_270)))))
                        : (IData)(__VdfgRegularize_h6e95ff9d_0_193))
                    : ((6U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_284)
                        : 7U));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                    >> 6U) & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                               ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_102)
                                       : (IData)(__VdfgRegularize_h6e95ff9d_0_230))
                                   : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_102)
                                       : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                           ? (IData)(__VdfgRegularize_h6e95ff9d_0_101)
                                           : (IData)(
                                                     (((0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                                       & (3U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                      & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                          >> 2U) 
                                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_113)))))))
                               : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_102)
                                       : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                           ? (IData)(__VdfgRegularize_h6e95ff9d_0_101)
                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)))
                                   : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                       ? (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 2U) & 
                                          ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)
                                            : (IData)(__VdfgRegularize_h6e95ff9d_0_40)))
                                       : (IData)(__VdfgRegularize_h6e95ff9d_0_230)))));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                = (1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U) & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_239)
                                     : ((0x00000010U 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_239)
                                         : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? ((~ 
                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 2U)) 
                                                & ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_240)
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_14)))
                                             : ((~ 
                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 2U)) 
                                                & ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)
                                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_314))
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_50))))))));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                = (0x0000000fU & (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((0x00000010U 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_200)
                                        : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_199)
                                            : ((4U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? (IData)(__VdfgRegularize_h6e95ff9d_0_187)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                       >> 1U))))) 
                                                       & (((4U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                            ? 7U
                                                            : 
                                                           (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_113)))) 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))))
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_133)))))
                                    : ((0x00000010U 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_200)
                                        : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_129)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                     >> 1U))))) 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                       >> 2U)))) 
                                                        | (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                         >> 3U))))))
                                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_125)))
                                                : (IData)(__VdfgRegularize_h6e95ff9d_0_132))
                                            : (IData)(__VdfgRegularize_h6e95ff9d_0_189)))) 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 6U))))));
        } else {
            if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                    = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 3U));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (((6U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_128)
                         : (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                   >> 3U) & (- (IData)(
                                                       (6U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U)))))))) 
                       & (- (IData)((0x36U != (0x0000003fU 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                    = (IData)((((0x30U == (0x38U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                   >> 1U)) & ((0x36U 
                                               != (0x0000003fU 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                              & (6U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
            } else if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = __VdfgRegularize_h6e95ff9d_0_222;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (IData)(__VdfgRegularize_h6e95ff9d_0_78)
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_277));
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = __VdfgRegularize_h6e95ff9d_0_48;
                    } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = __VdfgRegularize_h6e95ff9d_0_221;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = __VdfgRegularize_h6e95ff9d_0_78;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = __VdfgRegularize_h6e95ff9d_0_34;
                    } else {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U));
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = __VdfgRegularize_h6e95ff9d_0_280;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255;
                    }
                } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                        = __VdfgRegularize_h6e95ff9d_0_222;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_78)
                            : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U))))) 
                                   & ((- (IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 2U))))) 
                                      & (((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                           ? 5U : (4U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 4U)))))) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_278)));
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                        = __VdfgRegularize_h6e95ff9d_0_48;
                } else {
                    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0x0cU : (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_98));
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = __VdfgRegularize_h6e95ff9d_0_34;
                    } else {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U));
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116));
                    }
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = __VdfgRegularize_h6e95ff9d_0_177;
                }
            } else {
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = __VdfgRegularize_h6e95ff9d_0_220;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = __VdfgRegularize_h6e95ff9d_0_48;
                    } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = __VdfgRegularize_h6e95ff9d_0_99;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = __VdfgRegularize_h6e95ff9d_0_34;
                    } else {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                            = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)) : 
                               ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                 ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)) : (IData)(__VdfgRegularize_h6e95ff9d_0_218)));
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36));
                    }
                } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                        = __VdfgRegularize_h6e95ff9d_0_220;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                        = __VdfgRegularize_h6e95ff9d_0_48;
                } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                        = __VdfgRegularize_h6e95ff9d_0_99;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                        = __VdfgRegularize_h6e95ff9d_0_34;
                } else {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                        = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 3U));
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                        = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                            : ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_51)
                                   : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_51)))));
                }
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_176)
                            : (IData)(__VdfgRegularize_h6e95ff9d_0_277))
                        : (IData)(__VdfgRegularize_h6e95ff9d_0_177));
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                = (1U & (IData)(((((((0U == (0x78U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)) 
                                    & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) 
                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)) 
                                  & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_241))));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                = (0x0000000fU & (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                    : ((0x00000010U 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179)
                                        : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276)
                                            : (((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282)
                                                 : 
                                                (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_58)
                                                   : 
                                                  ((- (IData)((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle))) 
                                                   & (IData)(__VdfgRegularize_h6e95ff9d_0_58))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                 >> 2U))))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 6U)))))));
        }
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i 
            = ((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
               & ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                   ? (IData)((((0x20U == (0x60U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
                              & ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                  ? (IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))))
                   : (IData)(((0x40U == (0x46U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))));
        if ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                    = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_97)
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                        ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))
                                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 0x0aU
                                            : (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_97))
                            : (IData)(__VdfgRegularize_h6e95ff9d_0_97))
                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_96)
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                        ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))
                                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 0x0bU
                                            : (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_96))
                            : (IData)(__VdfgRegularize_h6e95ff9d_0_96)));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                    = __VdfgRegularize_h6e95ff9d_0_254;
            } else {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                    = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_95)
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                        ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))
                                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 9U : 
                                           (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_95))
                            : (IData)(__VdfgRegularize_h6e95ff9d_0_95))
                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_94)
                                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                        ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))
                                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 8U : 
                                           (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_94))
                            : (IData)(__VdfgRegularize_h6e95ff9d_0_94)));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                    = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                           >> 6U)) & (IData)(__VdfgRegularize_h6e95ff9d_0_254));
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR));
        } else if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 3U)) : ((0x00000020U 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_218)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 3U))))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_217))))
                                         : (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                = ((- (IData)((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 1U))))) 
                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130) 
                      & (IData)(__VdfgRegularize_h6e95ff9d_0_284)));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                = (IData)(((0x20U == (0x64U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                           & ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                               ? (IData)(__VdfgRegularize_h6e95ff9d_0_14)
                               : (IData)(__VdfgRegularize_h6e95ff9d_0_50))));
        } else {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
                = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_216)
                            : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 0x0dU
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 3U))))
                                            : (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93))
                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_215))
                                : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 0x0eU
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 3U))))
                                            : (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93))
                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_212))))
                        : (IData)(__VdfgRegularize_h6e95ff9d_0_216))
                    : (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 3U)));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                = (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                     ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_168)
                         : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_172)
                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_166))
                             : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_172)
                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_162))))
                     : (IData)(__VdfgRegularize_h6e95ff9d_0_168)) 
                   & (- (IData)((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                       >> 6U)))));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write 
                = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                    >> 6U) & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                               ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_228)
                                   : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                       ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114))
                                       : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)
                                           : (IData)(__VdfgRegularize_h6e95ff9d_0_227))))
                               : (IData)(__VdfgRegularize_h6e95ff9d_0_228)));
        }
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
            = (0x0000000fU & (((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                     ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 0x0eU
                                                  : 6U)
                                              : (((8U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 0x0aU
                                                   : 2U) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 2U)))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))))
                                         : (((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                              ? 0x0eU
                                              : 6U) 
                                            & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_14)))))
                                     : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 0x0cU
                                             : (((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 0x0eU
                                                  : 6U) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                 >> 1U))))))
                                         : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 0x0cU
                                             : ((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 0x0eU
                                                  : 6U)
                                                 : 
                                                (((8U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 0x0dU
                                                   : 5U) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 2U))))))))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130))
                                : (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                     ? ((0x00000010U 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? ((- (IData)((IData)(
                                                                   (4U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_291))
                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_131))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_131))
                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_131)) 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 6U)))))) 
                              & (- (IData)((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))))));
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BT 
        = (IData)((((0xa0U == (0xe0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                    & (IData)(__VdfgRegularize_h6e95ff9d_0_112)) 
                   & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                      & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpE 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0U == (0xc0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_110)
                       : (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                           >> 4U) & ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_110)
                                      : (IData)(__VdfgRegularize_h6e95ff9d_0_112))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__no_read 
        = (1U & (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                   ? (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                              & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                  ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_232)
                                      : (IData)(__VdfgRegularize_h6e95ff9d_0_110))
                                  : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                      ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_232)
                                          : (IData)(__VdfgRegularize_h6e95ff9d_0_112))
                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246)))))
                   : ((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                      & ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                          ? (IData)(((0x20U == (0x64U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                     & ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                         : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(
                                                       ((0U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                                        & (0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 2U)))))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)))))
                          : (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U) & ((0x00000020U 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((0x00000010U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_104)
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_104)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_104)))))) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203)) 
                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                       >> 6U))));
    __VdfgRegularize_h6e95ff9d_0_303 = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_154)
                                         : ((0x00000010U 
                                             & (IData)(__VdfgRegularize_h6e95ff9d_0_306)) 
                                            | ((0x0000000cU 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                                               | (1U 
                                                  & ((IData)(__VdfgRegularize_h6e95ff9d_0_304) 
                                                     >> 1U)))));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                    = mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 
                    = (2U | ((((6U & ((IData)(__VdfgRegularize_h6e95ff9d_0_154) 
                                      >> 2U)) | (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v)) 
                              << 2U) | (1U & (~ ((IData)(__VdfgRegularize_h6e95ff9d_0_304) 
                                                 >> 1U)))));
            } else {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                    = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 
                    = (0x0000000cU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
            }
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB))
                    : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 
                = ((0x00000010U & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)) 
                                   << 4U)) | (0x0000000cU 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)));
        }
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 
            = ((0x00000018U & (IData)(__VdfgRegularize_h6e95ff9d_0_303)) 
               | (((IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                   << 2U) | (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_303))));
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB 
        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                    [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB]) 
            << 8U) | vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB]);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16 
        = (0x0000ffffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC) 
                          + ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpE)
                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                              : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r)
                                  ? 0xfffeU : 1U))));
    if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR));
        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
    } else if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = __VdfgRegularize_h6e95ff9d_0_122;
                            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                                = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_195)
                                    : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U)
                                        : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? 6U : 
                                           ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 5U : 3U))));
                        } else {
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = __VdfgRegularize_h6e95ff9d_0_265;
                            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                                = __VdfgRegularize_h6e95ff9d_0_90;
                        }
                    } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = __VdfgRegularize_h6e95ff9d_0_122;
                        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                            = __VdfgRegularize_h6e95ff9d_0_198;
                    } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = __VdfgRegularize_h6e95ff9d_0_89;
                        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                            = __VdfgRegularize_h6e95ff9d_0_186;
                    } else {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((- (IData)((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 1U)))) 
                               & (IData)(__VdfgRegularize_h6e95ff9d_0_262));
                        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                            = ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                        ? 4U : ((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                  ? 4U
                                                  : 3U)
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? 4U
                                                     : 3U))))))
                                    : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                        ? 4U : 3U))
                                : (IData)(__VdfgRegularize_h6e95ff9d_0_185));
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = __VdfgRegularize_h6e95ff9d_0_122;
                        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                            = __VdfgRegularize_h6e95ff9d_0_198;
                    } else {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (IData)(__VdfgRegularize_h6e95ff9d_0_89)
                                : (7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)))));
                        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                            = __VdfgRegularize_h6e95ff9d_0_90;
                    }
                } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_86)
                             : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                 ? (((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                      ? 0x0dU : (0x0cU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 3U)))))) 
                                    & (- (IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 1U))))))
                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_124))) 
                           & (- (IData)((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 2U)))));
                    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                        = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (IData)(__VdfgRegularize_h6e95ff9d_0_84)
                                : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_170)
                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_82)))
                            : (IData)(__VdfgRegularize_h6e95ff9d_0_81));
                } else {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = __VdfgRegularize_h6e95ff9d_0_265;
                    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                        = __VdfgRegularize_h6e95ff9d_0_90;
                }
            } else {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((6U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                        ? ((- (IData)((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                           & (IData)(__VdfgRegularize_h6e95ff9d_0_272))
                        : (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                    = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                        ? 4U : 3U);
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                = ((- (IData)((6U != (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                   & (((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U))) ? (7U 
                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))))
                        : (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                      & (- (IData)((0x36U != (0x0000003fU 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                    ? 4U : 3U);
        } else if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                = ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_46)
                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_33)
                            : (7U & ((- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                     & ((- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U))))) 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                          >> 1U)))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                            >> 2U))))))))))
                    : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_46)
                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_33)
                            : ((- (IData)((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                               & ((- (IData)((1U & 
                                              (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U))))) 
                                  & (((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                       ? 5U : (4U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 3U)))))) 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 1U))))))))));
            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                = ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_178)
                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_30)
                            : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                    ? 4U : 3U) : (IData)(__VdfgRegularize_h6e95ff9d_0_77)))));
        } else if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = __VdfgRegularize_h6e95ff9d_0_46;
                mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                    = __VdfgRegularize_h6e95ff9d_0_178;
            } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = __VdfgRegularize_h6e95ff9d_0_33;
                mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                    = __VdfgRegularize_h6e95ff9d_0_31;
            } else if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = (7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))));
                mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                    = __VdfgRegularize_h6e95ff9d_0_30;
            } else {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = (0x0aU & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))));
                mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                    = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                            ? 4U : 3U) : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                           ? 5U : (IData)(__VdfgRegularize_h6e95ff9d_0_77)));
            }
        } else if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                = __VdfgRegularize_h6e95ff9d_0_46;
            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                    : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_30)
                        : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_28)
                            : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                ? 4U : 3U))));
        } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                = __VdfgRegularize_h6e95ff9d_0_33;
            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                = __VdfgRegularize_h6e95ff9d_0_31;
        } else if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                = (7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))));
            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                = __VdfgRegularize_h6e95ff9d_0_30;
        } else {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_76)
                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_76) 
                        & (- (IData)((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle))))) 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
            mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
                = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                        ? 4U : 3U) : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_174)
                                       : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)
                                           ? (IData)(__VdfgRegularize_h6e95ff9d_0_174)
                                           : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                               ? 4U
                                               : 3U))));
        }
    } else if ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR));
        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
            = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                            ? 4U : 3U) : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                           ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                               ? 4U
                                               : 3U)
                                           : (IData)(__VdfgRegularize_h6e95ff9d_0_28)))
                    : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                        ? 4U : 3U)) : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                        ? 4U : 3U));
    } else if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                 ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                     ? 0x0aU : (6U & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U))))))
                 : (6U & ((- (IData)((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                          & (- (IData)((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U))))))) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130));
        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
            = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                    ? 4U : 3U) : ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                       ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                           ? 4U : 3U)
                                       : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                           ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 5U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                      ? 4U
                                                      : 3U)
                                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_74))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? 4U
                                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_74)))))
                                           : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                               ? 4U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 5U
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_74))))))
                                   : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                       ? 4U : 3U)));
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                 ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_167)
                     : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_171)
                             : (IData)(__VdfgRegularize_h6e95ff9d_0_165))
                         : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_171)
                             : (IData)(__VdfgRegularize_h6e95ff9d_0_161))))
                 : (IData)(__VdfgRegularize_h6e95ff9d_0_167)) 
               & (- (IData)((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                   >> 6U)))));
        mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
            = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                ? 4U : 3U) : (IData)(__VdfgRegularize_h6e95ff9d_0_68))
                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_170)
                                    : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                        ? 4U : 3U))
                                : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                    ? 4U : 3U)) : (IData)(__VdfgRegularize_h6e95ff9d_0_68)))
                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? 5U : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                         ? 4U : 3U))
                            : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                ? 4U : 3U)) : (IData)(__VdfgRegularize_h6e95ff9d_0_68)))
                : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                    ? 4U : 3U));
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates)) 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 6U)))))))));
    __VdfgRegularize_h6e95ff9d_0_260 = (7U & (((0U 
                                                == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                                ? (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((0x00000020U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_201)
                                                        : (IData)(__VdfgRegularize_h6e95ff9d_0_188))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_201)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_87)
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? 
                                                         (((1U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                            ? 5U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                             ? 5U
                                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_192))) 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))
                                                          : (IData)(__VdfgRegularize_h6e95ff9d_0_79)))))
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_196)
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_264)
                                                          : (IData)(__VdfgRegularize_h6e95ff9d_0_263)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_87)
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_264)
                                                          : (IData)(__VdfgRegularize_h6e95ff9d_0_79))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_42)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? 
                                                          ((IData)(__VdfgRegularize_h6e95ff9d_0_192) 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                            >> 1U)))))
                                                           : (IData)(__VdfgRegularize_h6e95ff9d_0_126)))
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_269))
                                                        : (IData)(__VdfgRegularize_h6e95ff9d_0_188))))
                                                     : 
                                                    (2U 
                                                     | ((- (IData)(
                                                                   (6U 
                                                                    != 
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                                        | (- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))))))
                                                    : 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    (((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                                       ? 
                                                      (2U 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))))
                                                       : 
                                                      (2U 
                                                       | ((- (IData)(
                                                                     (6U 
                                                                      != 
                                                                      (7U 
                                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                          >> 3U))))) 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))))) 
                                                     | (- (IData)(
                                                                  (0x36U 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))
                                                     : 
                                                    ((0x00000020U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_273))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                                         : 
                                                        ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                        >> 1U)))) 
                                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_273))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                                        : 
                                                       ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                           >> 1U))))) 
                                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_294)))))
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                                        : 
                                                       (1U 
                                                        | ((IData)(__VdfgRegularize_h6e95ff9d_0_134) 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                             >> 1U))))))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                                         : 
                                                        ((- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                         >> 1U))))) 
                                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_134)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_134)
                                                          : 
                                                         (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_29)
                                                            : 
                                                           ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                                            | (- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle))))))) 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))))))))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_283)
                                                     : 
                                                    ((0x00000040U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     (2U 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                         >> 1U))))) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                            | ((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_19))))) 
                                                               | (- (IData)(
                                                                            (1U 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                                >> 2U)))))))))
                                                      : (IData)(__VdfgRegularize_h6e95ff9d_0_283)))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                     >> 5U))))) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                       >> 6U)))) 
                                                        | (((2U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                               ? 2U
                                                               : 
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                              >> 1U))))))
                                                              : 
                                                             ((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                                              & (2U 
                                                                 | (- (IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                                >> 1U))))))))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                              ? 
                                                             (2U 
                                                              | (- (IData)(
                                                                           (1U 
                                                                            & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))))
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                               ? 2U
                                                               : 
                                                              (1U 
                                                               | (- (IData)(
                                                                            (1U 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                                >> 1U))))))))) 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                            >> 2U)))))))
                                                     : 
                                                    (((0x00000020U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_163)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? 
                                                         (((2U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                            ? 2U
                                                            : 
                                                           (2U 
                                                            | (- (IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                              >> 2U))))))) 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))
                                                          : (IData)(__VdfgRegularize_h6e95ff9d_0_42))
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_159)))
                                                       : (IData)(__VdfgRegularize_h6e95ff9d_0_163)) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                       >> 6U))))))))) 
                                              | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 5U)))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To 
        = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
            ? ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_260)
                : 2U) : (IData)(__VdfgRegularize_h6e95ff9d_0_260));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q 
        = (0x000000ffU & ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                           ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                               ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))))))
                                   : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_43)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))
                               : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)) 
                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB))
                                       : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                          | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                                   : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))))
                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                     & (0x40U == (0xc0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                    & (((0x36U != (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                        & (6U != (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                       & (6U != (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                       >> 3U)))))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302 = ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                       >> 3U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137) 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                            >> 3U))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                       >> 3U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137) 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                            >> 3U)))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
        = ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
            ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((0x000000feU & (((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                         ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                            >> 1U) : 
                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_312) 
                                         >> 1U)) << 1U)) 
                       | (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)))
                    : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_312)
                        : (((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                     >> 6U)) | (0U 
                                                == 
                                                (0x000000ffU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))) 
                             << 6U) | (((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                               >> 4U)) 
                                        | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299) 
                                                 >> 3U))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                        >> 2U)) 
                                                    | (1U 
                                                       & (~ 
                                                          VL_REDXOR_32(
                                                                       (0x000000ffU 
                                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                              >> 8U))))))))
                : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)
                    : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                        ? ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                    >> 6U)) | (1U & 
                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300) 
                                                >> 4U))) 
                            << 6U) | ((((6U == (7U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                         ? 2U : (2U 
                                                 | ((4U 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                          >> 3U))))) 
                                       << 3U) | ((4U 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_300) 
                                                     << 2U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)))))
                        : ((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                              ? ((0x00000030U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                 >> 2U)) 
                                 | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                >> 2U))))
                              : ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                          >> 6U)) | 
                                   (0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))) 
                                  << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301) 
                                             << 1U) 
                                            | (1U & 
                                               (~ VL_REDXOR_8(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)))))) 
                            << 2U) | (1U & ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)
                                             : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                >> 7U)))))))
            : ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r)
                  ? ((0x00000030U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                     >> 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302) 
                                                 << 1U) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                      >> 2U))))
                  : ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                              >> 6U)) | ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
                                         & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r)) 
                                            | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                               >> 6U)))) 
                      << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_302) 
                                 << 1U) | (1U & ((4U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    VL_REDXOR_8(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)))
                                                   : 
                                                  (~ 
                                                   VL_REDXOR_8(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137) 
                                                  >> 2U)))))) 
                << 2U) | (3U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP16 
        = (0x0000ffffU & (((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))
                            ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC)
                            : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP)) 
                          + ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))
                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                              : (1U | (- (IData)((1U 
                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                                                     >> 3U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63 = (1U 
                                                 & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                                                     >> 2U) 
                                                    & (((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                           >> 2U)) 
                                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_311))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147 = (1U 
                                                  & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                      >> 2U) 
                                                     | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                                                         >> 2U) 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_311))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)) 
           & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind)) 
              & ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To)) 
                 | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_308 = ((
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))) 
                                                   | ((0U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
            & (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147) 
                & (2U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                            ? (2U | 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                ? (1U 
                                                   | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__cpi_xy_n 
        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q) 
                          - (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F_Out) 
                                   >> 4U))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA 
        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                    [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA]) 
            << 8U) | vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA]);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ID16 
        = (0x0000ffffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                          + (1U | (- (IData)((1U & 
                                              ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                                               >> 3U)))))));
}

bool Vmrdo_phoenix___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmrdo_phoenix___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( game_reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( joy1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( joy2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( sys)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( rot_toggle)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( sram_din)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( sd_miso)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( sd_cd_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmrdo_phoenix___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmrdo_phoenix___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge mrdo_phoenix.main.__Vcellinp__cpu__reset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmrdo_phoenix___024root___ctor_var_reset(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___ctor_var_reset\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->game_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16118803697468939793ull);
    vlSelf->joy1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4747593219169183420ull);
    vlSelf->joy2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9378291569399098925ull);
    vlSelf->sys = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2915908127051031423ull);
    vlSelf->rot_toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 88659231149507293ull);
    vlSelf->sram_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9313660600989739470ull);
    vlSelf->sd_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4698123240943661924ull);
    vlSelf->sd_cd_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11522310653994880900ull);
    vlSelf->audio = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15808669430542691865ull);
    vlSelf->mrdo_phoenix__DOT__g_h = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6207331307668541931ull);
    vlSelf->mrdo_phoenix__DOT__g_v = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3084985552137132806ull);
    vlSelf->mrdo_phoenix__DOT__wait_pt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9811625599930271177ull);
    vlSelf->mrdo_phoenix__DOT__run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16058968856945380966ull);
    vlSelf->mrdo_phoenix__DOT__text_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4615105205631990667ull);
    vlSelf->mrdo_phoenix__DOT__ev_vbl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17459510192385923830ull);
    vlSelf->mrdo_phoenix__DOT__pix_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14253202536002856006ull);
    vlSelf->mrdo_phoenix__DOT__pix_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16108950883167776838ull);
    vlSelf->mrdo_phoenix__DOT__pix_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18297503845221162094ull);
    vlSelf->mrdo_phoenix__DOT__g_pixel = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11976856948112203243ull);
    vlSelf->mrdo_phoenix__DOT__ld_vid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5057612862848647634ull);
    vlSelf->mrdo_phoenix__DOT__ld_pal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5588992052755240853ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__pal_u[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7169638359005684933ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__pal_t[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8340037823151267524ull);
    }
    vlSelf->mrdo_phoenix__DOT__m0_addr = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 2495233714469431011ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__fq_d[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1939766904738677488ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__fq_a[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18148946085872343779ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__fq_b[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14531487244812672229ull);
    }
    vlSelf->mrdo_phoenix__DOT__fq_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18100671666968657155ull);
    vlSelf->mrdo_phoenix__DOT__p0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17000064371122326768ull);
    vlSelf->mrdo_phoenix__DOT__wr_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446869860042450039ull);
    vlSelf->mrdo_phoenix__DOT__io_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 300849968369824807ull);
    vlSelf->mrdo_phoenix__DOT__io_rd_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15735016664709996995ull);
    vlSelf->mrdo_phoenix__DOT__io_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5827996595112669365ull);
    vlSelf->mrdo_phoenix__DOT__io_wr_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14028863283089706585ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__lbuf[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15175461384130848429ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__font[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14779741899748798997ull);
    }
    vlSelf->mrdo_phoenix__DOT__ink = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17896559745409560301ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2795879241618905480ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7216730429964407239ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__n_m1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12940161862759100868ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__n_mreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3099655147493388352ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__n_iorq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729618195461810176ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__n_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15760032484012834964ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__n_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6492874182347340291ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9951878979559194922ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n = 0;
    vlSelf->mrdo_phoenix__DOT__main__DOT__wr_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8369396752570329790ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__intack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8771656767949659225ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1900443756176807016ull);
    }
    vlSelf->mrdo_phoenix__DOT__main__DOT__vram_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8928272257020670496ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__psg_wr1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 590201748323384693ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__psg_wr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5389348581390016829ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__sn1_out = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8768182248276005277ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__sn2_out = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11051093966353571615ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__mix = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17646779275160987922ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__d1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7073113561454209771ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__d2 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10385259240789898349ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__hp = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17138686097637631928ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__no_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 713464830660425397ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15180580346910651229ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15578685173630747106ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7753077848576879890ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15411495723469251055ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Ap = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10001081069033077045ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Fp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7829054653594265529ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17123460567459463765ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2822038951885611178ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10788357373594527751ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17260901582576052961ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16712540194875803844ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2809190835352361542ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5080301730238681978ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11665609698219549885ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8076525973068213383ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7203148202838917058ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 771610329892066112ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13794084884220724403ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10830777713774235367ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11716788450007637846ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9117901189699328180ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7319795749569111788ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ID16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5931292826917651492ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2052286293629375692ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4794760471604057737ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12220256785023199462ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7831371631017566153ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7896375031080654289ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18028735594040587535ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9398010951479376456ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1609704723427915859ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13613005533509459098ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4276660887728118431ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12732281009452441282ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1631624526206264206ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__INT_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13664038367127109090ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6376552397942645244ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 812581170333719379ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8431493856387631156ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13017232204803797451ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3398085541765089167ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15076820388739864938ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7436886027145592031ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11081212860918822137ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2511740307351784191ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1848539978848530366ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6636045626288567703ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8698073379996860638ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14807275133267271310ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16022514347709799027ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F_Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15951421849518990554ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__cpi_xy_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13887990146873862698ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3141675037955887834ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16343008263256808810ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4140596442941289181ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12079870818270309369ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14425732470365037116ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17061910758933142276ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4980305098270279606ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11317269804719042782ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8273059836340593286ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5405022321299536148ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2879199852501424773ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8353716086002671114ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3664262234757172200ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3160290708950337688ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 922761233466624663ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16058778486151587778ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10825723094470103390ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1210625981615198427ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6398035264773606693ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RstP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2031502301888249165ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1821296058146143561ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6817931671076515840ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18426463524043275516ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6072647043484518160ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10843419675088823412ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7914877974812748436ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6988807062923798802ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7784659047363827076ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7873961781846091250ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10319540614403228856ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691971999274555491ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1485423314292905391ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IMode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5848908117577265422ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8520130751987253595ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15394437349692439833ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14236834234366473423ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2276408591797959662ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6578409622494757485ull);
    }
    vlSelf->mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13790688021827849399ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8130960966842969287ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5570548328876309107ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2252483899103869909ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15766057177774419087ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1512622490311808155ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2975976493390543254ull);
    }
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__line_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9613999784139185138ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__c_line = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10655890685621415763ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__s_line = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2663572189479503109ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__bga[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1107351845450363029ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__bgc[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15658171146763275054ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__fga[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15489669285186104736ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__fgc[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15334858843964492594ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sr0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1704468418464771248ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sr1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15181966912618564281ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sr2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9191903619517513508ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sr3[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14483033517596337118ull);
    }
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 986383776129811788ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__fg0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14131002819538114413ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__fg1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17029681496092428757ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__bg0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2842944561962270104ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__bg1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15173957909682041266ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sg0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15959954754687198927ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sg1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10332899079242243445ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sg2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17185577166996306277ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sg3[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15012042501667588718ull);
    }
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17228076966863845938ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__ctab[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2756961999360168403ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 133249497752873252ull);
    }
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2370832914674699286ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sp_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8621465972834927488ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sp_pen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3815639426459238259ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8038673814995354081ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__ty = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13925629371654235271ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__bx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11308460786138793024ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__by = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8456019396912520099ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__fg_pen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14638398878851074133ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__bg_pen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13689435265221182495ull);
    vlSelf->mrdo_phoenix__DOT__main__DOT__video__DOT__sp_ci = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4398938826114631254ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_36 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_41 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_49 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_54 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_56 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_62 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_63 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_64 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_72 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_73 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_80 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_83 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_88 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_91 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_92 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_93 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_100 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_106 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_107 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_111 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_114 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_115 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_116 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_117 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_118 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_119 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_120 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_121 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_127 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_130 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_136 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_137 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_141 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_142 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_145 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_147 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_152 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_160 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_164 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_173 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_179 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_180 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_183 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_184 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_190 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_191 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_194 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_197 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_202 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_203 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_204 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_205 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_206 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_208 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_209 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_210 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_211 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_213 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_223 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_224 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_225 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_226 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_231 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_234 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_237 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_243 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_246 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_247 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_249 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_250 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_252 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_253 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_255 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_256 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_257 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_258 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_261 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_275 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_276 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_282 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_287 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_289 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_295 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_299 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_300 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_301 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_302 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_308 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_309 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_310 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_312 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_315 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_316 = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__acc_pix = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__acc_cpu = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__rst_cnt = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__start_game = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__g_h = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__g_v = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate = 0;
    vlSelf->__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__game_reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__joy1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__joy2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sys__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rot_toggle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sram_din__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sd_miso__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sd_cd_n__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
