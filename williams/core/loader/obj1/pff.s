;;; gcc for m6809 : Mar 17 2019 11:56:12
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint16 -fomit-frame-pointer -Os
	.module	pff.c
	.area	.text
_dir_rewind:
	pshs	y,u
	leas	-24,s
	leay	,x
	ldu	_FatFs
	ldd	#0
	std	,x
	ldx	4,x
	stx	12,s
	ldd	6,y
	std	14,s
	cmpx	#0
	bne	L12
	cmpd	#1	;cmphi:
	lbeq	L2
L12:
	ldx	12,s
	cmpx	6,u	;cmphi:(R)
	blo	L13
	lbne	L2
	ldx	14,s
	cmpx	8,u	;cmphi:(R)
	lbhs	L2
L13:
	ldx	12,s
	tfr	x,d
	ldx	14,s
	pshs	x
	ora	,s+
	orb	,s+
	cmpd	#0
	bne	L5
	ldb	,u
	cmpb	#3	;cmpqi:
	bne	L5
	ldx	14,u
	stx	12,s
	ldd	16,u
	std	14,s
L5:
	ldx	12,s
	stx	8,y
	ldd	14,s
	std	10,y
	tfr	x,d
	ldx	14,s
	pshs	x
	ora	,s+
	orb	,s+
	cmpd	#0
	lbeq	L6
	ldd	14,s
	addd	#-2
	std	18,s
	ldd	12,s
	adcb	#-1
	adca	#-1
	std	16,s
	ldd	8,u
	addd	#-2
	std	6,s
	ldd	6,u
	adcb	#-1
	adca	#-1
	std	4,s
	ldx	4,s
	ldd	16,s
	pshs	d	;cmphi: R:d with R:x
	cmpx	,s++	;cmphi:
	bhi	L7
	bne	L14
	ldx	6,s
	ldd	18,s
	pshs	d	;cmphi: R:d with R:x
	cmpx	,s++	;cmphi:
	bhi	L7
L14:
	ldx	#0
	stx	8,s
	stx	10,s
	bra	L9
L7:
	ldb	2,u
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	leas	-8,s
	ldd	#0
	std	4,s
	stx	6,s
	ldx	24,s
	stx	,s
	ldd	26,s
	std	2,s
	leax	28,s
	jsr	___mulsi3
	leas	8,s
	ldx	20,s
	stx	,s
	ldd	22,s
	std	2,s
	ldd	2,s
	addd	20,u
	std	10,s
	ldd	,s
	adcb	19,u
	adca	18,u
	std	8,s
	bra	L9
L6:
	ldx	14,u
	stx	8,s
	ldu	16,u
	stu	10,s
L9:
	ldd	8,s
	std	12,y
	ldx	10,s
	stx	14,y
	ldx	#0
	bra	L10
L2:
	ldx	#1
L10:
	leas	24,s
	puls	y,u,pc
_get_fat:
	pshs	y,u
	leas	-30,s
	stx	24,s
	ldx	36,s
	ldu	38,s
	ldy	_FatFs
	cmpx	#0
	bne	L25
	cmpu	#1	;cmphi:
	lbls	L21
L25:
	cmpx	6,y	;cmphi:(R)
	blo	L18
	lbne	L21
	cmpu	8,y	;cmphi:(R)
	lbhs	L21
L18:
	ldb	,y
	cmpb	#2	;cmpqi:
	beq	L22
	cmpb	#3	;cmpqi:
	lbne	L21
	lbra	L26
L22:
	ldd	#2
	std	,--s
	tfr	u,d
	clra	;andqi(ZERO)
		;andqi(-1)
	aslb
	rola
	pshs	d
	tfr	x,d
	tfr	b,a
	clrb
	std	4,s
	tfr	u,d
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	26,s
	ldd	4,s
	ora	26,s
	orb	27,s
	std	26,s
	tfr	x,d
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	24,s
	ldd	26,s
	addd	12,y
	std	22,s
	ldd	24,s
	adcb	11,y
	adca	10,y
	std	20,s
	leas	-4,s
	ldx	24,s
	stx	,s
	ldu	26,s
	stu	2,s
	leax	34,s
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	lbne	L21
	ldb	27,s
	tfr	b,a
	clrb
	tfr	d,u
	ldb	26,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	tfr	u,d
	pshs	x
	ora	,s+
	orb	,s+
	ldx	24,s
	std	2,x
	ldd	#0
	std	,x
	lbra	L15
