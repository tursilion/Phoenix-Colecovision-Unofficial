// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmrdo_phoenix.h for the primary calling header

#include "Vmrdo_phoenix__pch.h"

void Vmrdo_phoenix___024root___eval_sample(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_sample\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmrdo_phoenix___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vmrdo_phoenix___024root___eval_body__ico(Vmrdo_phoenix___024root* vlSelf);

bool Vmrdo_phoenix___024root___eval_ico(Vmrdo_phoenix___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_ico\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.sd_cd_n) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sd_cd_n__0)) 
                                                           << 9U) 
                                                          | (((IData)(vlSelfRef.sd_miso) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sd_miso__0)) 
                                                             << 8U)) 
                                                         | (((((((IData)(vlSelfRef.sram_din) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sram_din__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.rot_toggle) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rot_toggle__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.sys) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sys__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.joy2) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__joy2__0)))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.joy1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__joy1__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.game_reset) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__game_reset__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.reset) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.clk) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
        vlSelfRef.__Vtrigprevexpr___TOP__game_reset__0 
            = vlSelfRef.game_reset;
        vlSelfRef.__Vtrigprevexpr___TOP__joy1__0 = vlSelfRef.joy1;
        vlSelfRef.__Vtrigprevexpr___TOP__joy2__0 = vlSelfRef.joy2;
        vlSelfRef.__Vtrigprevexpr___TOP__sys__0 = vlSelfRef.sys;
        vlSelfRef.__Vtrigprevexpr___TOP__rot_toggle__0 
            = vlSelfRef.rot_toggle;
        vlSelfRef.__Vtrigprevexpr___TOP__sram_din__0 
            = vlSelfRef.sram_din;
        vlSelfRef.__Vtrigprevexpr___TOP__sd_miso__0 
            = vlSelfRef.sd_miso;
        vlSelfRef.__Vtrigprevexpr___TOP__sd_cd_n__0 
            = vlSelfRef.sd_cd_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmrdo_phoenix___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmrdo_phoenix___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmrdo_phoenix___024root___eval_body__ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vmrdo_phoenix___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vmrdo_phoenix___024root___eval_act(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_act\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n__0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmrdo_phoenix___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmrdo_phoenix___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vmrdo_phoenix___024root___eval_inact(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_inact\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vmrdo_phoenix___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vmrdo_phoenix___024root___eval_body__nba(Vmrdo_phoenix___024root* vlSelf);
void Vmrdo_phoenix___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vmrdo_phoenix___024root___eval_nba(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_nba\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmrdo_phoenix___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmrdo_phoenix___024root___eval_body__nba(vlSelf);
        Vmrdo_phoenix___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vmrdo_phoenix___024root___eval_obs(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_obs\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vmrdo_phoenix___024root___eval_react(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_react\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vmrdo_phoenix___024root___eval_postponed(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_postponed\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vmrdo_phoenix___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*7:0*/, 1024> Vmrdo_phoenix__ConstPool__TABLE_h1544183c_0;
extern const VlUnpacked<CData/*7:0*/, 1024> Vmrdo_phoenix__ConstPool__TABLE_h5374dd30_0;

void Vmrdo_phoenix___024root___eval_body__ico(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_body__ico\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000238ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__din 
                = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd)
                                   ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd_stb)
                                       ? (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_rx)
                                       : (IData)(vlSelfRef.mrdo_phoenix__DOT__io_q))
                                   : ((IData)(((0U 
                                                == 
                                                (0xe000U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)))
                                       ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__exec_sram)
                                           ? (IData)(vlSelfRef.mrdo_phoenix__DOT__rom_q)
                                           : ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel))
                                               ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga0_q)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga1_q)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel))
                                                    ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga2_q)
                                                    : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga3_q)))))
                                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)
                                           ? (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))
                                                ? (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_rx)
                                                : (
                                                   (1U 
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
                                           : (((0x0eU 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                    >> 0x0000000cU)))
                                                ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__ram_q)
                                                : (
                                                   (8U 
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
        }
    }
}

bool Vmrdo_phoenix___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___trigger_anySet__act\n"); );
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

extern const VlWide<16>/*511:0*/ Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0;
extern const VlWide<16>/*511:0*/ Vmrdo_phoenix__ConstPool__CONST_h8e45f21e_0;

