; Phoenix Lynx boot loader start-up.  The core maps this 16K ROM at $C000
; in boot mode; the Lynx's 64K RAM is below it.

        .export     __STARTUP__ : absolute = 1
        .import     zerobss, copydata, _main
        .import     __RAM_START__, __RAM_SIZE__

        .include    "zeropage.inc"

        .segment    "STARTUP"

reset:  sei
        cld
        ldx     #$FF
        txs

        ; C stack at the top of RAM
        lda     #<(__RAM_START__ + __RAM_SIZE__)
        sta     sp
        lda     #>(__RAM_START__ + __RAM_SIZE__)
        sta     sp+1

        jsr     zerobss
        jsr     copydata
        jsr     _main
@hang:  jmp     @hang

nmi:
irq:    rti

        ; The CPU starts here after a reset (it does not read the vector)
        .segment    "ENTRY"
        jmp     reset

        .segment    "VECTORS"
        .word       nmi, reset, irq