L26:
	ldd	#4
	std	,--s
	tfr	u,d
	clra	;andqi(ZERO)
	andb	#127
	aslb
	rola
	aslb
	rola
	pshs	d
	tfr	x,d
	tfr	b,a
	clrb
	asla
	std	4,s
	tfr	u,d
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	std	18,s
	ldd	4,s
	ora	18,s
	orb	19,s
	std	18,s
	tfr	x,d
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	std	16,s
	ldd	18,s
	addd	12,y
	std	14,s
	ldd	16,s
	adcb	11,y
	adca	10,y
	std	12,s
	leas	-4,s
	ldx	16,s
	stx	,s
	ldu	18,s
	stu	2,s
	leax	34,s
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	bne	L21
	ldb	29,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	28,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	27,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	4,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldd	2,s
	tfr	b,a
	clrb
	pshs	x
	ora	,s+
	orb	,s+
	std	6,s
	ldd	4,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	26,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldd	6,s
	anda	#15
		;andqi(-1)
	ldu	24,s
	std	,u
	stx	2,u
	bra	L15
L21:
	ldd	#0
	ldx	24,s
	std	,x
	ldd	#1
	std	2,x
L15:
	ldx	24,s
	leas	30,s
	puls	y,u,pc
_dir_next:
	pshs	y,u
	leas	-42,s
	leau	,x
	ldy	_FatFs
	ldd	,x
	addd	#1; addhi3,3
	std	32,s	;movhi: R:d -> 32,s w/ implied test of d
	lbeq	L28
	ldx	12,x
	stx	20,s
	ldd	14,u
	std	22,s
	tfr	x,d
	ldx	22,s
	pshs	x
	ora	,s+
	orb	,s+
	cmpd	#0
	lbeq	L28
	ldd	32,s
	clra	;andqi(ZERO)
	andb	#15
	cmpd	#0
	lbne	L29
	ldd	22,s
	addd	#1
	std	18,s
	ldd	20,s
	adcb	#0
	adca	#0
	std	16,s
	ldx	16,s
	stx	12,u
	ldd	18,s
	std	14,u
	ldx	8,u
	stx	6,s
	ldd	10,u
	std	4,s
	tfr	x,d
	ora	4,s
	orb	5,s
	cmpd	#0
	bne	L30
	ldx	32,s
	cmpx	4,y	;cmphi:
	lblo	L29
	lbra	L28
L30:
	ldb	2,y
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	addd	#-1; addhi3,3
	std	,s
	ldd	32,s
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	anda	,s
	andb	1,s
	cmpd	#0
	lbne	L29
	leas	-4,s
	ldx	10,s
	stx	,s
	ldd	8,s
	std	2,s
	leax	42,s
	jsr	_get_fat
	ldx	42,s
	stx	32,s
	ldd	44,s
	std	34,s
	leas	4,s
	ldx	28,s
	bne	L31
	ldx	#1
	ldd	30,s
	pshs	x	;cmphi: R:x with R:d
	cmpd	,s++	;cmphi:
	lbls	L33
L31:
	ldx	28,s
	cmpx	6,y	;cmphi:(R)
	blo	L40
	lbne	L28
	ldx	30,s
	cmpx	8,y	;cmphi:(R)
	lbhs	L28
L40:
	ldd	28,s
	std	8,u
	ldx	30,s
	stx	10,u
	ldy	_FatFs
	ldd	30,s
	addd	#-2
	std	36,s
	ldd	28,s
	adcb	#-1
	adca	#-1
	std	34,s
	ldd	8,y
	addd	#-2
	std	14,s
	ldd	6,y
	adcb	#-1
	adca	#-1
	std	12,s
	ldx	12,s
	ldd	34,s
	pshs	d	;cmphi: R:d with R:x
	cmpx	,s++	;cmphi:
	bhi	L35
	bne	L41
	ldx	14,s
	ldd	36,s
	pshs	d	;cmphi: R:d with R:x
	cmpx	,s++	;cmphi:
	bhi	L35
L41:
	ldx	#0
	stx	24,s
	stx	26,s
	bra	L37
L35:
	ldb	2,y
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	leas	-8,s
	ldd	#0
	std	4,s
	stx	6,s
	ldx	42,s
	stx	,s
	ldd	44,s
	std	2,s
	leax	46,s
	jsr	___mulsi3
	leas	8,s
	ldx	38,s
	stx	8,s
	ldd	40,s
	std	10,s
	ldd	10,s
	addd	20,y
	std	26,s
	ldd	8,s
	adcb	19,y
	adca	18,y
	std	24,s
L37:
	ldx	24,s
	stx	12,u
	ldd	26,s
	std	14,u
L29:
	ldx	32,s
	stx	,u
	ldx	#0
	bra	L33
L28:
	ldx	#3
L33:
	leas	42,s
	puls	y,u,pc
	.globl	_pf_readdir
_pf_readdir:
	pshs	y,u
	leas	-77,s
	stx	18,s
	ldy	#5
	ldx	_FatFs
	lbeq	L44
	tfr	s,d
	addd	#77; addhi3,3
	addd	#-12; addhi3,3
	ldx	18,s
	std	2,x
	ldu	83,s
	bne	L45
	jsr	_dir_rewind
	leay	,x
	lbra	L44
L45:
	clr	_pf_lfn
	clr	23,s
	clr	24,s
	ldy	#3
	lbra	L82
