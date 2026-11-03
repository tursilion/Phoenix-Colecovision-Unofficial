;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.2.0 #13081 (Linux)
;--------------------------------------------------------
	.module diskio
	.optsdcc -mz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _spi_read_block
	.globl _load_write
	.globl _sd_block_addr
	.globl _disk_initialize
	.globl _sd_read_sector
	.globl _disk_readp
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
_ctrl:
	.ds 1
_sd_block_addr::
	.ds 1
_cache_sector:
	.ds 4
_cache_valid:
	.ds 1
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
;diskio.c:29: static BYTE xfer(BYTE b)
;	---------------------------------
; Function xfer
; ---------------------------------
_xfer:
	ld	c, a
;diskio.c:31: PH_SPI_DATA = b;
	ld	hl, #0xc000
	ld	(hl), c
;diskio.c:32: while (PH_CTRL & PH_STAT_BUSY)
00101$:
	ld	a, (#0xc001)
	rlca
	jr	C, 00101$
;diskio.c:34: return PH_SPI_DATA;
	ld	a, (#0xc000)
;diskio.c:35: }
	ret
;diskio.c:37: static void select(void)
;	---------------------------------
; Function select
; ---------------------------------
_select:
;diskio.c:39: ctrl |= PH_CTRL_SELECT;
	ld	a, (_ctrl+0)
	or	a, #0x01
	ld	(_ctrl+0), a
;diskio.c:40: PH_CTRL = ctrl;
	ld	hl, #0xc001
	ld	a, (_ctrl+0)
	ld	(hl), a
;diskio.c:41: xfer(0xFF);
	ld	a, #0xff
;diskio.c:42: }
	jp	_xfer
;diskio.c:44: static void deselect(void)
;	---------------------------------
; Function deselect
; ---------------------------------
_deselect:
;diskio.c:46: ctrl &= ~PH_CTRL_SELECT;
	ld	a, (_ctrl+0)
	and	a, #0xfe
	ld	(_ctrl+0), a
;diskio.c:47: PH_CTRL = ctrl;
	ld	hl, #0xc001
	ld	a, (_ctrl+0)
	ld	(hl), a
;diskio.c:48: xfer(0xFF);                 /* release MISO */
	ld	a, #0xff
;diskio.c:49: }
	jp	_xfer
;diskio.c:51: static BYTE send_cmd(BYTE cmd, DWORD arg)
;	---------------------------------
; Function send_cmd
; ---------------------------------
_send_cmd:
	call	___sdcc_enter_ix
	ld	c, a
;diskio.c:55: if (cmd & 0x80) {           /* application command: CMD55 first */
	bit	7, c
	jr	Z, 00104$
;diskio.c:56: cmd &= 0x7F;
	res	7, c
;diskio.c:57: r = send_cmd(CMD55, 0);
	push	bc
	ld	hl, #0x0000
	push	hl
	push	hl
	ld	a, #0x77
	call	_send_cmd
	pop	bc
	ld	b, a
;diskio.c:58: if (r > 1)
	ld	a, #0x01
	sub	a, b
	jr	NC, 00104$
;diskio.c:59: return r;
	ld	a, b
	jr	00111$
00104$:
;diskio.c:62: deselect();
	push	bc
	call	_deselect
	call	_select
	pop	bc
;diskio.c:65: xfer(cmd);
	push	bc
	ld	a, c
	call	_xfer
	pop	bc
;diskio.c:66: xfer(((BYTE *)&arg)[3]);    /* little-endian */
	ld	b, 7 (ix)
	push	bc
	ld	a, b
	call	_xfer
	pop	bc
;diskio.c:67: xfer(((BYTE *)&arg)[2]);
	ld	b, 6 (ix)
	push	bc
	ld	a, b
	call	_xfer
	pop	bc
;diskio.c:68: xfer(((BYTE *)&arg)[1]);
	ld	b, 5 (ix)
	push	bc
	ld	a, b
	call	_xfer
	pop	bc
;diskio.c:69: xfer(((BYTE *)&arg)[0]);
	ld	b, 4 (ix)
	push	bc
	ld	a, b
	call	_xfer
	pop	bc
;diskio.c:70: xfer(cmd == CMD0 ? 0x95 : cmd == CMD8 ? 0x87 : cmd == CMD12 ? 0x61 : 0x01);
	ld	a, c
	sub	a, #0x4c
	ld	a, #0x01
	jr	Z, 00162$
	xor	a, a
00162$:
	ld	e, a
	ld	a, c
	sub	a, #0x40
	jr	NZ, 00113$
	ld	bc, #0x0095
	jr	00114$
00113$:
	ld	a, c
	sub	a, #0x48
	jr	NZ, 00115$
	ld	bc, #0x0087
	jr	00116$
00115$:
	ld	a, e
	or	a, a
	jr	Z, 00117$
	ld	bc, #0x0061
	jr	00118$
00117$:
	ld	bc, #0x0001
00118$:
00116$:
00114$:
	push	de
	ld	a, c
	call	_xfer
	pop	de
;diskio.c:72: if (cmd == CMD12)
	ld	a, e
	or	a, a
	jr	Z, 00126$
;diskio.c:73: xfer(0xFF);             /* stuff byte */
	ld	a, #0xff
	call	_xfer
;diskio.c:75: do {
00126$:
	ld	c, #0x0a
00108$:
;diskio.c:76: r = xfer(0xFF);
	push	bc
	ld	a, #0xff
	call	_xfer
	pop	bc
;diskio.c:77: } while ((r & 0x80) && --n);
	bit	7, a
	jr	Z, 00110$
	dec	c
	jr	NZ, 00108$
00110$:
;diskio.c:78: return r;
00111$:
;diskio.c:79: }
	pop	ix
	pop	hl
	pop	bc
	pop	bc
	jp	(hl)
