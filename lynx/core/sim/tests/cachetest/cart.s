; Cartridge block reads for the cache test.
;
; void __fastcall__ cart_block(unsigned char b);
;   Select 2K block b: shift its 8 bits into the cartridge's page register
;   (IODAT bit 1, clocked by SYSCTL1 bit 0, which also clears the byte
;   counter).
; unsigned char __fastcall__ cart_cmp(unsigned char n);
;   Read n bytes (0 = 256) from RCART0 and compare them with cmp_val,
;   cmp_val + 1, ...; returns the number that differ (at most 255).
;   cmp_val ends past the last byte.

        .export     _cart_block, _cart_cmp, _cmp_val
        .importzp   tmp1, tmp2, tmp3

RCART0  = $FCB2
SYSCTL1 = $FD87
IODIR   = $FD8A
IODAT   = $FD8B

        .bss
_cmp_val: .res  1

        .code

_cart_block:
        sta     tmp1            ; the block
        lda     #$1A            ; IODIR as the boot ROM sets it (bit 1 out)
        sta     IODIR
        lda     #$0B            ; IODAT: bit 1 = 1 below if needed
        and     #$FC
        sta     tmp2            ; base value, bit 1 clear
        ldy     #8
@bit:   lda     tmp2
        asl     tmp1            ; next bit, MSB first
        bcc     @zero
        ora     #$02
@zero:  sta     IODAT
        lda     #$01            ; strobe: shift the bit in, clear the counter
        sta     SYSCTL1
        lda     #$00
        sta     SYSCTL1
        dey
        bne     @bit
        lda     tmp2
        sta     IODAT
        rts

_cart_cmp:
        tax                     ; count (0 = 256)
        stz     tmp3            ; differences
        ldy     _cmp_val
@loop:  tya
        cmp     RCART0
        beq     @ok
        inc     tmp3
        bne     @ok
        dec     tmp3            ; stay at 255
@ok:    iny
        dex
        bne     @loop
        sty     _cmp_val
        lda     tmp3
        ldx     #0
        rts