L68:
	leay	33,s
	ldd	#32
	std	,--s
	ldd	[20,s]
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	anda	#1
	andb	#-32
	pshs	d
	leas	-4,s
	ldx	8,s
	stx	,s
	stu	2,s
	leax	,y
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	beq	L47
	ldy	#1
	lbra	L48
L47:
	ldb	33,s
	stb	2,s
	lbeq	L49
	ldb	44,s
	stb	27,s
	ldb	2,s
	cmpb	#-27	;cmpqi:
	lbeq	L50
	ldb	#63
	andb	27,s
	stb	25,s
	cmpb	#15	;cmpqi:
	lbne	L51
	ldb	2,s
	andb	#63
	stb	22,s
	ldb	2,s
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	clra	;andqi(ZERO)
	andb	#64
	cmpd	#0
	beq	L52
	ldb	46,s
	stb	23,s
	tst	22,s
	bne	L53
	ldx	#0
	bra	L54
L53:
	clr	17,s
	ldb	22,s
	lda	#13	;umulqihi3
	mul
	cmpd	#64	;cmphi:
	ble	L55
	ldb	#1
	stb	17,s
L55:
	ldb	17,s
	eorb	#1
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
L54:
	tfr	x,d	;movlsbqihi: R:x -> R:b
	stb	24,s
	tfr	x,d
	lbeq	L56
	ldb	22,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	aslb
	rola
	leax	d,u
	tfr	x,d
	aslb
	rola
	aslb
	rola
	tfr	d,x
	exg	d,u
	leax	d,x
	exg	d,u
	clr	_pf_lfn,x
	bra	L57
L52:
	tst	24,s
	lbeq	L56
L57:
	tst	22,s
	lbeq	L58
	ldb	46,s
	stb	28,s
	cmpb	23,s	;cmpqi:
	lbne	L58
	ldb	22,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	leau	-1,x
	tfr	u,d
	aslb
	rola
	leax	d,u
	tfr	x,d
	aslb
	rola
	aslb
	rola
	tfr	d,x
	exg	d,x
	leau	d,u
	leay	_pf_lfn,u
	ldu	#_lfn_ofs.1461
L62:
	ldb	,u
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	leax	33,s
	leax	d,x
	ldb	,x+
	stb	4,s
	ldb	,x
	stb	29,s
	cmpb	#-1	;cmpqi:
	bne	L59
	clr	4,s
	bra	L60
L59:
	tst	29,s
	beq	L60
	ldb	#63
	stb	4,s
L60:
	ldb	4,s
	stb	,y
	leau	1,u
	cmpu	#_lfn_ofs.1461+13	;cmphi:
	bne	L61
	ldb	28,s
	stb	23,s
	bra	L56
L61:
	leay	1,y
	bra	L62
L58:
	clr	24,s
L56:
	ldx	18,s
	jsr	_dir_next
	leay	,x
	cmpx	#0
	beq	L82
	lbra	L48
L51:
	ldb	2,s
	cmpb	#46	;cmpqi:
	beq	L50
	ldb	25,s
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	clra	;andqi(ZERO)
	andb	#8
	cmpd	#0
	bne	L50
	leau	,y
	clr	30,s
L65:
	ldb	30,s
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	clra	;andqi(ZERO)
	andb	#1
	tfr	d,x
	ldb	#-128
	stb	26,s
	cmpx	#0
	bne	L64
	clr	26,s
L64:
	lsr	30,s
	ldb	30,s
	addb	,u+
	addb	26,s
	stb	30,s
	leax	44,s
	pshs	x	;cmphi: R:x with R:u
	cmpu	,s++	;cmphi:
	bne	L65
	tst	24,s
	beq	L66
	cmpb	23,s	;cmpqi:
	beq	L70
L66:
	clr	_pf_lfn
	bra	L70
L50:
	ldx	18,s
	jsr	_dir_next
	leay	,x
	cmpx	#0
	bne	L48
	clr	24,s
L82:
	ldx	18,s
	ldx	12,x
	stx	,s
	ldx	18,s
	ldu	14,x
	ldd	,s
	pshs	u
	ora	,s+
	orb	,s+
	cmpd	#0
	lbne	L68
	cmpy	#0
	beq	L69
L48:
	ldd	#0
	ldx	18,s
	std	12,x
	std	14,x
	cmpy	#3	;cmphi:
	beq	L70
L69:
	cmpy	#0
	lbne	L44
L70:
	ldu	83,s
	leau	9,u
	stu	20,s
	ldx	18,s
	ldd	12,x
	ora	14,x
	orb	15,x
	cmpd	#0
	lbeq	L71
	leay	33,s
L74:
	ldb	,y
	cmpb	#32	;cmpqi:
	beq	L72
	cmpb	#5	;cmpqi:
	bne	L73
	ldb	#-27
L73:
	ldu	20,s
	leau	1,u
	stu	20,s
	leau	-1,u
	stb	,u+
	leay	1,y
	leax	41,s
	pshs	x	;cmphi: R:x with R:y
	cmpy	,s++	;cmphi:
	bne	L74
