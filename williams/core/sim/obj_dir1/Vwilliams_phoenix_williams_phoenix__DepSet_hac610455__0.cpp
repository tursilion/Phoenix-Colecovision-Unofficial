// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___ico_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___ico_sequent__TOP__williams_phoenix__0\n"); );
    // Body
    vlSelf->__PVT__g_reset = (1U & ((~ (IData)(vlSymsp->TOP.clk_locked)) 
                                    | ((IData)(vlSelf->__PVT__reset_s) 
                                       >> 2U)));
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
                                                         | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__read) 
                                                            & (0xd000U 
                                                               <= (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))) 
                                                        | (0xcc00U 
                                                           == 
                                                           (0xfc00U 
                                                            & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))))
                                                     ? (IData)(vlSelf->__PVT__mem_do)
                                                     : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___503_))))))
            : (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___503_));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__0(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__game_reset_s;
    __Vdly__game_reset_s = 0;
    CData/*7:0*/ __Vdly__spi_tx;
    __Vdly__spi_tx = 0;
    CData/*0:0*/ __Vdly__spi_busy;
    __Vdly__spi_busy = 0;
    CData/*2:0*/ __Vdly__spi_bit;
    __Vdly__spi_bit = 0;
    CData/*0:0*/ __Vdly__spi_sclk_r;
    __Vdly__spi_sclk_r = 0;
    CData/*7:0*/ __Vdly__spi_rx;
    __Vdly__spi_rx = 0;
    CData/*0:0*/ __Vdly__spi_start;
    __Vdly__spi_start = 0;
    CData/*0:0*/ __Vdly__dl_wr;
    __Vdly__dl_wr = 0;
    CData/*0:0*/ __Vdly__dl_wr_d;
    __Vdly__dl_wr_d = 0;
    IData/*19:0*/ __Vdly__ld_addr;
    __Vdly__ld_addr = 0;
    SData/*15:0*/ __Vdly__fwd_count;
    __Vdly__fwd_count = 0;
    CData/*0:0*/ __Vdly__fwd_active;
    __Vdly__fwd_active = 0;
    CData/*7:0*/ __Vdly__ld_data;
    __Vdly__ld_data = 0;
    CData/*0:0*/ __Vdly__ld_pend;
    __Vdly__ld_pend = 0;
    CData/*7:0*/ __Vdly__spi_txd;
    __Vdly__spi_txd = 0;
    CData/*0:0*/ __Vdly__fwd_wait;
    __Vdly__fwd_wait = 0;
    CData/*0:0*/ __Vdly__rf_busy;
    __Vdly__rf_busy = 0;
    CData/*3:0*/ __Vdlyvdim0__pal__v0;
    __Vdlyvdim0__pal__v0 = 0;
    CData/*7:0*/ __Vdlyvval__pal__v0;
    __Vdlyvval__pal__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pal__v0;
    __Vdlyvset__pal__v0 = 0;
    CData/*0:0*/ __Vdly__lw_done;
    __Vdly__lw_done = 0;
    CData/*1:0*/ __Vdly__st;
    __Vdly__st = 0;
    CData/*6:0*/ __Vdly__af_div;
    __Vdly__af_div = 0;
    IData/*22:0*/ __Vdly__lp__DOT__acc;
    __Vdly__lp__DOT__acc = 0;
    IData/*21:0*/ __Vdly__lp__DOT__s1;
    __Vdly__lp__DOT__s1 = 0;
    // Body
    __Vdly__game_reset_s = vlSelf->__PVT__game_reset_s;
    __Vdly__af_div = vlSelf->__PVT__af_div;
    __Vdly__lp__DOT__acc = vlSelf->__PVT__lp__DOT__acc;
    __Vdly__lp__DOT__s1 = vlSelf->__PVT__lp__DOT__s1;
    __Vdly__spi_rx = vlSelf->__PVT__spi_rx;
    __Vdly__spi_bit = vlSelf->__PVT__spi_bit;
    __Vdly__spi_busy = vlSelf->__PVT__spi_busy;
    __Vdly__spi_sclk_r = vlSelf->__PVT__spi_sclk_r;
    __Vdly__spi_tx = vlSelf->__PVT__spi_tx;
    vlSelf->__Vdlyvset__colbuf__v0 = 0U;
    __Vdly__rf_busy = vlSelf->__PVT__rf_busy;
    vlSelf->__Vdly__soc_rst_cnt = vlSelf->__PVT__soc_rst_cnt;
    __Vdly__fwd_wait = vlSelf->__PVT__fwd_wait;
    __Vdly__spi_txd = vlSelf->__PVT__spi_txd;
    __Vdly__ld_pend = vlSelf->__PVT__ld_pend;
    __Vdly__ld_data = vlSelf->__PVT__ld_data;
    __Vdly__fwd_active = vlSelf->__PVT__fwd_active;
    __Vdly__fwd_count = vlSelf->__PVT__fwd_count;
    __Vdly__dl_wr = vlSelf->__PVT__dl_wr;
    __Vdly__spi_start = vlSelf->__PVT__spi_start;
    __Vdly__dl_wr_d = vlSelf->__PVT__dl_wr_d;
    __Vdly__ld_addr = vlSelf->__PVT__ld_addr;
    __Vdlyvset__pal__v0 = 0U;
    vlSelf->__Vdlyvset__soc__DOT__snd_rom__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0 = 0U;
    __Vdly__st = vlSelf->__PVT__st;
    __Vdly__lw_done = vlSelf->__PVT__lw_done;
    __Vdly__game_reset_s = ((6U & ((IData)(vlSelf->__PVT__game_reset_s) 
                                   << 1U)) | (IData)(vlSymsp->TOP.game_reset));
    __Vdly__af_div = ((0x5fU == (IData)(vlSelf->__PVT__af_div))
                       ? 0U : (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__af_div))));
    vlSelf->__PVT__reset_s = ((6U & ((IData)(vlSelf->__PVT__reset_s) 
                                     << 1U)) | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT__spi_div = ((IData)(vlSelf->__PVT__spi_tick)
                               ? 0U : (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__spi_div))));
    if ((0U == (IData)(vlSelf->__PVT__af_div))) {
        vlSelf->__PVT__dc = (vlSelf->__PVT__dc + VL_SHIFTRS_III(32,32,32, 
                                                                ((0xffff0000U 
                                                                  & (vlSelf->__PVT__lp__DOT__s2 
                                                                     << 0xcU)) 
                                                                 - vlSelf->__PVT__dc), 0xeU));
        __Vdly__lp__DOT__s1 = (0x3fffffU & (VL_EXTENDS_II(22,22, vlSelf->__PVT__lp__DOT__s1) 
                                            + VL_SHIFTRS_III(22,32,32, 
                                                             (VL_SHIFTRS_III(32,32,32, 
                                                                             VL_MULS_III(32, (IData)(0x55U), 
                                                                                VL_EXTENDS_II(32,23, vlSelf->__PVT__lp__DOT__avg)), 9U) 
                                                              - 
                                                              VL_EXTENDS_II(32,22, vlSelf->__PVT__lp__DOT__s1)), 3U)));
        vlSelf->__PVT__lp__DOT__s2 = (0x3fffffU & (vlSelf->__PVT__lp__DOT__s2 
                                                   + 
                                                   VL_SHIFTRS_III(22,22,32, 
                                                                  (0x3fffffU 
                                                                   & (vlSelf->__PVT__lp__DOT__s1 
                                                                      - vlSelf->__PVT__lp__DOT__s2)), 3U)));
        vlSelf->__PVT__lp__DOT__avg = (0x7fffffU & 
                                       (vlSelf->__PVT__lp__DOT__acc 
                                        + VL_EXTENDS_II(23,16, (IData)(vlSelf->__PVT__mono))));
        __Vdly__lp__DOT__acc = 0U;
    } else {
        __Vdly__lp__DOT__acc = (0x7fffffU & (vlSelf->__PVT__lp__DOT__acc 
                                             + VL_EXTENDS_II(23,16, (IData)(vlSelf->__PVT__mono))));
    }
    if (vlSelf->__PVT__rf_we) {
        vlSelf->__Vdlyvval__colbuf__v0 = vlSelf->__PVT__rf_q;
        vlSelf->__Vdlyvset__colbuf__v0 = 1U;
        vlSelf->__Vdlyvdim0__colbuf__v0 = ((0x100U 
                                            & ((IData)(vlSelf->__PVT__rf_col) 
                                               << 8U)) 
                                           | (IData)(vlSelf->__PVT__rf_row));
        if ((0xefU == (IData)(vlSelf->__PVT__rf_row))) {
            __Vdly__rf_busy = 0U;
            if ((1U & (IData)(vlSelf->__PVT__rf_col))) {
                vlSelf->__PVT__rtag1 = vlSelf->__PVT__rf_col;
            } else {
                vlSelf->__PVT__rtag0 = vlSelf->__PVT__rf_col;
            }
        }
        vlSelf->__PVT__rf_row = (0xffU & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__rf_row)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__g_reset) | (IData)(vlSelf->__PVT__start_game)) 
               | (((IData)(vlSelf->__PVT__game_reset_s) 
                   >> 2U) & (~ (IData)(vlSelf->boot_mode)))))) {
        vlSelf->__Vdly__soc_rst_cnt = 0xfffU;
    } else if ((0U != (IData)(vlSelf->__PVT__soc_rst_cnt))) {
        vlSelf->__Vdly__soc_rst_cnt = (0xfffU & ((IData)(vlSelf->__PVT__soc_rst_cnt) 
                                                 - (IData)(1U)));
    }
    if ((((IData)(vlSelf->__PVT__sc_go) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_)) 
         & (0xc000U == (0xfc00U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_))))) {
        __Vdlyvval__pal__v0 = vlSelf->__PVT__soc__DOT__cpu_board__DOT___511_;
        __Vdlyvset__pal__v0 = 1U;
        __Vdlyvdim0__pal__v0 = (0xfU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_));
    }
    if ((IData)(((0xc000U == (0x1fff000U & vlSelf->__PVT__dl_addr)) 
                 & (IData)(vlSelf->__PVT__dl_wr)))) {
        vlSelf->__Vdlyvval__soc__DOT__snd_rom__DOT__mem__v0 
            = vlSelf->__PVT__dl_data;
        vlSelf->__Vdlyvset__soc__DOT__snd_rom__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__soc__DOT__snd_rom__DOT__mem__v0 
            = (0xfffU & vlSelf->__PVT__dl_addr);
    }
    if (((IData)(vlSelf->__PVT__dl_wr) & (0xd600U == 
                                          (0x1fffe00U 
                                           & vlSelf->__PVT__dl_addr)))) {
        vlSelf->__Vdlyvval__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0 
            = vlSelf->__PVT__dl_data;
        vlSelf->__Vdlyvset__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0 
            = (0x1ffU & vlSelf->__PVT__dl_addr);
    }
    if (((IData)(vlSelf->__PVT__dl_wr) & (0xd400U == 
                                          (0x1fffe00U 
                                           & vlSelf->__PVT__dl_addr)))) {
        vlSelf->__Vdlyvval__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0 
            = vlSelf->__PVT__dl_data;
        vlSelf->__Vdlyvset__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0 
            = (0x1ffU & vlSelf->__PVT__dl_addr);
    }
    if (((0x11U >= (0x1fffU & (vlSelf->__PVT__dl_addr 
                               >> 0xcU))) & ((0xeU 
                                              <= (0x1fffU 
                                                  & (vlSelf->__PVT__dl_addr 
                                                     >> 0xcU))) 
                                             & (IData)(vlSelf->__PVT__dl_wr)))) {
        vlSelf->__Vdlyvval__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0 
            = vlSelf->__PVT__dl_data;
        vlSelf->__Vdlyvset__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0 
            = vlSelf->soc__DOT____Vcellinp__speech_gen__02espch_rom__addr_b;
    }
    vlSelf->__PVT__sc_tog48 = vlSelf->__PVT__sc_tog;
    if (((~ (IData)(vlSelf->__PVT__rf_busy)) & (IData)(vlSelf->__PVT__ron_s))) {
        if (vlSelf->__PVT__tag_cur) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tag_nxt)))) {
                vlSelf->__PVT__rf_row = 0U;
                __Vdly__rf_busy = 1U;
                vlSelf->__PVT__rf_col = vlSelf->__PVT__want_nxt;
            }
        } else {
            vlSelf->__PVT__rf_row = 0U;
            __Vdly__rf_busy = 1U;
            vlSelf->__PVT__rf_col = vlSelf->__PVT__rw_g;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__ron_s)))) {
        vlSelf->__PVT__rtag0 = 0x1ffU;
        vlSelf->__PVT__rtag1 = 0x1ffU;
    }
    vlSelf->ext_din = ((1U == (0xfU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                        ? ((((((IData)(vlSelf->__PVT__spi_busy) 
                               | (IData)(vlSelf->__PVT__spi_start)) 
                              | (IData)(vlSelf->__PVT__fwd_active)) 
                             | (IData)(vlSelf->__PVT__ld_pend)) 
                            << 7U) | (0x40U & ((~ (IData)(vlSymsp->TOP.sd_cd_n)) 
                                               << 6U)))
                        : ((9U == (0xfU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                            ? (IData)(vlSelf->__PVT__ld_pend)
                            : ((0xaU == (0xfU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))
                                ? 1U : (IData)(vlSelf->__PVT__spi_data))));
    __Vdly__lw_done = 0U;
    vlSelf->__PVT__lp__DOT__s1 = __Vdly__lp__DOT__s1;
    vlSelf->__PVT__game_reset_s = __Vdly__game_reset_s;
    if (__Vdlyvset__pal__v0) {
        vlSelf->__PVT__pal[__Vdlyvdim0__pal__v0] = __Vdlyvval__pal__v0;
    }
    vlSelf->__PVT__rf_busy = __Vdly__rf_busy;
    if (vlSelf->__PVT__sc_go) {
        __Vdly__st = 1U;
        vlSelf->sram_addr = (0x7ffffU & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___513_)
                                          ? (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_)
                                          : ((IData)(0x10000U) 
                                             + ((0x8000U 
                                                 & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_)) 
                                                | (((IData)(
                                                            (0x4000U 
                                                             == 
                                                             (0xc000U 
                                                              & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_)))) 
                                                    << 0xeU) 
                                                   | (0x3fffU 
                                                      & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_)))))));
        vlSelf->sram_doe = 0U;
        vlSelf->sram_oe_n = 0U;
        vlSelf->__PVT__we_next = 1U;
    } else if ((1U == (IData)(vlSelf->__PVT__st))) {
        __Vdly__st = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__st))) {
        vlSelf->__PVT__mem_do = ((((IData)(vlSelf->__PVT__b_rom) 
                                   & (IData)(vlSelf->boot_mode)) 
                                  & (0xdU <= (0xfU 
                                              & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_) 
                                                 >> 0xcU))))
                                  ? (IData)(vlSelf->__PVT__loader_q)
                                  : ((IData)(vlSelf->__PVT__b_rom)
                                      ? (IData)(vlSymsp->TOP.sram_din)
                                      : ((((IData)(vlSelf->__PVT__b_ub)
                                            ? (0xfU 
                                               & ((IData)(vlSymsp->TOP.sram_din) 
                                                  >> 4U))
                                            : 0U) << 4U) 
                                         | ((IData)(vlSelf->__PVT__b_lb)
                                             ? (0xfU 
                                                & (IData)(vlSymsp->TOP.sram_din))
                                             : 0U))));
        if (vlSelf->__PVT__b_wr) {
            vlSelf->sram_dout = ((0xf0U & (((IData)(vlSelf->__PVT__b_ub)
                                             ? ((IData)(vlSelf->__PVT__b_di) 
                                                >> 4U)
                                             : ((IData)(vlSymsp->TOP.sram_din) 
                                                >> 4U)) 
                                           << 4U)) 
                                 | (0xfU & ((IData)(vlSelf->__PVT__b_lb)
                                             ? (IData)(vlSelf->__PVT__b_di)
                                             : (IData)(vlSymsp->TOP.sram_din))));
            vlSelf->sram_doe = 1U;
            vlSelf->sram_oe_n = 1U;
            vlSelf->__PVT__we_next = 0U;
        } else if ((((IData)(vlSelf->__PVT__ld_pend) 
                     & (IData)(vlSelf->__PVT__ld_sram)) 
                    & (~ (IData)(vlSelf->__PVT__lw_done)))) {
            if ((0xc000U > vlSelf->__PVT__ld_addr)) {
                vlSelf->sram_addr = (0x7ffffU & ((IData)(0x10000U) 
                                                 + vlSelf->__PVT__ld_addr));
                vlSelf->sram_dout = vlSelf->__PVT__ld_data;
            } else {
                vlSelf->sram_addr = (0x7ffffU & ((IData)(0xcc00U) 
                                                 + 
                                                 (0x3ffU 
                                                  & vlSelf->__PVT__ld_addr)));
                vlSelf->sram_dout = (0xf0U | (0xfU 
                                              & (IData)(vlSelf->__PVT__ld_data)));
            }
            vlSelf->sram_doe = 1U;
            vlSelf->sram_oe_n = 1U;
            vlSelf->__PVT__we_next = 0U;
            __Vdly__lw_done = 1U;
        }
        __Vdly__st = 3U;
    } else if ((3U == (IData)(vlSelf->__PVT__st))) {
        vlSelf->__PVT__we_next = 1U;
        __Vdly__st = 0U;
    }
    vlSelf->__PVT__st = __Vdly__st;
    vlSelf->__PVT__lw_done = __Vdly__lw_done;
    __Vdly__spi_start = 0U;
    __Vdly__dl_wr = 0U;
    __Vdly__dl_wr_d = vlSelf->__PVT__dl_wr;
    if (vlSelf->__PVT__io_w) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                        vlSelf->__PVT__spi_sel = (1U 
                                                  & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_));
                        vlSelf->__PVT__spi_slow = (1U 
                                                   & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_) 
                                                      >> 1U));
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))) {
                        __Vdly__ld_addr = ((0xffffU 
                                            & __Vdly__ld_addr) 
                                           | (0xf0000U 
                                              & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_) 
                                                 << 0x10U)));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
            if ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                __Vdly__ld_addr = ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))
                                    ? ((0xf00ffU & __Vdly__ld_addr) 
                                       | ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_) 
                                          << 8U)) : 
                                   ((0xfff00U & __Vdly__ld_addr) 
                                    | (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_)));
            } else if ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                __Vdly__fwd_count = (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_) 
                                      << 8U) | (IData)(vlSelf->__PVT__fwd_lo));
                __Vdly__fwd_active = (0U != (((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__fwd_lo)));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))) {
                __Vdly__ld_data = vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_;
                __Vdly__ld_pend = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))) {
            __Vdly__spi_txd = vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_;
            __Vdly__spi_start = 1U;
        }
    }
    if ((((IData)(vlSelf->__VdfgTmp_h8090fb0b__0) & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___566_)) 
         & (0xfU == (0xfU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))))) {
        __Vdly__spi_txd = 0xffU;
        __Vdly__spi_start = 1U;
    }
    if ((((((IData)(vlSelf->__PVT__fwd_active) & (~ (IData)(vlSelf->__PVT__fwd_wait))) 
           & (~ (IData)(vlSelf->__PVT__spi_busy))) 
          & (~ (IData)(vlSelf->__PVT__spi_start))) 
         & (~ (IData)(vlSelf->__PVT__ld_pend)))) {
        if ((0U == (IData)(vlSelf->__PVT__fwd_count))) {
            __Vdly__fwd_active = 0U;
        } else {
            __Vdly__fwd_count = (0xffffU & ((IData)(vlSelf->__PVT__fwd_count) 
                                            - (IData)(1U)));
            __Vdly__spi_txd = 0xffU;
            __Vdly__spi_start = 1U;
            __Vdly__fwd_wait = 1U;
        }
    }
    if ((((IData)(vlSelf->__PVT__fwd_wait) & (~ (IData)(vlSelf->__PVT__spi_busy))) 
         & (~ (IData)(vlSelf->__PVT__spi_start)))) {
        __Vdly__fwd_wait = 0U;
        if ((1U & (~ (IData)(vlSelf->__PVT__fwd_discard)))) {
            __Vdly__ld_data = vlSelf->__PVT__spi_data;
            __Vdly__ld_pend = 1U;
        }
    }
    if (vlSelf->__PVT__io_w) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address)))) {
                        vlSelf->__PVT__fwd_lo = vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                        vlSelf->__PVT__fwd_discard 
                            = (1U & ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___564_) 
                                     >> 2U));
                    }
                }
            }
        }
    }
    if (vlSelf->__PVT__spi_start) {
        vlSelf->__PVT__spi_div = 0U;
        __Vdly__spi_tx = vlSelf->__PVT__spi_txd;
        __Vdly__spi_busy = 1U;
        __Vdly__spi_bit = 0U;
        __Vdly__spi_sclk_r = 0U;
    } else if (((IData)(vlSelf->__PVT__spi_busy) & (IData)(vlSelf->__PVT__spi_tick))) {
        if (vlSelf->__PVT__spi_sclk_r) {
            __Vdly__spi_rx = ((0xfeU & ((IData)(vlSelf->__PVT__spi_rx) 
                                        << 1U)) | (IData)(vlSymsp->TOP.sd_miso));
            __Vdly__spi_tx = (1U | (0xfeU & ((IData)(vlSelf->__PVT__spi_tx) 
                                             << 1U)));
            __Vdly__spi_sclk_r = 0U;
            __Vdly__spi_bit = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__spi_bit)));
            if ((7U == (IData)(vlSelf->__PVT__spi_bit))) {
                __Vdly__spi_busy = 0U;
                vlSelf->__PVT__spi_data = ((0xfeU & 
                                            ((IData)(vlSelf->__PVT__spi_rx) 
                                             << 1U)) 
                                           | (IData)(vlSymsp->TOP.sd_miso));
            }
        } else {
            __Vdly__spi_sclk_r = 1U;
        }
    }
    if (((((IData)(vlSelf->__PVT__ld_pend) & (~ (IData)(vlSelf->__PVT__ld_sram))) 
          & (~ (IData)(vlSelf->__PVT__dl_wr))) & (~ (IData)(vlSelf->__PVT__dl_wr_d)))) {
        vlSelf->__PVT__dl_addr = vlSelf->__PVT__ld_addr;
        vlSelf->__PVT__dl_data = vlSelf->__PVT__ld_data;
        __Vdly__dl_wr = 1U;
    }
    if (vlSelf->__PVT__ld_done) {
        __Vdly__ld_addr = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->__PVT__ld_addr));
        __Vdly__ld_pend = 0U;
    }
    if (vlSelf->__PVT__g_reset) {
        vlSelf->__PVT__spi_sel = 0U;
        vlSelf->__PVT__spi_slow = 1U;
        __Vdly__fwd_active = 0U;
        __Vdly__fwd_wait = 0U;
        __Vdly__ld_pend = 0U;
        __Vdly__spi_busy = 0U;
        __Vdly__spi_sclk_r = 0U;
        __Vdly__spi_tx = 0xffU;
    }
    vlSelf->__PVT__ron_s = vlSelf->__PVT__ron_m;
    if (((IData)(vlSelf->__PVT__rw_s) == (IData)(vlSelf->__PVT__rw_m))) {
        vlSelf->__PVT__rw_g = vlSelf->__PVT__rw_s;
    }
    vlSelf->__PVT__rw_s = vlSelf->__PVT__rw_m;
    vlSelf->__PVT__rf_we = 0U;
    if (vlSelf->__PVT__sc_go) {
        if (vlSelf->__PVT__rf_rd) {
            vlSelf->__PVT__rf_q = vlSymsp->TOP.sram_din;
            vlSelf->__PVT__rf_we = 1U;
        }
        vlSelf->__PVT__b_rom = (1U & (~ (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___513_)));
        vlSelf->__PVT__b_ub = vlSelf->__PVT__soc__DOT__cpu_board__DOT___515_;
        vlSelf->__PVT__b_lb = vlSelf->__PVT__soc__DOT__cpu_board__DOT___514_;
        vlSelf->__PVT__b_wr = ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___512_) 
                               & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___513_));
        vlSelf->__PVT__b_di = vlSelf->__PVT__soc__DOT__cpu_board__DOT___511_;
        vlSelf->__PVT__rf_rd = 0U;
    }
    vlSelf->__PVT__loader_q = vlSelf->__PVT__loader_rom
        [(0x3fffU & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT___510_))];
    vlSelf->__PVT__lp__DOT__acc = __Vdly__lp__DOT__acc;
    vlSelf->__PVT__af_div = __Vdly__af_div;
    vlSelf->__PVT__fwd_count = __Vdly__fwd_count;
    vlSelf->__PVT__fwd_active = __Vdly__fwd_active;
    vlSelf->__PVT__fwd_wait = __Vdly__fwd_wait;
    vlSelf->__PVT__dl_wr = __Vdly__dl_wr;
    vlSelf->__PVT__dl_wr_d = __Vdly__dl_wr_d;
    vlSelf->__PVT__ld_data = __Vdly__ld_data;
    vlSelf->__PVT__ld_pend = __Vdly__ld_pend;
    vlSelf->__PVT__ld_addr = __Vdly__ld_addr;
    vlSelf->soc__DOT____Vcellinp__speech_gen__02espch_rom__addr_b 
        = ((0x3000U & (((vlSelf->__PVT__dl_addr >> 0xcU) 
                        - (IData)(2U)) << 0xcU)) | 
           (0xfffU & vlSelf->__PVT__dl_addr));
    vlSelf->__PVT__ld_sram = ((0xc000U > vlSelf->__PVT__ld_addr) 
                              | (0x34U == (0x3ffU & 
                                           (vlSelf->__PVT__ld_addr 
                                            >> 0xaU))));
    vlSelf->__PVT__ron_m = 0U;
    vlSelf->__PVT__tag_cur = ((1U & (IData)(vlSelf->__PVT__rw_g))
                               ? ((IData)(vlSelf->__PVT__rtag1) 
                                  == (IData)(vlSelf->__PVT__rw_g))
                               : ((IData)(vlSelf->__PVT__rtag0) 
                                  == (IData)(vlSelf->__PVT__rw_g)));
    vlSelf->__PVT__want_nxt = ((0x100U & (IData)(vlSelf->__PVT__rw_g)) 
                               | (0xffU & ((IData)(vlSelf->__PVT__rw_g) 
                                           - (IData)(1U))));
    vlSelf->__PVT__rw_m = (((IData)(vlSelf->__PVT__rfpar) 
                            << 8U) | (0xffU & (((IData)(0x133U) 
                                                - (IData)(vlSelf->__PVT__rk)) 
                                               >> 1U)));
    vlSelf->__PVT__spi_txd = __Vdly__spi_txd;
    vlSelf->__PVT__spi_bit = __Vdly__spi_bit;
    vlSelf->__PVT__spi_rx = __Vdly__spi_rx;
    vlSelf->__PVT__spi_busy = __Vdly__spi_busy;
    vlSelf->__PVT__spi_tick = ((IData)(vlSelf->__PVT__spi_slow)
                                ? (0x77U == (IData)(vlSelf->__PVT__spi_div))
                                : (2U == (IData)(vlSelf->__PVT__spi_div)));
    vlSelf->__PVT__spi_start = __Vdly__spi_start;
    vlSelf->__PVT__spi_tx = __Vdly__spi_tx;
    vlSelf->__PVT__spi_sclk_r = __Vdly__spi_sclk_r;
    vlSelf->__PVT__ld_done = ((IData)(vlSelf->__PVT__ld_sram)
                               ? (IData)(vlSelf->__PVT__lw_done)
                               : (IData)(vlSelf->__PVT__dl_wr_d));
    vlSelf->__PVT__tag_nxt = ((1U & ((IData)(vlSelf->__PVT__rw_g) 
                                     - (IData)(1U)))
                               ? ((IData)(vlSelf->__PVT__rtag1) 
                                  == (IData)(vlSelf->__PVT__want_nxt))
                               : ((IData)(vlSelf->__PVT__rtag0) 
                                  == (IData)(vlSelf->__PVT__want_nxt)));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__3(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__3\n"); );
    // Init
    SData/*9:0*/ __Vdly__vc;
    __Vdly__vc = 0;
    SData/*9:0*/ __Vdly__hc;
    __Vdly__hc = 0;
    SData/*8:0*/ __Vdly__rk;
    __Vdly__rk = 0;
    // Body
    __Vdly__hc = vlSelf->__PVT__hc;
    __Vdly__vc = vlSelf->vc;
    __Vdly__rk = vlSelf->__PVT__rk;
    if ((0x31fU == (IData)(vlSelf->__PVT__hc))) {
        __Vdly__vc = ((0x20cU == (IData)(vlSelf->vc))
                       ? 0U : (0x3ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->vc))));
        __Vdly__hc = 0U;
        if (((0x1dfU == (IData)(vlSelf->vc)) | (0x1e0U 
                                                <= (IData)(vlSelf->vc)))) {
            if ((0x1dfU == (IData)(vlSelf->vc))) {
                vlSelf->__PVT__rfpar = (1U & (~ (IData)(vlSelf->__PVT__rfpar)));
            }
            __Vdly__rk = 0U;
            vlSelf->__PVT__rrem = 0U;
        } else {
            if ((0x1e0U <= (0x3ffU & ((IData)(0x124U) 
                                      + (IData)(vlSelf->__PVT__rrem))))) {
                __Vdly__rk = (0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__rk)));
            }
            vlSelf->__PVT__rrem = (0x1ffU & ((0x1e0U 
                                              <= (IData)(vlSelf->__PVT__rrem_n))
                                              ? ((IData)(vlSelf->__PVT__rrem_n) 
                                                 - (IData)(0x1e0U))
                                              : (IData)(vlSelf->__PVT__rrem_n)));
        }
    } else {
        __Vdly__hc = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__hc)));
    }
    if (((0x1faU == (IData)(vlSelf->vc)) & (0U == (IData)(vlSelf->__PVT__hc)))) {
        vlSelf->__PVT__release_tog = (1U & (~ (IData)(vlSelf->__PVT__release_tog)));
    }
    vlSelf->__PVT__rot1 = 0U;
    vlSelf->__PVT__rnib1 = (1U & ((IData)(1U) - (IData)(vlSelf->__PVT__rk)));
    vlSelf->vid_vsync_n = (1U & (~ ((0x1eaU <= (IData)(vlSelf->__PVT__vc1)) 
                                    & (0x1ecU > (IData)(vlSelf->__PVT__vc1)))));
    vlSelf->vid_hsync_n = (1U & (~ ((0x290U <= (IData)(vlSelf->__PVT__hc1)) 
                                    & (0x2f0U > (IData)(vlSelf->__PVT__hc1)))));
    if (((IData)(vlSelf->__PVT__aud_s) == (IData)(vlSelf->__PVT__aud_m))) {
        vlSelf->audio_l = vlSelf->__PVT__aud_s;
        vlSelf->audio_r = vlSelf->__PVT__aud_s;
    }
    vlSelf->__PVT__aud_s = vlSelf->__PVT__aud_m;
    vlSelf->__PVT__lb_q = vlSelf->__PVT__lbuf[((0xe00U 
                                                & (((IData)(7U) 
                                                    + 
                                                    ((IData)(vlSelf->vc) 
                                                     >> 1U)) 
                                                   << 9U)) 
                                               | (0x1ffU 
                                                  & ((IData)(0x12U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (((IData)(vlSelf->__PVT__hc) 
                                                          - (IData)(0x1cU)) 
                                                         >> 1U)))))];
    vlSelf->__PVT__cb_q = vlSelf->__PVT__colbuf[((0x100U 
                                                  & (((IData)(0x133U) 
                                                      - (IData)(vlSelf->__PVT__rk)) 
                                                     << 7U)) 
                                                 | (0xffU 
                                                    & (((IData)(vlSelf->__PVT__hc) 
                                                        - (IData)(0x50U)) 
                                                       >> 1U)))];
    if (vlSelf->__PVT__pic1) {
        vlSelf->vid_b = (0xffU & ((0xc0U & ((IData)(vlSelf->__PVT__pix) 
                                            << 6U)) 
                                  | ((0x30U & ((IData)(vlSelf->__PVT__pix) 
                                               << 4U)) 
                                     | ((0xcU & ((IData)(vlSelf->__PVT__pix) 
                                                 << 2U)) 
                                        | (3U & (IData)(vlSelf->__PVT__pix))))));
        vlSelf->vid_r = ((0xe0U & (IData)(vlSelf->__PVT__pix)) 
                         | ((0x1cU & ((IData)(vlSelf->__PVT__pix) 
                                      >> 3U)) | (3U 
                                                 & ((IData)(vlSelf->__PVT__pix) 
                                                    >> 6U))));
        vlSelf->vid_g = ((0xe0U & ((IData)(vlSelf->__PVT__pix) 
                                   << 3U)) | ((0x1cU 
                                               & (IData)(vlSelf->__PVT__pix)) 
                                              | (3U 
                                                 & ((IData)(vlSelf->__PVT__pix) 
                                                    >> 3U))));
    } else {
        vlSelf->vid_b = 0U;
        vlSelf->vid_r = 0U;
        vlSelf->vid_g = 0U;
    }
    vlSelf->vid_blank = ((0x280U <= (IData)(vlSelf->__PVT__hc1)) 
                         | (0x1e0U <= (IData)(vlSelf->__PVT__vc1)));
    vlSelf->__PVT__p2 = (0x3fU & (IData)(vlSymsp->TOP.cv2));
    vlSelf->__PVT__fire4 = ((8U & ((IData)(vlSymsp->TOP.snes) 
                                   << 3U)) | ((4U & 
                                               ((IData)(vlSymsp->TOP.snes) 
                                                >> 1U)) 
                                              | ((2U 
                                                  & (IData)(vlSymsp->TOP.snes)) 
                                                 | (1U 
                                                    & ((IData)(vlSymsp->TOP.snes) 
                                                       >> 2U)))));
    vlSelf->__PVT__p1 = (0x3fU & (((IData)(vlSymsp->TOP.cv1) 
                                   | ((0x30U & (((IData)(vlSymsp->TOP.snes) 
                                                 << 4U) 
                                                | (0xfffffff0U 
                                                   & ((IData)(vlSymsp->TOP.snes) 
                                                      << 2U)))) 
                                      | (0xfU & ((IData)(vlSymsp->TOP.snes) 
                                                 >> 8U)))) 
                                  | ((0x20U & ((IData)(vlSymsp->TOP.kb_keys) 
                                               << 5U)) 
                                     | (IData)(vlSymsp->TOP.kb_joy))));
    vlSelf->__PVT__sys = ((4U & ((((0xbU == (0xfU & 
                                             ((IData)(vlSymsp->TOP.cv1) 
                                              >> 6U))) 
                                   | (0xbU == (0xfU 
                                               & ((IData)(vlSymsp->TOP.cv2) 
                                                  >> 6U)))) 
                                  << 2U) | (0x7fffffcU 
                                            & ((IData)(vlSymsp->TOP.kb_keys) 
                                               >> 5U)))) 
                          | ((2U & (((((7U == (0xfU 
                                               & ((IData)(vlSymsp->TOP.cv1) 
                                                  >> 6U))) 
                                       | (7U == (0xfU 
                                                 & ((IData)(vlSymsp->TOP.cv2) 
                                                    >> 6U)))) 
                                      << 1U) | (0x1ffffffeU 
                                                & ((IData)(vlSymsp->TOP.snes) 
                                                   >> 3U))) 
                                    | (0xffffeU & ((IData)(vlSymsp->TOP.kb_keys) 
                                                   >> 0xcU)))) 
                             | (1U & (((9U == (0xfU 
                                               & ((IData)(vlSymsp->TOP.cv1) 
                                                  >> 6U))) 
                                       | (9U == (0xfU 
                                                 & ((IData)(vlSymsp->TOP.cv2) 
                                                    >> 6U)))) 
                                      | ((IData)(vlSymsp->TOP.snes) 
                                         >> 5U)))));
    vlSelf->__PVT__rk = __Vdly__rk;
    vlSelf->__PVT__aud_m = (VL_LTS_III(17, 0x7fffU, vlSelf->__PVT__hp)
                             ? 0x7fffU : (VL_GTS_III(17, 0x18000U, vlSelf->__PVT__hp)
                                           ? 0x8000U
                                           : (0xffffU 
                                              & vlSelf->__PVT__hp)));
    vlSelf->__PVT__pic1 = ((0x1e0U > (IData)(vlSelf->vc)) 
                           & ((0x1cU <= (IData)(vlSelf->__PVT__hc)) 
                              & (0x264U > (IData)(vlSelf->__PVT__hc))));
    vlSelf->__PVT__vc1 = vlSelf->vc;
    vlSelf->__PVT__hc1 = vlSelf->__PVT__hc;
    vlSelf->vc = __Vdly__vc;
    vlSelf->__PVT__hc = __Vdly__hc;
    vlSelf->__PVT__rrem_n = (0x3ffU & ((IData)(0x124U) 
                                       + (IData)(vlSelf->__PVT__rrem)));
}