;diskio.c:81: DSTATUS disk_initialize(void)
;	---------------------------------
; Function disk_initialize
; ---------------------------------
_disk_initialize::
	call	___sdcc_enter_ix
	push	af
	push	af
;diskio.c:86: ctrl = PH_CTRL_SLOW;
	ld	hl, #_ctrl
	ld	(hl), #0x00
;diskio.c:87: PH_CTRL = ctrl;
	ld	hl, #0xc001
	ld	(hl), #0x00
;diskio.c:88: sd_block_addr = 0;
	ld	hl, #_sd_block_addr
	ld	(hl), #0x00
;diskio.c:89: cache_valid = 0;
	ld	hl, #_cache_valid
	ld	(hl), #0x00
;diskio.c:91: if (!(PH_CTRL & PH_STAT_CARD))
	ld	a, (#0xc001)
	bit	6, a
	jr	NZ, 00141$
;diskio.c:92: return STA_NODISK;
	ld	a, #0x02
	jp	00136$
;diskio.c:94: for (n = 10; n; --n)        /* 80 clocks with CS deasserted */
00141$:
	ld	c, #0x0a
00122$:
;diskio.c:95: xfer(0xFF);
	push	bc
	ld	a, #0xff
	call	_xfer
	pop	bc
;diskio.c:94: for (n = 10; n; --n)        /* 80 clocks with CS deasserted */
	dec	c
	jr	NZ, 00122$
;diskio.c:97: if (send_cmd(CMD0, 0) != 1) {
	ld	hl, #0x0000
	push	hl
	push	hl
	ld	a, #0x40
	call	_send_cmd
	dec	a
	jr	Z, 00105$
;diskio.c:98: deselect();
	call	_deselect
;diskio.c:99: return STA_NOINIT;
	ld	a, #0x01
	jp	00136$
00105$:
;diskio.c:102: if (send_cmd(CMD8, 0x1AA) == 1) {
	ld	hl, #0x0000
	push	hl
	ld	hl, #0x01aa
	push	hl
	ld	a, #0x48
	call	_send_cmd
;diskio.c:104: for (n = 0; n < 4; ++n)
	dec	a
	jp	NZ,00157$
	ld	c,a
00124$:
;diskio.c:105: ocr[n] = xfer(0xFF);
	ld	e, c
	ld	d, #0x00
	ld	hl, #0
	add	hl, sp
	add	hl, de
	push	hl
	push	bc
	ld	a, #0xff
	call	_xfer
	pop	bc
	pop	hl
	ld	(hl), a
;diskio.c:104: for (n = 0; n < 4; ++n)
	inc	c
	ld	a, c
	sub	a, #0x04
	jr	C, 00124$
;diskio.c:106: if (ocr[2] != 0x01 || ocr[3] != 0xAA) {
	ld	a, -2 (ix)
	dec	a
	jr	NZ, 00107$
	ld	a, -1 (ix)
	sub	a, #0xaa
	jr	Z, 00150$
00107$:
;diskio.c:107: deselect();
	call	_deselect
;diskio.c:108: return STA_NOINIT;
	ld	a, #0x01
	jp	00136$
;diskio.c:110: for (tmr = 10000; tmr && send_cmd(ACMD41, 1UL << 30); --tmr)
00150$:
	ld	hl, #0x2710
00128$:
	ld	a, h
	or	a, l
	jr	Z, 00110$
	push	hl
	ld	de, #0x4000
	push	de
	ld	d, #0x00
	push	de
	ld	a, #0xe9
	call	_send_cmd
	pop	hl
	or	a, a
	jr	Z, 00110$
	dec	hl
	jr	00128$
00110$:
;diskio.c:112: if (!tmr || send_cmd(CMD58, 0) != 0) {
	ld	a, h
	or	a, l
	jr	Z, 00111$
	ld	hl, #0x0000
	push	hl
	push	hl
	ld	a, #0x7a
	call	_send_cmd
	or	a, a
	jr	Z, 00152$
00111$:
;diskio.c:113: deselect();
	call	_deselect
;diskio.c:114: return STA_NOINIT;
	ld	a, #0x01
	jr	00136$
;diskio.c:116: for (n = 0; n < 4; ++n)
00152$:
	ld	c, #0x00
00130$:
;diskio.c:117: ocr[n] = xfer(0xFF);
	ld	e, c
	ld	d, #0x00
	ld	hl, #0
	add	hl, sp
	add	hl, de
	push	hl
	push	bc
	ld	a, #0xff
	call	_xfer
	pop	bc
	pop	hl
	ld	(hl), a
;diskio.c:116: for (n = 0; n < 4; ++n)
	inc	c
	ld	a, c
	sub	a, #0x04
	jr	C, 00130$
;diskio.c:118: sd_block_addr = (ocr[0] & 0x40) ? 1 : 0;
	bit	6, -4 (ix)
	jr	Z, 00138$
	ld	a, #0x01
	ld	c, #0x00
	jr	00139$
00138$:
	xor	a, a
	ld	c, a
00139$:
	ld	(_sd_block_addr+0), a
	jr	00121$
;diskio.c:121: for (tmr = 10000; tmr && send_cmd(ACMD41, 0); --tmr)
00157$:
	ld	bc, #0x2710
00134$:
	ld	a, b
	or	a, c
	jr	Z, 00115$
	push	bc
	ld	hl, #0x0000
	push	hl
	push	hl
	ld	a, #0xe9
	call	_send_cmd
	pop	bc
	or	a, a
	jr	Z, 00115$
	dec	bc
	jr	00134$
00115$:
;diskio.c:123: if (!tmr || send_cmd(CMD16, 512) != 0) {
	ld	a, b
	or	a, c
	jr	Z, 00116$
	ld	hl, #0x0000
	push	hl
	ld	h, #0x02
	push	hl
	ld	a, #0x50
	call	_send_cmd
	or	a, a
	jr	Z, 00121$
00116$:
;diskio.c:124: deselect();
	call	_deselect
;diskio.c:125: return STA_NOINIT;
	ld	a, #0x01
	jr	00136$
00121$:
;diskio.c:129: deselect();
	call	_deselect
;diskio.c:130: ctrl = PH_CTRL_FAST;
	ld	hl, #_ctrl
	ld	(hl), #0x02
;diskio.c:131: PH_CTRL = ctrl;
	ld	hl, #0xc001
	ld	(hl), #0x02
;diskio.c:132: return 0;
	xor	a, a
00136$:
;diskio.c:133: }
	ld	sp, ix
	pop	ix
	ret
;diskio.c:136: static BYTE start_read(DWORD sector)
;	---------------------------------
; Function start_read
; ---------------------------------
_start_read:
	ld	c, l
	ld	b, h
;diskio.c:141: if (!sd_block_addr)
	ld	a, (_sd_block_addr+0)
	or	a, a
	jr	NZ, 00102$
;diskio.c:142: sector <<= 9;
	ld	b, c
	ld	c, d
	ld	d, e
	ld	e, #0x00
	sla	d
	rl	c
	rl	b
00102$:
;diskio.c:143: if (send_cmd(CMD17, sector) != 0)
	push	bc
	push	de
	ld	a, #0x51
	call	_send_cmd
	or	a, a
	jr	Z, 00114$
;diskio.c:144: return 0;
	xor	a, a
	ret
;diskio.c:146: do {
00114$:
	ld	de, #0x9c40
00106$:
;diskio.c:147: r = xfer(0xFF);
	push	de
	ld	a, #0xff
	call	_xfer
	pop	de
;diskio.c:148: } while (r == 0xFF && --tmr);
	ld	c, a
	inc	a
	jr	NZ, 00108$
	dec	de
	ld	a, d
	or	a, e
	jr	NZ, 00106$
00108$:
;diskio.c:149: return r == 0xFE;
	ld	a, c
	sub	a, #0xfe
	ld	a, #0x01
	ret	Z
	xor	a, a
;diskio.c:150: }
	ret
;diskio.c:153: BYTE sd_read_sector(BYTE *dst, DWORD sector)
;	---------------------------------
; Function sd_read_sector
; ---------------------------------
_sd_read_sector::
;diskio.c:155: if (!start_read(sector)) {
	push	hl
	ld	iy, #4
	add	iy, sp
	ld	e, 0 (iy)
	ld	d, 1 (iy)
	ld	a, 2 (iy)
	ld	h, 3 (iy)
;	spillPairReg hl
;	spillPairReg hl
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	call	_start_read
	pop	hl
	or	a, a
	jr	NZ, 00102$
;diskio.c:156: deselect();
	call	_deselect
;diskio.c:157: return 0;
	xor	a, a
	jr	00106$
00102$:
;diskio.c:159: spi_read_block(dst);        /* also clocks in CRC byte 0 */
	call	_spi_read_block
;diskio.c:160: while (PH_CTRL & PH_STAT_BUSY)
00103$:
	ld	a, (#0xc001)
	rlca
	jr	C, 00103$
;diskio.c:162: xfer(0xFF);                 /* CRC byte 1 */
	ld	a, #0xff
	call	_xfer
;diskio.c:163: deselect();
	call	_deselect
;diskio.c:164: return 1;
	ld	a, #0x01
00106$:
;diskio.c:165: }
	pop	hl
	pop	bc
	pop	bc
	jp	(hl)
;diskio.c:167: DRESULT disk_readp(BYTE *buff, DWORD sector, UINT offset, UINT count)
;	---------------------------------
; Function disk_readp
; ---------------------------------
_disk_readp::
	push	ix
	ld	ix,#0
	add	ix,sp
	ex	de, hl
;diskio.c:171: if (!cache_valid || cache_sector != sector) {
	ld	a, (_cache_valid+0)
	or	a, a
	jr	Z, 00104$
	ld	a, (_cache_sector+0)
	sub	a, 4 (ix)
	jr	NZ, 00140$
	ld	a, (_cache_sector+1)
	sub	a, 5 (ix)
	jr	NZ, 00140$
	ld	a, (_cache_sector+2)
	sub	a, 6 (ix)
	jr	NZ, 00140$
	ld	a, (_cache_sector+3)
	sub	a, 7 (ix)
	jr	Z, 00105$
00140$:
00104$:
;diskio.c:172: cache_valid = 0;
	ld	hl, #_cache_valid
;diskio.c:173: for (tries = 0; !sd_read_sector(SECTOR_CACHE, sector); )
	ld	(hl), #0x00
	ld	c, (hl)
00111$:
	push	bc
	push	de
	ld	l, 6 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, 7 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, 4 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, 5 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	hl, #0xe800
	call	_sd_read_sector
	pop	de
	pop	bc
	or	a, a
	jr	NZ, 00103$
;diskio.c:174: if (++tries == 5)
	inc	c
	ld	a, c
	sub	a, #0x05
	jr	NZ, 00111$
;diskio.c:175: return RES_ERROR;
	ld	a, #0x01
	jr	00113$
00103$:
;diskio.c:176: cache_sector = sector;
	push	de
	ld	de, #_cache_sector
	ld	hl, #6
	add	hl, sp
	ld	bc, #4
	ldir
	pop	de
;diskio.c:177: cache_valid = 1;
	ld	iy, #_cache_valid
	ld	0 (iy), #0x01
00105$:
;diskio.c:180: memcpy(buff, SECTOR_CACHE + offset, count);
	ld	l, 8 (ix)
	ld	h, 9 (ix)
	ld	bc, #0xe800
	add	hl, bc
;diskio.c:179: if (buff)
	ld	a, d
	or	a, e
	jr	Z, 00108$
;diskio.c:180: memcpy(buff, SECTOR_CACHE + offset, count);
	ld	c, 10 (ix)
	ld	b, 11 (ix)
	ld	a, b
	or	a, c
	jr	Z, 00109$
	ldir
	jr	00109$
00108$:
;diskio.c:182: load_write(SECTOR_CACHE + offset, count);
	ld	e, 10 (ix)
	ld	d, 11 (ix)
	call	_load_write
00109$:
;diskio.c:183: return RES_OK;
	xor	a, a
00113$:
;diskio.c:184: }
	pop	ix
	pop	hl
	pop	bc
	pop	bc
	pop	bc
	pop	bc
	jp	(hl)
	.area _CODE
	.area _INITIALIZER
	.area _CABS (ABS)