void Vmrdo_phoenix___024root___nba_sequent__TOP__0(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___nba_sequent__TOP__0\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px;
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px = 0;
    CData/*7:0*/ mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b;
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b = 0;
    CData/*7:0*/ __Vfunc_mrdo_phoenix__DOT__lv__0__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__lv__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__lv__0__b;
    __Vfunc_mrdo_phoenix__DOT__lv__0__b = 0;
    CData/*7:0*/ __Vfunc_mrdo_phoenix__DOT__lv__1__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__lv__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__lv__1__b;
    __Vfunc_mrdo_phoenix__DOT__lv__1__b = 0;
    CData/*7:0*/ __Vfunc_mrdo_phoenix__DOT__lv__2__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__lv__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__lv__2__b;
    __Vfunc_mrdo_phoenix__DOT__lv__2__b = 0;
    CData/*7:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d = 0;
    SData/*15:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__34__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__34__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__35__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__35__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__36__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__36__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__37__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__37__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__38__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__38__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__39__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__39__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__40__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__40__v = 0;
    CData/*3:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__41__v;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__41__v = 0;
    SData/*9:0*/ __Vdly__mrdo_phoenix__DOT__hc;
    __Vdly__mrdo_phoenix__DOT__hc = 0;
    SData/*9:0*/ __Vdly__mrdo_phoenix__DOT__vc;
    __Vdly__mrdo_phoenix__DOT__vc = 0;
    IData/*23:0*/ __Vdly__mrdo_phoenix__DOT__acc_psg;
    __Vdly__mrdo_phoenix__DOT__acc_psg = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__wph;
    __Vdly__mrdo_phoenix__DOT__wph = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__b_pend;
    __Vdly__mrdo_phoenix__DOT__b_pend = 0;
    CData/*3:0*/ __Vdly__mrdo_phoenix__DOT__fq_rp;
    __Vdly__mrdo_phoenix__DOT__fq_rp = 0;
    CData/*7:0*/ __Vdly__mrdo_phoenix__DOT__rd_u;
    __Vdly__mrdo_phoenix__DOT__rd_u = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__rd_pend;
    __Vdly__mrdo_phoenix__DOT__rd_pend = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__spi_busy;
    __Vdly__mrdo_phoenix__DOT__spi_busy = 0;
    CData/*7:0*/ __Vdly__mrdo_phoenix__DOT__spi_sr;
    __Vdly__mrdo_phoenix__DOT__spi_sr = 0;
    CData/*0:0*/ __Vdly__sd_sclk;
    __Vdly__sd_sclk = 0;
    CData/*3:0*/ __Vdly__mrdo_phoenix__DOT__spi_cnt;
    __Vdly__mrdo_phoenix__DOT__spi_cnt = 0;
    CData/*4:0*/ __Vdly__mrdo_phoenix__DOT__spi_div;
    __Vdly__mrdo_phoenix__DOT__spi_div = 0;
    IData/*17:0*/ __Vdly__mrdo_phoenix__DOT__ld_a;
    __Vdly__mrdo_phoenix__DOT__ld_a = 0;
    CData/*3:0*/ __Vdly__mrdo_phoenix__DOT__fq_wp;
    __Vdly__mrdo_phoenix__DOT__fq_wp = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__wbank;
    __Vdly__mrdo_phoenix__DOT__wbank = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__rot;
    __Vdly__mrdo_phoenix__DOT__rot = 0;
    CData/*7:0*/ __Vdly__mrdo_phoenix__DOT__rd_x;
    __Vdly__mrdo_phoenix__DOT__rd_x = 0;
    CData/*1:0*/ __Vdly__mrdo_phoenix__DOT__hs;
    __Vdly__mrdo_phoenix__DOT__hs = 0;
    CData/*1:0*/ __Vdly__mrdo_phoenix__DOT__vs;
    __Vdly__mrdo_phoenix__DOT__vs = 0;
    CData/*1:0*/ __Vdly__mrdo_phoenix__DOT__bl;
    __Vdly__mrdo_phoenix__DOT__bl = 0;
    SData/*8:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__box_n;
    __Vdly__mrdo_phoenix__DOT__main__DOT__box_n = 0;
    IData/*19:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__box;
    __Vdly__mrdo_phoenix__DOT__main__DOT__box = 0;
    IData/*16:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng = 0;
    CData/*2:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__div;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__div = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step = 0;
    CData/*3:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog = 0;
    CData/*1:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch = 0;
    IData/*16:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng = 0;
    CData/*2:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__div;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__div = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step = 0;
    CData/*3:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog = 0;
    CData/*1:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch = 0;
    CData/*2:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 0;
    SData/*8:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x = 0;
    CData/*3:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col = 0;
    CData/*5:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx = 0;
    SData/*8:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt = 0;
    CData/*2:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph = 0;
    CData/*7:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x = 0;
    CData/*0:0*/ __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__pal_u__v0;
    __VdlyVal__mrdo_phoenix__DOT__pal_u__v0 = 0;
    CData/*4:0*/ __VdlyDim0__mrdo_phoenix__DOT__pal_u__v0;
    __VdlyDim0__mrdo_phoenix__DOT__pal_u__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__pal_u__v0;
    __VdlySet__mrdo_phoenix__DOT__pal_u__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__pal_t__v0;
    __VdlyVal__mrdo_phoenix__DOT__pal_t__v0 = 0;
    CData/*4:0*/ __VdlyDim0__mrdo_phoenix__DOT__pal_t__v0;
    __VdlyDim0__mrdo_phoenix__DOT__pal_t__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__pal_t__v0;
    __VdlySet__mrdo_phoenix__DOT__pal_t__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__lbuf__v0;
    __VdlyVal__mrdo_phoenix__DOT__lbuf__v0 = 0;
    SData/*10:0*/ __VdlyDim0__mrdo_phoenix__DOT__lbuf__v0;
    __VdlyDim0__mrdo_phoenix__DOT__lbuf__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__lbuf__v0;
    __VdlySet__mrdo_phoenix__DOT__lbuf__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__fq_d__v0;
    __VdlyVal__mrdo_phoenix__DOT__fq_d__v0 = 0;
    CData/*3:0*/ __VdlyDim0__mrdo_phoenix__DOT__fq_d__v0;
    __VdlyDim0__mrdo_phoenix__DOT__fq_d__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__fq_d__v0;
    __VdlySet__mrdo_phoenix__DOT__fq_d__v0 = 0;
    SData/*15:0*/ __VdlyVal__mrdo_phoenix__DOT__fq_a__v0;
    __VdlyVal__mrdo_phoenix__DOT__fq_a__v0 = 0;
    CData/*3:0*/ __VdlyDim0__mrdo_phoenix__DOT__fq_a__v0;
    __VdlyDim0__mrdo_phoenix__DOT__fq_a__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__fq_a__v0;
    __VdlySet__mrdo_phoenix__DOT__fq_a__v0 = 0;
    CData/*0:0*/ __VdlyVal__mrdo_phoenix__DOT__fq_b__v0;
    __VdlyVal__mrdo_phoenix__DOT__fq_b__v0 = 0;
    CData/*3:0*/ __VdlyDim0__mrdo_phoenix__DOT__fq_b__v0;
    __VdlyDim0__mrdo_phoenix__DOT__fq_b__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__fq_b__v0;
    __VdlySet__mrdo_phoenix__DOT__fq_b__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__ram__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__ram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__ram__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__ram__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*2:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*2:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v8;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v8 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v6;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v6 = 0;
    SData/*11:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v1;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v1 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v8;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v8 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1 = 0;
    CData/*3:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v6;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v6 = 0;
    SData/*11:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 = 0;
    CData/*1:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v1;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v1 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 = 0;
    SData/*10:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 = 0;
    SData/*10:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 = 0;
    SData/*10:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 = 0;
    SData/*10:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 = 0;
    CData/*7:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 = 0;
    CData/*4:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 = 0;
    CData/*5:0*/ __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0;
    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 = 0;
    SData/*8:0*/ __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0;
    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 = 0;
    CData/*0:0*/ __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 = 0;
    // Body
    __Vdly__mrdo_phoenix__DOT__acc_psg = vlSelfRef.mrdo_phoenix__DOT__acc_psg;
    __Vdly__mrdo_phoenix__DOT__main__DOT__box_n = vlSelfRef.mrdo_phoenix__DOT__main__DOT__box_n;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__acc_pix = vlSelfRef.mrdo_phoenix__DOT__acc_pix;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__acc_cpu = vlSelfRef.mrdo_phoenix__DOT__acc_cpu;
    __Vdly__mrdo_phoenix__DOT__rot = vlSelfRef.mrdo_phoenix__DOT__rot;
    __Vdly__mrdo_phoenix__DOT__main__DOT__box = vlSelfRef.mrdo_phoenix__DOT__main__DOT__box;
    __Vdly__mrdo_phoenix__DOT__hc = vlSelfRef.mrdo_phoenix__DOT__hc;
    __Vdly__mrdo_phoenix__DOT__hs = vlSelfRef.mrdo_phoenix__DOT__hs;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__div 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__div;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__div 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__div;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt;
    __Vdly__mrdo_phoenix__DOT__vs = vlSelfRef.mrdo_phoenix__DOT__vs;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col;
    __Vdly__mrdo_phoenix__DOT__rd_x = vlSelfRef.mrdo_phoenix__DOT__rd_x;
    __Vdly__mrdo_phoenix__DOT__bl = vlSelfRef.mrdo_phoenix__DOT__bl;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_h = vlSelfRef.mrdo_phoenix__DOT__g_h;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on;
    __Vdly__mrdo_phoenix__DOT__wbank = vlSelfRef.mrdo_phoenix__DOT__wbank;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_v = vlSelfRef.mrdo_phoenix__DOT__g_v;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx;
    __Vdly__mrdo_phoenix__DOT__vc = vlSelfRef.mrdo_phoenix__DOT__vc;
    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st;
    __Vdly__mrdo_phoenix__DOT__wph = vlSelfRef.mrdo_phoenix__DOT__wph;
    __Vdly__mrdo_phoenix__DOT__fq_rp = vlSelfRef.mrdo_phoenix__DOT__fq_rp;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__step;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__step;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 = 0U;
    __Vdly__mrdo_phoenix__DOT__fq_wp = vlSelfRef.mrdo_phoenix__DOT__fq_wp;
    __VdlySet__mrdo_phoenix__DOT__fq_b__v0 = 0U;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__rst_cnt = vlSelfRef.mrdo_phoenix__DOT__rst_cnt;
    __Vdly__mrdo_phoenix__DOT__rd_u = vlSelfRef.mrdo_phoenix__DOT__rd_u;
    __Vdly__mrdo_phoenix__DOT__rd_pend = vlSelfRef.mrdo_phoenix__DOT__rd_pend;
    __VdlySet__mrdo_phoenix__DOT__fq_a__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__fq_d__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__lbuf__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__start_game 
        = vlSelfRef.mrdo_phoenix__DOT__start_game;
    __Vdly__mrdo_phoenix__DOT__b_pend = vlSelfRef.mrdo_phoenix__DOT__b_pend;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v6 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v6 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v1 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v1 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v8 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v8 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__ram__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__pal_u__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__pal_t__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 = 0U;
    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 = 0U;
    __Vdly__mrdo_phoenix__DOT__spi_div = vlSelfRef.mrdo_phoenix__DOT__spi_div;
    __Vdly__sd_sclk = vlSelfRef.sd_sclk;
    __Vdly__mrdo_phoenix__DOT__spi_cnt = vlSelfRef.mrdo_phoenix__DOT__spi_cnt;
    __Vdly__mrdo_phoenix__DOT__ld_a = vlSelfRef.mrdo_phoenix__DOT__ld_a;
    __Vdly__mrdo_phoenix__DOT__spi_busy = vlSelfRef.mrdo_phoenix__DOT__spi_busy;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng;
    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng;
    __Vdly__mrdo_phoenix__DOT__spi_sr = vlSelfRef.mrdo_phoenix__DOT__spi_sr;
    __Vdly__mrdo_phoenix__DOT__acc_psg = (0x00ffffffU 
                                          & ((IData)(0x0014fdf4U) 
                                             + vlSelfRef.mrdo_phoenix__DOT__acc_psg));
    __Vdly__mrdo_phoenix__DOT__main__DOT__box_n = (0x000001ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__box_n)));
    if (vlSelfRef.mrdo_phoenix__DOT__run) {
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__acc_pix 
            = (0x000000ffU & ((0xc9U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__acc_pix))
                               ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__acc_pix) 
                                  - (IData)(0xc9U))
                               : ((IData)(0x31U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__acc_pix))));
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__acc_cpu 
            = (0x000000ffU & ((0xd1U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__acc_cpu))
                               ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__acc_cpu) 
                                  - (IData)(0xd1U))
                               : ((IData)(0x29U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__acc_cpu))));
    }
    if (vlSelfRef.rot_toggle) {
        __Vdly__mrdo_phoenix__DOT__rot = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__rot)));
    }
    if ((0x031fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__hc))) {
        __Vdly__mrdo_phoenix__DOT__hc = 0U;
        __Vdly__mrdo_phoenix__DOT__vc = ((0x020cU == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))
                                          ? 0U : (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))));
    } else {
        __Vdly__mrdo_phoenix__DOT__hc = (0x000003ffU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)));
    }
    __Vdly__mrdo_phoenix__DOT__hs = ((2U & (IData)(__Vdly__mrdo_phoenix__DOT__hs)) 
                                     | (1U & (~ ((0x0290U 
                                                  <= (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                                 & (0x02f0U 
                                                    > (IData)(vlSelfRef.mrdo_phoenix__DOT__hc))))));
    __Vdly__mrdo_phoenix__DOT__hs = ((1U & (IData)(__Vdly__mrdo_phoenix__DOT__hs)) 
                                     | (2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__hs) 
                                              << 1U)));
    __Vdly__mrdo_phoenix__DOT__vs = ((2U & (IData)(__Vdly__mrdo_phoenix__DOT__vs)) 
                                     | (1U & (~ ((0x01eaU 
                                                  == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)) 
                                                 | (0x01ebU 
                                                    == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))))));
    __Vdly__mrdo_phoenix__DOT__vs = ((1U & (IData)(__Vdly__mrdo_phoenix__DOT__vs)) 
                                     | (2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__vs) 
                                              << 1U)));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
                __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x)));
                __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col)));
                if ((0x0fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col))) {
                    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_last)))) {
                        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx 
                            = (0x0000003fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx) 
                                              - (IData)(1U)));
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 0U;
        } else if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
            if ((0x0fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col))) {
                __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st 
                    = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_last)
                        ? 0U : 2U);
            }
        } else {
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_x;
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col = 0U;
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_hit)))) {
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_last)))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx 
                        = (0x0000003fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx) 
                                          - (IData)(1U)));
                }
            }
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st 
                = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_hit)
                    ? 4U : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_last)
                             ? 0U : 2U));
        } else {
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
        if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt)))) {
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx = 0x3fU;
            __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 2U;
        }
    }
    __Vdly__mrdo_phoenix__DOT__bl = ((2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__bl) 
                                            << 1U)) 
                                     | ((0x0280U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                        | (0x01e0U 
                                           <= (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))));
    if (vlSelfRef.mrdo_phoenix__DOT__cen_pix) {
        if ((0x0137U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h))) {
            vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_h = 0U;
            vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_v 
                = ((0x0105U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v))
                    ? 0U : (0x000001ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v))));
        } else {
            vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_h 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h)));
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on) {
        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph 
            = ((4U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))));
        if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            if ((2U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
                if ((4U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
                    if ((0xf7U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x))) {
                        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on = 0U;
                    }
                    __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x)));
                }
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__wph) {
        __Vdly__mrdo_phoenix__DOT__wph = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
        if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                   | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty))))) {
            __Vdly__mrdo_phoenix__DOT__wph = 1U;
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp_stb) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__dc 
            = (0x00ffffffU & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__dc 
                              + VL_SHIFTRS_III(24,24,32, vlSelfRef.mrdo_phoenix__DOT__main__DOT__hp, 0x0000000bU)));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1 
            = (0x00ffffffU & ((vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1 
                               + VL_SHIFTRS_III(24,24,32, vlSelfRef.mrdo_phoenix__DOT__main__DOT__d1, 1U)) 
                              + VL_SHIFTRS_III(24,24,32, vlSelfRef.mrdo_phoenix__DOT__main__DOT__d1, 2U)));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2 
            = (0x00ffffffU & ((vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2 
                               + VL_SHIFTRS_III(24,24,32, vlSelfRef.mrdo_phoenix__DOT__main__DOT__d2, 1U)) 
                              + VL_SHIFTRS_III(24,24,32, vlSelfRef.mrdo_phoenix__DOT__main__DOT__d2, 2U)));
        __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__hp;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__clip__Vstatic__m 
            = (0x00ffffffU & VL_SHIFTRS_III(24,24,32, __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__v, 4U));
        __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__Vfuncout 
            = (VL_LTS_III(24, 0x00007fffU, vlSelfRef.mrdo_phoenix__DOT__main__DOT__clip__Vstatic__m)
                ? 0x00007fffU : (VL_GTS_III(24, 0x00ff8000U, vlSelfRef.mrdo_phoenix__DOT__main__DOT__clip__Vstatic__m)
                                  ? 0x00008000U : (0x0000ffffU 
                                                   & vlSelfRef.mrdo_phoenix__DOT__main__DOT__clip__Vstatic__m)));
        vlSelfRef.audio = __Vfunc_mrdo_phoenix__DOT__main__DOT__clip__4__Vfuncout;
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_we) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wd;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wa;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__pix_we) 
          & (IData)(vlSelfRef.mrdo_phoenix__DOT__rot)) 
         & (~ (IData)(vlSelfRef.boot_mode)))) {
        __Vdly__mrdo_phoenix__DOT__fq_wp = (0x0000000fU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_wp)));
        __VdlyVal__mrdo_phoenix__DOT__fq_b__v0 = vlSelfRef.mrdo_phoenix__DOT__wbank;
        __VdlyDim0__mrdo_phoenix__DOT__fq_b__v0 = vlSelfRef.mrdo_phoenix__DOT__fq_wp;
        __VdlySet__mrdo_phoenix__DOT__fq_b__v0 = 1U;
        __VdlyVal__mrdo_phoenix__DOT__fq_a__v0 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__pix_y) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.mrdo_phoenix__DOT__pix_x));
        __VdlyDim0__mrdo_phoenix__DOT__fq_a__v0 = vlSelfRef.mrdo_phoenix__DOT__fq_wp;
        __VdlySet__mrdo_phoenix__DOT__fq_a__v0 = 1U;
        __VdlyVal__mrdo_phoenix__DOT__fq_d__v0 = vlSelfRef.mrdo_phoenix__DOT__g_pixel;
        __VdlyDim0__mrdo_phoenix__DOT__fq_d__v0 = vlSelfRef.mrdo_phoenix__DOT__fq_wp;
        __VdlySet__mrdo_phoenix__DOT__fq_d__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mrdo_phoenix__DOT__start_game)) 
         | ((IData)(vlSelfRef.game_reset) & (~ (IData)(vlSelfRef.boot_mode))))) {
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__rst_cnt = 0xffU;
    } else if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt))) {
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__rst_cnt 
            = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt) 
                              - (IData)(1U)));
    }
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wph)))) {
        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
            if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                       | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty))))) {
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend)))) {
                    __Vdly__mrdo_phoenix__DOT__fq_rp 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_rp)));
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                          | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty)))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__rd_pend) {
                    __Vdly__mrdo_phoenix__DOT__rd_u 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__rd_u)));
                }
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__pf_go) {
        __Vdly__mrdo_phoenix__DOT__rd_u = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wph)))) {
        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                          | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty)))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__rd_pend) {
                    if ((0xbfU == (IData)(vlSelfRef.mrdo_phoenix__DOT__rd_u))) {
                        __Vdly__mrdo_phoenix__DOT__rd_pend = 0U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__pf_go) {
        __Vdly__mrdo_phoenix__DOT__rd_pend = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__lb_we) 
         | ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__rot)) 
            & (IData)(vlSelfRef.mrdo_phoenix__DOT__pix_we)))) {
        if (vlSelfRef.mrdo_phoenix__DOT__lb_we) {
            __VdlyVal__mrdo_phoenix__DOT__lbuf__v0 
                = vlSelfRef.mrdo_phoenix__DOT__lb_wd;
            __VdlyDim0__mrdo_phoenix__DOT__lbuf__v0 
                = vlSelfRef.mrdo_phoenix__DOT__lb_wa;
        } else {
            __VdlyVal__mrdo_phoenix__DOT__lbuf__v0 
                = vlSelfRef.mrdo_phoenix__DOT__g_pixel;
            __VdlyDim0__mrdo_phoenix__DOT__lbuf__v0 
                = ((0x00000700U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__pix_y) 
                                   << 8U)) | (IData)(vlSelfRef.mrdo_phoenix__DOT__pix_x));
        }
        __VdlySet__mrdo_phoenix__DOT__lbuf__v0 = 1U;
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_309) 
             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_308) 
                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310) 
                    & (0x10U == (0x18U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)))) 
                   & ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                       ? (IData)((0U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))))
                       : (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))))))) {
            __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                   ? vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                                  [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB]
                                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                       ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r) 
                                          >> 8U) : 
                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                        ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ID16) 
                                           >> 8U) : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux)))));
            __VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
            __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_309) 
             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_308) 
                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310) 
                    & (0x10U == (0x18U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)))) 
                   & ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                       ? (IData)((1U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))))
                       : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)))))) {
            __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
                                   ? vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
                                  [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB]
                                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                       ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r)
                                       : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63)
                                           ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ID16)
                                           : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux)))));
            __VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
            __VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 1U;
        }
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC 
            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To)));
        if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY) 
             | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC 
                = (2U | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                         << 2U));
        }
        if ((1U & ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY) 
                     | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL)) 
                    & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State))) 
                   | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                      >> 5U)))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC 
                = (3U | (4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r 
            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)))) 
             & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r 
                = (3U | (4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r 
            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)))) 
             & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r 
                = (3U | (4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA;
    }
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__start_game = 0U;
    if (vlSelfRef.mrdo_phoenix__DOT__cen_psg) {
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__div 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__div)));
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__div 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__div)));
        if ((7U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__div))) {
            __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step = 1U;
        }
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__step) {
            if ((1U >= vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt
                 [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch])) {
                if ((3U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))) 
                            & (IData)(__Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog)) 
                           | (0x0fU & ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog) 
                                                 >> (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch)))) 
                                       << (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))));
                }
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 
                    = (0x00000fffU & ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))
                                       ? ((3U == (3U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg)))
                                           ? ((0U == vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U])
                                               ? 0x0800U
                                               : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U]) 
                                                  << 1U))
                                           : ((IData)(0x0020U) 
                                              << (3U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg))))
                                       : ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_315))
                                           ? 0x0400U
                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_315))));
            } else {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 
                    = (0x00000fffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt
                                              [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch]) 
                                      - (IData)(1U)));
            }
            if ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))) {
                __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step = 0U;
            }
            __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch)));
            __VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch;
            __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0 = 1U;
        }
        if ((7U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__div))) {
            __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step = 1U;
        }
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__step) {
            if ((1U >= vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt
                 [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch])) {
                if ((3U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))) 
                            & (IData)(__Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog)) 
                           | (0x0fU & ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog) 
                                                 >> (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch)))) 
                                       << (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))));
                }
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 
                    = (0x00000fffU & ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))
                                       ? ((3U == (3U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg)))
                                           ? ((0U == vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U])
                                               ? 0x0800U
                                               : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U]) 
                                                  << 1U))
                                           : ((IData)(0x0020U) 
                                              << (3U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg))))
                                       : ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_316))
                                           ? 0x0400U
                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_316))));
            } else {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 
                    = (0x00000fffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt
                                              [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch]) 
                                      - (IData)(1U)));
            }
            if ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))) {
                __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step = 0U;
            }
            __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch)));
            __VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch;
            __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0 = 1U;
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr2) {
        if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
            if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  >> 4U)))) {
                        __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0 
                            = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0 = 1U;
                    }
                }
                if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                        __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0 
                            = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  >> 4U)))) {
                        __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng = 0x00004000U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1 = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                              >> 4U)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1 = 1U;
                }
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2 = 1U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                              >> 4U)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2 = 1U;
                }
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3 = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3 
                        = (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3 = 1U;
                }
            }
            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
                if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last)))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng = 0x00004000U;
                }
            } else if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last)))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4 
                    = (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4 = 1U;
            }
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6 = 1U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last)))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5 
                    = (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5 = 1U;
            }
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7 = 1U;
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__cen_psg) {
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__step) {
            if ((1U >= vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt
                 [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch])) {
                if ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng 
                        = ((0x00004000U & ((vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng 
                                            ^ ((vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg) 
                                                  >> 2U))) 
                                           << 0x0000000eU)) 
                           | (0x00003fffU & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng 
                                             >> 1U)));
                }
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr2) {
        if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
            if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  >> 4U)))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg 
                            = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    }
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last 
                = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                         >> 4U));
        } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last))) {
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last)))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg 
                        = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                }
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr1) {
        if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
            if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  >> 4U)))) {
                        __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0 
                            = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0 = 1U;
                    }
                }
                if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                        __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0 
                            = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  >> 4U)))) {
                        __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng = 0x00004000U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1 = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                              >> 4U)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1 = 1U;
                }
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2 = 1U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                              >> 4U)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2 = 1U;
                }
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3 = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3 
                        = (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3 = 1U;
                }
            }
            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
                if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4 
                        = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last)))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng = 0x00004000U;
                }
            } else if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last)))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4 
                    = (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4 = 1U;
            }
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6 = 1U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last)))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5 
                    = (0x0000003fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5 = 1U;
            }
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7 = 1U;
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__cen_psg) {
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__step) {
            if ((1U >= vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt
                 [vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch])) {
                if ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch))) {
                    __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng 
                        = ((0x00004000U & ((vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng 
                                            ^ ((vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg) 
                                                  >> 2U))) 
                                           << 0x0000000eU)) 
                           | (0x00003fffU & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng 
                                             >> 1U)));
                }
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr1) {
        if ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
            if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  >> 4U)))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg 
                            = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                    }
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last 
                = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                         >> 4U));
        } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last))) {
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last)))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg 
                        = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                }
            }
        }
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0xe000U == (0xf000U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__ram__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__ram__v0 
            = (0x00000fffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0x8000U == (0xfc00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 
            = (0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0x8400U == (0xfc00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 
            = (0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0x8800U == (0xfc00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 
            = (0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0x8c00U == (0xfc00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 
            = (0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0x9000U == (0xff00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        if ((0U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
            __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
            __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 
                = (0x0000003fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 2U));
            __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0 = 1U;
        }
        if ((0U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
            if ((1U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 
                    = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 
                    = (0x0000003fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                      >> 2U));
                __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0 = 1U;
            }
            if ((1U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                if ((2U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 
                        = (0x0000003fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                          >> 2U));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0 = 1U;
                }
                if ((2U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                    __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                    __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 
                        = (0x0000003fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                          >> 2U));
                    __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0 = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr) 
         & (0U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 
            = (0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                              >> 2U));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr) 
         & (1U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 
            = (0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                              >> 2U));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr) 
         & (2U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 
            = (0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                              >> 2U));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr) 
         & (3U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a))))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 
            = (0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                              >> 2U));
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_pal) 
         & (~ (vlSelfRef.mrdo_phoenix__DOT__ld_a >> 5U)))) {
        __VdlyVal__mrdo_phoenix__DOT__pal_u__v0 = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__pal_u__v0 = 
            (0x0000001fU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__pal_u__v0 = 1U;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_pal) 
         & (vlSelfRef.mrdo_phoenix__DOT__ld_a >> 5U))) {
        __VdlyVal__mrdo_phoenix__DOT__pal_t__v0 = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__pal_t__v0 = 
            (0x0000001fU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__pal_t__v0 = 1U;
    }
    if ((IData)(((0U == (0x00007000U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 
            = (0x00000fffU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0 = 1U;
    }
    if ((IData)(((0x00001000U == (0x00007000U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 
            = (0x00000fffU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0 = 1U;
    }
    if ((IData)(((0x00002000U == (0x00007000U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 
            = (0x00000fffU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0 = 1U;
    }
    if ((IData)(((0x00003000U == (0x00007000U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 
            = (0x00000fffU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0 = 1U;
    }
    if ((IData)(((0x00006040U == (0x00007fe0U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)))) {
        __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 
            = vlSelfRef.mrdo_phoenix__DOT__ld_d;
        __VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 
            = (0x0000001fU & vlSelfRef.mrdo_phoenix__DOT__ld_a);
        __VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0 = 1U;
    }
    if (vlSelfRef.mrdo_phoenix__DOT__spi_start) {
        __Vdly__mrdo_phoenix__DOT__spi_div = 0U;
        __Vdly__sd_sclk = 0U;
        __Vdly__mrdo_phoenix__DOT__spi_cnt = 0x0fU;
        __Vdly__mrdo_phoenix__DOT__spi_busy = 1U;
        __Vdly__mrdo_phoenix__DOT__spi_sr = vlSelfRef.mrdo_phoenix__DOT__spi_tx;
        vlSelfRef.sd_mosi = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_tx) 
                                   >> 7U));
    } else if (vlSelfRef.mrdo_phoenix__DOT__spi_busy) {
        __Vdly__mrdo_phoenix__DOT__spi_div = (0x0000001fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_div)));
        if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_fast) 
              & (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_div)) 
             | (0x1fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_div)))) {
            __Vdly__mrdo_phoenix__DOT__spi_div = 0U;
            __Vdly__sd_sclk = (1U & (~ (IData)(vlSelfRef.sd_sclk)));
            if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_cnt))) {
                __Vdly__mrdo_phoenix__DOT__spi_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_cnt) 
                                      - (IData)(1U)));
            }
            if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_cnt))) {
                __Vdly__mrdo_phoenix__DOT__spi_busy = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.sd_sclk)))) {
                __Vdly__mrdo_phoenix__DOT__spi_sr = 
                    ((0x000000feU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_sr) 
                                     << 1U)) | (IData)(vlSelfRef.sd_miso));
            }
            if (vlSelfRef.sd_sclk) {
                vlSelfRef.sd_mosi = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_sr) 
                                           >> 7U));
            }
        }
    }
    if (vlSelfRef.mrdo_phoenix__DOT__ld_we) {
        __Vdly__mrdo_phoenix__DOT__ld_a = (0x0003ffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.mrdo_phoenix__DOT__ld_a));
    }
    vlSelfRef.vid_hsync_n = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__hs) 
                                   >> 1U));
    vlSelfRef.vid_vsync_n = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__vs) 
                                   >> 1U));
    vlSelfRef.vid_blank = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__bl) 
                                 >> 1U));
    vlSelfRef.mrdo_phoenix__DOT__io_wr_d = vlSelfRef.mrdo_phoenix__DOT__io_wr;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_y 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr1
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx];
    vlSelfRef.mrdo_phoenix__DOT__fx2 = vlSelfRef.mrdo_phoenix__DOT__fx1;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_sel 
        = (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a));
    vlSelfRef.mrdo_phoenix__DOT__fy2 = vlSelfRef.mrdo_phoenix__DOT__fy1;
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__34__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[0U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_0__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__34__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_1 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_0__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_1 = 0U;
    }
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__35__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[1U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_2__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__35__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_3 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_2__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_3 = 0U;
    }
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__36__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[2U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_4__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__36__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_5 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_4__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_5 = 0U;
    }
    if ((1U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng)) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__37__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[3U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_6__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn2__DOT__level__37__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_7 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCall_6__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_7 = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2_out 
        = (0x000003ffU & ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_1) 
                            + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_3)) 
                           + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_5)) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT____VlemCond_7)));
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__38__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[0U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_0__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__38__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_1 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_0__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_1 = 0U;
    }
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__39__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[1U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_2__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__39__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_3 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_2__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_3 = 0U;
    }
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__40__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[2U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_4__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__40__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_5 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_4__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_5 = 0U;
    }
    if ((1U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng)) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__41__v 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[3U];
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_6__level 
            = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h39c01a5a_0
               [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__sn1__DOT__level__41__v))]);
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_7 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCall_6__level;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_7 = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1_out 
        = (0x000003ffU & ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_1) 
                            + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_3)) 
                           + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_5)) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT____VlemCond_7)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga0_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg0
        [(0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                         >> 2U))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga1_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg1
        [(0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                         >> 2U))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga2_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg2
        [(0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                         >> 2U))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga3_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg3
        [(0x000007ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a) 
                         >> 2U))];
    vlSelfRef.mrdo_phoenix__DOT__io_rd_d = vlSelfRef.mrdo_phoenix__DOT__io_rd;
    if ((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
          & (0x01f8U == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))) 
         & (IData)(vlSelfRef.mrdo_phoenix__DOT__wait_pt))) {
        vlSelfRef.mrdo_phoenix__DOT__go = 1U;
    } else if (((IData)(vlSelfRef.mrdo_phoenix__DOT__cen_pix) 
                & (IData)(vlSelfRef.mrdo_phoenix__DOT__wait_pt))) {
        vlSelfRef.mrdo_phoenix__DOT__go = 0U;
    }
    vlSelfRef.sram_wpulse = 0U;
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wph)))) {
        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
            if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                       | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__b_pend) {
                    __Vdly__mrdo_phoenix__DOT__b_pend = 0U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
         & ((0U == (3U & (vlSelfRef.mrdo_phoenix__DOT__ld_a 
                          >> 0x10U))) | (vlSelfRef.mrdo_phoenix__DOT__ld_a 
                                         >> 0x11U)))) {
        __Vdly__mrdo_phoenix__DOT__b_pend = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wph)))) {
        if (vlSelfRef.mrdo_phoenix__DOT__p0) {
            vlSelfRef.mrdo_phoenix__DOT__s0_addr = vlSelfRef.mrdo_phoenix__DOT__m0_addr;
            vlSelfRef.mrdo_phoenix__DOT__s0_ok = 1U;
            vlSelfRef.sram_addr = vlSelfRef.mrdo_phoenix__DOT__m0_addr;
        } else if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                          | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty))))) {
            if (vlSelfRef.mrdo_phoenix__DOT__b_pend) {
                vlSelfRef.mrdo_phoenix__DOT__s0_ok = 0U;
                vlSelfRef.sram_addr = vlSelfRef.mrdo_phoenix__DOT__b_addr;
            } else {
                vlSelfRef.sram_addr = (0x00040000U 
                                       | (((IData)(vlSelfRef.mrdo_phoenix__DOT__fq_b
                                                   [vlSelfRef.mrdo_phoenix__DOT__fq_rp]) 
                                           << 0x00000011U) 
                                          | vlSelfRef.mrdo_phoenix__DOT__fq_a
                                          [vlSelfRef.mrdo_phoenix__DOT__fq_rp]));
            }
        } else if (vlSelfRef.mrdo_phoenix__DOT__rd_pend) {
            vlSelfRef.sram_addr = (0x00040000U | (((IData)(vlSelfRef.mrdo_phoenix__DOT__rbank) 
                                                   << 0x00000011U) 
                                                  | (((IData)(vlSelfRef.mrdo_phoenix__DOT__rd_u) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.mrdo_phoenix__DOT__rd_x))));
        }
        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
            if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                       | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty))))) {
                vlSelfRef.sram_wpulse = 1U;
            }
        }
        vlSelfRef.sram_oe_n = ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0))) 
                               && (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                                         | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty)))));
        vlSelfRef.sram_doe = ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0))) 
                              && (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                                        | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty)))));
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
         & ((0U == (3U & (vlSelfRef.mrdo_phoenix__DOT__ld_a 
                          >> 0x10U))) | (vlSelfRef.mrdo_phoenix__DOT__ld_a 
                                         >> 0x11U)))) {
        vlSelfRef.mrdo_phoenix__DOT__b_addr = vlSelfRef.mrdo_phoenix__DOT__ld_a;
    }
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wph)))) {
        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
            if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                       | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty))))) {
                vlSelfRef.sram_dout = ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend)
                                        ? (IData)(vlSelfRef.mrdo_phoenix__DOT__b_data)
                                        : vlSelfRef.mrdo_phoenix__DOT__fq_d
                                       [vlSelfRef.mrdo_phoenix__DOT__fq_rp]);
            }
        }
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
         & ((0U == (3U & (vlSelfRef.mrdo_phoenix__DOT__ld_a 
                          >> 0x10U))) | (vlSelfRef.mrdo_phoenix__DOT__ld_a 
                                         >> 0x11U)))) {
        vlSelfRef.mrdo_phoenix__DOT__b_data = vlSelfRef.mrdo_phoenix__DOT__ld_d;
    }
    if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__wr_stb) 
          & (IData)(vlSelfRef.boot_mode)) & (0xc000U 
                                             == (0xff00U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                            vlSelfRef.__Vdly__mrdo_phoenix__DOT__start_game = 1U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                            vlSelfRef.mrdo_phoenix__DOT__exec_sram 
                                = (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                            vlSelfRef.led_err = (1U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                            vlSelfRef.mrdo_phoenix__DOT__dsw2 
                                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                            vlSelfRef.mrdo_phoenix__DOT__dsw1 
                                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                            __Vdly__mrdo_phoenix__DOT__ld_a 
                                = ((0x0000ffffU & __Vdly__mrdo_phoenix__DOT__ld_a) 
                                   | (0x00030000U & 
                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                       << 0x00000010U)));
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                    __Vdly__mrdo_phoenix__DOT__ld_a 
                        = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))
                            ? ((0x000300ffU & __Vdly__mrdo_phoenix__DOT__ld_a) 
                               | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                  << 8U)) : ((0x0003ff00U 
                                              & __Vdly__mrdo_phoenix__DOT__ld_a) 
                                             | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout)));
                }
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                            vlSelfRef.sd_cs_n = (1U 
                                                 & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout)));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb0_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg0
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb_a];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb1_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg1
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb_a];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb2_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg2
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb_a];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb3_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg3
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb_a];
    if ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__rtag))) {
        vlSelfRef.mrdo_phoenix__DOT__rom_q = vlSelfRef.sram_din;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg0_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg0
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_ga];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg1_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg1
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_ga];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg0_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg0
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_ga];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg1_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg1
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_ga];
    if (vlSelfRef.mrdo_phoenix__DOT__area2) {
        if (vlSelfRef.boot_mode) {
            if (vlSelfRef.mrdo_phoenix__DOT__ink) {
                vlSelfRef.vid_r = 0xffU;
                vlSelfRef.vid_g = 0xffU;
                vlSelfRef.vid_b = ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__text_q))
                                    ? 0U : 0xffU);
            } else {
                vlSelfRef.vid_r = 0U;
                vlSelfRef.vid_g = 0U;
                vlSelfRef.vid_b = 0x60U;
            }
        } else {
            __Vfunc_mrdo_phoenix__DOT__lv__0__b = (
                                                   (0x0000000cU 
                                                    & (vlSelfRef.mrdo_phoenix__DOT__pal_u
                                                       [
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2))] 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSelfRef.mrdo_phoenix__DOT__pal_t
                                                      [
                                                      ((0x0000001cU 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2) 
                                                           >> 3U)) 
                                                       | (3U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2)))]));
            __Vfunc_mrdo_phoenix__DOT__lv__0__Vfuncout 
                = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h8e45f21e_0
                   [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__lv__0__b))]);
            vlSelfRef.vid_r = __Vfunc_mrdo_phoenix__DOT__lv__0__Vfuncout;
            __Vfunc_mrdo_phoenix__DOT__lv__1__b = (
                                                   (0x0000000cU 
                                                    & ((vlSelfRef.mrdo_phoenix__DOT__pal_u
                                                        [
                                                        (0x0000001fU 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2))] 
                                                        >> 2U) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSelfRef.mrdo_phoenix__DOT__pal_t
                                                         [
                                                         ((0x0000001cU 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2) 
                                                              >> 3U)) 
                                                          | (3U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2)))] 
                                                         >> 2U)));
            __Vfunc_mrdo_phoenix__DOT__lv__1__Vfuncout 
                = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h8e45f21e_0
                   [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__lv__1__b))]);
            vlSelfRef.vid_g = __Vfunc_mrdo_phoenix__DOT__lv__1__Vfuncout;
            __Vfunc_mrdo_phoenix__DOT__lv__2__b = (
                                                   (0x0000000cU 
                                                    & ((vlSelfRef.mrdo_phoenix__DOT__pal_u
                                                        [
                                                        (0x0000001fU 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2))] 
                                                        >> 4U) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSelfRef.mrdo_phoenix__DOT__pal_t
                                                         [
                                                         ((0x0000001cU 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2) 
                                                              >> 3U)) 
                                                          | (3U 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__pidx2)))] 
                                                         >> 4U)));
            __Vfunc_mrdo_phoenix__DOT__lv__2__Vfuncout 
                = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h8e45f21e_0
                   [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__lv__2__b))]);
            vlSelfRef.vid_b = __Vfunc_mrdo_phoenix__DOT__lv__2__Vfuncout;
        }
    } else {
        vlSelfRef.vid_r = 0U;
        vlSelfRef.vid_g = 0U;
        vlSelfRef.vid_b = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__wr_n_d = vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_n_d 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__ram_q = vlSelfRef.mrdo_phoenix__DOT__main__DOT__ram
        [(0x00000fffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bga 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bga
        [(0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bgc 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bgc
        [(0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fga 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fga
        [(0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fgc 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fgc
        [(0x000003ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))];
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (0x8800U == (0xf800U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d 
            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i9 
            = (1U & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i8 
            = (1U & ((IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d) 
                     >> 1U));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i6 
            = (1U & ((IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d) 
                     >> 3U));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i5 
            = (1U & ((IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d) 
                     >> 4U));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i4 
            = (1U & ((IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d) 
                     >> 5U));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i3 
            = (1U & ((IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d) 
                     >> 6U));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i2 
            = (1U & ((IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__d) 
                     >> 7U));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1 
            = (((((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i2) 
                    & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i3))) 
                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i4)) 
                  & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i5))) 
                 & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i6))) 
                & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i8))) 
               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i9));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t2 
            = (((((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i2)) 
                    & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i3))) 
                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i4)) 
                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i5)) 
                 & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i6))) 
                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i8)) 
               & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i9)));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t3 
            = (((((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i2) 
                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i3)) 
                   & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i4))) 
                  & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i5))) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i6)) 
                & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i8))) 
               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i9));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t4 
            = (((((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i2)) 
                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i3)) 
                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i4)) 
                  & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i5))) 
                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i6)) 
                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i8)) 
               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__i9));
        __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__Vfuncout 
            = (0x000000ffU & (~ (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t3) 
                                    | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t4)) 
                                   << 6U) | ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1) 
                                               | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t3)) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1) 
                                       | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t3)) 
                                      << 3U) | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1) 
                                                 | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t2)) 
                                                << 2U)) 
                                    | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__u001__Vstatic__t1) 
                                       << 1U)))));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__pal_u001 
            = __Vfunc_mrdo_phoenix__DOT__main__DOT__u001__3__Vfuncout;
    }
    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
         & (~ (IData)(vlSelfRef.boot_mode)))) {
        if ((0x1eU == (0x0000001fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                      >> 0x0000000bU)))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrollx 
                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
        }
        if ((0x1fU == (0x0000001fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                      >> 0x0000000bU)))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrolly 
                = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__flip)
                                   ? (- (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout))
                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout)));
        }
        if ((IData)((0x9800U == (0xf803U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__flip 
                = (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout));
        }
    }
    if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__dc = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1 = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2 = 0U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step = 0U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step = 0U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch = 0U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch = 0U;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v6 = 1U;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v6 = 1U;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v1 = 1U;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v1 = 1U;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v8 = 1U;
        __VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v8 = 1U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng = 0x00004000U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng = 0x00004000U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__pal_u001 = 0xffU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrollx = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrolly = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__nreg = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__nreg = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__flip = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__last = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__last = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd)))) {
        vlSelfRef.mrdo_phoenix__DOT__io_q = vlSelfRef.mrdo_phoenix__DOT__spi_rx;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__div 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__div;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__div 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__div;
    vlSelfRef.mrdo_phoenix__DOT__fq_wp = __Vdly__mrdo_phoenix__DOT__fq_wp;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U] 
            = ((0x03f0U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U]) 
               | (SData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v0));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[1U] 
            = ((0x03f0U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[1U]) 
               | (SData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v1));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[0U] 
            = ((0x03f0U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[0U]) 
               | (SData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v2));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U] 
            = ((0x000fU & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U]) 
               | ((SData)((IData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v3)) 
                  << 4U));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[1U] 
            = ((0x000fU & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[1U]) 
               | ((SData)((IData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v4)) 
                  << 4U));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[0U] 
            = ((0x000fU & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[0U]) 
               | ((SData)((IData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v5)) 
                  << 4U));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__period__v6) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[0U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[1U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__period[2U] = 0U;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U] 
            = ((0x03f0U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U]) 
               | (SData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v0));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[1U] 
            = ((0x03f0U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[1U]) 
               | (SData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v1));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[0U] 
            = ((0x03f0U & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[0U]) 
               | (SData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v2));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U] 
            = ((0x000fU & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U]) 
               | ((SData)((IData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v3)) 
                  << 4U));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[1U] 
            = ((0x000fU & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[1U]) 
               | ((SData)((IData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v4)) 
                  << 4U));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[0U] 
            = ((0x000fU & vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[0U]) 
               | ((SData)((IData)(__VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v5)) 
                  << 4U));
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__period__v6) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[0U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[1U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__period[2U] = 0U;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ctab[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__ctab__v0;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__step 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__step;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt__v1) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt[0U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt[1U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt[2U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__cnt[3U] = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__ch;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__step 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__step;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt__v1) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt[0U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt[1U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt[2U] = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__cnt[3U] = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__ch;
    vlSelfRef.mrdo_phoenix__DOT__hs = __Vdly__mrdo_phoenix__DOT__hs;
    vlSelfRef.mrdo_phoenix__DOT__vs = __Vdly__mrdo_phoenix__DOT__vs;
    vlSelfRef.mrdo_phoenix__DOT__bl = __Vdly__mrdo_phoenix__DOT__bl;
    if ((0x01ffU == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__box_n))) {
        __Vdly__mrdo_phoenix__DOT__main__DOT__box = 
            (0x000fffffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__mix));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp 
            = (0x000007ffU & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__box 
                              >> 9U));
    } else {
        __Vdly__mrdo_phoenix__DOT__main__DOT__box = 
            (0x000fffffU & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__box 
                            + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__mix)));
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__box = __Vdly__mrdo_phoenix__DOT__main__DOT__box;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr1[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr1__v0;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__tog;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn2__DOT__rng;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[3U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[2U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v1;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[1U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v2;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[0U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v3;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[3U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v4;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[2U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v5;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[1U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v6;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[0U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v7;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol__v8) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[0U] = 0x0fU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[1U] = 0x0fU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[2U] = 0x0fU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2__DOT__vol[3U] = 0x0fU;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__tog;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__sn1__DOT__rng;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[3U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[2U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v1;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[1U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v2;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[0U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v3;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[3U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v4;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[2U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v5;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[1U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v6;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[0U] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v7;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol__v8) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[0U] = 0x0fU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[1U] = 0x0fU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[2U] = 0x0fU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1__DOT__vol[3U] = 0x0fU;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg0[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg0__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg1[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg1__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg2[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg2__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sg3[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sg3__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg0[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg0__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg1[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fg1__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg0[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg0__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg1[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bg1__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__pal_u__v0) {
        vlSelfRef.mrdo_phoenix__DOT__pal_u[__VdlyDim0__mrdo_phoenix__DOT__pal_u__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__pal_u__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__pal_t__v0) {
        vlSelfRef.mrdo_phoenix__DOT__pal_t[__VdlyDim0__mrdo_phoenix__DOT__pal_t__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__pal_t__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__ram__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__ram[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__ram__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__ram__v0;
    }
    if (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
         & ((0x020cU == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)) 
            | (0x01dfU > (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))))) {
        if ((0x020cU == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))) {
            __Vdly__mrdo_phoenix__DOT__rd_x = 0xefU;
        } else if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))) {
            __Vdly__mrdo_phoenix__DOT__rd_x = (0x000000ffU 
                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__rd_x) 
                                                  - (IData)(1U)));
        }
    }
    vlSelfRef.mrdo_phoenix__DOT__rd_x = __Vdly__mrdo_phoenix__DOT__rd_x;
    if (__VdlySet__mrdo_phoenix__DOT__fq_b__v0) {
        vlSelfRef.mrdo_phoenix__DOT__fq_b[__VdlyDim0__mrdo_phoenix__DOT__fq_b__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__fq_b__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__fq_a__v0) {
        vlSelfRef.mrdo_phoenix__DOT__fq_a[__VdlyDim0__mrdo_phoenix__DOT__fq_a__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__fq_a__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__fq_d__v0) {
        vlSelfRef.mrdo_phoenix__DOT__fq_d[__VdlyDim0__mrdo_phoenix__DOT__fq_d__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__fq_d__v0;
    }
    vlSelfRef.mrdo_phoenix__DOT__fq_rp = __Vdly__mrdo_phoenix__DOT__fq_rp;
    vlSelfRef.sd_sclk = __Vdly__sd_sclk;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_x 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr3
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__d2 = (0x00ffffffU 
                                                  & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1 
                                                     - vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__hp = (0x00ffffffU 
                                                  & (vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp2 
                                                     - vlSelfRef.mrdo_phoenix__DOT__main__DOT__dc));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_we = 0U;
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
                if (((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_pen)) 
                     & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x) 
                           >> 8U)))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_we = 1U;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wa 
                        = ((0x00000100U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_line) 
                                           << 8U)) 
                           | (0x000000ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_we = 1U;
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wa 
                = ((0x00000100U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_line) 
                                   << 8U)) | (0x000000ffU 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt)));
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
                __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt)));
            }
        }
    }
    if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__line_start) 
          & (0x0020U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_line))) 
         & (0x00e0U > (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_line)))) {
        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt = 0U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st = 1U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_line 
            = (0x000000ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_line));
    }
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
                if (((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_pen)) 
                     & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x) 
                           >> 8U)))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wd 
                        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_color) 
                            << 2U) | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_pen));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_wd = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_flipx 
                    = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_attr) 
                             >> 4U));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb_a 
                    = ((0x000007f0U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_code) 
                                       << 4U)) | (0x0000000fU 
                                                  & ((0x00000020U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_attr))
                                                      ? 
                                                     (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum))
                                                      : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum))));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_color 
                    = (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_attr));
            }
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st)))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_last 
                    = (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx));
            }
        }
    }
    vlSelfRef.mrdo_phoenix__DOT__pf_go = 0U;
    vlSelfRef.mrdo_phoenix__DOT__pix_we = 0U;
    vlSelfRef.mrdo_phoenix__DOT__lb_we = 0U;
    if ((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__rtag))) {
        if ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__rtag))) {
            vlSelfRef.mrdo_phoenix__DOT__lb_we = 1U;
            vlSelfRef.mrdo_phoenix__DOT__lb_wd = vlSelfRef.sram_din;
            vlSelfRef.mrdo_phoenix__DOT__lb_wa = (((IData)(vlSelfRef.mrdo_phoenix__DOT__rt_half) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.mrdo_phoenix__DOT__rt_u));
        }
    }
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
    vlSelfRef.mrdo_phoenix__DOT__cen_psg = (1U & (((IData)(0x0014fdf4U) 
                                                   + vlSelfRef.mrdo_phoenix__DOT__acc_psg) 
                                                  >> 0x00000018U));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__d1 = (0x00ffffffU 
                                                  & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp) 
                                                      << 8U) 
                                                     - vlSelfRef.mrdo_phoenix__DOT__main__DOT__lp1));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp_stb = 0U;
    if ((0x01ffU == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__box_n))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__smp_stb = 1U;
    }
    vlSelfRef.mrdo_phoenix__DOT__fx1 = (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__hc) 
                                               - (IData)(0x0040U)) 
                                              >> 1U));
    vlSelfRef.mrdo_phoenix__DOT__fy1 = (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__vc) 
                                               - (IData)(0x0010U)) 
                                              >> 1U));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__mix = (0x000007ffU 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn2_out) 
                                                      + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__sn1_out)));
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px 
        = (0x0000000fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_flipx)
                           ? (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col))
                           : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_col)));
    vlSelfRef.mrdo_phoenix__DOT__area2 = vlSelfRef.mrdo_phoenix__DOT__area1;
    vlSelfRef.mrdo_phoenix__DOT__pidx2 = vlSelfRef.mrdo_phoenix__DOT__lb_q;
    if (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
         & (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)))) {
        vlSelfRef.mrdo_phoenix__DOT__rbank = vlSelfRef.mrdo_phoenix__DOT__rbank_next;
    }
    if (vlSelfRef.mrdo_phoenix__DOT__ev_vbl) {
        __Vdly__mrdo_phoenix__DOT__wbank = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wbank)));
        vlSelfRef.mrdo_phoenix__DOT__rbank_next = vlSelfRef.mrdo_phoenix__DOT__wbank;
    }
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_start)))) {
        if (vlSelfRef.mrdo_phoenix__DOT__spi_busy) {
            if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__spi_fast) 
                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_div)) 
                 | (0x1fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_div)))) {
                if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__spi_cnt))) {
                    vlSelfRef.mrdo_phoenix__DOT__spi_rx 
                        = vlSelfRef.mrdo_phoenix__DOT__spi_sr;
                }
            }
        }
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr3[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr3__v0;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_cnt;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_x;
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on) {
        if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fx 
                = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bx));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fx 
                = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__tx));
        }
        if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            if ((2U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
                if ((4U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
                    vlSelfRef.mrdo_phoenix__DOT__pix_we = 1U;
                    vlSelfRef.mrdo_phoenix__DOT__pix_x 
                        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x) 
                                          - (IData)(8U)));
                    vlSelfRef.mrdo_phoenix__DOT__pix_y 
                        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_line) 
                                          - (IData)(0x20U)));
                    vlSelfRef.mrdo_phoenix__DOT__g_pixel 
                        = ((0U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q)))
                            ? ((0x00000060U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_ci) 
                                               << 3U)) 
                               | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_ci))
                            : ((1U & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_pen)) 
                                      | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_attr) 
                                         >> 6U))) ? 
                               ((0x000000fcU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_attr) 
                                                << 2U)) 
                                | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_pen))
                                : ((1U & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_pen)) 
                                          | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr) 
                                             >> 6U)))
                                    ? ((0x000000fcU 
                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr) 
                                           << 2U)) 
                                       | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_pen))
                                    : 0U)));
                }
            }
        }
    }
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
    vlSelfRef.mrdo_phoenix__DOT__acc_psg = __Vdly__mrdo_phoenix__DOT__acc_psg;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__box_n = __Vdly__mrdo_phoenix__DOT__main__DOT__box_n;
    mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b 
        = ((0U == (3U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px) 
                         >> 2U))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb0_q)
            : ((1U == (3U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px) 
                             >> 2U))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb1_q)
                : ((2U == (3U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px) 
                                 >> 2U))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb2_q)
                    : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sgb3_q))));
    vlSelfRef.mrdo_phoenix__DOT__ld_a = __Vdly__mrdo_phoenix__DOT__ld_a;
    vlSelfRef.mrdo_phoenix__DOT__spi_cnt = __Vdly__mrdo_phoenix__DOT__spi_cnt;
    vlSelfRef.mrdo_phoenix__DOT__spi_sr = __Vdly__mrdo_phoenix__DOT__spi_sr;
    vlSelfRef.mrdo_phoenix__DOT__spi_div = __Vdly__mrdo_phoenix__DOT__spi_div;
    vlSelfRef.mrdo_phoenix__DOT__spi_busy = __Vdly__mrdo_phoenix__DOT__spi_busy;
    vlSelfRef.mrdo_phoenix__DOT__rtag = 0U;
    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wph)))) {
        if (vlSelfRef.mrdo_phoenix__DOT__p0) {
            vlSelfRef.mrdo_phoenix__DOT__rtag = 1U;
        } else if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                             | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty)))))) {
            if (vlSelfRef.mrdo_phoenix__DOT__rd_pend) {
                vlSelfRef.mrdo_phoenix__DOT__rtag = 2U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__p0)))) {
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__b_pend) 
                          | (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_empty)))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__rd_pend) {
                    vlSelfRef.mrdo_phoenix__DOT__rt_u 
                        = vlSelfRef.mrdo_phoenix__DOT__rd_u;
                    vlSelfRef.mrdo_phoenix__DOT__rt_half 
                        = vlSelfRef.mrdo_phoenix__DOT__rd_half;
                }
            }
        }
    }
    if (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
         & ((0x020cU == (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)) 
            | (0x01dfU > (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))))) {
        vlSelfRef.mrdo_phoenix__DOT__pf_go = ((IData)(vlSelfRef.mrdo_phoenix__DOT__rot) 
                                              & (~ (IData)(vlSelfRef.boot_mode)));
        vlSelfRef.mrdo_phoenix__DOT__rd_half = ((0x020cU 
                                                 != (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)) 
                                                & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)));
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_ra];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_pen 
        = ((2U & (((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b) 
                   >> (3U & (IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px))) 
                  << 1U)) | (1U & ((IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_b) 
                                   >> (4U | (3U & (IData)(mrdo_phoenix__DOT__main__DOT__video__DOT__sp_px))))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_code 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr0
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx];
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on) {
        if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            if ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_ga 
                    = ((0x00000800U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_attr) 
                                       << 4U)) | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_code) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fy)));
            }
        }
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_code 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fgc
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_va];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_attr 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fga
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_va];
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on) {
        if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            if ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_ga 
                    = ((0x00000800U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr) 
                                       << 4U)) | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_code) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fy)));
            }
        }
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_code 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bgc
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_va];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bga
        [((IData)(vlSelfRef.boot_mode) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__text_a)
           : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_va))];
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on) {
        if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_fy 
                = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ty));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_fy 
                = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__by));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_ra 
                = ((0x00000100U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_line) 
                                   << 8U)) | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x));
        }
    }
    if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__line_start) 
          & (0x0020U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line))) 
         & (0x00e0U > (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line)))) {
        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph = 0U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on = 1U;
        __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x = 8U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_line 
            = (0x000000ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line));
    }
    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on) {
        if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph))) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fg_va 
                = ((0x000003e0U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ty) 
                                   << 2U)) | (0x0000001fU 
                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__tx) 
                                                 >> 3U)));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_va 
                = ((0x000003e0U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__by) 
                                   << 2U)) | (0x0000001fU 
                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bx) 
                                                 >> 3U)));
        }
    }
    vlSelfRef.mrdo_phoenix__DOT__area1 = ((IData)(vlSelfRef.boot_mode)
                                           ? ((0x0040U 
                                               <= (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                              & ((0x0240U 
                                                  > (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                                 & ((0x0010U 
                                                     <= (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)) 
                                                    & (0x01d0U 
                                                       > (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)))))
                                           : ((IData)(vlSelfRef.mrdo_phoenix__DOT__rot)
                                               ? ((0x0080U 
                                                   <= (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                                  & ((0x0200U 
                                                      > (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                                     & (0x01e0U 
                                                        > (IData)(vlSelfRef.mrdo_phoenix__DOT__vc))))
                                               : ((0x0050U 
                                                   <= (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                                  & ((0x0230U 
                                                      > (IData)(vlSelfRef.mrdo_phoenix__DOT__hc)) 
                                                     & ((0x0030U 
                                                         <= (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)) 
                                                        & (0x01b0U 
                                                           > (IData)(vlSelfRef.mrdo_phoenix__DOT__vc)))))));
    vlSelfRef.mrdo_phoenix__DOT__lb_q = vlSelfRef.mrdo_phoenix__DOT__lbuf
        [(((~ (IData)(vlSelfRef.boot_mode)) & (IData)(vlSelfRef.mrdo_phoenix__DOT__rot))
           ? ((0x00000100U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__vc) 
                              << 8U)) | (0x000000ffU 
                                         & (((IData)(vlSelfRef.mrdo_phoenix__DOT__hc) 
                                             - (IData)(0x0080U)) 
                                            >> 1U)))
           : ((0x00000700U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__vc) 
                               - (IData)(0x0030U)) 
                              << 7U)) | (0x000000ffU 
                                         & (((IData)(vlSelfRef.mrdo_phoenix__DOT__hc) 
                                             - (IData)(0x0050U)) 
                                            >> 1U))))];
    vlSelfRef.mrdo_phoenix__DOT__ld_we = 0U;
    if (vlSelfRef.mrdo_phoenix__DOT__io_wr_stb) {
        vlSelfRef.mrdo_phoenix__DOT__ld_we = 1U;
        vlSelfRef.mrdo_phoenix__DOT__ld_d = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
    }
    if (vlSelfRef.mrdo_phoenix__DOT__io_rd_stb) {
        vlSelfRef.mrdo_phoenix__DOT__spi_tx = 0xffU;
        vlSelfRef.mrdo_phoenix__DOT__spi_start = 0U;
        vlSelfRef.mrdo_phoenix__DOT__spi_start = 1U;
    } else {
        vlSelfRef.mrdo_phoenix__DOT__spi_start = 0U;
    }
    if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__wr_stb) 
          & (IData)(vlSelfRef.boot_mode)) & (0xc000U 
                                             == (0xff00U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))))) {
        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)))) {
                            vlSelfRef.mrdo_phoenix__DOT__spi_tx 
                                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                            vlSelfRef.mrdo_phoenix__DOT__spi_start = 1U;
                        }
                        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                            vlSelfRef.mrdo_phoenix__DOT__spi_fast 
                                = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout) 
                                         >> 1U));
                        }
                    }
                }
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) {
                            vlSelfRef.mrdo_phoenix__DOT__ld_we = 1U;
                            vlSelfRef.mrdo_phoenix__DOT__ld_d 
                                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__mrdo_phoenix__DOT__wph = 0U;
        __Vdly__mrdo_phoenix__DOT__b_pend = 0U;
        vlSelfRef.sram_doe = 0U;
        vlSelfRef.led_err = 0U;
        vlSelfRef.sd_cs_n = 1U;
        vlSelfRef.mrdo_phoenix__DOT__exec_sram = 0U;
        vlSelfRef.mrdo_phoenix__DOT__spi_fast = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__sp_st;
    vlSelfRef.mrdo_phoenix__DOT__rd_u = __Vdly__mrdo_phoenix__DOT__rd_u;
    vlSelfRef.mrdo_phoenix__DOT__rd_pend = __Vdly__mrdo_phoenix__DOT__rd_pend;
    vlSelfRef.mrdo_phoenix__DOT__wph = __Vdly__mrdo_phoenix__DOT__wph;
    vlSelfRef.mrdo_phoenix__DOT__fq_empty = ((IData)(vlSelfRef.mrdo_phoenix__DOT__fq_wp) 
                                             == (IData)(vlSelfRef.mrdo_phoenix__DOT__fq_rp));
    vlSelfRef.mrdo_phoenix__DOT__b_pend = __Vdly__mrdo_phoenix__DOT__b_pend;
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sbuf__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr0[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr0__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fgc[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fgc__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__fga[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__fga__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bgc[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bgc__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bga[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__bga__v0;
    }
    if (__VdlySet__mrdo_phoenix__DOT__lbuf__v0) {
        vlSelfRef.mrdo_phoenix__DOT__lbuf[__VdlyDim0__mrdo_phoenix__DOT__lbuf__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__lbuf__v0;
    }
    vlSelfRef.mrdo_phoenix__DOT__rot = __Vdly__mrdo_phoenix__DOT__rot;
    vlSelfRef.mrdo_phoenix__DOT__wbank = __Vdly__mrdo_phoenix__DOT__wbank;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum 
        = (0x000001ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_y) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_line)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_attr 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr2
        [vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx];
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_ci 
        = (0x0000000fU & ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q))
                           ? (vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ctab
                              [(0x0000001fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q))] 
                              >> 4U) : vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ctab
                          [(0x0000001fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sb_q))]));
    vlSelfRef.mrdo_phoenix__DOT__text_q = vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bg_attr;
    vlSelfRef.mrdo_phoenix__DOT__text_a = ((0x000003e0U 
                                            & (((IData)(vlSelfRef.mrdo_phoenix__DOT__vc) 
                                                - (IData)(0x0010U)) 
                                               << 1U)) 
                                           | (0x0000001fU 
                                              & (((IData)(vlSelfRef.mrdo_phoenix__DOT__hc) 
                                                  - (IData)(0x0040U)) 
                                                 >> 4U)));
    vlSelfRef.mrdo_phoenix__DOT__ld_pal = ((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
                                           & (0x00016000U 
                                              == (0x0003ffc0U 
                                                  & vlSelfRef.mrdo_phoenix__DOT__ld_a)));
    vlSelfRef.mrdo_phoenix__DOT__ld_vid = ((IData)(vlSelfRef.mrdo_phoenix__DOT__ld_we) 
                                           & (0x00010000U 
                                              == (0x00038000U 
                                                  & vlSelfRef.mrdo_phoenix__DOT__ld_a)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_hit 
        = (IData)(((0x0100U == (0x01f0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sp_sum))) 
                   & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_y))));
    if (__VdlySet__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sr2[__VdlyDim0__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0] 
            = __VdlyVal__mrdo_phoenix__DOT__main__DOT__video__DOT__sr2__v0;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__s_idx;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_x;
    vlSelfRef.mrdo_phoenix__DOT__ink = (1U & (vlSelfRef.mrdo_phoenix__DOT__font
                                              [((0x000001f8U 
                                                 & (((IData)(vlSelfRef.mrdo_phoenix__DOT__text_q) 
                                                     - (IData)(0x20U)) 
                                                    << 3U)) 
                                                | (IData)(vlSelfRef.mrdo_phoenix__DOT__fy2))] 
                                              >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.mrdo_phoenix__DOT__fx2)))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_on;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph 
        = __Vdly__mrdo_phoenix__DOT__main__DOT__video__DOT__cp_ph;
    vlSelfRef.mrdo_phoenix__DOT__hc = __Vdly__mrdo_phoenix__DOT__hc;
    vlSelfRef.mrdo_phoenix__DOT__vc = __Vdly__mrdo_phoenix__DOT__vc;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr 
        = (IData)(((0x00004000U == (0x00006000U & vlSelfRef.mrdo_phoenix__DOT__ld_a)) 
                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__ld_vid)));
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__bx 
        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrollx) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__tx)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__by 
        = (0x000000ffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__scrolly) 
                          + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ty)));
}

