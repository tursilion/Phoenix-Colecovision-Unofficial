;; Phoenix Williams cores' boot loader: clear the screen fast.
;;
;; void clear_screen(void);
;;
;; In boot mode (decoder PROMs bypassed) the shown screen is columns 0-51
;; of each bank: $0000-$33FF, $4000-$73FF and $8000-$B3FF.  The loader's
;; RAM above $B400 is kept.  PSHU writes 4 bytes in 9 cycles; this takes
;; about 0.11s at 1MHz (a C loop took over half a second).

	.module	screen
	.globl	_clear_screen

	.area	.text

_clear_screen:
	pshs	y,u
	ldu	#0x3400
	bsr	1$
	ldu	#0x7400
	bsr	1$
	ldu	#0xB400
	bsr	1$
	puls	y,u,pc

1$:	ldd	#0
	ldx	#0
	ldy	#832			; 16 bytes each
2$:	pshu	d,x
	pshu	d,x
	pshu	d,x
	pshu	d,x
	leay	-1,y
	bne	2$
	rts