L72:
	ldb	41,s
	cmpb	#32	;cmpqi:
	beq	L75
	ldb	#46
	ldx	20,s
	stb	,x
	ldy	#0
L78:
	leau	1,y
	leax	,u
	exg	d,x
	addd	20,s; addhi3,3
	exg	d,x
	stx	31,s
	tfr	s,d
	addd	#77; addhi3,3
	leax	d,y
	ldb	-36,x
	cmpb	#32	;cmpqi:
	beq	L76
	leax	,y
	exg	d,x
	addd	20,s; addhi3,3
	exg	d,x
	stb	1,x
	leax	2,y
	exg	d,x
	addd	20,s; addhi3,3
	exg	d,x
	cmpu	#3	;cmphi:
	beq	L83
L77:
	leay	,u
	bra	L78
L76:
	ldx	31,s
L83:
	stx	20,s
L75:
	ldb	44,s
	ldx	83,s
	stb	8,x
	ldb	64,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	63,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	2,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	5,s
	ldd	2,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	62,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	7,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	ldd	5,s
	tfr	b,a
	clrb
	tfr	d,x
	tfr	u,d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldd	7,s
	tfr	b,a
	clrb
	tfr	d,y
	ldb	61,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	y
	ora	,s+
	orb	,s+
	ldu	83,s
	stx	,u
	std	2,u
	ldb	58,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	57,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	ldx	83,s
	std	4,x
	ldb	56,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	55,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	ldx	83,s
	std	6,x
L71:
	ldu	20,s
	clr	,u
	ldx	18,s
	jsr	_dir_next
	leay	,x
	cmpx	#3	;cmphi:
	bne	L44
	ldy	#0
L44:
	leax	,y
	leas	77,s
	puls	y,u,pc
L49:
	ldy	#3
	lbra	L48
_follow_path:
	pshs	y,u
	leas	-14,s
	leau	,x
	bra	L85
L86:
	ldx	22,s
	leax	1,x
	stx	22,s
L85:
	ldy	22,s
	ldb	,y
	cmpb	#32	;cmpqi:
	beq	L86
	cmpb	#47	;cmpqi:
	bne	L87
	leay	1,y
	sty	22,s
L87:
	ldd	#0
	std	4,u
	std	6,u
	ldx	22,s
	ldb	,x
	cmpb	#31	;cmpqi:
	bhi	L112
	leax	,u
	jsr	_dir_rewind
	stx	6,s
	ldy	20,s
	clr	,y
	lbra	L89
L112:
	ldy	2,u
	leax	,y
	ldd	#11
	std	2,s
	bra	L90
L91:
	ldb	#32
	stb	,x+
L90:
	ldd	2,s
	addd	#-1; addhi3,3
	std	2,s
	cmpd	#-1	;cmphi:
	bne	L91
	clr	8,s
	clr	9,s
	ldb	#8
	bra	L116
L114:
	ldb	10,s
	stb	8,s
	ldb	#11
L116:
	stb	10,s
L113:
	ldb	9,s
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	ldx	22,s
	leax	d,x
	ldb	,x
	stb	11,s
	inc	9,s
	cmpb	#32	;cmpqi:
	bls	L93
	cmpb	#47	;cmpqi:
	beq	L93
	cmpb	#46	;cmpqi:
	beq	L94
	ldb	8,s
	cmpb	10,s	;cmpqi:
	blo	L95
L94:
	ldb	10,s
	cmpb	#8	;cmpqi:
	bne	L93
	ldb	11,s
	cmpb	#46	;cmpqi:
	beq	L114
	bra	L93
L95:
	ldb	8,s
	clra		;zero_extendqihi: R:b -> R:d
	leax	d,y
	ldb	11,s
	stb	,x
	inc	8,s
	bra	L113
L93:
	clr	11,y
	ldb	11,s
	cmpb	#32	;cmpqi:
	bhi	L97
	ldb	#1
	stb	11,y
L97:
	leax	,u
	jsr	_dir_rewind
	stx	6,s	;movhi: R:x -> 6,s w/ implied test of x
	lbne	L89
L110:
	ldd	#32
	std	,--s
	ldd	,u
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	anda	#1
	andb	#-32
	pshs	d
	leas	-4,s
	ldx	12,u
	stx	,s
	ldy	14,u
	sty	2,s
	ldx	28,s
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	beq	L98
	ldx	#1
	bra	L99
L98:
	ldx	20,s
	tst	,x
	lbeq	L100
	leay	11,x
	sty	12,s
	ldb	,y
	bitb	#8
	bne	L101
	leay	,x
	ldx	2,u
	ldd	#11
	std	2,s
L103:
	ldd	2,s
	addd	#-1; addhi3,3
	std	2,s
	cmpd	#-1	;cmphi:
	lbeq	L102
	ldb	,y
	cmpb	,x	;cmpqi:
	bne	L101
	leay	1,y
	leax	1,x
	bra	L103
