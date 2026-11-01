; Draw one 6 x 8 character cell on the Lynx screen (4 bits a pixel, 80
; bytes a line).
;
; void __fastcall__ glyph_put(unsigned char *dst);
;
; gptr points at the character's 8 font bytes (5-pixel glyphs in bits
; 7-3, so bits 7-2 are the cell's 6 pixels); _gt0/_gt1/_gt2 give the cell's
; three screen bytes for those 6 bits (main.c fills them for the colours).

        .export     _glyph_put, _gt0, _gt1, _gt2
        .exportzp   _gptr
        .importzp   ptr1, tmp1, tmp2

        .zeropage
_gptr:  .res    2

        .bss
_gt0:   .res    64
_gt1:   .res    64
_gt2:   .res    64

        .code

_glyph_put:
        sta     ptr1
        stx     ptr1+1
        lda     #8
        sta     tmp1
        stz     tmp2
@row:   ldy     tmp2
        lda     (_gptr),y
        lsr     a
        lsr     a
        tax
        ldy     #0
        lda     _gt0,x
        sta     (ptr1),y
        iny
        lda     _gt1,x
        sta     (ptr1),y
        iny
        lda     _gt2,x
        sta     (ptr1),y
        inc     tmp2
        clc
        lda     ptr1
        adc     #80
        sta     ptr1
        bcc     @nc
        inc     ptr1+1
@nc:    dec     tmp1
        bne     @row
        rts
