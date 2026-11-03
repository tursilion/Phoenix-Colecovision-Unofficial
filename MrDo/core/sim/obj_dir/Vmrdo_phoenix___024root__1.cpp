// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmrdo_phoenix.h for the primary calling header

#include "Vmrdo_phoenix__pch.h"

extern const VlUnpacked<CData/*7:0*/, 1024> Vmrdo_phoenix__ConstPool__TABLE_h1544183c_0;
extern const VlUnpacked<CData/*7:0*/, 1024> Vmrdo_phoenix__ConstPool__TABLE_h5374dd30_0;

void Vmrdo_phoenix___024root___nba_comb__TOP__2(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___nba_comb__TOP__2\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_144;
    __VdfgRegularize_h6e95ff9d_0_144 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_146;
    __VdfgRegularize_h6e95ff9d_0_146 = 0;
    // Body
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn 
        = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)) 
           & (IData)(vlSelfRef.mrdo_phoenix__DOT__cen_cpu));
    vlSelfRef.mrdo_phoenix__DOT__m0_addr = ((((IData)(vlSelfRef.boot_mode)
                                               ? 0x10U
                                               : (3U 
                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                                     >> 0x0000000dU))) 
                                             << 0x0000000dU) 
                                            | (0x00001fffU 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)));
    __VdfgRegularize_h6e95ff9d_0_144 = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb) 
                                         & (~ (IData)(vlSelfRef.boot_mode))) 
                                        & (0x9800U 
                                           == (0xf800U 
                                               & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142 = ((IData)(vlSelfRef.boot_mode) 
                                                  & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_mreq)) 
                                                     & (~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd))));
    __VdfgRegularize_h6e95ff9d_0_146 = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_iorq)) 
                                        & (IData)(vlSelfRef.boot_mode));
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)
            ? (1U | ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                     << 2U)) : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP16 
        = (0x0000ffffU & (((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))
                            ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC)
                            : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP)) 
                          + ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate))
                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                              : (1U | (- (IData)((1U 
                                                  & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                                                     >> 3U))))))));
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
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr2 
        = ((2U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_144));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__psg_wr1 
        = ((1U == (3U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_144));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 = (IData)(
                                                         ((0xc000U 
                                                           == 
                                                           (0xff00U 
                                                            & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A))) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)));
    vlSelfRef.mrdo_phoenix__DOT__io_wr = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_wr)) 
                                          & (IData)(__VdfgRegularize_h6e95ff9d_0_146));
    vlSelfRef.mrdo_phoenix__DOT__io_rd = ((IData)(__VdfgRegularize_h6e95ff9d_0_146) 
                                          & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_rd)) 
                                             & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_m1)));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB 
        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                    [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB]) 
            << 8U) | vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB]);
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA 
        = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                    [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA]) 
            << 8U) | vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA]);
    vlSelfRef.mrdo_phoenix__DOT__io_wr_stb = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__io_wr_d)) 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__io_wr));
    vlSelfRef.mrdo_phoenix__DOT__io_rd_stb = ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd_d)) 
                                              & (IData)(vlSelfRef.mrdo_phoenix__DOT__io_rd));
    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ID16 
        = (0x0000ffffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                          + (1U | (- (IData)((1U & 
                                              ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                                               >> 3U)))))));
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
}

void Vmrdo_phoenix___024root___nba_sequent__TOP__0(Vmrdo_phoenix___024root* vlSelf);
void Vmrdo_phoenix___024root___nba_sequent__TOP__1(Vmrdo_phoenix___024root* vlSelf);
void Vmrdo_phoenix___024root___nba_sequent__TOP__3(Vmrdo_phoenix___024root* vlSelf);
void Vmrdo_phoenix___024root___nba_comb__TOP__1(Vmrdo_phoenix___024root* vlSelf);
void Vmrdo_phoenix___024root___nba_sequent__TOP__5(Vmrdo_phoenix___024root* vlSelf);

