// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix.h"
#include "Vwilliams_phoenix___024root.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

// FUNCTIONS
Vwilliams_phoenix__Syms::~Vwilliams_phoenix__Syms()
{
}

Vwilliams_phoenix__Syms::Vwilliams_phoenix__Syms(VerilatedContext* contextp, const char* namep, Vwilliams_phoenix* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__williams_phoenix{this, Verilated::catName(namep, "williams_phoenix")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.williams_phoenix = &TOP__williams_phoenix;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__williams_phoenix.__Vconfigure(true);
    // Setup scopes
    __Vscope_williams_phoenix.configure(this, name(), "williams_phoenix", "williams_phoenix", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_williams_phoenix__soc__cpu_board.configure(this, name(), "williams_phoenix.soc.cpu_board", "cpu_board", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_williams_phoenix__soc__cpu_board__blt.configure(this, name(), "williams_phoenix.soc.cpu_board.blt", "blt", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_williams_phoenix.varInsert(__Vfinal,"ext_a", &(TOP__williams_phoenix.ext_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"ext_din", &(TOP__williams_phoenix.ext_din), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"ext_dout", &(TOP__williams_phoenix.ext_dout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"ext_rd", &(TOP__williams_phoenix.ext_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"ext_wr", &(TOP__williams_phoenix.ext_wr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"mem_a", &(TOP__williams_phoenix.mem_a), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"mem_wr_n", &(TOP__williams_phoenix.mem_wr_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"phase", &(TOP__williams_phoenix.phase), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"ram_cs_n", &(TOP__williams_phoenix.ram_cs_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_williams_phoenix.varInsert(__Vfinal,"vc", &(TOP__williams_phoenix.vc), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_williams_phoenix__soc__cpu_board.varInsert(__Vfinal,"blt_win_en", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt_win_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_williams_phoenix__soc__cpu_board.varInsert(__Vfinal,"e_rom", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__e_rom), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_williams_phoenix__soc__cpu_board.varInsert(__Vfinal,"mpu_data_in", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__mpu_data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,7,0);
        __Vscope_williams_phoenix__soc__cpu_board.varInsert(__Vfinal,"screen_control", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__screen_control), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"dst_address", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__dst_address), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RD,1 ,15,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"reg_ctrl", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__reg_ctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,7,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"reg_dst_base", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__reg_dst_base), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RD,1 ,15,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"reg_height", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__reg_height), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,7,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"reg_solid", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__reg_solid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,7,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"reg_src_base", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__reg_src_base), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RD,1 ,15,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"reg_width", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__reg_width), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,7,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"src_address", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__src_address), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RD,1 ,15,0);
        __Vscope_williams_phoenix__soc__cpu_board__blt.varInsert(__Vfinal,"state", &(TOP__williams_phoenix.soc__DOT__cpu_board__DOT__blt__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,1,0);
    }
}
