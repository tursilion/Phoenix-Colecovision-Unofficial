; Fast SPI block read for the SD card driver (SDCC, sdcccall 1).
;
; void spi_read_block(unsigned char *dst);   dst in HL
;
; Reads 512 bytes: a $FF transfer first, then INIR from port $FF, whose
; read gives the byte and starts the next transfer (21 T-states a byte,
; much more than a transfer takes), and the last byte from port $F8 so
; that no transfer follows.

        .module spi
        .globl  _spi_read_block

        .area   _CODE

_spi_read_block:
        ld      a, #0xFF
        out     (0xF8), a       ; first transfer
        nop
        nop
        nop
        nop
        ld      c, #0xFF
        ld      b, #0           ; 256
        inir
        ld      b, #255
        inir
        in      a, (0xF8)       ; the 512th
        ld      (hl), a
        ret