L101:
	leax	,u
	jsr	_dir_next
	cmpx	#0
	lbeq	L110
L99:
	stx	6,s
	lbra	L89
L115:
	ldx	12,s
	ldb	,x
	bitb	#16
	beq	L105
	ldb	[_FatFs]
	cmpb	#3	;cmpqi:
	beq	L106
	ldx	#0
	stx	4,s
	bra	L107
L106:
	ldy	20,s
	leax	20,y
	ldb	1,x
	tfr	b,a
	clrb
	tfr	d,y
	ldb	,x
	clra		;zero_extendqihi: R:b -> R:d
	pshs	y
	ora	,s+
	orb	,s+
	std	4,s
L107:
	ldb	9,s
	clra		;zero_extendqihi: R:b -> R:d
	ldx	22,s
	leax	d,x
	stx	22,s
	ldy	20,s
	leax	26,y
	ldb	1,x
	tfr	b,a
	clrb
	tfr	d,y
	ldb	,x
	clra		;zero_extendqihi: R:b -> R:d
	pshs	y
	ora	,s+
	orb	,s+
	ldx	4,s
	stx	4,u
	std	6,u
	lbra	L112
L105:
	ldy	#3
	sty	6,s
L89:
	ldx	6,s
	leas	14,s
	puls	y,u,pc
L100:
	ldd	#3
	std	6,s
	bra	L89
L102:
	ldx	2,u
	tst	11,x
	lbeq	L115
	bra	L89
	.globl	_pf_opendir
_pf_opendir:
	pshs	y,u
	leas	-48,s
	leau	,s
	leay	,x
	ldx	#5
	stx	2,u
	ldx	_FatFs
	lbeq	L119
	ldd	#36
	pshs	u	;addhi: R:d += R:u
	addd	,s++
	std	2,y
	ldx	54,u
	stx	,--s
	ldd	#4
	pshs	u	;addhi: R:d += R:u
	addd	,s++
	pshs	d
	leax	,y
	jsr	_follow_path
	stx	2,u
	leas	4,s
	cmpx	#0
	bne	L119
	tst	4,u
	beq	L120
	ldx	#3
	stx	2,u
	ldb	15,u
	bitb	#16
	beq	L119
	ldb	[_FatFs]
	cmpb	#3	;cmpqi:
	beq	L122
	ldx	#0
	stx	,u
	bra	L123
L122:
	ldb	25,u
	tfr	b,a
	clrb
	tfr	d,x
	ldb	24,u
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,u
L123:
	ldb	31,u
	tfr	b,a
	clrb
	std	2,u
	ldb	30,u
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldd	2,u
	pshs	x
	ora	,s+
	orb	,s+
	ldx	,u
	stx	4,y
	std	6,y
L120:
	leax	,y
	jsr	_dir_rewind
	stx	2,u
L119:
	ldx	2,u
	leas	48,s
	puls	y,u,pc
	.globl	_pf_open
_pf_open:
	pshs	y,u
	leas	-70,s
	leau	,s
	ldy	_FatFs
	sty	2,u
	ldd	#5
	std	8,u
	cmpy	#0
	lbeq	L127
	ldy	2,u
	clr	1,y
	ldd	#58
	pshs	u	;addhi: R:d += R:u
	addd	,s++
	std	44,u
	pshs	x
	ldd	#10
	pshs	u	;addhi: R:d += R:u
	addd	,s++
	pshs	d
	leax	42,u
	jsr	_follow_path
	stx	8,u
	leas	4,s
	cmpx	#0
	lbne	L127
	tst	10,u
	lbeq	L128
	ldb	21,u
	bitb	#16
	lbne	L128
	ldb	[_FatFs]
	cmpb	#3	;cmpqi:
	beq	L129
	ldy	#0
	bra	L130
L129:
	ldb	31,u
	tfr	b,a
	clrb
	tfr	d,x
	ldb	30,u
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,y
L130:
	ldb	37,u
	tfr	b,a
	clrb
	tfr	d,x
	ldb	36,u
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	ldx	2,u
	sty	30,x
	std	32,x
	ldb	41,u
	tfr	b,a
	clrb
	tfr	d,x
	ldb	40,u
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,u
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	4,u
	ldd	,u
	tfr	b,a
	clrb
	tfr	d,x
	ldb	39,u
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	6,u
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	ldd	4,u
	tfr	b,a
	clrb
	tfr	d,x
	tfr	y,d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldd	6,u
	tfr	b,a
	clrb
	tfr	d,y
	ldb	38,u
	clra		;zero_extendqihi: R:b -> R:d
	pshs	y
	ora	,s+
	orb	,s+
	ldy	2,u
	stx	26,y
	std	28,y
	ldd	#0
	std	22,y
	std	24,y
	ldb	#1
	stb	1,y
	bra	L127
L128:
	ldx	#3
	stx	8,u
