// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmrdo_phoenix.h for the primary calling header

#include "Vmrdo_phoenix__pch.h"

void Vmrdo_phoenix___024root___ctor_var_reset(Vmrdo_phoenix___024root* vlSelf);

Vmrdo_phoenix___024root::Vmrdo_phoenix___024root(Vmrdo_phoenix__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmrdo_phoenix___024root___ctor_var_reset(this);
}

Vmrdo_phoenix___024root::~Vmrdo_phoenix___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
