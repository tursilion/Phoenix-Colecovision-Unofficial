;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.2.0 #13081 (Linux)
;--------------------------------------------------------
	.module main
	.optsdcc -mz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _disk_initialize
	.globl _pf_read
	.globl _pf_open
	.globl _pf_mount
	.globl _strcat
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
_fs:
	.ds 42
_path:
	.ds 32
_folder:
	.ds 2
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _INITIALIZED
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area _DABS (ABS)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area _HOME
	.area _GSINIT
	.area _GSFINAL
	.area _GSINIT
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area _HOME
	.area _HOME
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area _CODE
;main.c:56: static void text(BYTE col, BYTE row, const char *s, BYTE attr)
;	---------------------------------
; Function text
; ---------------------------------
_text:
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	e, a
;main.c:58: volatile BYTE *p = PH_TEXT + (WORD)row * TEXT_COLS + col;
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	add	hl, hl
	add	hl, hl
	add	hl, hl
	add	hl, hl
	add	hl, hl
	ld	bc, #0x8000
	add	hl, bc
	ld	c, e
	ld	b, #0x00
	add	hl, bc
;main.c:59: while (*s && col < TEXT_COLS) {
	ld	c, 4 (ix)
	ld	b, 5 (ix)
00102$:
	ld	a, (bc)
	ld	d, a
	or	a, a
	jr	Z, 00105$
	ld	a, e
	sub	a, #0x20
	jr	NC, 00105$
;main.c:60: *p++ = *s++ | attr;
	ld	a, d
	inc	bc
	or	a, 6 (ix)
	ld	(hl), a
	inc	hl
;main.c:61: ++col;
	inc	e
	jr	00102$
00105$:
;main.c:63: }
	pop	ix
	pop	hl
	pop	af
	inc	sp
	jp	(hl)
_roms:
	.byte #0x00, #0x00, #0x00, #0x00	; 0
	.dw #0x2000
	.dw __str_0
	.dw #0x0000
	.byte #0x00, #0x20, #0x00, #0x00	; 8192
	.dw #0x2000
	.dw __str_1
	.dw #0x0000
	.byte #0x00, #0x40, #0x00, #0x00	; 16384
	.dw #0x2000
	.dw __str_2
	.dw __str_3
	.byte #0x00, #0x60, #0x00, #0x00	; 24576
	.dw #0x2000
	.dw __str_4
	.dw __str_5
	.byte #0x00, #0x00, #0x01, #0x00	; 65536
	.dw #0x1000
	.dw __str_6
	.dw #0x0000
	.byte #0x00, #0x10, #0x01, #0x00	; 69632
	.dw #0x1000
	.dw __str_7
	.dw #0x0000
	.byte #0x00, #0x20, #0x01, #0x00	; 73728
	.dw #0x1000
	.dw __str_8
	.dw #0x0000
	.byte #0x00, #0x30, #0x01, #0x00	; 77824
	.dw #0x1000
	.dw __str_9
	.dw #0x0000
	.byte #0x00, #0x40, #0x01, #0x00	; 81920
	.dw #0x1000
	.dw __str_10
	.dw #0x0000
	.byte #0x00, #0x50, #0x01, #0x00	; 86016
	.dw #0x1000
	.dw __str_11
	.dw #0x0000
	.byte #0x00, #0x60, #0x01, #0x00	; 90112
	.dw #0x0020
	.dw __str_12
	.dw #0x0000
	.byte #0x20, #0x60, #0x01, #0x00	; 90144
	.dw #0x0020
	.dw __str_13
	.dw #0x0000
	.byte #0x40, #0x60, #0x01, #0x00	; 90176
	.dw #0x0020
	.dw __str_14
	.dw #0x0000
_folders:
	.dw __str_15
	.dw __str_16
	.dw __str_17
	.dw __str_18
__str_0:
	.ascii "D1"
	.db 0x00
