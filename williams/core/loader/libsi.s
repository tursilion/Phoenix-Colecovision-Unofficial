;; 32-bit multiply and unsigned divide for gcc6809 (its libgcc lacks them).
;; Both operands are on the stack (big-endian, a at 2,s and b at 6,s on
;; entry); the result goes to the 4 bytes at X.  U and Y are kept.

	.module	libsi
	.globl	___mulsi3
	.globl	___udivsi3
	.area	.text

;; result = a * b (low 32 bits), shift and add
___mulsi3:
	pshs	u,y
	leas	-4,s			; r at 0,s; a at 10,s; b at 14,s
	clr	0,s
	clr	1,s
	clr	2,s
	clr	3,s
	ldy	#32
1$:	lsl	3,s			; r <<= 1
	rol	2,s
	rol	1,s
	rol	0,s
	lsl	17,s			; next bit of b
	rol	16,s
	rol	15,s
	rol	14,s
	bcc	2$
	ldd	2,s			; r += a
	addd	12,s
	std	2,s
	ldd	0,s
	adcb	11,s
	adca	10,s
	std	0,s
2$:	leay	-1,y
	bne	1$
	ldd	0,s
	std	0,x
	ldd	2,s
	std	2,x
	leas	4,s
	puls	u,y,pc

;; result = n / d, restoring division
___udivsi3:
	pshs	u,y
	leas	-4,s			; rem at 0,s; n at 10,s; d at 14,s
	clr	0,s
	clr	1,s
	clr	2,s
	clr	3,s
	ldy	#32
1$:	lsl	13,s			; rem:n <<= 1
	rol	12,s
	rol	11,s
	rol	10,s
	rol	3,s
	rol	2,s
	rol	1,s
	rol	0,s
	ldd	2,s			; rem - d
	subd	16,s
	tfr	d,u
	ldd	0,s
	sbcb	15,s
	sbca	14,s
	bcs	2$
	std	0,s			; it fits: keep it, quotient bit 1
	stu	2,s
	inc	13,s
2$:	leay	-1,y
	bne	1$
	ldd	10,s
	std	0,x
	ldd	12,s
	std	2,x
	leas	4,s
	puls	u,y,pc