extern const VlWide<128>/*4095:0*/ Vmrdo_phoenix__ConstPool__CONST_hbd6ffcb7_0;
extern const VlWide<16>/*511:0*/ Vmrdo_phoenix__ConstPool__CONST_h9112f000_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vmrdo_phoenix__ConstPool__TABLE_h3a22eeb1_0;

void Vmrdo_phoenix___024root___nba_sequent__TOP__1(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___nba_sequent__TOP__1\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__mcyc;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__mcyc = 0;
    CData/*6:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__Vfuncout;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__num;
    __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__num = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F;
    if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt))) {
        if (vlSelfRef.mrdo_phoenix__DOT__cen_cpu) {
            vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 
                = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
                   & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate)));
            if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = 0U;
            }
            if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI) {
                    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                    }
                }
                if (((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243))) {
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
                }
            }
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetDI) {
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                }
            }
            vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR 
                = ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BT) 
                     & ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                            >> 4U)) | (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                          >> 2U)))) 
                    | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BC) 
                       & ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)) | (4U != (0x44U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)))))) 
                   | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR) 
                      & ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 4U)) | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                        >> 6U))));
            if ((1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 2U)))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1 = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s) 
                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck))))) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 0U;
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s)))) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate = 2U;
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 6U)))) {
                                if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                      | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)) 
                                     | ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ)))) {
                                    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s) 
                                         & (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix)))) {
                                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                    } else if (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1) 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__INT_s)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) 
                                                & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI)))) {
                                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                    }
                                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1 = 0U;
                                }
                            }
                        }
                        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
                            vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = 0x20U;
                            __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__mcyc 
                                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
                            __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__Vfuncout 
                                = (7U & Vmrdo_phoenix__ConstPool__CONST_hbd6ffcb7_0
                                   [(0x07ffffffU & (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__mcyc))]);
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M 
                                = __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__5__Vfuncout;
                            if ((0x36U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M = 2U;
                            }
                        } else if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__num 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
                            __Vtemp_1 = VL_MATCHMASKED_I(32, (IData)(__Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__num), Vmrdo_phoenix__ConstPool__CONST_h9112f000_0);
                            __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__Vfuncout 
                                = Vmrdo_phoenix__ConstPool__TABLE_h3a22eeb1_0
                                [__Vtemp_1];
                            vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
                                = __Vfunc_mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__6__Vfuncout;
                        } else {
                            vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
                                = ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                     | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)) 
                                    | ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ)))
                                    ? 1U : ((0x0000007eU 
                                             & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))));
                        }
                    }
                } else if ((1U & ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait) 
                                      & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
                                  & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i) 
                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate 
                        = ((0x0000007eU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                           << 1U)) 
                           | (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                    >> 6U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1 = 0U;
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq = 1U;
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq = 1U;
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd = 1U;
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq 
                        = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
                }
            } else {
                if ((1U & ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                             >> 1U) & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__no_read))) 
                           & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq 
                        = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i)));
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd = 0U;
                }
                if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                      >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq 
                        = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i)));
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr = 1U;
            if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                      >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr = 0U;
                }
            }
        }
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
            vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))))) {
                if ((IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                              & (0x18U == (0x38U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237)))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate 
                        = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate)));
                }
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r 
                        = (1U & ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                  ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                      ? ((0x00000040U 
                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                          : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250))
                                      : ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 6U)) 
                                         & ((0x00000020U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? ((0x00000010U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225)
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225)
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_249)))
                                             : ((0x00000010U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)
                                                   : 
                                                  ((~ 
                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 1U)) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_249))))))
                                  : ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208)
                                      : ((0x00000080U 
                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                          ? (IData)(
                                                    ((0x20U 
                                                      == 
                                                      (0x64U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                     & ((2U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)
                                                         : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115))))
                                          : (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 6U) 
                                             & ((0x00000020U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((0x00000010U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252)
                                                    : 
                                                   (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))
                                                 : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223)))))));
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                            = (0x000000ffU & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC)));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xcfU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (0x00000010U | (0x00000020U 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                                      >> 5U)) 
                                                    << 5U))));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                            >> 3U)) 
                                        << 3U)));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (2U | (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                    if ((IData)(((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                 & (0x3fU == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (((4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                          >> 3U)) | 
                                   ((2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                             >> 3U)))) 
                                  << 3U));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                    if ((IData)(((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                 & (0x37U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (1U | (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (((4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                          >> 3U)) | 
                                   (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                          >> 3U))) 
                                  << 3U));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                }
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF) {
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Ap;
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Fp;
                }
            }
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I;
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (((2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I) 
                                          >> 6U)) | 
                                   (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I))) 
                                  << 6U));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    } else if ((1U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC = 0U;
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (((2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I) 
                                          >> 6U)) | 
                                   (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I))) 
                                  << 6U));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                }
            }
            if ((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r)) 
                 | (9U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((1U & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (0x000000feU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)));
                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r)))) {
                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                        = ((0xfeU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                           | (1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)));
                }
            }
            if (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) 
                   & (0x40U == (0xc6U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)) 
                 & ((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))))) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = (0xefU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0x3fU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (((2U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                                  >> 6U)) | (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg))) 
                          << 6U));
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (4U & ((~ VL_REDXOR_8(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg)) 
                                << 2U)));
            }
            if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xc7U & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (((4U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q) 
                                                   >> 3U))) 
                          << 3U));
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F));
            }
            if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BC))) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xf7U & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__cpi_xy_n)));
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xdfU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (0x00000020U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__cpi_xy_n) 
                                         << 4U)));
            }
            if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BC) 
                 | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ) 
                          << 2U));
            }
            if ((1U & (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                    vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
                                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.mrdo_phoenix__DOT__cen_cpu) {
            if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
                }
            }
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetDI) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s) 
                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s)))) {
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 6U)))) {
                                if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                      | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)) 
                                     | ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix)))))) {
                                        if (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1) 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__INT_s)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) 
                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI)))) {
                                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r 
                = (IData)((((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                            & (1U == (5U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op)))) 
                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                              >> 2U)));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r 
                = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                            & (0U == (0xc0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246)));
            if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles 
                    = ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202)
                                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                            : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191)))
                                    : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202)
                                        : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88)
                                            : ((2U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 5U
                                                    : 3U)
                                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80)))))
                                : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197)
                                            : ((2U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? 3U
                                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194)))
                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190))
                                    : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 5U
                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)))
                                            : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191))
                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190))))
                            : ((6U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                ? 2U : 1U)) : ((0x00000040U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? (
                                                   (0x36U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                          >> 3U)))
                                                      ? 2U
                                                      : 1U)))
                                                : (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 1U
                                                        : 4U)
                                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 1U
                                                        : 5U)
                                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180))))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 1U
                                                        : 2U)
                                                       : 3U))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 1U
                                                         : 2U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 3U
                                                         : 1U)))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 1U
                                                         : 2U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                                          ? 3U
                                                          : 
                                                         ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)
                                                           ? 5U
                                                           : 1U))))))))));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r 
                    = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247)));
            } else {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles 
                    = ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                        ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)
                            : ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? 1U : 2U)
                                        : 1U) : 1U)
                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173)))
                        : ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? 1U : ((0x00000020U 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? 1U : 4U)
                                         : 1U)) : (
                                                   (0x00000040U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((0x00000020U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 4U
                                                         : 1U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 3U
                                                         : 1U))
                                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)))
                                                     : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164))
                                                    : 1U)));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r 
                    = (IData)((((0xa0U == (0xe0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231)) 
                               & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))));
            }
            if ((1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                        >> 1U) & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout 
                    = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
                if ((IData)((((0x0cU == (0x8cU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234)) 
                             & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout 
                        = ((0x000000f0U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                           << 4U)) 
                           | (0x0000000fU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                }
                if ((IData)((((4U == (0x8cU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234)) 
                             & ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout 
                        = ((0x000000f0U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                           << 4U)) 
                           | (0x0000000fU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                             >> 4U)));
                }
            }
            if ((1U & (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                            if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)))) {
                                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout 
                                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__A 
                        = (0x0000ffffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump)
                                           ? (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                                               << 8U) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)))
                                           : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY)
                                               ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC)
                                               : (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Call) 
                                                   | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RstP))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)
                                                   : 
                                                  (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))
                                                    ? 0x0066U
                                                    : 
                                                   (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 2U) 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))
                                                     ? 
                                                    (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                        ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC)
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                                          ? (IData)(
                                                                    ((0x20U 
                                                                      == 
                                                                      (0xf4U 
                                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255)))
                                                          : (IData)(
                                                                    (((0x40U 
                                                                       == 
                                                                       (0xc4U 
                                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                                                     & (1U 
                                                                        != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr))
                                                         : 
                                                        (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                                                          << 8U) 
                                                         | (0x000000ffU 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                        ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP)
                                                        : 
                                                       (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                        ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC)
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State))
                                                         ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC)
                                                         : 
                                                        ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)
                                                          ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC)
                                                          : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr))))
                                                       : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC)))))))));
                }
            }
            if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                            if ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                            }
                        }
                        if ((3U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State 
                                = ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 2U : 1U);
                        } else if ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = 0U;
                        }
                    } else {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = 0U;
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Ap 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Fp 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F;
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 0U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate = 1U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = 0U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate = 0U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = 1U;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC = 0xffU;
        vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F = 0xffU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1 = 1U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq = 1U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq = 1U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd = 1U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycles = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr = 1U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__dout = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__A = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Ap = 0xffU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Fp = 0xffU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141 = (1U 
                                                  & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq)) 
                                                     & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr))));
}

extern const VlWide<8>/*255:0*/ Vmrdo_phoenix__ConstPool__CONST_h7df85da7_0;

void Vmrdo_phoenix___024root___nba_sequent__TOP__3(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___nba_sequent__TOP__3\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_105;
    __VdfgRegularize_h6e95ff9d_0_105 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_233;
    __VdfgRegularize_h6e95ff9d_0_233 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_236;
    __VdfgRegularize_h6e95ff9d_0_236 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_259;
    __VdfgRegularize_h6e95ff9d_0_259 = 0;
    // Body
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F;
    if ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt))) {
        if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))))) {
                if ((1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                            >> 2U) | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                       >> 4U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    if ((7U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
                    }
                }
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
                }
            }
            if ((1U & (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                          >> 1U)))) {
                                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP 
                                    = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                                        ? ((0x00ffU 
                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP)) 
                                           | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux) 
                                              << 8U))
                                        : ((0xff00U 
                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP)) 
                                           | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux)));
                            }
                        }
                    }
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
                }
            }
            if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    if ((1U & (((((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump)) 
                                  & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Call))) 
                                 & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) 
                                & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle))) 
                               & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF) 
                                     | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt)))))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    }
                }
            } else {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Jump) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                                << 8U) | (0x000000ffU 
                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
                    } else if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Call) 
                                | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RstP))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
                    } else if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC = 0x0066U;
                    } else if (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 2U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)) 
                                & (2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0x000000ffU 
                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)));
                    }
                }
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpE) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    } else if ((1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 5U) | (((0U 
                                                   == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 6U) 
                                                    & ((0x00000020U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                         : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                        : 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                          : 
                                                         (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                           >> 1U) 
                                                          & ((1U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                              ? 
                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 1U)
                                                              : 
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U))))))
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                            : 
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                >> 1U))))
                                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91)
                                                           : 
                                                          (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                            >> 1U) 
                                                           & (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U)))))))))
                                                    : 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 6U)) 
                                                    & ((0x00000020U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)
                                                           : 
                                                          (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                            >> 1U) 
                                                           | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 2U) 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))))
                                                        : 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                           : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                           : 
                                                          ((~ 
                                                            ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                             >> 1U)) 
                                                           & ((1U 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                               ? 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 1U)))
                                                               : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))))
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                           : 
                                                          ((~ 
                                                            ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                             >> 1U)) 
                                                           & ((1U 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                               ? 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 1U)))
                                                               : 
                                                              ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)) 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)))))))))))
                                                   : (IData)(
                                                             (((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)) 
                                                              & ((1U 
                                                                  != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                        >> 1U))))))) 
                                                 | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203)))))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r 
                        = ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BT) 
                             | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BC)) 
                            | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR)) 
                           & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)));
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
            if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r 
                    = ((0x00000010U & (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                         ? ((0x00000080U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? ((0x00000040U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((0x00000020U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((0x00000010U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                                         & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 1U) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256))))
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38)))))
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211))
                                                 : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250))
                                             : ((0x00000040U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((0x36U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                 & ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                                                     ? 
                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)
                                                     : 
                                                    (6U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))))
                                                 : 
                                                ((0x00000020U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((0x00000010U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210)
                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257)))
                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)))
                                                  : 
                                                 ((0x00000010U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209)
                                                     : 
                                                    ((~ 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 1U)) 
                                                     & ((1U 
                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                         ? 
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 1U)))
                                                         : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)))))
                                         : ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208)
                                             : ((0x00000080U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(
                                                           (((0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)))
                                                 : 
                                                (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 6U) 
                                                 & ((0x00000020U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206)
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53)
                                                        : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204))))
                                                     : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206)))))) 
                                       << 4U)) | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                if (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                      ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                          ? (IData)(((0x58U == (0x78U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)))
                          : ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 6U)) & ((0x00000020U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                                 & (0x18U 
                                                    == 
                                                    (0x19U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 3U))
                                             : (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253)))))
                      : (IData)((((0x44U == (0xc4U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)) 
                                 & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0x17U;
                }
            }
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                        if ((1U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                            if ((2U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I 
                                    = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
                            }
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                                  & (1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))))) {
                        if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF) 
                              | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                                 & (2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))) 
                             | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                                = ((0xff00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)) 
                                   | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__din));
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RstP) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                            = (0x00000038U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR));
                    }
                }
                if ((1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                            >> 3U) & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 5U)))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                        = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
                }
            }
            if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if ((1U & ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                            ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 6U) & ((0x00000020U 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                               ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226)
                                               : ((0x00000010U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((~ 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 1U)) 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 1U)
                                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)))))))
                                : ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                       >> 6U)) & ((0x00000020U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253)
                                                   : (IData)(
                                                             (((((0U 
                                                                  == 
                                                                  (0x18U 
                                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)) 
                                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)) 
                                                               & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) 
                                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)))))))
                            : (IData)(((0x40U == (0xc0U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                       & ((1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                                          & ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                              : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)))))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xff00U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg));
                }
                if (((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                      ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                          ? (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U) & ((0x00000020U 
                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                         : ((0x00000010U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(
                                                           ((4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)))
                                                 : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)))))
                          : (IData)((((0x20U == (0x70U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111))))
                      : (IData)((((0x40U == (0xc0U 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)) 
                                 & (1U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0x00ffU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                              << 8U));
                }
            }
            if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0x0eU & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR 
                        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                            & (1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))
                            ? 0xffU : ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF) 
                                         | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                                            & (2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))) 
                                        | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))
                                        ? 0U : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__din)));
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet = 0U;
                    if ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet 
                                = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                    if (((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                            >> 6U))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR 
                            = vlSelfRef.mrdo_phoenix__DOT__main__DOT__din;
                    }
                }
                if ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet = 1U;
                    }
                }
            }
            if ((3U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IMode))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus 
                    = vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
            }
        }
        if (vlSelfRef.mrdo_phoenix__DOT__cen_cpu) {
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 
                = ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate))) 
                   && ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait) 
                       | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i) 
                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
            if ((1U & ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                         >> 2U) & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__write))) 
                       & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__no_read))))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg 
                    = vlSelfRef.mrdo_phoenix__DOT__main__DOT__din;
            }
            if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                 | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s) 
                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck))))) {
                if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate) {
                    if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt) {
                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s)))) {
                        if ((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 6U)))) {
                                if ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                      | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)) 
                                     | ((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ)))) {
                                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = 0U;
                                    if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s) 
                                         & (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix)))) {
                                        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = 1U;
                                    }
                                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = 0U;
                                    if ((1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix)))))) {
                                        if (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1) 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__INT_s)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) 
                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI)))) {
                                            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s = 0U;
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__INT_s 
                = (1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_int)));
        }
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP = 0xffffU;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IStatus = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s = 0U;
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__INT_s = 0U;
    }
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152 = ((0x0000ff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = ((4U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 1U
                                                     : 3U)
                                                    : 1U)
                                                   : 1U);
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 1U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = 5U;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                = ((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 3U))) ? 3U : 2U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = 3U;
        }
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 
            ((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                           >> 3U))) ? 3U : 1U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = 2U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 = ((4U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 3U
                                                     : 1U))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118 = (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 = ((0xcbU 
                                                   == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                  | (0x36U 
                                                     == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))
                                                  : 2U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213 = ((2U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106 = (IData)(
                                                         (3U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = (0x000000ffU & Vmrdo_phoenix__ConstPool__CONST_h7df85da7_0
           [(7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 3U))]);
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130 = (0x0000000fU 
                                                  & (- (IData)((IData)(
                                                                       (0x20U 
                                                                        == 
                                                                        (0x64U 
                                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282 = ((4U 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 4U))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (IData)(
                                                        (2U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (1U 
                                                 & ((0x00000020U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                       >> 7U)
                                                       : 
                                                      (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                        >> 7U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                       >> 2U)
                                                       : 
                                                      (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                        >> 2U))))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)
                                                       : 
                                                      (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                       >> 6U)
                                                       : 
                                                      (~ 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                        >> 6U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = ((~ 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 2U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118));
    __VdfgRegularize_h6e95ff9d_0_105 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237 = (IData)(
                                                         ((0xc0U 
                                                           == 
                                                           (0xc4U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276 = ((0x0000000cU 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 4U))) 
                                                  & (- (IData)(
                                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)))));
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetDI 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)) 
                   & (0xf0U == (0xf8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (8U == (0xf8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0xe0U == (0xf0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_105)));
    __VdfgRegularize_h6e95ff9d_0_236 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179 = ((8U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276)
                                                   : 
                                                  ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0x20U == (0x30U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_236)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0x30U == (0x30U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_236)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SetEI 
        = (IData)((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                    & (0xf0U == (0xf0U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                   & (IData)(__VdfgRegularize_h6e95ff9d_0_105)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR;
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck;
}

void Vmrdo_phoenix___024root___nba_comb__TOP__1(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___nba_comb__TOP__1\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = 0;
    CData/*7:0*/ mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    __VdfgRegularize_h6e95ff9d_0_61 = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_65;
    __VdfgRegularize_h6e95ff9d_0_65 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_154;
    __VdfgRegularize_h6e95ff9d_0_154 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_157;
    __VdfgRegularize_h6e95ff9d_0_157 = 0;
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
    // Body
    __VdfgRegularize_h6e95ff9d_0_61 = (1U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                              >> 4U) 
                                             | (9U 
                                                < (0x0000000fU 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)))));
    __VdfgRegularize_h6e95ff9d_0_157 = (0x0000000fU 
                                        & ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                            ? ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                               >> 4U)
                                            : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (0x000000ffU 
                                                 & ((0x00000020U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                       >> 1U)
                                                       : 
                                                      (1U 
                                                       | (0x000000feU 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                             << 1U))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((0x00000080U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                                                       | (0x0000007fU 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                             >> 1U)))
                                                       : 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                       << 1U)))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((0x00000080U 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                                           << 7U)) 
                                                       | (0x0000007fU 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                             >> 1U)))
                                                       : 
                                                      ((0x000000feU 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((0x00000080U 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                           << 7U)) 
                                                       | (0x0000007fU 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                             >> 1U)))
                                                       : 
                                                      ((0x000000feU 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                             >> 7U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64 = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
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
    __VdfgRegularize_h6e95ff9d_0_43 = ((0x000000f0U 
                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_157));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_301 = ((4U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                      >> 3U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                        >> 3U)));
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
}

void Vmrdo_phoenix___024root___nba_sequent__TOP__5(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___nba_sequent__TOP__5\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 0;
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_235;
    __VdfgRegularize_h6e95ff9d_0_235 = 0;
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_311;
    __VdfgRegularize_h6e95ff9d_0_311 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_313;
    __VdfgRegularize_h6e95ff9d_0_313 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_314;
    __VdfgRegularize_h6e95ff9d_0_314 = 0;
    // Body
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.__Vdly__mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__intack 
        = (1U & (~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1) 
                    | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_309 = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 3U))) 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_310 = (1U 
                                                  & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                                                      & (7U 
                                                         != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) 
                                                     | ((~ 
                                                         ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                                                          | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                           >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U) 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U) 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH));
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait 
        = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) 
              | (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ 
        = (IData)(((((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                     & (0x10U == (0xf8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)) 
                   & (0U != (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))));
    __VdfgRegularize_h6e95ff9d_0_251 = ((6U != (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))) 
                                        & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                           >> 1U));
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        __VdfgRegularize_h6e95ff9d_0_94 = 8U;
        __VdfgRegularize_h6e95ff9d_0_95 = 9U;
        __VdfgRegularize_h6e95ff9d_0_96 = 0x0bU;
        __VdfgRegularize_h6e95ff9d_0_97 = 0x0aU;
        __VdfgRegularize_h6e95ff9d_0_218 = 2U;
        __VdfgRegularize_h6e95ff9d_0_182 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                             ? 3U : 1U);
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
        __VdfgRegularize_h6e95ff9d_0_182 = 3U;
    }
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
    __VdfgRegularize_h6e95ff9d_0_311 = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                 >> 3U)));
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
    } else {
        __VdfgRegularize_h6e95ff9d_0_192 = (7U & (5U 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 3U)))))));
        __VdfgRegularize_h6e95ff9d_0_169 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 4U : 3U);
    }
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        __VdfgRegularize_h6e95ff9d_0_76 = 0x0dU;
        __VdfgRegularize_h6e95ff9d_0_217 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        __VdfgRegularize_h6e95ff9d_0_181 = (7U & (5U 
                                                  | (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))));
        __VdfgRegularize_h6e95ff9d_0_29 = 5U;
        __VdfgRegularize_h6e95ff9d_0_174 = 5U;
    } else {
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
        __VdfgRegularize_h6e95ff9d_0_181 = (7U & (5U 
                                                  | (- (IData)(
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
    }
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = 5U;
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            __VdfgRegularize_h6e95ff9d_0_77 = 4U;
            __VdfgRegularize_h6e95ff9d_0_82 = 4U;
            __VdfgRegularize_h6e95ff9d_0_170 = 4U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_77 = 3U;
            __VdfgRegularize_h6e95ff9d_0_82 = 3U;
            __VdfgRegularize_h6e95ff9d_0_170 = 3U;
        }
        __VdfgRegularize_h6e95ff9d_0_71 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295)
                                            ? (1U | 
                                               (6U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))
                                            : 8U);
        __VdfgRegularize_h6e95ff9d_0_28 = 4U;
        __VdfgRegularize_h6e95ff9d_0_67 = 5U;
    } else {
        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
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
            __VdfgRegularize_h6e95ff9d_0_77 = 5U;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = 5U;
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                __VdfgRegularize_h6e95ff9d_0_77 = 4U;
                __VdfgRegularize_h6e95ff9d_0_82 = 4U;
            } else {
                __VdfgRegularize_h6e95ff9d_0_77 = 3U;
                __VdfgRegularize_h6e95ff9d_0_82 = 3U;
            }
        }
        __VdfgRegularize_h6e95ff9d_0_71 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_295)
                                             ? (6U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))
                                             : 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                            >> 2U)))));
        __VdfgRegularize_h6e95ff9d_0_28 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U);
        __VdfgRegularize_h6e95ff9d_0_67 = (4U & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 2U)))));
        __VdfgRegularize_h6e95ff9d_0_170 = __VdfgRegularize_h6e95ff9d_0_169;
    }
    __VdfgRegularize_h6e95ff9d_0_214 = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                         ? 1U : (7U 
                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)));
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
    __VdfgRegularize_h6e95ff9d_0_280 = (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73)
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 2U)))))) 
                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127))));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256 = (IData)(
                                                         (8U 
                                                          == 
                                                          (0x0cU 
                                                           & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
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
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            __VdfgRegularize_h6e95ff9d_0_30 = 4U;
            __VdfgRegularize_h6e95ff9d_0_185 = 5U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_30 = 3U;
            __VdfgRegularize_h6e95ff9d_0_185 = 3U;
        }
    }
    __VdfgRegularize_h6e95ff9d_0_272 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                               >> 1U))))));
    if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        __VdfgRegularize_h6e95ff9d_0_84 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 5U : 3U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194 = 1U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = 3U;
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
        __VdfgRegularize_h6e95ff9d_0_79 = __VdfgRegularize_h6e95ff9d_0_29;
    } else {
        __VdfgRegularize_h6e95ff9d_0_84 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194 
            = __VdfgRegularize_h6e95ff9d_0_182;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = __VdfgRegularize_h6e95ff9d_0_182;
        __VdfgRegularize_h6e95ff9d_0_86 = __VdfgRegularize_h6e95ff9d_0_272;
        __VdfgRegularize_h6e95ff9d_0_98 = ((IData)(__VdfgRegularize_h6e95ff9d_0_217) 
                                           & (- (IData)(
                                                        (6U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                             >> 3U))))));
        __VdfgRegularize_h6e95ff9d_0_79 = __VdfgRegularize_h6e95ff9d_0_181;
    }
    __VdfgRegularize_h6e95ff9d_0_113 = (IData)((0x10U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    __VdfgRegularize_h6e95ff9d_0_19 = (IData)((0U != 
                                               (0x41U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
    __VdfgRegularize_h6e95ff9d_0_128 = (7U & (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (IData)(
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))));
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
    __VdfgRegularize_h6e95ff9d_0_58 = (0x0000000fU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) 
                                          | (- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = ((~ 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 1U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = ((~ 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256));
    __VdfgRegularize_h6e95ff9d_0_266 = ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                       >> 2U)))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_123));
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
    __VdfgRegularize_h6e95ff9d_0_263 = (7U & ((IData)(__VdfgRegularize_h6e95ff9d_0_181) 
                                              | (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
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
    __VdfgRegularize_h6e95ff9d_0_314 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
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
    __VdfgRegularize_h6e95ff9d_0_129 = ((- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_58));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246 = (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x0cU 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)));
    __VdfgRegularize_h6e95ff9d_0_104 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 2U)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26));
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
    if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
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
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_212 = (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = 3U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 = 3U;
            __VdfgRegularize_h6e95ff9d_0_215 = (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U));
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
            __VdfgRegularize_h6e95ff9d_0_68 = ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 4U
                                                : 3U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191 = 1U;
            __VdfgRegularize_h6e95ff9d_0_99 = 8U;
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
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = 2U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 = 2U;
            __VdfgRegularize_h6e95ff9d_0_161 = __VdfgRegularize_h6e95ff9d_0_71;
            __VdfgRegularize_h6e95ff9d_0_68 = __VdfgRegularize_h6e95ff9d_0_28;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191 = 3U;
            __VdfgRegularize_h6e95ff9d_0_99 = (7U & 
                                               ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
            __VdfgRegularize_h6e95ff9d_0_176 = __VdfgRegularize_h6e95ff9d_0_279;
            __VdfgRegularize_h6e95ff9d_0_166 = __VdfgRegularize_h6e95ff9d_0_67;
        }
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
        __VdfgRegularize_h6e95ff9d_0_165 = ((IData)(__VdfgRegularize_h6e95ff9d_0_71) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))));
        __VdfgRegularize_h6e95ff9d_0_186 = __VdfgRegularize_h6e95ff9d_0_84;
        __VdfgRegularize_h6e95ff9d_0_195 = __VdfgRegularize_h6e95ff9d_0_84;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
        __VdfgRegularize_h6e95ff9d_0_33 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 & (- (IData)((IData)(
                                                                      ((0x30U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))))));
        __VdfgRegularize_h6e95ff9d_0_89 = __VdfgRegularize_h6e95ff9d_0_86;
        __VdfgRegularize_h6e95ff9d_0_221 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
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
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = 3U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 = 1U;
            __VdfgRegularize_h6e95ff9d_0_219 = ((IData)(__VdfgRegularize_h6e95ff9d_0_214) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U))))));
            if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                __VdfgRegularize_h6e95ff9d_0_186 = 5U;
                __VdfgRegularize_h6e95ff9d_0_195 = 4U;
                __VdfgRegularize_h6e95ff9d_0_89 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183;
            } else {
                __VdfgRegularize_h6e95ff9d_0_186 = 3U;
                __VdfgRegularize_h6e95ff9d_0_195 = 3U;
                __VdfgRegularize_h6e95ff9d_0_89 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 1U)))));
            }
            __VdfgRegularize_h6e95ff9d_0_101 = __VdfgRegularize_h6e95ff9d_0_51;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83;
            __VdfgRegularize_h6e95ff9d_0_219 = (7U 
                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U));
            __VdfgRegularize_h6e95ff9d_0_186 = __VdfgRegularize_h6e95ff9d_0_82;
            __VdfgRegularize_h6e95ff9d_0_195 = __VdfgRegularize_h6e95ff9d_0_82;
            __VdfgRegularize_h6e95ff9d_0_89 = __VdfgRegularize_h6e95ff9d_0_124;
            __VdfgRegularize_h6e95ff9d_0_101 = __VdfgRegularize_h6e95ff9d_0_40;
        }
        __VdfgRegularize_h6e95ff9d_0_215 = (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U));
        __VdfgRegularize_h6e95ff9d_0_159 = (7U & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))));
        __VdfgRegularize_h6e95ff9d_0_81 = __VdfgRegularize_h6e95ff9d_0_185;
        __VdfgRegularize_h6e95ff9d_0_165 = __VdfgRegularize_h6e95ff9d_0_296;
        __VdfgRegularize_h6e95ff9d_0_161 = __VdfgRegularize_h6e95ff9d_0_296;
        __VdfgRegularize_h6e95ff9d_0_68 = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                            ? 4U : 3U);
        if ((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 3U)))) {
            __VdfgRegularize_h6e95ff9d_0_31 = ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 4U
                                                : (IData)(__VdfgRegularize_h6e95ff9d_0_28));
            __VdfgRegularize_h6e95ff9d_0_33 = (0x0aU 
                                               & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))));
        } else {
            __VdfgRegularize_h6e95ff9d_0_31 = ((1U 
                                                & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                ? 4U
                                                : 3U);
            __VdfgRegularize_h6e95ff9d_0_33 = 0x0aU;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80;
        __VdfgRegularize_h6e95ff9d_0_99 = __VdfgRegularize_h6e95ff9d_0_98;
        __VdfgRegularize_h6e95ff9d_0_221 = __VdfgRegularize_h6e95ff9d_0_98;
        __VdfgRegularize_h6e95ff9d_0_78 = __VdfgRegularize_h6e95ff9d_0_175;
        __VdfgRegularize_h6e95ff9d_0_176 = __VdfgRegularize_h6e95ff9d_0_175;
        __VdfgRegularize_h6e95ff9d_0_162 = __VdfgRegularize_h6e95ff9d_0_297;
        __VdfgRegularize_h6e95ff9d_0_166 = __VdfgRegularize_h6e95ff9d_0_297;
    }
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
    __VdfgRegularize_h6e95ff9d_0_207 = (1U & ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)
                                                    : 
                                                   ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_19)) 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 1U)))
                                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                               : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)));
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
        __VdfgRegularize_h6e95ff9d_0_196 = (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
        __VdfgRegularize_h6e95ff9d_0_87 = __VdfgRegularize_h6e95ff9d_0_42;
        __VdfgRegularize_h6e95ff9d_0_172 = (7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252))));
        __VdfgRegularize_h6e95ff9d_0_171 = (6U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252))));
        __VdfgRegularize_h6e95ff9d_0_34 = (IData)((
                                                   (0x30U 
                                                    == 
                                                    (0x39U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                   & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                      >> 2U)));
        __VdfgRegularize_h6e95ff9d_0_187 = __VdfgRegularize_h6e95ff9d_0_129;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 
            = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_40)
                : (0U != (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                >> 1U))));
    } else {
        __VdfgRegularize_h6e95ff9d_0_227 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115;
        __VdfgRegularize_h6e95ff9d_0_196 = (7U & ((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_126)));
        if ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_87 = __VdfgRegularize_h6e95ff9d_0_29;
            __VdfgRegularize_h6e95ff9d_0_187 = __VdfgRegularize_h6e95ff9d_0_58;
        } else {
            __VdfgRegularize_h6e95ff9d_0_87 = __VdfgRegularize_h6e95ff9d_0_126;
            __VdfgRegularize_h6e95ff9d_0_187 = __VdfgRegularize_h6e95ff9d_0_125;
        }
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
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204 
            = __VdfgRegularize_h6e95ff9d_0_313;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 
            = __VdfgRegularize_h6e95ff9d_0_313;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115));
    __VdfgRegularize_h6e95ff9d_0_269 = (7U & ((IData)(__VdfgRegularize_h6e95ff9d_0_79) 
                                              | (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                               >> 1U))))));
    if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118;
        __VdfgRegularize_h6e95ff9d_0_90 = __VdfgRegularize_h6e95ff9d_0_186;
        __VdfgRegularize_h6e95ff9d_0_198 = __VdfgRegularize_h6e95ff9d_0_195;
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
        __VdfgRegularize_h6e95ff9d_0_177 = __VdfgRegularize_h6e95ff9d_0_176;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 
            = __VdfgRegularize_h6e95ff9d_0_248;
        __VdfgRegularize_h6e95ff9d_0_201 = (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_196));
        __VdfgRegularize_h6e95ff9d_0_188 = __VdfgRegularize_h6e95ff9d_0_87;
        __VdfgRegularize_h6e95ff9d_0_189 = __VdfgRegularize_h6e95ff9d_0_187;
    } else {
        if ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 
                = ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 1U : 3U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 = 3U;
            __VdfgRegularize_h6e95ff9d_0_178 = __VdfgRegularize_h6e95ff9d_0_30;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80;
            __VdfgRegularize_h6e95ff9d_0_178 = ((1U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_77));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26;
        __VdfgRegularize_h6e95ff9d_0_90 = __VdfgRegularize_h6e95ff9d_0_81;
        __VdfgRegularize_h6e95ff9d_0_198 = __VdfgRegularize_h6e95ff9d_0_81;
        __VdfgRegularize_h6e95ff9d_0_46 = ((IData)(__VdfgRegularize_h6e95ff9d_0_71) 
                                           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127))));
        __VdfgRegularize_h6e95ff9d_0_163 = (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_159));
        __VdfgRegularize_h6e95ff9d_0_199 = ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_132));
        __VdfgRegularize_h6e95ff9d_0_220 = __VdfgRegularize_h6e95ff9d_0_219;
        __VdfgRegularize_h6e95ff9d_0_222 = __VdfgRegularize_h6e95ff9d_0_219;
        __VdfgRegularize_h6e95ff9d_0_177 = __VdfgRegularize_h6e95ff9d_0_280;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39;
        __VdfgRegularize_h6e95ff9d_0_201 = (7U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                 >> 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_263)));
        __VdfgRegularize_h6e95ff9d_0_188 = __VdfgRegularize_h6e95ff9d_0_269;
        __VdfgRegularize_h6e95ff9d_0_189 = __VdfgRegularize_h6e95ff9d_0_132;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117 = ((~ 
                                                   ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53));
    __VdfgRegularize_h6e95ff9d_0_240 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_314));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56) 
                                                  & (0x60U 
                                                     == 
                                                     (0x70U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))));
    __VdfgRegularize_h6e95ff9d_0_265 = ((IData)(__VdfgRegularize_h6e95ff9d_0_89) 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 2U)))));
    __VdfgRegularize_h6e95ff9d_0_109 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_235));
    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        __VdfgRegularize_h6e95ff9d_0_193 = __VdfgRegularize_h6e95ff9d_0_266;
        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            __VdfgRegularize_h6e95ff9d_0_216 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213;
            __VdfgRegularize_h6e95ff9d_0_167 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_289;
        } else {
            __VdfgRegularize_h6e95ff9d_0_216 = __VdfgRegularize_h6e95ff9d_0_215;
            __VdfgRegularize_h6e95ff9d_0_167 = __VdfgRegularize_h6e95ff9d_0_165;
        }
    } else if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        __VdfgRegularize_h6e95ff9d_0_193 = __VdfgRegularize_h6e95ff9d_0_123;
        __VdfgRegularize_h6e95ff9d_0_216 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213;
        __VdfgRegularize_h6e95ff9d_0_167 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_289;
    } else {
        __VdfgRegularize_h6e95ff9d_0_193 = ((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                            >> 1U))))) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_270));
        __VdfgRegularize_h6e95ff9d_0_216 = __VdfgRegularize_h6e95ff9d_0_212;
        __VdfgRegularize_h6e95ff9d_0_167 = __VdfgRegularize_h6e95ff9d_0_161;
    }
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
    if ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54;
        __VdfgRegularize_h6e95ff9d_0_168 = ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_287)
                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_166));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206 
            = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 2U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205));
        __VdfgRegularize_h6e95ff9d_0_228 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231;
        __VdfgRegularize_h6e95ff9d_0_200 = __VdfgRegularize_h6e95ff9d_0_199;
    } else {
        if ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
            __VdfgRegularize_h6e95ff9d_0_168 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_287;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 
                = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                       >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38));
            __VdfgRegularize_h6e95ff9d_0_168 = __VdfgRegularize_h6e95ff9d_0_162;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206 
            = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                   >> 2U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204));
        __VdfgRegularize_h6e95ff9d_0_228 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 2U)) 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_227));
        __VdfgRegularize_h6e95ff9d_0_200 = __VdfgRegularize_h6e95ff9d_0_189;
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
    __VdfgRegularize_h6e95ff9d_0_239 = ((~ ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 2U)) 
                                        & ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_240)
                                            : (IData)(__VdfgRegularize_h6e95ff9d_0_50)));
    __VdfgRegularize_h6e95ff9d_0_112 = (IData)(((0U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_50)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Call 
        = (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
             ? (IData)(__VdfgRegularize_h6e95ff9d_0_109)
             : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_109)
                 : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_235)
                     : (IData)(__VdfgRegularize_h6e95ff9d_0_109)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258));
    mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
        = ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
            ? 5U : ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                     ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                         ? ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                 ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                     ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_195)
                                             : ((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                  ? 4U
                                                  : 3U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 6U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 5U
                                                   : 3U))))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_90))
                                     : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_198)
                                         : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (IData)(__VdfgRegularize_h6e95ff9d_0_186)
                                             : ((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((1U 
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
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 4U
                                                   : 3U))
                                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_185)))))
                                 : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                     ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_198)
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_90))
                                     : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_84)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? (IData)(__VdfgRegularize_h6e95ff9d_0_170)
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_82)))
                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_81))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_90))))
                             : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                 ? 4U : 3U)) : ((0x00000040U 
                                                 & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                  ? 4U
                                                  : 3U)
                                                 : 
                                                ((0x00000020U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_178)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                       ? 4U
                                                       : 3U)
                                                      : (IData)(__VdfgRegularize_h6e95ff9d_0_77)))))
                                                  : 
                                                 ((0x00000010U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_178)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                        ? 4U
                                                        : 3U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                        ? 5U
                                                        : (IData)(__VdfgRegularize_h6e95ff9d_0_77))))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_28)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                        ? 4U
                                                        : 3U))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_31)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                        ? 4U
                                                        : 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_174)
                                                        : 
                                                       ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)
                                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_174)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                          ? 4U
                                                          : 3U)))))))))))
                     : ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                         ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                 ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                     ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                         ? 4U : 3U)
                                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                         ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                             ? 4U : 3U)
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_28)))
                                 : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                     ? 4U : 3U)) : 
                            ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                              ? 4U : 3U)) : ((0x00000080U 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                              ? ((0x00000040U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((1U 
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
                                                      : 
                                                     ((1U 
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
                                                     : 
                                                    ((1U 
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
                                                        ? 5U
                                                        : (IData)(__VdfgRegularize_h6e95ff9d_0_74))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                    ? 4U
                                                    : 3U)))
                                              : ((0x00000040U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                      ? 4U
                                                      : 3U)
                                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_68))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_170)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                        ? 4U
                                                        : 3U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                       ? 4U
                                                       : 3U))
                                                     : (IData)(__VdfgRegularize_h6e95ff9d_0_68)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                      ? 4U
                                                      : 3U))
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_68)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 4U
                                                   : 3U))))));
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
    if ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To 
            = ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                ? (IData)(__VdfgRegularize_h6e95ff9d_0_260)
                : 2U);
    } else {
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                ? ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_122)
                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_265))
                                : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_122)
                                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_89)
                                        : ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                          >> 1U)))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_262)))))
                            : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_122)
                                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_89)
                                        : (7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120))))))
                                : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_86)
                                         : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                             ? (((4U 
                                                  & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                  ? 0x0dU
                                                  : 
                                                 (0x0cU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                   >> 3U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                  >> 1U))))))
                                             : (IData)(__VdfgRegularize_h6e95ff9d_0_124))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 2U)))))
                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_265))))
                        : ((6U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))
                            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                               & (IData)(__VdfgRegularize_h6e95ff9d_0_272))
                            : (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))
                    : ((0x00000040U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? ((- (IData)((6U != (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                           & (((6U == (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))
                                ? (7U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))))
                                : (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                              & (- (IData)((0x36U != 
                                            (0x0000003fU 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))))
                        : ((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                            ? ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_46)
                                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                        : (7U & ((- (IData)(
                                                            (1U 
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
                                        : ((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))))) 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                              >> 1U))))) 
                                              & (((4U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                                   ? 5U
                                                   : 
                                                  (4U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                    >> 3U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                                  >> 1U))))))))))
                            : ((0x00000010U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                ? ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_46)
                                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (7U & 
                                               (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))))
                                            : (0x0aU 
                                               & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275)))))))
                                : ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_46)
                                    : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? (IData)(__VdfgRegularize_h6e95ff9d_0_33)
                                        : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                            ? (7U & 
                                               (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))))
                                            : (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)
                                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_76)
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_76) 
                                                 & (- (IData)((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle))))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR)))))))))))))
                : ((1U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ISet))
                    ? (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    : ((0x00000080U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                        ? (((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                             ? ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))
                                 ? 0x0aU : (6U & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                >> 1U))))))
                             : (6U & ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 1U))))))) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130))
                        : (((0x00000020U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IR))
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
                                               >> 6U))))))));
        vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To 
            = __VdfgRegularize_h6e95ff9d_0_260;
    }
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC16 
        = (0x0000ffffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC) 
                          + ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__JumpE)
                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                              : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r)
                                  ? 0xfffeU : 1U))));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = ((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)) 
           & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind)) 
              & ((2U == (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To)) 
                 | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)))));
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
}