__str_1:
	.ascii "D2"
	.db 0x00
__str_2:
	.ascii "DOFIX.D3"
	.db 0x00
__str_3:
	.ascii "D3"
	.db 0x00
__str_4:
	.ascii "DOFIX.D4"
	.db 0x00
__str_5:
	.ascii "D4"
	.db 0x00
__str_6:
	.ascii "D9"
	.db 0x00
__str_7:
	.ascii "D10"
	.db 0x00
__str_8:
	.ascii "R8-08.BIN"
	.db 0x00
__str_9:
	.ascii "N8-07.BIN"
	.db 0x00
__str_10:
	.ascii "H5-05.BIN"
	.db 0x00
__str_11:
	.ascii "K5-06.BIN"
	.db 0x00
__str_12:
	.ascii "U02--2.BIN"
	.db 0x00
__str_13:
	.ascii "T02--3.BIN"
	.db 0x00
__str_14:
	.ascii "F10--1.BIN"
	.db 0x00
__str_15:
	.ascii "MRDOFIX/"
	.db 0x00
__str_16:
	.ascii "MRDOT/"
	.db 0x00
__str_17:
	.ascii "MRDO/"
	.db 0x00
__str_18:
	.db 0x00
;main.c:65: static void cls(void)
;	---------------------------------
; Function cls
; ---------------------------------
_cls:
;main.c:69: for (n = 0; n < TEXT_COLS * TEXT_ROWS; ++n)
	ld	hl, #0x8000
	ld	bc, #0x0000
00102$:
;main.c:70: *p++ = ' ';
	ld	(hl), #0x20
	inc	hl
;main.c:69: for (n = 0; n < TEXT_COLS * TEXT_ROWS; ++n)
	inc	bc
	ld	e, c
	ld	d, b
	ld	a, e
	sub	a, #0x80
	ld	a, d
	sbc	a, #0x03
	jr	C, 00102$
;main.c:71: }
	ret
;main.c:73: static void fail(BYTE row, const char *a, const char *b)
;	---------------------------------
; Function fail
; ---------------------------------
_fail:
	ld	c, a
;main.c:75: text(2, row, a, 0x80);
	push	bc
	ld	a, #0x80
	push	af
	inc	sp
	push	de
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x02
	call	_text
	pop	bc
;main.c:76: if (b)
	ld	iy, #2
	add	iy, sp
	ld	a, 1 (iy)
	or	a, 0 (iy)
	jr	Z, 00102$
;main.c:77: text(2, row + 1, b, 0x80);
	inc	c
	ld	a, #0x80
	push	af
	inc	sp
;	spillPairReg hl
;	spillPairReg hl
	ld	l, 0 (iy)
	ld	h, 1 (iy)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x02
	call	_text
00102$:
;main.c:78: text(1, 22, "PUT THE MAME ROM FILES OF", 0);
	xor	a, a
	push	af
	inc	sp
	ld	hl, #___str_19
	push	hl
	ld	l, #0x16
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x01
	call	_text
;main.c:79: text(1, 23, "MRDOFIX OR MRDOT (UNZIPPED)", 0);
	xor	a, a
	push	af
	inc	sp
	ld	hl, #___str_20
	push	hl
	ld	l, #0x17
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x01
	call	_text
;main.c:80: text(1, 24, "IN A FOLDER MRDOFIX.", 0);
	xor	a, a
	push	af
	inc	sp
	ld	hl, #___str_21
	push	hl
	ld	l, #0x18
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x01
	call	_text
;main.c:81: PH_LED = 1;
	ld	hl, #0xc00b
	ld	(hl), #0x01
00105$:
	jr	00105$
;main.c:84: }
	pop	hl
	pop	af
	jp	(hl)
___str_19:
	.ascii "PUT THE MAME ROM FILES OF"
	.db 0x00
___str_20:
	.ascii "MRDOFIX OR MRDOT (UNZIPPED)"
	.db 0x00
