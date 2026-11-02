// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VWILLIAMS_PHOENIX__SYMS_H_
#define VERILATED_VWILLIAMS_PHOENIX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vwilliams_phoenix.h"

// INCLUDE MODULE CLASSES
#include "Vwilliams_phoenix___024root.h"
#include "Vwilliams_phoenix_williams_phoenix.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vwilliams_phoenix__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vwilliams_phoenix* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vwilliams_phoenix___024root    TOP;
    Vwilliams_phoenix_williams_phoenix TOP__williams_phoenix;

    // SCOPE NAMES
    VerilatedScope __Vscope_williams_phoenix;
    VerilatedScope __Vscope_williams_phoenix__soc__cpu_board;
    VerilatedScope __Vscope_williams_phoenix__soc__cpu_board__blt;

    // CONSTRUCTORS
    Vwilliams_phoenix__Syms(VerilatedContext* contextp, const char* namep, Vwilliams_phoenix* modelp);
    ~Vwilliams_phoenix__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
