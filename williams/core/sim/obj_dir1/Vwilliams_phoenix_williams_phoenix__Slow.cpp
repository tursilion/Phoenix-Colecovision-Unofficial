// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwilliams_phoenix.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

void Vwilliams_phoenix_williams_phoenix___ctor_var_reset(Vwilliams_phoenix_williams_phoenix* vlSelf);

Vwilliams_phoenix_williams_phoenix::Vwilliams_phoenix_williams_phoenix(Vwilliams_phoenix__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vwilliams_phoenix_williams_phoenix___ctor_var_reset(this);
}

void Vwilliams_phoenix_williams_phoenix::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vwilliams_phoenix_williams_phoenix::~Vwilliams_phoenix_williams_phoenix() {
}