___str_21:
	.ascii "IN A FOLDER MRDOFIX."
	.db 0x00
;main.c:88: static FRESULT try_open(const char *dir, const char *name)
;	---------------------------------
; Function try_open
; ---------------------------------
_try_open:
	ld	c, l
	ld	b, h
;main.c:90: if (!name)
	ld	a, d
	or	a, e
	jr	NZ, 00102$
;main.c:91: return FR_NO_FILE;
	ld	a, #0x03
	ret
00102$:
;main.c:92: strcpy(path, dir);
	push	de
	ld	de, #_path
	ld	l, c
	ld	h, b
	xor	a, a
00110$:
	cp	a, (hl)
	ldi
	jr	NZ, 00110$
	pop	de
;main.c:93: strcat(path, name);
	ld	hl, #_path
	call	_strcat
;main.c:94: return pf_open(path);
	ld	hl, #_path
;main.c:95: }
	jp	_pf_open
;main.c:98: static BYTE open_in(const char *dir, const struct rom *r)
;	---------------------------------
; Function open_in
; ---------------------------------
_open_in:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	push	af
	push	af
	dec	sp
	ld	-3 (ix), l
	ld	-2 (ix), h
;main.c:102: for (n = 0; n < 2; ++n)
	ld	hl, #0x0006
	add	hl, de
	ex	(sp), hl
	ld	-1 (ix), #0x00
00104$:
;main.c:103: if (try_open(dir, r->name[n]) == FR_OK)
	ld	a, -1 (ix)
	add	a, a
	ld	-4 (ix), a
	add	a, -7 (ix)
	ld	-5 (ix), a
	ld	a, #0x00
	adc	a, -6 (ix)
	ld	-4 (ix), a
	ld	l, -5 (ix)
	ld	h, -4 (ix)
	ld	a, (hl)
	ld	-5 (ix), a
	inc	hl
	ld	a, (hl)
	ld	-4 (ix), a
	pop	hl
	pop	de
	push	de
	push	hl
	ld	l, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_try_open
	or	a, a
	jr	NZ, 00105$
;main.c:104: return 1;
	ld	a, #0x01
	jr	00106$
00105$:
;main.c:102: for (n = 0; n < 2; ++n)
	inc	-1 (ix)
	ld	a, -1 (ix)
	sub	a, #0x02
	jr	C, 00104$
;main.c:105: return 0;
	xor	a, a
00106$:
;main.c:106: }
	ld	sp, ix
	pop	ix
	ret
;main.c:109: static BYTE open_rom(const struct rom *r)
;	---------------------------------
; Function open_rom
; ---------------------------------
_open_rom:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	dec	sp
	ex	(sp), hl
;main.c:113: if (folder)
	ld	a, (_folder+1)
	ld	hl, #_folder
	or	a, (hl)
	jr	Z, 00112$
;main.c:114: return open_in(folder, r);
	pop	de
	push	de
	ld	hl, (_folder)
	call	_open_in
	jr	00108$
