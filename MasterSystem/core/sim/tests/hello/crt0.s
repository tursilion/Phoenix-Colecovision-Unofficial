; Master System test cartridge start-up (SDCC).
        .module crt0
        .globl  _main

        .area   _HEADER (ABS)
        .org    0x0000
        di
        im      1
        jp      init
        .org    0x0038
        ei
        reti
        .org    0x0066
        retn
init:
        ld      sp, #0xDFF0
        ld      hl, #0xC000
        ld      de, #0xC001
        ld      bc, #0x1FEF
        ld      (hl), #0
        ldir
        call    _main
1$:     jr      1$

        .area   _HOME
        .area   _CODE
        .area   _INITIALIZER
        .area   _GSINIT
        .area   _GSFINAL
        .area   _DATA
        .area   _INITIALIZED
        .area   _BSEG
        .area   _BSS
        .area   _HEAP