L127:
	ldx	8,u
	leas	70,s
	puls	y,u,pc
	.globl	_pf_read
_pf_read:
	pshs	y,u
	leas	-49,s
	leay	,x
	ldu	_FatFs
	ldd	#0
	ldx	57,s
	std	,x
	ldx	#5
	cmpu	#0
	lbeq	L134
	ldx	#4
	ldb	1,u
	bitb	#1
	lbeq	L134
	ldd	28,u
	subd	24,u
	std	36,s
	ldd	26,u
	sbcb	23,u
	sbca	22,u
	std	34,s
	ldx	34,s
	cmpx	#0	;cmphi:(R)
	bne	L136
	ldd	36,s
	cmpd	55,s	;cmphi:(R)
	bhs	L136
	std	55,s
L136:
	sty	39,s
	lbra	L138
L151:
	ldy	22,u
	sty	4,s
	ldy	24,u
	tfr	y,d
	anda	#1
		;andqi(-1)
	cmpd	#0
	lbne	L139
	ldd	4,s
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	aslb
	rola
	std	,s
	tfr	y,d
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	lsrb
	tfr	d,x
	ldd	,s
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldb	2,u
	decb
	stb	38,s
	tfr	x,d	;movlsbqihi: R:x -> R:b
	andb	38,s
	stb	38,s
	bne	L140
	ldd	4,s
	pshs	y
	ora	,s+
	orb	,s+
	cmpd	#0
	bne	L141
	ldd	30,u
	ldx	32,u
	bra	L142
L141:
	leas	-4,s
	ldx	34,u
	stx	,s
	ldy	36,u
	sty	2,s
	leax	49,s
	jsr	_get_fat
	ldd	49,s
	ldx	51,s
	leas	4,s
L142:
	cmpd	#0
	bne	L143
	cmpx	#1	;cmphi:
	lbls	L156
L143:
	std	34,u
	stx	36,u
L140:
	ldy	_FatFs
	ldd	36,u
	addd	#-2
	std	43,s
	ldd	34,u
	adcb	#-1
	adca	#-1
	std	41,s
	ldd	8,y
	addd	#-2
	std	28,s
	ldd	6,y
	adcb	#-1
	adca	#-1
	std	26,s
	ldx	26,s
	ldd	41,s
	pshs	d	;cmphi: R:d with R:x
	cmpx	,s++	;cmphi:
	bhi	L155
	lbne	L156
	ldx	28,s
	ldd	43,s
	pshs	d	;cmphi: R:d with R:x
	cmpx	,s++	;cmphi:
	lbls	L156
L155:
	ldb	2,y
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	leas	-8,s
	ldx	49,s
	stx	4,s
	ldd	51,s
	std	6,s
	ldd	#0
	std	,s
	ldx	8,s
	stx	2,s
	leax	53,s
	jsr	___mulsi3
	leas	8,s
	ldd	45,s
	std	22,s
	ldx	47,s
	stx	24,s
	ldd	24,s
	addd	20,y
	std	32,s
	ldd	22,s
	adcb	19,y
	adca	18,y
	std	30,s
	ldx	30,s
	tfr	x,d
	ldy	32,s
	pshs	y
	ora	,s+
	orb	,s+
	cmpd	#0
	lbeq	L156
L147:
	ldb	38,s
	clra		;zero_extendqihi: R:b -> R:d
	std	20,s
	ldx	#0
	stx	18,s
	ldd	20,s
	addd	32,s
	std	16,s
	ldd	18,s
	adcb	31,s
	adca	30,s
	std	14,s
	ldx	14,s
	stx	38,u
	ldy	16,s
	sty	40,u
L139:
	ldd	24,u
	anda	#1
		;andqi(-1)
	tfr	d,x
	ldd	#512
	pshs	x	;subhi: R:d -= R:x
	subd	,s++
	ldy	55,s
	sty	2,s
	pshs	d	;cmphi: R:d with R:y
	cmpy	,s++	;cmphi:
	bls	L148
	std	2,s
L148:
	ldd	2,s
	pshs	d
	pshs	x
	leas	-4,s
	ldx	38,u
	stx	,s
	ldy	40,u
	sty	2,s
	ldx	47,s
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	beq	L149
L156:
	clr	1,u
	ldx	#1
	bra	L134
L149:
	ldd	2,s
	std	12,s
	ldx	#0
	stx	10,s
	ldd	12,s
	addd	24,u
	std	8,s
	ldd	10,s
	adcb	23,u
	adca	22,u
	std	6,s
	ldx	6,s
	stx	22,u
	ldy	8,s
	sty	24,u
	ldx	57,s
	ldd	2,s
	addd	,x; addhi3,3
	std	,x
	ldy	39,s
	beq	L150
	tfr	y,d
	addd	2,s; addhi3,3
	std	39,s
L150:
	ldd	55,s
	subd	2,s	;subhi: R:d -= 2,s
	std	55,s
L138:
	ldx	55,s
	lbne	L151