;main.c:115: for (i = 0; i < sizeof(folders) / sizeof(folders[0]); ++i) {
00112$:
	ld	-1 (ix), #0x00
00106$:
;main.c:116: if (open_in(folders[i], r)) {
	ld	l, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	add	hl, hl
	ld	de, #_folders
	add	hl, de
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	dec	hl
	push	hl
	ld	e, -3 (ix)
	ld	d, -2 (ix)
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	call	_open_in
	pop	hl
	or	a, a
	jr	Z, 00107$
;main.c:117: folder = folders[i];
	ld	a, (hl)
	inc	hl
	ld	(_folder+0), a
	ld	a, (hl)
	ld	(_folder+1), a
;main.c:118: return 1;
	ld	a, #0x01
	jr	00108$
00107$:
;main.c:115: for (i = 0; i < sizeof(folders) / sizeof(folders[0]); ++i) {
	inc	-1 (ix)
	ld	a, -1 (ix)
	sub	a, #0x04
	jr	C, 00106$
;main.c:121: return 0;
	xor	a, a
00108$:
;main.c:122: }
	ld	sp, ix
	pop	ix
	ret
;main.c:124: static void set_load_addr(unsigned long a)
;	---------------------------------
; Function set_load_addr
; ---------------------------------
_set_load_addr:
	ld	c, l
;main.c:126: PH_LOAD_A0 = (BYTE)a;
	ld	a, e
	ld	hl, #0xc002
	ld	(hl), a
;main.c:127: PH_LOAD_A1 = (BYTE)(a >> 8);
	ld	a, d
	ld	l, #0x03
	ld	(hl), a
;main.c:128: PH_LOAD_A2 = (BYTE)(a >> 16);
	ld	l, #0x04
	ld	(hl), c
;main.c:129: }
	ret
;main.c:131: void main(void)
;	---------------------------------
; Function main
; ---------------------------------
_main::
	call	___sdcc_enter_ix
	ld	hl, #-15
	add	hl, sp
	ld	sp, hl
;main.c:138: cls();
	call	_cls
;main.c:139: text(9, 1, "MR. DO! LOADER", 0);
	xor	a, a
	push	af
	inc	sp
	ld	hl, #___str_22
	push	hl
	ld	l, #0x01
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x09
	call	_text
;main.c:141: if (disk_initialize() & STA_NODISK)
	call	_disk_initialize
	bit	1, a
	jr	Z, 00102$
;main.c:142: fail(3, "NO SD CARD", 0);
	ld	hl, #0x0000
	push	hl
	ld	de, #___str_23
	ld	a, #0x03
	call	_fail
00102$:
;main.c:143: if (pf_mount(&fs) != FR_OK)
	ld	hl, #_fs
	call	_pf_mount
	or	a, a
	jr	Z, 00140$
;main.c:144: fail(3, "CANNOT READ THE SD CARD", 0);
	ld	hl, #0x0000
	push	hl
	ld	de, #___str_24
	ld	a, #0x03
	call	_fail
;main.c:147: for (i = 0; i < NROMS; ++i) {
00140$:
	ld	-3 (ix), #0x03
	ld	-2 (ix), #0x00
00126$:
;main.c:148: r = &roms[i];
	ld	c, -2 (ix)
	ld	b, #0x00
	ld	l, c
	ld	h, b
	add	hl, hl
	add	hl, hl
	add	hl, bc
	add	hl, hl
	ld	de, #_roms
	add	hl, de
	ld	-13 (ix), l
	ld	-12 (ix), h
;main.c:149: text(2, row, r->name[0], 0);
	pop	hl
	pop	bc
	push	bc
	push	hl
	ld	hl, #6
	add	hl, bc
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	xor	a, a
	push	af
	inc	sp
	push	bc
	ld	l, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x02
	call	_text
;main.c:151: for (tries = 0; ; ++tries) {
	ld	a, -13 (ix)
	add	a, #0x04
	ld	-11 (ix), a
	ld	a, -12 (ix)
	adc	a, #0x00
	ld	-10 (ix), a
	ld	-1 (ix), #0x00
00124$:
;main.c:152: err = 0;
	xor	a, a
	ld	-9 (ix), a
	ld	-8 (ix), a
;main.c:153: if (!open_rom(r))
	pop	de
	pop	hl
	push	hl
	push	de
	call	_open_rom
	or	a, a
	jr	NZ, 00112$
;main.c:154: err = "NOT FOUND:";
	ld	-9 (ix), #<(___str_25)
	ld	-8 (ix), #>(___str_25)
	jr	00113$
00112$:
;main.c:155: else if (fs.fsize != r->size)
	ld	de, #_fs + 26
	ld	hl, #8
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	l, -11 (ix)
	ld	h, -10 (ix)
	ld	c, (hl)
	inc	hl
	ld	h, (hl)
;	spillPairReg hl
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	bc, #0x0000
	ld	e, -7 (ix)
	ld	d, -6 (ix)
	cp	a, a
	sbc	hl, de
	jr	NZ, 00195$
	ld	l, -5 (ix)
	ld	h, -4 (ix)
	cp	a, a
	sbc	hl, bc
	jr	Z, 00109$
00195$:
;main.c:156: err = "WRONG SIZE:";
	ld	-9 (ix), #<(___str_26)
	ld	-8 (ix), #>(___str_26)
	jr	00113$
00109$:
;main.c:158: set_load_addr(r->addr);
	ld	l, -13 (ix)
	ld	h, -12 (ix)
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	inc	hl
	ld	c, (hl)
	inc	hl
	ld	h, (hl)
;	spillPairReg hl
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	call	_set_load_addr
;main.c:159: if (pf_read(0, r->size, &br) != FR_OK || br != r->size)
	ld	l, -11 (ix)
	ld	h, -10 (ix)
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	ld	hl, #0
	add	hl, sp
	push	hl
	ld	hl, #0x0000
	call	_pf_read
	or	a, a
	jr	NZ, 00105$
	ld	l, -11 (ix)
	ld	h, -10 (ix)
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	pop	hl
	push	hl
	cp	a, a
	sbc	hl, bc
	jr	Z, 00113$
00105$:
;main.c:160: err = "READ ERROR:";
	ld	-9 (ix), #<(___str_27)
	ld	-8 (ix), #>(___str_27)
00113$:
;main.c:162: if (!err)
	ld	a, -8 (ix)
	or	a, -9 (ix)
	jr	Z, 00118$
;main.c:164: if (tries == 2)
	ld	a, -1 (ix)
	sub	a, #0x02
	jr	NZ, 00125$
;main.c:165: fail(row + 1, err, path);
	ld	c, -3 (ix)
	inc	c
	ld	hl, #_path
	push	hl
	ld	e, -9 (ix)
	ld	d, -8 (ix)
	ld	a, c
	call	_fail
00125$:
;main.c:151: for (tries = 0; ; ++tries) {
	inc	-1 (ix)
	jp	00124$
00118$:
;main.c:167: text(14, row, "OK", 0);
	xor	a, a
	push	af
	inc	sp
	ld	hl, #___str_28
	push	hl
	ld	l, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	a, #0x0e
	call	_text
;main.c:168: ++row;
	inc	-3 (ix)
;main.c:147: for (i = 0; i < NROMS; ++i) {
	inc	-2 (ix)
	ld	a, -2 (ix)
	sub	a, #0x0d
	jp	C, 00126$
;main.c:170: while (PH_LOAD_A0 & 1)          /* last SRAM write */
00120$:
	ld	a, (#0xc002)
	rrca
	jr	C, 00120$
;main.c:173: PH_DSW1 = DSW1;
	ld	hl, #0xc008
	ld	(hl), #0xdf
;main.c:174: PH_DSW2 = DSW2;
	ld	l, #0x09
	ld	(hl), #0xff
;main.c:175: PH_START = 1;
	ld	l, #0x0f
	ld	(hl), #0x01
00129$:
;main.c:178: }
	jr	00129$
___str_22:
	.ascii "MR. DO! LOADER"
	.db 0x00
___str_23:
	.ascii "NO SD CARD"
	.db 0x00
___str_24:
	.ascii "CANNOT READ THE SD CARD"
	.db 0x00
___str_25:
	.ascii "NOT FOUND:"
	.db 0x00
___str_26:
	.ascii "WRONG SIZE:"
	.db 0x00
___str_27:
	.ascii "READ ERROR:"
	.db 0x00
___str_28:
	.ascii "OK"
	.db 0x00
	.area _CODE
	.area _INITIALIZER
	.area _CABS (ABS)
