// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMRDO_PHOENIX__SYMS_H_
#define VERILATED_VMRDO_PHOENIX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmrdo_phoenix.h"

// INCLUDE MODULE CLASSES
#include "Vmrdo_phoenix___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vmrdo_phoenix__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmrdo_phoenix* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vmrdo_phoenix___024root        TOP;

    // CONSTRUCTORS
    Vmrdo_phoenix__Syms(VerilatedContext* contextp, const char* namep, Vmrdo_phoenix* modelp);
    ~Vmrdo_phoenix__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