void Vmrdo_phoenix___024root___eval_body__nba(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_body__nba\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmrdo_phoenix___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmrdo_phoenix___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusA 
                    = (0x000000ffU & ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                       ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                                     ? 
                                                    ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP))))
                                       : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                           ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC)
                                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA)
                                                   : 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                                                   >> 8U)))
                                           : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                               ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA)
                                               : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                                                  >> 8U)))));
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__BusB 
                    = (0x000000ffU & ((8U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                       ? ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                           ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                                   ? 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__PC)))
                                           : ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F)
                                                   : 1U)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                                   ? 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__SP))))
                                       : ((4U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                           ? ((2U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ACC)
                                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__di_reg))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                                   ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB)
                                                   : 
                                                  ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB) 
                                                   >> 8U)))
                                           : ((1U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB)
                                               : ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB) 
                                                  >> 8U)))));
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__sga_a 
                = (0x00001fffU & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__ld_spr)
                                   ? vlSelfRef.mrdo_phoenix__DOT__ld_a
                                   : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A)));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__vram_q 
                = ((0U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                 >> 0x0000000aU))) ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bga)
                    : ((1U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                     >> 0x0000000aU)))
                        ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_bgc)
                        : ((2U == (3U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__A) 
                                         >> 0x0000000aU)))
                            ? (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fga)
                            : (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__q_fgc))));
            vlSelfRef.mrdo_phoenix__DOT__wr_stb = ((IData)(vlSelfRef.mrdo_phoenix__DOT__wr_n_d) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_stb 
                = ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__wr_n_d) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmrdo_phoenix___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmrdo_phoenix___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            SData/*8:0*/ __Vinline_0__nba_sequent__TOP__4_mrdo_phoenix__DOT__main__DOT__video__DOT__v_next;
            __Vinline_0__nba_sequent__TOP__4_mrdo_phoenix__DOT__main__DOT__video__DOT__v_next = 0;
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC 
                = (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
                            [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC]) 
                    << 8U) | vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
                   [vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC]);
            if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
                if (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ) 
                     & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ 
                        = (1U & ((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__F_Out) 
                                 >> 6U));
                }
                if (((((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                       >> 2U) | (((IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                  >> 3U) & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     & (4U == (7U & (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) {
                    vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ 
                        = (0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__cpu__DOT__i_tv80_core__DOT__ID16));
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__cen_cpu = 0U;
            if (vlSelfRef.mrdo_phoenix__DOT__ev_vbl) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_int = 0U;
            }
            if (vlSelfRef.mrdo_phoenix__DOT__main__DOT__intack) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_int = 1U;
            }
            if (((0U != (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt)) 
                 | (IData)(vlSelfRef.boot_mode))) {
                vlSelfRef.mrdo_phoenix__DOT__main__DOT__n_int = 1U;
            }
            if (vlSelfRef.mrdo_phoenix__DOT__run) {
                if ((0xd1U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__acc_cpu))) {
                    vlSelfRef.mrdo_phoenix__DOT__cen_cpu = 1U;
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__acc_cpu = vlSelfRef.__Vdly__mrdo_phoenix__DOT__acc_cpu;
            vlSelfRef.mrdo_phoenix__DOT__rst_cnt = vlSelfRef.__Vdly__mrdo_phoenix__DOT__rst_cnt;
            vlSelfRef.mrdo_phoenix__DOT__main__DOT____Vcellinp__cpu__reset_n 
                = (0U == (IData)(vlSelfRef.mrdo_phoenix__DOT__rst_cnt));
            vlSelfRef.mrdo_phoenix__DOT__ev_vbl = 0U;
            if (vlSelfRef.mrdo_phoenix__DOT__cen_pix) {
                if ((0x0137U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h))) {
                    if ((0x00dfU == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v))) {
                        vlSelfRef.mrdo_phoenix__DOT__ev_vbl = 1U;
                    }
                }
            }
            if (vlSelfRef.reset) {
                vlSelfRef.boot_mode = 1U;
            } else if (vlSelfRef.mrdo_phoenix__DOT__start_game) {
                vlSelfRef.boot_mode = 0U;
            }
            vlSelfRef.mrdo_phoenix__DOT__g_h = vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_h;
            vlSelfRef.mrdo_phoenix__DOT__g_v = vlSelfRef.__Vdly__mrdo_phoenix__DOT__g_v;
            vlSelfRef.mrdo_phoenix__DOT__start_game 
                = vlSelfRef.__Vdly__mrdo_phoenix__DOT__start_game;
            vlSelfRef.mrdo_phoenix__DOT__wait_pt = 
                ((0x0137U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h)) 
                 & (0x0105U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v)));
            __Vinline_0__nba_sequent__TOP__4_mrdo_phoenix__DOT__main__DOT__video__DOT__v_next 
                = (0x000001ffU & (((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v)) 
                                  & (- (IData)((0x0105U 
                                                != (IData)(vlSelfRef.mrdo_phoenix__DOT__g_v))))));
            vlSelfRef.mrdo_phoenix__DOT__cen_pix = 0U;
            if (vlSelfRef.mrdo_phoenix__DOT__run) {
                if ((0xc9U <= (IData)(vlSelfRef.mrdo_phoenix__DOT__acc_pix))) {
                    vlSelfRef.mrdo_phoenix__DOT__cen_pix = 1U;
                }
            }
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line 
                = (0x000001ffU & (((IData)(1U) + (IData)(__Vinline_0__nba_sequent__TOP__4_mrdo_phoenix__DOT__main__DOT__video__DOT__v_next)) 
                                  & (- (IData)((0x0105U 
                                                != __Vinline_0__nba_sequent__TOP__4_mrdo_phoenix__DOT__main__DOT__video__DOT__v_next)))));
            vlSelfRef.mrdo_phoenix__DOT__acc_pix = vlSelfRef.__Vdly__mrdo_phoenix__DOT__acc_pix;
            vlSelfRef.mrdo_phoenix__DOT__run = (1U 
                                                & ((~ (IData)(vlSelfRef.mrdo_phoenix__DOT__wait_pt)) 
                                                   | (IData)(vlSelfRef.mrdo_phoenix__DOT__go)));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__s_line 
                = (0x000001ffU & (((IData)(1U) + (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line)) 
                                  & (- (IData)((0x0105U 
                                                != (IData)(vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__c_line))))));
            vlSelfRef.mrdo_phoenix__DOT__main__DOT__video__DOT__line_start 
                = ((IData)(vlSelfRef.mrdo_phoenix__DOT__cen_pix) 
                   & (0x0137U == (IData)(vlSelfRef.mrdo_phoenix__DOT__g_h)));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmrdo_phoenix___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmrdo_phoenix___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vmrdo_phoenix___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vmrdo_phoenix___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vmrdo_phoenix___024root___eval_debug_assertions(Vmrdo_phoenix___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmrdo_phoenix___024root___eval_debug_assertions\n"); );
    Vmrdo_phoenix__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.game_reset & 0xfeU)))) {
        Verilated::overWidthError("game_reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.joy1 & 0xe0U)))) {
        Verilated::overWidthError("joy1");
    }
    if (VL_UNLIKELY(((vlSelfRef.joy2 & 0xe0U)))) {
        Verilated::overWidthError("joy2");
    }
    if (VL_UNLIKELY(((vlSelfRef.sys & 0xe0U)))) {
        Verilated::overWidthError("sys");
    }
    if (VL_UNLIKELY(((vlSelfRef.rot_toggle & 0xfeU)))) {
        Verilated::overWidthError("rot_toggle");
    }
    if (VL_UNLIKELY(((vlSelfRef.sd_miso & 0xfeU)))) {
        Verilated::overWidthError("sd_miso");
    }
    if (VL_UNLIKELY(((vlSelfRef.sd_cd_n & 0xfeU)))) {
        Verilated::overWidthError("sd_cd_n");
    }
}
#endif  // VL_DEBUG
