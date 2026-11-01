; Phoenix Master System boot loader start-up.  The core's boot ROM (this
; 16K) is at $0000; the work RAM at $C000-$DFFF.

        .module crt0
        .globl  _main
        .globl  _nmi_flag

        .area   _HEADER (ABS)
        .org    0x0000
        di
        im      1
        jp      init

        .org    0x0038          ; (interrupts stay off)
        ei
        reti

        .org    0x0066          ; NMI: the Pause button
        push    af
        ld      a, #1
        ld      (_nmi_flag), a
        pop     af
        retn

init:
        ld      sp, #0xDFF0
        ld      hl, #0xC000     ; clear the RAM (the C globals start at 0)
        ld      de, #0xC001
        ld      bc, #0x1FEF
        ld      (hl), #0
        ldir
        call    gsinit
        call    _main
1$:     jr      1$

        .area   _HOME
        .area   _CODE
        .area   _INITIALIZER
        .area   _GSINIT
gsinit::
        ld      bc, #l__INITIALIZER
        ld      a, b
        or      a, c
        jr      z, 2$
        ld      de, #s__INITIALIZED
        ld      hl, #s__INITIALIZER
        ldir
2$:
        .area   _GSFINAL
        ret

        .area   _DATA
        .area   _INITIALIZED
        .area   _BSEG
        .area   _BSS
        .area   _HEAP
