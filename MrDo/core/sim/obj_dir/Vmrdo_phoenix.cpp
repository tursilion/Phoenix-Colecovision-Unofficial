// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmrdo_phoenix__pch.h"

//============================================================
// Constructors

Vmrdo_phoenix::Vmrdo_phoenix(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmrdo_phoenix__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , game_reset{vlSymsp->TOP.game_reset}
    , joy1{vlSymsp->TOP.joy1}
    , joy2{vlSymsp->TOP.joy2}
    , sys{vlSymsp->TOP.sys}
    , rot_toggle{vlSymsp->TOP.rot_toggle}
    , sram_dout{vlSymsp->TOP.sram_dout}
    , sram_din{vlSymsp->TOP.sram_din}
    , sram_doe{vlSymsp->TOP.sram_doe}
    , sram_wpulse{vlSymsp->TOP.sram_wpulse}
    , sram_oe_n{vlSymsp->TOP.sram_oe_n}
    , sd_cs_n{vlSymsp->TOP.sd_cs_n}
    , sd_sclk{vlSymsp->TOP.sd_sclk}
    , sd_mosi{vlSymsp->TOP.sd_mosi}
    , sd_miso{vlSymsp->TOP.sd_miso}
    , sd_cd_n{vlSymsp->TOP.sd_cd_n}
    , vid_r{vlSymsp->TOP.vid_r}
    , vid_g{vlSymsp->TOP.vid_g}
    , vid_b{vlSymsp->TOP.vid_b}
    , vid_hsync_n{vlSymsp->TOP.vid_hsync_n}
    , vid_vsync_n{vlSymsp->TOP.vid_vsync_n}
    , vid_blank{vlSymsp->TOP.vid_blank}
    , boot_mode{vlSymsp->TOP.boot_mode}
    , led_err{vlSymsp->TOP.led_err}
    , audio{vlSymsp->TOP.audio}
    , sram_addr{vlSymsp->TOP.sram_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmrdo_phoenix::Vmrdo_phoenix(const char* _vcname__)
    : Vmrdo_phoenix(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmrdo_phoenix::~Vmrdo_phoenix() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmrdo_phoenix___024root___eval_debug_assertions(Vmrdo_phoenix___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_static(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_initial(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD bool Vmrdo_phoenix___024root___eval_stl(Vmrdo_phoenix___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vmrdo_phoenix___024root___eval_sample(Vmrdo_phoenix___024root* vlSelf);
bool Vmrdo_phoenix___024root___eval_ico(Vmrdo_phoenix___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vmrdo_phoenix___024root___eval_act(Vmrdo_phoenix___024root* vlSelf);
bool Vmrdo_phoenix___024root___eval_inact(Vmrdo_phoenix___024root* vlSelf);
bool Vmrdo_phoenix___024root___eval_nba(Vmrdo_phoenix___024root* vlSelf);
bool Vmrdo_phoenix___024root___eval_obs(Vmrdo_phoenix___024root* vlSelf);
bool Vmrdo_phoenix___024root___eval_react(Vmrdo_phoenix___024root* vlSelf);
void Vmrdo_phoenix___024root___eval_postponed(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_final(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__stl(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__ico(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__act(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__nba(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__obs(Vmrdo_phoenix___024root* vlSelf);
VL_ATTR_COLD void Vmrdo_phoenix___024root___eval_dump_triggers__react(Vmrdo_phoenix___024root* vlSelf);

void Vmrdo_phoenix::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmrdo_phoenix::eval_step\n"); );
    m_evalLoop.eval();
}

void Vmrdo_phoenix::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vmrdo_phoenix___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vmrdo_phoenix::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmrdo_phoenix::evalStatic() {
    Vmrdo_phoenix___024root___eval_static(&(vlSymsp->TOP));
}

void Vmrdo_phoenix::evalInitial() {
    Vmrdo_phoenix___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vmrdo_phoenix::evalStl(bool firstIteration) {
    return Vmrdo_phoenix___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vmrdo_phoenix::evalSample() {
    Vmrdo_phoenix___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vmrdo_phoenix::evalIco(bool firstIteration) {
    return Vmrdo_phoenix___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vmrdo_phoenix::evalAct() {
    return Vmrdo_phoenix___024root___eval_act(&(vlSymsp->TOP));
}

bool Vmrdo_phoenix::evalInact() {
    return Vmrdo_phoenix___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vmrdo_phoenix::evalNba() {
    return Vmrdo_phoenix___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vmrdo_phoenix::evalObs() {
    return Vmrdo_phoenix___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vmrdo_phoenix::evalReact() {
    return Vmrdo_phoenix___024root___eval_react(&(vlSymsp->TOP));
}

void Vmrdo_phoenix::evalPostponed() {
    Vmrdo_phoenix___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vmrdo_phoenix::evalFinal() {
    Vmrdo_phoenix___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmrdo_phoenix::dumpTriggersStl() {
    Vmrdo_phoenix___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmrdo_phoenix::dumpTriggersIco() {
    Vmrdo_phoenix___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmrdo_phoenix::dumpTriggersAct() {
    Vmrdo_phoenix___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmrdo_phoenix::dumpTriggersNba() {
    Vmrdo_phoenix___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmrdo_phoenix::dumpTriggersObs() {
    Vmrdo_phoenix___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vmrdo_phoenix::dumpTriggersReact() {
    Vmrdo_phoenix___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vmrdo_phoenix::eventsPending() { return false; }

uint64_t Vmrdo_phoenix::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmrdo_phoenix::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmrdo_phoenix::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmrdo_phoenix::hierName() const { return vlSymsp->name(); }
const char* Vmrdo_phoenix::modelName() const { return "Vmrdo_phoenix"; }
unsigned Vmrdo_phoenix::threads() const { return 1; }
void Vmrdo_phoenix::prepareClone() const { contextp()->prepareClone(); }
void Vmrdo_phoenix::atClone() const {
    contextp()->threadPoolpOnClone();
}
