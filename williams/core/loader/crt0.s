;; Phoenix Williams cores: boot loader start-up.  The loader runs from the
;; boot ROM at $D000-$FFFF; its variables are at $B400 (screen RAM that is
;; not shown in boot mode, as the sector cache at $B600) and the
;; stack below $BF00.

	.module	crt0
	.globl	_main
	.globl	s_.bss
	.globl	l_.bss

	.area	.text

start:
	orcc	#0x50			; no interrupts
	lds	#0xBF00
	ldx	#s_.bss			; clear the variables
	ldy	#l_.bss
	beq	2$
1$:	clr	,x+
	leay	-1,y
	bne	1$
2$:	jsr	_main
3$:	bra	3$

	.area	.bss

	.area	VECTORS	(ABS,OVR)
	.org	0xFFF0
	.dw	start, start, start, start, start, start, start, start