L134:
	leas	49,s
	puls	y,u,pc
_check_fs:
	pshs	y,u
	leas	-7,s
	leau	,x
	ldx	13,s
	stx	4,s
	ldd	15,s
	std	2,s
	ldd	#2
	std	,--s
	ldx	#510
	stx	,--s
	leas	-4,s
	ldd	12,s
	std	,s
	ldx	10,s
	stx	2,s
	leax	,u
	jsr	_disk_readp
	leas	8,s
	ldb	#3
	stb	6,s
	cmpx	#0
	lbne	L159
	leay	1,u
	ldb	,y
	tfr	b,a
	clrb
	std	,s
	ldb	,u
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldd	,s
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldb	#2
	stb	6,s
	cmpx	#-21931	;cmphi:
	lbne	L159
	ldd	#2
	std	,--s
	ldd	#54
	std	,--s
	leas	-4,s
	ldx	12,s
	stx	,s
	ldd	10,s
	std	2,s
	leax	,u
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	bne	L161
	ldb	,y
	tfr	b,a
	clrb
	std	,s
	ldb	,u
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldd	,s
	pshs	x
	ora	,s+
	orb	,s+
	cmpd	#16710	;cmphi:
	bne	L161
	clr	6,s
	bra	L159
L161:
	ldd	#2
	std	,--s
	ldd	#82
	std	,--s
	leas	-4,s
	ldx	12,s
	stx	,s
	ldd	10,s
	std	2,s
	leax	,u
	jsr	_disk_readp
	leas	8,s
	ldb	#1
	stb	6,s
	cmpx	#0
	bne	L159
	ldb	,y
	tfr	b,a
	clrb
	tfr	d,y
	clr	6,s
	ldb	,u
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	tfr	y,d
	pshs	x
	ora	,s+
	orb	,s+
	cmpd	#16710	;cmphi:
	bne	L163
	ldb	#1
	stb	6,s
L163:
	ldb	6,s
	eorb	#1
	stb	6,s
L159:
	ldb	6,s
	leas	7,s
	puls	y,u,pc
	.globl	_pf_mount
_pf_mount:
	pshs	y,u
	leas	-125,s
	stx	64,s
	ldd	#0
	std	_FatFs
	jsr	_disk_initialize
	clra		;zero_extendqihi: R:b -> R:d
	clra	;andqi(ZERO)
	andb	#1
	ldx	#2
	cmpd	#0
	lbne	L167
	leas	-4,s
	ldd	#0
	std	,s
	std	2,s
	leax	93,s
	jsr	_check_fs
	stb	70,s
	leas	4,s
	cmpb	#1	;cmpqi:
	beq	L168
	ldx	#0
	stx	67,s
	stx	69,s
	lbra	L169
L168:
	ldd	#16
	std	,--s
	ldx	#446
	stx	,--s
	leas	-4,s
	ldd	#0
	std	,s
	std	2,s
	leax	97,s
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	lbne	L170
	tst	93,s
	lbeq	L171
	ldb	100,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	99,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	2,s
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	98,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	ldd	2,s
	tfr	b,a
	clrb
	tfr	d,x
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,y
	ldb	97,s
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	tfr	u,d
	pshs	x
	ora	,s+
	orb	,s+
	std	67,s
	ldd	,s
	pshs	y
	ora	,s+
	orb	,s+
	std	69,s
	leas	-4,s
	ldx	71,s
	stx	,s
	ldu	73,s
	stu	2,s
	leax	93,s
	jsr	_check_fs
	stb	70,s
	leas	4,s
L169:
	ldb	66,s
	cmpb	#3	;cmpqi:
	lbeq	L170
	tstb
	lbne	L171
	ldd	#36
	std	,--s
	ldd	#13
	std	,--s
	leas	-4,s
	ldx	75,s
	stx	,s
	ldu	77,s
	stu	2,s
	leax	97,s
	jsr	_disk_readp
	leas	8,s
	cmpx	#0
	lbne	L170
	ldb	99,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	98,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldu	#0
	cmpx	#0
	bne	L172
	ldb	115,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	114,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	4,s
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	113,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	ldd	4,s
	tfr	b,a
	clrb
	tfr	d,x
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,y
	ldb	112,s
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	tfr	u,d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,u
	ldd	,s
	pshs	y
	ora	,s+
	orb	,s+
	tfr	d,x