VL_INLINE_OPT void Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__12(Vwilliams_phoenix_williams_phoenix* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwilliams_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vwilliams_phoenix_williams_phoenix___nba_sequent__TOP__williams_phoenix__12\n"); );
    // Body
    vlSelf->__PVT__soc_rst_cnt = vlSelf->__Vdly__soc_rst_cnt;
    if (vlSelf->__Vdlyvset__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0) {
        vlSelf->__PVT__soc__DOT__speech_gen__02espch_rom__DOT__mem[vlSelf->__Vdlyvdim0__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__soc__DOT__speech_gen__02espch_rom__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__soc__DOT__snd_rom__DOT__mem__v0) {
        vlSelf->__PVT__soc__DOT__snd_rom__DOT__mem[vlSelf->__Vdlyvdim0__soc__DOT__snd_rom__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__soc__DOT__snd_rom__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__colbuf__v0) {
        vlSelf->__PVT__colbuf[vlSelf->__Vdlyvdim0__colbuf__v0] 
            = vlSelf->__Vdlyvval__colbuf__v0;
    }
    vlSelf->__PVT__hp = (0x1ffffU & (((0x10000U & (vlSelf->__PVT__lp__DOT__s2 
                                                   >> 3U)) 
                                      | (0xffffU & 
                                         (vlSelf->__PVT__lp__DOT__s2 
                                          >> 4U))) 
                                     - ((0x10000U & 
                                         (vlSelf->__PVT__dc 
                                          >> 0xfU)) 
                                        | (vlSelf->__PVT__dc 
                                           >> 0x10U))));
    if (vlSelf->__Vdlyvset__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem[vlSelf->__Vdlyvdim0__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__soc__DOT__cpu_board__DOT__video_scan_addr_decoder__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0) {
        vlSelf->__PVT__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem[vlSelf->__Vdlyvdim0__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__soc__DOT__cpu_board__DOT__cpu_video_addr_decoder__DOT__mem__v0;
    }
    if (vlSelf->__PVT__g_reset) {
        vlSelf->boot_mode = 1U;
    } else if (vlSelf->__PVT__start_game) {
        vlSelf->boot_mode = 0U;
    }
    vlSelf->__PVT__g_reset = (1U & ((~ (IData)(vlSymsp->TOP.clk_locked)) 
                                    | ((IData)(vlSelf->__PVT__reset_s) 
                                       >> 2U)));
    vlSelf->__PVT__start_game = 0U;
    if (vlSelf->__PVT__io_w) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                    if ((1U & (IData)(vlSelf->__PVT__soc__DOT__cpu_board__DOT__address))) {
                        vlSelf->__PVT__start_game = 1U;
                    }
                }
            }
        }
    }
}