L172:
	ldb	92,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	leas	-8,s
	ldd	#0
	std	4,s
	sty	6,s
	stu	,s
	stx	2,s
	leax	93,s
	jsr	___mulsi3
	leas	8,s
	ldx	85,s
	stx	79,s
	ldu	87,s
	stu	81,s
	ldb	91,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	90,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	stx	62,s
	ldu	#0
	stu	60,s
	ldd	69,s
	addd	62,s
	std	58,s
	ldd	67,s
	adcb	61,s
	adca	60,s
	std	56,s
	ldu	56,s
	ldx	64,s
	stu	10,x
	ldd	58,s
	std	12,x
	ldb	89,s
	stb	2,x
	ldb	94,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	93,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	83,s
	ldx	64,s
	std	4,x
	ldb	96,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	95,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	stx	73,s
	ldu	#0
	stu	71,s
	ldx	#0
	tfr	x,d
	ldu	73,s
	pshs	u
	ora	,s+
	orb	,s+
	cmpd	#0
	bne	L173
	ldb	111,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	110,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	6,s
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	109,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	ldd	6,s
	tfr	b,a
	clrb
	tfr	d,x
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,y
	ldb	108,s
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	tfr	u,d
	pshs	x
	ora	,s+
	orb	,s+
	std	71,s
	ldd	,s
	pshs	y
	ora	,s+
	orb	,s+
	std	73,s
L173:
	ldb	91,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	90,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	stx	54,s
	ldu	#0
	stu	52,s
	ldd	73,s
	subd	54,s
	std	50,s
	ldd	71,s
	sbcb	53,s
	sbca	52,s
	std	48,s
	ldd	50,s
	subd	81,s
	std	46,s
	ldd	48,s
	sbcb	80,s
	sbca	79,s
	std	44,s
	ldd	83,s
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	tfr	d,x
	stx	42,s
	stu	40,s
	ldd	46,s
	subd	42,s
	std	38,s
	ldd	44,s
	sbcb	41,s
	sbca	40,s
	std	36,s
	ldx	64,s
	ldb	2,x
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	leas	-8,s
	ldd	#0
	std	4,s
	stu	6,s
	ldx	44,s
	stx	,s
	ldu	46,s
	stu	2,s
	leax	93,s
	jsr	___udivsi3
	leas	8,s
	ldd	85,s
	std	32,s
	ldx	87,s
	stx	34,s
	ldd	34,s
	addd	#2
	std	77,s
	ldd	32,s
	adcb	#0
	adca	#0
	std	75,s
	ldu	75,s
	ldx	64,s
	stu	6,x
	ldd	77,s
	std	8,x
	ldd	34,s
	addd	#-4086
	std	30,s
	ldd	32,s
	adcb	#-1
	adca	#-1
	std	28,s
	ldx	28,s
	bne	L174
	ldu	30,s
	cmpu	#-4098	;cmphi:
	bhi	L174
	ldb	#2
	stb	66,s
L174:
	ldx	75,s
	bne	L183
	ldu	77,s
	cmpu	#-10	;cmphi:
	bls	L184
L183:
	ldb	#3
	stb	66,s
	bra	L178
L184:
	tst	66,s
	lbeq	L171
L178:
	ldb	66,s
	ldx	64,s
	stb	,x
	cmpb	#3	;cmpqi:
	bne	L179
	ldb	123,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	122,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	std	8,s
	ldd	,s
	tfr	b,a
	clrb
	tfr	d,x
	ldb	121,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	x
	ora	,s+
	orb	,s+
	std	10,s
	tfr	a,b
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,u
	ldd	8,s
	tfr	b,a
	clrb
	tfr	d,x
	tfr	u,d
	pshs	x
	ora	,s+
	orb	,s+
	tfr	d,x
	ldd	10,s
	tfr	b,a
	clrb
	tfr	d,y
	ldb	120,s
	clra		;zero_extendqihi: R:b -> R:d
	pshs	y
	ora	,s+
	orb	,s+
	ldu	64,s
	stx	14,u
	std	16,u
	bra	L180
L179:
	ldx	64,s
	leax	10,x
	ldd	81,s
	addd	2,x
	std	26,s
	ldd	79,s
	adcb	1,x
	adca	,x
	std	24,s
	ldd	24,s
	ldu	64,s
	std	14,u
	ldx	26,s
	stx	16,u
L180:
	ldu	64,s
	ldd	4,u
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	lsra
	rorb
	tfr	d,x
	stx	22,s
	ldu	#0
	stu	20,s
	ldx	64,s
	leax	10,x
	ldd	22,s
	addd	2,x
	std	18,s
	ldd	20,s
	adcb	1,x
	adca	,x
	std	16,s
	ldd	18,s
	addd	81,s
	std	14,s
	ldd	16,s
	adcb	80,s
	adca	79,s
	std	12,s
	ldu	12,s
	ldx	64,s
	stu	18,x
	ldd	14,s
	std	20,x
	clr	1,x
	stx	_FatFs
	ldx	#0
	bra	L167
L170:
	ldx	#1
	bra	L167
L171:
	ldx	#6
L167:
	leas	125,s
	puls	y,u,pc
_lfn_ofs.1461:
	.byte	1
	.byte	3
	.byte	5
	.byte	7
	.byte	9
	.byte	14
	.byte	16
	.byte	18
	.byte	20
	.byte	22
	.byte	24
	.byte	28
	.byte	30
	.area	.bss
_FatFs:	.blkb	2
	.globl	_pf_lfn
_pf_lfn:	.blkb	65
