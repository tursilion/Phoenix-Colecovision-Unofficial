;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.2.0 #13081 (Linux)
;--------------------------------------------------------
	.module pff
	.optsdcc -mz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _disk_readp
	.globl _disk_initialize
	.globl _pf_mount
	.globl _pf_open
	.globl _pf_read
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
_FatFs:
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
;pff/pff.c:384: static WORD ld_word (const BYTE* ptr)	/*	 Load a 2-byte little-endian word */
;	---------------------------------
; Function ld_word
; ---------------------------------
_ld_word:
	ex	de, hl
;pff/pff.c:388: rv = ptr[1];
	ld	c, e
	ld	b, d
	inc	bc
	ld	a, (bc)
;pff/pff.c:389: rv = rv << 8 | ptr[0];
	ld	b, a
	ld	c, #0x00
	ld	a, (de)
	ld	e, a
	ld	d, #0x00
	ld	a, e
	or	a, c
	ld	e, a
	ld	a, d
	or	a, b
	ld	d, a
;pff/pff.c:390: return rv;
;pff/pff.c:391: }
	ret
;pff/pff.c:393: static DWORD ld_dword (const BYTE* ptr)	/* Load a 4-byte little-endian word */
;	---------------------------------
; Function ld_dword
; ---------------------------------
_ld_dword:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	push	af
;pff/pff.c:397: rv = ptr[3];
;	spillPairReg hl
;	spillPairReg hl
	ld	e, l
	ld	d, h
;	spillPairReg hl
;	spillPairReg hl
	inc	hl
	inc	hl
	inc	hl
	ld	c, (hl)
	ld	b, #0x00
	ld	hl, #0x0000
;pff/pff.c:398: rv = rv << 8 | ptr[2];
	ld	-3 (ix), c
	ld	-2 (ix), b
	ld	-1 (ix), l
	ld	-4 (ix), #0x00
	ld	l, e
;	spillPairReg hl
;	spillPairReg hl
	ld	h, d
;	spillPairReg hl
;	spillPairReg hl
	inc	hl
	inc	hl
	ld	c, (hl)
	ld	b, #0x00
	ld	hl, #0x0000
	ld	a, -4 (ix)
	or	a, c
	ld	c, a
	ld	a, -3 (ix)
	or	a, b
	ld	b, a
	ld	a, -2 (ix)
	or	a, l
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
;pff/pff.c:399: rv = rv << 8 | ptr[1];
	ld	-3 (ix), c
	ld	-2 (ix), b
	ld	-1 (ix), l
	ld	-4 (ix), #0x00
	ld	l, e
;	spillPairReg hl
;	spillPairReg hl
	ld	h, d
;	spillPairReg hl
;	spillPairReg hl
	inc	hl
	ld	c, (hl)
	ld	b, #0x00
	ld	hl, #0x0000
	ld	a, c
	or	a, -4 (ix)
	ld	c, a
	ld	a, b
	or	a, -3 (ix)
	ld	b, a
	ld	a, l
	or	a, -2 (ix)
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, h
	or	a, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
;pff/pff.c:400: rv = rv << 8 | ptr[0];
	ld	h, c
;	spillPairReg hl
;	spillPairReg hl
	ld	c, b
	ld	b, l
	ld	l, #0x00
;	spillPairReg hl
;	spillPairReg hl
	ld	a, (de)
	push	iy
	ex	(sp), hl
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	ex	(sp), hl
	pop	iy
	ld	de, #0x0000
	or	a, l
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	push	iy
	ld	a, -5 (ix)
	pop	iy
	or	a, h
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, e
	or	a, c
	ld	e, a
	ld	a, d
	or	a, b
	ld	d, a
;pff/pff.c:401: return rv;
	ex	de, hl
;pff/pff.c:402: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:411: static void mem_set (void* dst, int val, int cnt) {
;	---------------------------------
; Function mem_set
; ---------------------------------
_mem_set:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	inc	sp
	inc	sp
	push	de
;pff/pff.c:412: char *d = (char*)dst;
;pff/pff.c:413: while (cnt--) *d++ = (char)val;
	ld	c, 4 (ix)
	ld	b, 5 (ix)
00101$:
	ld	e, c
	ld	a, b
	dec	bc
	or	a, e
	jr	Z, 00104$
	ld	a, -2 (ix)
	ld	(hl), a
	inc	hl
	jr	00101$
00104$:
;pff/pff.c:414: }
	pop	af
	pop	ix
	pop	hl
	pop	af
	jp	(hl)
;pff/pff.c:417: static int mem_cmp (const void* dst, const void* src, int cnt) {
;	---------------------------------
; Function mem_cmp
; ---------------------------------
_mem_cmp:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	push	af
;pff/pff.c:418: const char *d = (const char *)dst, *s = (const char *)src;
	push	hl
	pop	iy
;pff/pff.c:419: int r = 0;
	ld	hl, #0x0000
	ex	(sp), hl
;pff/pff.c:420: while (cnt-- && (r = *d++ - *s++) == 0) ;
	ld	c, 4 (ix)
	ld	b, 5 (ix)
00102$:
	ld	-2 (ix), c
	ld	-1 (ix), b
	dec	bc
	ld	a, -1 (ix)
	or	a, -2 (ix)
	jr	Z, 00104$
	ld	l, 0 (iy)
;	spillPairReg hl
	inc	iy
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	ld	a, (de)
	inc	de
	ld	-2 (ix), a
	ld	-1 (ix), #0x00
	ld	a, l
	sub	a, -2 (ix)
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, h
	sbc	a, -1 (ix)
	ld	-4 (ix), l
	ld	-3 (ix), a
	or	a, l
	jr	Z, 00102$
00104$:
;pff/pff.c:421: return r;
	pop	de
	push	de
;pff/pff.c:422: }
	ld	sp, ix
	pop	ix
	pop	hl
	pop	af
	jp	(hl)
;pff/pff.c:430: static CLUST get_fat (	/* 1:IO error, Else:Cluster status */
;	---------------------------------
; Function get_fat
; ---------------------------------
_get_fat:
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-14
	add	iy, sp
	ld	sp, iy
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	-2 (ix), l
	ld	-1 (ix), h
;pff/pff.c:435: FATFS *fs = FatFs;
	ld	de, (_FatFs)
;pff/pff.c:440: if (clst < 2 || clst >= fs->n_fatent) return 1;	/* Range check */
	ld	a, -4 (ix)
	sub	a, #0x02
	ld	a, -3 (ix)
	sbc	a, #0x00
	ld	a, -2 (ix)
	sbc	a, #0x00
	ld	a, -1 (ix)
	sbc	a, #0x00
	jr	C, 00101$
	ld	c, e
	ld	b, d
	ld	hl, #6
	add	hl, bc
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	hl
	ld	l, (hl)
;	spillPairReg hl
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, -4 (ix)
	sub	a, c
	ld	a, -3 (ix)
	sbc	a, b
	ld	a, -2 (ix)
	sbc	a, l
	ld	a, -1 (ix)
	sbc	a, h
	jr	C, 00102$
00101$:
	ld	de, #0x0001
	ld	l, d
	ld	h, d
	jp	00111$
00102$:
;pff/pff.c:442: switch (fs->fs_type) {
	ld	a, (de)
	ld	c, a
;pff/pff.c:459: if (disk_readp(buf, fs->fatbase + clst / 256, ((UINT)clst % 256) * 2, 2)) break;
	ld	l, -4 (ix)
;	spillPairReg hl
;	spillPairReg hl
;	spillPairReg hl
;	spillPairReg hl
	ld	a, e
	add	a, #0x0a
	ld	e, a
	jr	NC, 00138$
	inc	d
00138$:
;pff/pff.c:442: switch (fs->fs_type) {
	ld	a,c
	cp	a,#0x02
	jr	Z, 00104$
	sub	a, #0x03
	jr	Z, 00107$
	jp	00110$
;pff/pff.c:458: case FS_FAT16 :
00104$:
;pff/pff.c:459: if (disk_readp(buf, fs->fatbase + clst / 256, ((UINT)clst % 256) * 2, 2)) break;
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	add	hl, hl
	ld	-10 (ix), l
	ld	-9 (ix), h
	ld	hl, #6
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	c, -3 (ix)
	ld	b, -2 (ix)
	ld	e, -1 (ix)
	ld	d, #0x00
	ld	a, -8 (ix)
	add	a, c
	ld	c, a
	ld	a, -7 (ix)
	adc	a, b
	ld	b, a
	ld	a, -6 (ix)
	adc	a, e
	ld	e, a
	ld	a, -5 (ix)
	adc	a, d
	ld	d, a
	ld	hl, #0x0002
	push	hl
	ld	l, -10 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -9 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	push	de
	push	bc
	ld	hl, #8
	add	hl, sp
	call	_disk_readp
	or	a, a
	jr	NZ, 00110$
;pff/pff.c:460: return ld_word(buf);
	ld	hl, #0
	add	hl, sp
	call	_ld_word
	ld	hl, #0x0000
	jr	00111$
;pff/pff.c:463: case FS_FAT32 :
00107$:
;pff/pff.c:464: if (disk_readp(buf, fs->fatbase + clst / 128, ((UINT)clst % 128) * 4, 4)) break;
	res	7, l
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	add	hl, hl
	add	hl, hl
	ld	-10 (ix), l
	ld	-9 (ix), h
	ld	hl, #6
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	e, -4 (ix)
	ld	d, -3 (ix)
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	b, #0x07
00143$:
	srl	h
	rr	l
	rr	d
	rr	e
	djnz	00143$
	ld	a, -8 (ix)
	add	a, e
	ld	c, a
	ld	a, -7 (ix)
	adc	a, d
	ld	b, a
	ld	a, -6 (ix)
	adc	a, l
	ld	e, a
	ld	a, -5 (ix)
	adc	a, h
	ld	d, a
	ld	hl, #0x0004
	push	hl
	ld	l, -10 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -9 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	push	de
	push	bc
	ld	hl, #8
	add	hl, sp
	call	_disk_readp
	or	a, a
	jr	NZ, 00110$
;pff/pff.c:465: return ld_dword(buf) & 0x0FFFFFFF;
	ld	hl, #0
	add	hl, sp
	call	_ld_dword
	ld	a, h
	and	a, #0x0f
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	jr	00111$
;pff/pff.c:467: }
00110$:
;pff/pff.c:469: return 1;	/* An error occured at the disk I/O layer */
	ld	de, #0x0001
	ld	l, d
	ld	h, d
00111$:
;pff/pff.c:470: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:479: static DWORD clust2sect (	/* !=0: Sector number, 0: Failed - invalid cluster# */
;	---------------------------------
; Function clust2sect
; ---------------------------------
_clust2sect:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	push	af
;pff/pff.c:483: FATFS *fs = FatFs;
	ld	bc, (_FatFs)
;pff/pff.c:486: clst -= 2;
	ld	a, e
	add	a, #0xfe
	ld	-4 (ix), a
	ld	a, d
	adc	a, #0xff
	ld	-3 (ix), a
	ld	a, l
	adc	a, #0xff
	ld	-2 (ix), a
	ld	a, h
	adc	a, #0xff
	ld	-1 (ix), a
;pff/pff.c:487: if (clst >= (fs->n_fatent - 2)) return 0;		/* Invalid cluster# */
	ld	e, c
	ld	d, b
	ld	hl, #6
	add	hl, de
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	hl
	ld	l, (hl)
;	spillPairReg hl
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, e
	add	a, #0xfe
	ld	e, a
	ld	a, d
	adc	a, #0xff
	ld	d, a
	ld	a, l
	adc	a, #0xff
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, h
	adc	a, #0xff
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, -4 (ix)
	sub	a, e
	ld	a, -3 (ix)
	sbc	a, d
	ld	a, -2 (ix)
	sbc	a, l
	ld	a, -1 (ix)
	sbc	a, h
	jr	C, 00102$
	ld	de, #0x0000
	ld	l, e
	ld	h, e
	jr	00103$
00102$:
;pff/pff.c:488: return (DWORD)clst * fs->csize + fs->database;
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	inc	hl
	inc	hl
	ld	e, (hl)
	xor	a, a
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	push	bc
	push	hl
	ld	d, a
	push	de
	ld	e, -4 (ix)
	ld	d, -3 (ix)
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	__mullong
	pop	af
	ex	(sp),hl
	pop	iy
	pop	bc
	ld	hl, #18
	add	hl, bc
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	hl
	ld	l, (hl)
;	spillPairReg hl
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, c
	add	a, e
	ld	e, a
	ld	a, b
	adc	a, d
	ld	d, a
	push	iy
	ld	a, -6 (ix)
	pop	iy
	adc	a, l
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	push	iy
	ld	a, -5 (ix)
	pop	iy
	adc	a, h
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
00103$:
;pff/pff.c:489: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:492: static CLUST get_clust (
;	---------------------------------
; Function get_clust
; ---------------------------------
_get_clust:
	ex	de, hl
;pff/pff.c:496: FATFS *fs = FatFs;
	ld	iy, (_FatFs)
;pff/pff.c:497: CLUST clst = 0;
	ld	bc, #0x0000
	ld	hl, #0x0000
;pff/pff.c:500: if (_FS_32ONLY || (PF_FS_FAT32 && fs->fs_type == FS_FAT32)) {
	ld	a, 0 (iy)
	sub	a, #0x03
	jr	NZ, 00102$
;pff/pff.c:501: clst = ld_word(dir+DIR_FstClusHI);
	ld	l, #0x14
	add	hl, de
	push	de
	call	_ld_word
	ex	de, hl
	pop	de
;pff/pff.c:502: clst <<= 16;
	ld	bc, #0x0000
00102$:
;pff/pff.c:504: clst |= ld_word(dir+DIR_FstClusLO);
	ld	a, e
	add	a, #0x1a
	ld	e, a
	jr	NC, 00116$
	inc	d
00116$:
	push	hl
	push	bc
	ex	de, hl
	call	_ld_word
	pop	bc
	pop	hl
	ld	a, e
	push	iy
	ex	(sp), hl
	ld	h, d
;	spillPairReg hl
;	spillPairReg hl
	ex	(sp), hl
	pop	iy
	ld	de, #0x0000
	or	a, c
	ld	c, a
	push	iy
	ex	(sp), hl
	ld	a, h
	ex	(sp), hl
	pop	iy
	or	a, b
	ld	b, a
	ld	a, e
	or	a, l
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, d
	or	a, h
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
;pff/pff.c:506: return clst;
	ld	e, c
	ld	d, b
;pff/pff.c:507: }
	ret
;pff/pff.c:514: static FRESULT dir_rewind (
;	---------------------------------
; Function dir_rewind
; ---------------------------------
_dir_rewind:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	push	af
	push	af
	ex	de, hl
;pff/pff.c:519: FATFS *fs = FatFs;
	ld	hl, (_FatFs)
	ld	-2 (ix), l
	ld	-1 (ix), h
;pff/pff.c:522: dj->index = 0;
	ld	l, e
	ld	h, d
	xor	a, a
	ld	(hl), a
	inc	hl
	ld	(hl), a
;pff/pff.c:523: clst = dj->sclust;
	ld	l, e
;	spillPairReg hl
;	spillPairReg hl
	ld	h, d
;	spillPairReg hl
;	spillPairReg hl
	ex	de, hl
	push	hl
	ld	hl, #2
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	add	hl, bc
	ld	bc, #0x0004
	ldir
	pop	de
;pff/pff.c:524: if (clst == 1 || clst >= fs->n_fatent) {	/* Check start cluster range */
	ld	a, -6 (ix)
	dec	a
	or	a, -5 (ix)
	or	a, -4 (ix)
	or	a, -3 (ix)
	jr	Z, 00101$
	ld	c, -2 (ix)
	ld	b, -1 (ix)
	ld	hl, #6
	add	hl, bc
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	hl
	ld	l, (hl)
;	spillPairReg hl
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, -6 (ix)
	sub	a, c
	ld	a, -5 (ix)
	sbc	a, b
	ld	a, -4 (ix)
	sbc	a, l
	ld	a, -3 (ix)
	sbc	a, h
	jr	C, 00106$
00101$:
;pff/pff.c:525: return FR_DISK_ERR;
	ld	a, #0x01
	jp	00109$
;pff/pff.c:527: if (PF_FS_FAT32 && !clst && (_FS_32ONLY || fs->fs_type == FS_FAT32)) {	/* Replace cluster# 0 with root cluster# if in FAT32 */
00106$:
;pff/pff.c:528: clst = (CLUST)fs->dirbase;
	ld	a, -2 (ix)
	add	a, #0x0e
	ld	c, a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	b, a
;pff/pff.c:527: if (PF_FS_FAT32 && !clst && (_FS_32ONLY || fs->fs_type == FS_FAT32)) {	/* Replace cluster# 0 with root cluster# if in FAT32 */
	ld	a, -3 (ix)
	or	a, -4 (ix)
	or	a, -5 (ix)
	or	a, -6 (ix)
	jr	NZ, 00105$
	ld	l, -2 (ix)
	ld	h, -1 (ix)
	ld	a, (hl)
	sub	a, #0x03
	jr	NZ, 00105$
;pff/pff.c:528: clst = (CLUST)fs->dirbase;
	push	de
	push	bc
	ld	e, c
	ld	d, b
	ld	hl, #4
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	pop	bc
	pop	de
00105$:
;pff/pff.c:530: dj->clust = clst;						/* Current cluster */
	ld	hl, #0x0008
	add	hl, de
	push	de
	push	bc
	ex	de,hl
	ld	hl, #4
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
	pop	de
;pff/pff.c:531: dj->sect = (_FS_32ONLY || clst) ? clust2sect(clst) : fs->dirbase;	/* Current sector */
	ld	hl, #0x000c
	add	hl, de
	ld	-2 (ix), l
	ld	-1 (ix), h
	ld	a, -3 (ix)
	or	a, -4 (ix)
	or	a, -5 (ix)
	or	a, -6 (ix)
	jr	Z, 00111$
	pop	de
	push	de
	ld	l, -4 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_clust2sect
	ld	c, e
	ld	b, d
	ex	de, hl
	jr	00112$
00111$:
	ld	l, c
	ld	h, b
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
00112$:
	ld	l, -2 (ix)
	ld	h, -1 (ix)
	ld	(hl), c
	inc	hl
	ld	(hl), b
	inc	hl
	ld	(hl), e
	inc	hl
	ld	(hl), d
;pff/pff.c:533: return FR_OK;	/* Seek succeeded */
	xor	a, a
00109$:
;pff/pff.c:534: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:543: static FRESULT dir_next (	/* FR_OK:Succeeded, FR_NO_FILE:End of table */
;	---------------------------------
; Function dir_next
; ---------------------------------
_dir_next:
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-14
	add	iy, sp
	ld	sp, iy
	ld	c, l
	ld	b, h
;pff/pff.c:549: FATFS *fs = FatFs;
	ld	iy, (_FatFs)
;pff/pff.c:552: i = dj->index + 1;
	ld	l, c
	ld	h, b
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	inc	de
	ld	-10 (ix), e
;pff/pff.c:553: if (!i || !dj->sect) return FR_NO_FILE;	/* Report EOT when index has reached 65535 */
	ld	-9 (ix), d
	ld	a, d
	or	a, -10 (ix)
	jr	Z, 00101$
	ld	hl, #0x000c
	add	hl, bc
	ld	-8 (ix), l
	ld	-7 (ix), h
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	hl
	ld	l, (hl)
;	spillPairReg hl
;	spillPairReg hl
;	spillPairReg hl
	ld	h, a
	or	a, l
	or	a, d
	or	a, e
	jr	NZ, 00102$
00101$:
	ld	a, #0x03
	jp	00117$
00102$:
;pff/pff.c:555: if (!(i % 16)) {		/* Sector changed? */
	ld	a, -10 (ix)
	ld	-2 (ix), a
	ld	a, -9 (ix)
	ld	-1 (ix), a
	ld	a, -2 (ix)
	and	a, #0x0f
	jp	NZ,00116$
;pff/pff.c:556: dj->sect++;			/* Next sector */
	ld	a, e
	add	a, #0x01
	ld	-6 (ix), a
	ld	a, d
	adc	a, #0x00
	ld	-5 (ix), a
	ld	a, l
	adc	a, #0x00
	ld	-4 (ix), a
	ld	a, h
	adc	a, #0x00
	ld	-3 (ix), a
	push	bc
	ld	e, -8 (ix)
	ld	d, -7 (ix)
	ld	hl, #10
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
;pff/pff.c:558: if (dj->clust == 0) {	/* Static table */
	ld	hl, #0x0008
	add	hl, bc
	ex	de, hl
	push	de
	push	bc
	ld	hl, #12
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	pop	bc
	pop	de
	ld	a, -3 (ix)
	or	a, -4 (ix)
	or	a, -5 (ix)
	or	a, -6 (ix)
	jr	NZ, 00113$
;pff/pff.c:559: if (i >= fs->n_rootdir) return FR_NO_FILE;	/* Report EOT when end of table */
	ld	e, 4 (iy)
	ld	d, 5 (iy)
	ld	a, -10 (ix)
	sub	a, e
	ld	a, -9 (ix)
	sbc	a, d
	jp	C, 00116$
	ld	a, #0x03
	jp	00117$
00113$:
;pff/pff.c:562: if (((i / 16) & (fs->csize - 1)) == 0) {	/* Cluster changed? */
	ld	a, #0x04
00156$:
	srl	-1 (ix)
	rr	-2 (ix)
	dec	a
	jr	NZ, 00156$
	push	iy
	pop	hl
	inc	hl
	inc	hl
	ld	l, (hl)
;	spillPairReg hl
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	dec	hl
	ld	a, l
	and	a, -2 (ix)
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, h
	and	a, -1 (ix)
	or	a, l
	jp	NZ, 00116$
;pff/pff.c:563: clst = get_fat(dj->clust);		/* Get next cluster */
	push	bc
	push	de
	push	iy
	ld	e, -6 (ix)
	ld	d, -5 (ix)
	ld	l, -4 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_get_fat
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	-2 (ix), l
	ld	-1 (ix), h
	pop	iy
	pop	de
	pop	bc
	push	de
	push	bc
	ld	hl, #4
	add	hl, sp
	ex	de, hl
	ld	hl, #14
	add	hl, sp
	ld	bc, #4
	ldir
	pop	bc
	pop	de
;pff/pff.c:564: if (clst <= 1) return FR_DISK_ERR;
	ld	a, #0x01
	cp	a, -14 (ix)
	ld	a, #0x00
	sbc	a, -13 (ix)
	ld	a, #0x00
	sbc	a, -12 (ix)
	ld	a, #0x00
	sbc	a, -11 (ix)
	jr	C, 00107$
	ld	a, #0x01
	jr	00117$
00107$:
;pff/pff.c:565: if (clst >= fs->n_fatent) return FR_NO_FILE;	/* Report EOT when it reached end of dynamic table */
	ld	a, 6 (iy)
	ld	-4 (ix), a
	ld	a, 7 (iy)
	ld	-3 (ix), a
	ld	a, 8 (iy)
	ld	-2 (ix), a
	ld	a, 9 (iy)
	ld	-1 (ix), a
	ld	a, -14 (ix)
	sub	a, -4 (ix)
	ld	a, -13 (ix)
	sbc	a, -3 (ix)
	ld	a, -12 (ix)
	sbc	a, -2 (ix)
	ld	a, -11 (ix)
	sbc	a, -1 (ix)
	jr	C, 00109$
	ld	a, #0x03
	jr	00117$
00109$:
;pff/pff.c:566: dj->clust = clst;				/* Initialize data for new cluster */
	push	bc
	ld	hl, #2
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	hl
	pop	de
	push	de
	push	hl
	ld	l, -12 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -11 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_clust2sect
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	-2 (ix), l
	ld	-1 (ix), h
	ld	e, -8 (ix)
	ld	d, -7 (ix)
	ld	hl, #12
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
00116$:
;pff/pff.c:572: dj->index = i;
	ld	a, -10 (ix)
	ld	(bc), a
	inc	bc
	ld	a, -9 (ix)
	ld	(bc), a
;pff/pff.c:574: return FR_OK;
	xor	a, a
00117$:
;pff/pff.c:575: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:584: static FRESULT dir_find (
;	---------------------------------
; Function dir_find
; ---------------------------------
_dir_find:
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-15
	add	iy, sp
	ld	sp, iy
	ld	-2 (ix), l
	ld	-1 (ix), h
	ld	-4 (ix), e
	ld	-3 (ix), d
;pff/pff.c:593: res = dir_rewind(dj);			/* Rewind directory object */
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_dir_rewind
;pff/pff.c:594: if (res != FR_OK) return res;
	or	a, a
;pff/pff.c:596: do {
	jp	NZ,00113$
	ld	a, -2 (ix)
	ld	-15 (ix), a
	ld	a, -1 (ix)
	ld	-14 (ix), a
	ld	a, -4 (ix)
	ld	-13 (ix), a
	ld	a, -3 (ix)
	ld	-12 (ix), a
	ld	a, -2 (ix)
	ld	-11 (ix), a
	ld	a, -1 (ix)
	ld	-10 (ix), a
00110$:
;pff/pff.c:597: res = disk_readp(dir, dj->sect, (dj->index % 16) * 32, 32)	/* Read an entry */
	ld	l, -2 (ix)
	ld	h, -1 (ix)
	ld	a, (hl)
	and	a, #0x0f
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	add	hl, hl
	add	hl, hl
	add	hl, hl
	add	hl, hl
	add	hl, hl
	push	hl
	pop	iy
	ld	l, -11 (ix)
	ld	h, -10 (ix)
	ld	de, #0x000c
	add	hl, de
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	ld	hl, #0x0020
	push	hl
	push	iy
	push	de
	push	bc
	ld	l, -4 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_disk_readp
	or	a, a
	jr	Z, 00115$
;pff/pff.c:598: ? FR_DISK_ERR : FR_OK;
	ld	-6 (ix), #0x01
	ld	-5 (ix), #0
	jr	00116$
00115$:
	xor	a, a
	ld	-6 (ix), a
	ld	-5 (ix), a
00116$:
	ld	a, -6 (ix)
;pff/pff.c:599: if (res != FR_OK) break;
	ld	-9 (ix), a
	or	a, a
	jr	NZ, 00112$
;pff/pff.c:600: c = dir[DIR_Name];	/* First character */
	ld	l, -4 (ix)
	ld	h, -3 (ix)
	ld	a, (hl)
;pff/pff.c:601: if (c == 0) { res = FR_NO_FILE; break; }	/* Reached to end of table */
	or	a, a
	jr	NZ, 00106$
	ld	-9 (ix), #0x03
	jr	00112$
00106$:
;pff/pff.c:602: if (!(dir[DIR_Attr] & AM_VOL) && !mem_cmp(dir, dj->fn, 11)) break;	/* Is it a valid entry? */
	ld	l, -13 (ix)
	ld	h, -12 (ix)
	ld	de, #0x000b
	add	hl, de
	ld	a, (hl)
	bit	3, a
	jr	NZ, 00108$
	pop	hl
	push	hl
	inc	hl
	inc	hl
	ld	a, (hl)
	ld	-6 (ix), a
	inc	hl
	ld	a, (hl)
	ld	-5 (ix), a
	ld	a, -6 (ix)
	ld	-8 (ix), a
	ld	a, -5 (ix)
	ld	-7 (ix), a
	ld	a, -4 (ix)
	ld	-6 (ix), a
	ld	a, -3 (ix)
	ld	-5 (ix), a
	ld	hl, #0x000b
	push	hl
	ld	e, -8 (ix)
	ld	d, -7 (ix)
	ld	l, -6 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -5 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_mem_cmp
	ld	a, d
	or	a, e
	jr	Z, 00112$
00108$:
;pff/pff.c:603: res = dir_next(dj);					/* Next entry */
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_dir_next
;pff/pff.c:604: } while (res == FR_OK);
	ld	-9 (ix), a
	or	a, a
	jp	Z, 00110$
00112$:
;pff/pff.c:606: return res;
	ld	a, -9 (ix)
00113$:
;pff/pff.c:607: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:651: static FRESULT create_name (
;	---------------------------------
; Function create_name
; ---------------------------------
_create_name:
	push	ix
	ld	ix,#0
	add	ix,sp
	push	af
	push	af
	push	af
	dec	sp
	ld	-4 (ix), e
	ld	-3 (ix), d
;pff/pff.c:663: sfn = dj->fn;
	inc	hl
	inc	hl
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
;pff/pff.c:664: mem_set(sfn, ' ', 11);
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	push	bc
	ld	de, #0x000b
	push	de
	ld	de, #0x0020
	call	_mem_set
	pop	bc
;pff/pff.c:665: si = i = 0; ni = 8;
	ld	-2 (ix), #0x00
	ld	-7 (ix), #0x08
;pff/pff.c:666: p = *path;
	ld	l, -4 (ix)
	ld	h, -3 (ix)
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	ld	-1 (ix), #0x00
00120$:
;pff/pff.c:668: c = p[si++];
	ld	l, -1 (ix)
	ld	h, #0x00
	add	hl, de
	inc	-1 (ix)
	ld	a, (hl)
	ld	-6 (ix), a
;pff/pff.c:669: if (c <= ' ' || c == '/') break;	/* Break on end of segment */
	ld	a, #0x20
	sub	a, -6 (ix)
	ld	a, #0x00
	rla
	ld	-5 (ix), a
	bit	0, -5 (ix)
	jr	Z, 00119$
	ld	a, -6 (ix)
	sub	a, #0x2f
	jr	Z, 00119$
;pff/pff.c:670: if (c == '.' || i >= ni) {
	ld	a, -6 (ix)
	sub	a, #0x2e
	ld	a, #0x01
	jr	Z, 00163$
	xor	a, a
00163$:
;	spillPairReg hl
;	spillPairReg hl
	ld	l, a
	or	a, a
	jr	NZ, 00107$
	ld	a, -2 (ix)
	sub	a, -7 (ix)
	jr	C, 00111$
00107$:
;pff/pff.c:671: if (ni != 8 || c != '.') break;
	ld	a, -7 (ix)
	sub	a, #0x08
	jr	NZ, 00119$
	bit	0, l
	jr	Z, 00119$
;pff/pff.c:672: i = 8; ni = 11;
	ld	-2 (ix), #0x08
	ld	-7 (ix), #0x0b
;pff/pff.c:673: continue;
	jr	00120$
;pff/pff.c:683: if (PF_USE_LCC && IsLower(c)) c -= 0x20;	/* toupper */
00111$:
;pff/pff.c:684: sfn[i++] = c;
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	inc	-2 (ix)
	ld	h, #0x00
	add	hl, bc
	ld	a, -6 (ix)
	ld	(hl), a
	jr	00120$
00119$:
;pff/pff.c:687: *path = &p[si];						/* Rerurn pointer to the next segment */
	ld	a, -1 (ix)
	add	a, e
	ld	e, a
	ld	a, #0x00
	adc	a, d
	ld	d, a
	ld	l, -4 (ix)
	ld	h, -3 (ix)
	ld	(hl), e
	inc	hl
	ld	(hl), d
;pff/pff.c:689: sfn[11] = (c <= ' ') ? 1 : 0;		/* Set last segment flag if end of path */
	ld	hl, #0x000b
	add	hl, bc
	bit	0, -5 (ix)
	jr	NZ, 00123$
	ld	bc, #0x0001
	jr	00124$
00123$:
	ld	bc, #0x0000
00124$:
	ld	(hl), c
;pff/pff.c:691: return FR_OK;
	xor	a, a
;pff/pff.c:692: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:742: static FRESULT follow_path (	/* FR_OK(0): successful, !=0: error code */
;	---------------------------------
; Function follow_path
; ---------------------------------
_follow_path:
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-12
	add	iy, sp
	ld	sp, iy
	ld	c, l
	ld	b, h
	ld	-2 (ix), e
	ld	-1 (ix), d
;pff/pff.c:751: while (*path == ' ') path++;		/* Strip leading spaces */
	ld	e, 4 (ix)
	ld	d, 5 (ix)
00101$:
	ld	a, (de)
	ld	l, e
;	spillPairReg hl
;	spillPairReg hl
	ld	h, d
;	spillPairReg hl
;	spillPairReg hl
	inc	hl
	cp	a, #0x20
	jr	NZ, 00131$
	ld	e, l
	ld	d, h
	ld	4 (ix), l
	ld	5 (ix), h
	jr	00101$
00131$:
	ld	4 (ix), e
	ld	5 (ix), d
;pff/pff.c:752: if (*path == '/') path++;			/* Strip heading separator if exist */
	sub	a, #0x2f
	jr	NZ, 00105$
	ld	4 (ix), l
	ld	5 (ix), h
00105$:
;pff/pff.c:753: dj->sclust = 0;						/* Set start directory (always root dir) */
	ld	hl, #0x0004
	add	hl, bc
	ex	(sp), hl
	pop	hl
	push	hl
	xor	a, a
	ld	(hl), a
	inc	hl
	ld	(hl), a
	inc	hl
	ld	(hl), a
	inc	hl
	ld	(hl), a
;pff/pff.c:755: if ((BYTE)*path < ' ') {			/* Null path means the root directory */
	ld	e, 4 (ix)
	ld	d, 5 (ix)
	ld	a, (de)
	sub	a, #0x20
	jr	NC, 00130$
;pff/pff.c:756: res = dir_rewind(dj);
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	call	_dir_rewind
	ld	e, a
;pff/pff.c:757: dir[0] = 0;
	ld	l, -2 (ix)
	ld	h, -1 (ix)
	ld	(hl), #0x00
	jp	00117$
00130$:
	ld	-10 (ix), c
	ld	-9 (ix), b
	ld	a, -2 (ix)
	ld	-8 (ix), a
	ld	a, -1 (ix)
	ld	-7 (ix), a
00118$:
;pff/pff.c:761: res = create_name(dj, &path);	/* Get a segment */
	push	bc
	ld	hl, #18
	add	hl, sp
	ex	de, hl
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	call	_create_name
	pop	bc
;pff/pff.c:762: if (res != FR_OK) break;
	ld	e, a
	or	a, a
	jr	NZ, 00117$
;pff/pff.c:763: res = dir_find(dj, dir);		/* Find it */
	push	bc
	ld	e, -2 (ix)
	ld	d, -1 (ix)
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	call	_dir_find
	pop	bc
;pff/pff.c:764: if (res != FR_OK) break;		/* Could not find the object */
	ld	e, a
	or	a, a
	jr	NZ, 00117$
;pff/pff.c:765: if (dj->fn[11]) break;			/* Last segment match. Function completed. */
	ld	l, -10 (ix)
	ld	h, -9 (ix)
	inc	hl
	inc	hl
	ld	d, (hl)
	inc	hl
	ld	h, (hl)
;	spillPairReg hl
	ld	l, d
	push	bc
	ld	bc, #0x000b
	add	hl, bc
	pop	bc
	ld	a, (hl)
	or	a, a
	jr	NZ, 00117$
;pff/pff.c:766: if (!(dir[DIR_Attr] & AM_DIR)) { /* Cannot follow path because it is a file */
	ld	l, -8 (ix)
	ld	h, -7 (ix)
	ld	de, #0x000b
	add	hl, de
	ld	a, (hl)
	bit	4, a
	jr	NZ, 00113$
;pff/pff.c:767: res = FR_NO_FILE; break;
	ld	e, #0x03
	jr	00117$
00113$:
;pff/pff.c:769: dj->sclust = get_clust(dir);	/* Follow next */
	push	bc
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_get_clust
	ld	-6 (ix), e
	ld	-5 (ix), d
	ld	-4 (ix), l
	ld	-3 (ix), h
	ld	e, -12 (ix)
	ld	d, -11 (ix)
	ld	hl, #8
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
	jr	00118$
00117$:
;pff/pff.c:773: return res;
	ld	a, e
;pff/pff.c:774: }
	ld	sp, ix
	pop	ix
	pop	hl
	pop	bc
	jp	(hl)
;pff/pff.c:783: static BYTE check_fs (	/* 0:The FAT boot record, 1:Valid boot record but not an FAT, 2:Not a boot record, 3:Error */
;	---------------------------------
; Function check_fs
; ---------------------------------
_check_fs:
	push	ix
	ld	ix,#0
	add	ix,sp
;pff/pff.c:788: if (disk_readp(buf, sect, 510, 2)) {	/* Read the boot record */
	push	hl
	ld	de, #0x0002
	push	de
	ld	de, #0x01fe
	push	de
	ld	e, 6 (ix)
	ld	d, 7 (ix)
	push	de
	ld	e, 4 (ix)
	ld	d, 5 (ix)
	push	de
	call	_disk_readp
	pop	hl
	or	a, a
	jr	Z, 00102$
;pff/pff.c:789: return 3;
	ld	a, #0x03
	jr	00113$
00102$:
;pff/pff.c:791: if (ld_word(buf) != 0xAA55) {			/* Check record signature */
	push	hl
	call	_ld_word
	pop	hl
	ld	a, e
	sub	a, #0x55
	jr	NZ, 00145$
	ld	a, d
	sub	a, #0xaa
	jr	Z, 00107$
00145$:
;pff/pff.c:792: return 2;
	ld	a, #0x02
	jr	00113$
;pff/pff.c:795: if (!_FS_32ONLY && !disk_readp(buf, sect, BS_FilSysType, 2) && ld_word(buf) == 0x4146) {	/* Check FAT12/16 */
00107$:
	push	hl
	ld	de, #0x0002
	push	de
	ld	de, #0x0036
	push	de
	ld	e, 6 (ix)
	ld	d, 7 (ix)
	push	de
	ld	e, 4 (ix)
	ld	d, 5 (ix)
	push	de
	call	_disk_readp
	pop	hl
	or	a, a
	jr	NZ, 00111$
	push	hl
	call	_ld_word
	pop	hl
	ld	a, e
	sub	a, #0x46
	jr	NZ, 00111$
	ld	a, d
	sub	a, #0x41
	jr	NZ, 00111$
;pff/pff.c:796: return 0;
	xor	a, a
	jr	00113$
;pff/pff.c:798: if (PF_FS_FAT32 && !disk_readp(buf, sect, BS_FilSysType32, 2) && ld_word(buf) == 0x4146) {	/* Check FAT32 */
00111$:
	push	hl
	ld	de, #0x0002
	push	de
	ld	de, #0x0052
	push	de
	ld	e, 6 (ix)
	ld	d, 7 (ix)
	push	de
	ld	e, 4 (ix)
	ld	d, 5 (ix)
	push	de
	call	_disk_readp
	pop	hl
	or	a, a
	jr	NZ, 00110$
	call	_ld_word
	ld	a, e
	sub	a, #0x46
	jr	NZ, 00110$
	ld	a, d
	sub	a, #0x41
	jr	NZ, 00110$
;pff/pff.c:799: return 0;
	xor	a, a
	jr	00113$
00110$:
;pff/pff.c:801: return 1;
	ld	a, #0x01
00113$:
;pff/pff.c:802: }
	pop	ix
	pop	hl
	pop	bc
	pop	bc
	jp	(hl)
;pff/pff.c:819: FRESULT pf_mount (
;	---------------------------------
; Function pf_mount
; ---------------------------------
_pf_mount::
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-56
	add	iy, sp
	ld	sp, iy
	ld	-2 (ix), l
	ld	-1 (ix), h
;pff/pff.c:827: FatFs = 0;
	ld	hl, #0x0000
	ld	(_FatFs), hl
;pff/pff.c:829: if (disk_initialize() & STA_NOINIT) {	/* Check if the drive is ready or not */
	call	_disk_initialize
	rrca
	jr	NC, 00102$
;pff/pff.c:830: return FR_NOT_READY;
	ld	a, #0x02
	jp	00137$
00102$:
;pff/pff.c:834: bsect = 0;
	xor	a, a
	ld	-14 (ix), a
	ld	-13 (ix), a
	ld	-12 (ix), a
	ld	-11 (ix), a
;pff/pff.c:835: fmt = check_fs(buf, bsect);			/* Check sector 0 as an SFD format */
	ld	hl, #0x0000
	push	hl
	push	hl
	ld	hl, #4
	add	hl, sp
	call	_check_fs
;pff/pff.c:841: if (buf[4]) {					/* Is the partition existing? */
;pff/pff.c:836: if (fmt == 1) {						/* Not an FAT boot record, it may be FDISK format */
	ld	-3 (ix), a
	dec	a
	jr	NZ, 00109$
;pff/pff.c:838: if (disk_readp(buf, bsect, MBR_Table, 16)) {	/* 1st partition entry */
	ld	hl, #0x0010
	push	hl
	ld	hl, #0x01be
	push	hl
	ld	hl, #0x0000
	push	hl
	push	hl
	ld	hl, #8
	add	hl, sp
	call	_disk_readp
	or	a, a
	jr	Z, 00106$
;pff/pff.c:839: fmt = 3;
	ld	-3 (ix), #0x03
	jr	00109$
00106$:
;pff/pff.c:841: if (buf[4]) {					/* Is the partition existing? */
	ld	a, -52 (ix)
	or	a, a
	jr	Z, 00109$
;pff/pff.c:842: bsect = ld_dword(&buf[8]);	/* Partition offset in LBA */
	ld	hl, #8
	add	hl, sp
	call	_ld_dword
	ld	-14 (ix), e
	ld	-13 (ix), d
;pff/pff.c:843: fmt = check_fs(buf, bsect);	/* Check the partition */
;	spillPairReg hl
;	spillPairReg hl
	ld	-12 (ix), l
	ld	-11 (ix), h
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, -14 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -13 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	hl, #4
	add	hl, sp
	call	_check_fs
	ld	-3 (ix), a
00109$:
;pff/pff.c:847: if (fmt == 3) return FR_DISK_ERR;
	ld	a, -3 (ix)
	sub	a, #0x03
	jr	NZ, 00111$
	ld	a, #0x01
	jp	00137$
00111$:
;pff/pff.c:848: if (fmt) return FR_NO_FILESYSTEM;	/* No valid FAT patition is found */
	ld	a, -3 (ix)
	or	a, a
	jr	Z, 00113$
	ld	a, #0x06
	jp	00137$
00113$:
;pff/pff.c:851: if (disk_readp(buf, bsect, 13, sizeof (buf))) return FR_DISK_ERR;
	ld	hl, #0x0024
	push	hl
	ld	l, #0x0d
	push	hl
	ld	l, -12 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -11 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, -14 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -13 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	hl, #8
	add	hl, sp
	call	_disk_readp
	or	a, a
	jr	Z, 00115$
	ld	a, #0x01
	jp	00137$
00115$:
;pff/pff.c:853: fsize = ld_word(buf+BPB_FATSz16-13);				/* Number of sectors per FAT */
	ld	hl, #9
	add	hl, sp
	call	_ld_word
	ld	-6 (ix), e
	ld	-5 (ix), d
	xor	a, a
	ld	-4 (ix), a
;pff/pff.c:854: if (!fsize) fsize = ld_dword(buf+BPB_FATSz32-13);
	ld	-3 (ix), a
	or	a, -4 (ix)
	or	a, -5 (ix)
	or	a, -6 (ix)
	jr	NZ, 00117$
	ld	hl, #23
	add	hl, sp
	call	_ld_dword
	ld	-6 (ix), e
	ld	-5 (ix), d
	ld	-4 (ix), l
	ld	-3 (ix), h
00117$:
;pff/pff.c:856: fsize *= buf[BPB_NumFATs-13];						/* Number of sectors in FAT area */
	ld	c, -53 (ix)
	ld	b, #0x00
	ld	hl, #0x0000
	push	hl
	push	bc
	ld	e, -6 (ix)
	ld	d, -5 (ix)
	ld	l, -4 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -3 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	__mullong
	pop	af
	pop	af
	ld	-6 (ix), e
	ld	-5 (ix), d
	ld	-4 (ix), l
	ld	-3 (ix), h
	ld	hl, #36
	add	hl, sp
	ex	de, hl
	ld	hl, #50
	add	hl, sp
	ld	bc, #4
	ldir
;pff/pff.c:857: fs->fatbase = bsect + ld_word(buf+BPB_RsvdSecCnt-13); /* FAT start sector (lba) */
	ld	a, -2 (ix)
	add	a, #0x0a
	ld	-16 (ix), a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	-15 (ix), a
	ld	hl, #1
	add	hl, sp
	call	_ld_word
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	a, -4 (ix)
	ld	-10 (ix), a
	ld	a, -3 (ix)
	ld	-9 (ix), a
	xor	a, a
	ld	-8 (ix), a
	ld	-7 (ix), a
	ld	a, -10 (ix)
	add	a, -14 (ix)
	ld	-6 (ix), a
	ld	a, -9 (ix)
	adc	a, -13 (ix)
	ld	-5 (ix), a
	ld	a, -8 (ix)
	adc	a, -12 (ix)
	ld	-4 (ix), a
	ld	a, -7 (ix)
	adc	a, -11 (ix)
	ld	-3 (ix), a
	ld	e, -16 (ix)
	ld	d, -15 (ix)
	ld	hl, #50
	add	hl, sp
	ld	bc, #0x0004
	ldir
;pff/pff.c:858: fs->csize = buf[BPB_SecPerClus-13];					/* Number of sectors per cluster */
	ld	a, -2 (ix)
	add	a, #0x02
	ld	-14 (ix), a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	-13 (ix), a
	ld	a, -56 (ix)
	ld	l, -14 (ix)
	ld	h, -13 (ix)
	ld	(hl), a
;pff/pff.c:859: fs->n_rootdir = ld_word(buf+BPB_RootEntCnt-13);		/* Nmuber of root directory entries */
	ld	a, -2 (ix)
	add	a, #0x04
	ld	-12 (ix), a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	-11 (ix), a
	ld	hl, #4
	add	hl, sp
	call	_ld_word
	ld	l, -12 (ix)
	ld	h, -11 (ix)
	ld	(hl), e
	inc	hl
	ld	(hl), d
;pff/pff.c:860: tsect = ld_word(buf+BPB_TotSec16-13);				/* Number of sectors on the file system */
	ld	hl, #6
	add	hl, sp
	call	_ld_word
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	a, -4 (ix)
	ld	-10 (ix), a
	ld	a, -3 (ix)
	ld	-9 (ix), a
	xor	a, a
	ld	-8 (ix), a
	ld	-7 (ix), a
	ld	hl, #50
	add	hl, sp
	ex	de, hl
	ld	hl, #46
	add	hl, sp
	ld	bc, #4
	ldir
;pff/pff.c:861: if (!tsect) tsect = ld_dword(buf+BPB_TotSec32-13);
	ld	a, -7 (ix)
	or	a, -8 (ix)
	or	a, -9 (ix)
	or	a, -10 (ix)
	jr	NZ, 00119$
	ld	hl, #19
	add	hl, sp
	call	_ld_dword
	ld	-6 (ix), e
	ld	-5 (ix), d
	ld	-4 (ix), l
	ld	-3 (ix), h
00119$:
;pff/pff.c:863: - ld_word(buf+BPB_RsvdSecCnt-13) - fsize - fs->n_rootdir / 16
	ld	hl, #1
	add	hl, sp
	call	_ld_word
	ld	bc, #0x0000
	ld	a, -6 (ix)
	sub	a, e
	ld	e, a
	ld	a, -5 (ix)
	sbc	a, d
	ld	d, a
	ld	a, -4 (ix)
	sbc	a, c
	ld	c, a
	ld	a, -3 (ix)
	sbc	a, b
	ld	b, a
	ld	a, e
	sub	a, -20 (ix)
	ld	-6 (ix), a
	ld	a, d
	sbc	a, -19 (ix)
	ld	-5 (ix), a
	ld	a, c
	sbc	a, -18 (ix)
	ld	-4 (ix), a
	ld	a, b
	sbc	a, -17 (ix)
	ld	-3 (ix), a
	ld	l, -12 (ix)
	ld	h, -11 (ix)
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	ld	b, #0x04
00214$:
	srl	d
	rr	e
	djnz	00214$
	ld	bc, #0x0000
	ld	a, -6 (ix)
	sub	a, e
	ld	e, a
	ld	a, -5 (ix)
	sbc	a, d
	ld	d, a
	ld	a, -4 (ix)
	sbc	a, c
	ld	c, a
	ld	a, -3 (ix)
	sbc	a, b
	ld	b, a
;pff/pff.c:864: ) / fs->csize + 2;
	ld	l, -14 (ix)
	ld	h, -13 (ix)
	ld	l, (hl)
;	spillPairReg hl
	ld	h, #0x00
;	spillPairReg hl
;	spillPairReg hl
	ld	iy, #0x0000
	push	iy
	push	hl
	ld	l, c
;	spillPairReg hl
;	spillPairReg hl
	ld	h, b
;	spillPairReg hl
;	spillPairReg hl
	call	__divulong
	pop	af
	pop	af
	ld	a, e
	add	a, #0x02
	ld	-6 (ix), a
	ld	a, d
	adc	a, #0x00
	ld	-5 (ix), a
	ld	a, l
	adc	a, #0x00
	ld	-4 (ix), a
	ld	a, h
	adc	a, #0x00
	ld	-3 (ix), a
;pff/pff.c:865: fs->n_fatent = (CLUST)mclst;
	ld	a, -2 (ix)
	add	a, #0x06
	ld	e, a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	d, a
	ld	hl, #50
	add	hl, sp
	ld	bc, #0x0004
	ldir
;pff/pff.c:867: fmt = 0;							/* Determine the FAT sub type */
	ld	c, #0x00
;pff/pff.c:869: if (PF_FS_FAT16 && mclst >= 0xFF8 && mclst < 0xFFF7) fmt = FS_FAT16;
	ld	a, -6 (ix)
	sub	a, #0xf7
	ld	a, -5 (ix)
	sbc	a, #0xff
	ld	a, -4 (ix)
	sbc	a, #0x00
	ld	a, -3 (ix)
	sbc	a, #0x00
	ld	a, #0x00
	rla
	ld	b, a
	ld	a, -6 (ix)
	sub	a, #0xf8
	ld	a, -5 (ix)
	sbc	a, #0x0f
	ld	a, -4 (ix)
	sbc	a, #0x00
	ld	a, -3 (ix)
	sbc	a, #0x00
	jr	C, 00129$
	ld	a, b
	or	a, a
	jr	Z, 00129$
	ld	c, #0x02
;pff/pff.c:870: if (PF_FS_FAT32 && mclst >= 0xFFF7) fmt = FS_FAT32;
00129$:
	bit	0, b
	jr	NZ, 00128$
	ld	c, #0x03
00128$:
;pff/pff.c:871: if (!fmt) return FR_NO_FILESYSTEM;
	ld	a, c
	or	a, a
	jr	NZ, 00131$
	ld	a, #0x06
	jp	00137$
00131$:
;pff/pff.c:872: fs->fs_type = fmt;
	ld	l, -2 (ix)
	ld	h, -1 (ix)
	ld	(hl), c
;pff/pff.c:875: fs->dirbase = ld_dword(buf+(BPB_RootClus-13));	/* Root directory start cluster */
	ld	a, -2 (ix)
	add	a, #0x0e
	ld	-4 (ix), a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	-3 (ix), a
;pff/pff.c:874: if (_FS_32ONLY || (PF_FS_FAT32 && fmt == FS_FAT32)) {
	ld	a, c
	sub	a, #0x03
	jr	NZ, 00133$
;pff/pff.c:875: fs->dirbase = ld_dword(buf+(BPB_RootClus-13));	/* Root directory start cluster */
	ld	hl, #31
	add	hl, sp
	call	_ld_dword
	ld	c, l
	ld	b, h
	ld	l, -4 (ix)
	ld	h, -3 (ix)
	ld	(hl), e
	inc	hl
	ld	(hl), d
	inc	hl
	ld	(hl), c
	inc	hl
	ld	(hl), b
	jr	00134$
00133$:
;pff/pff.c:877: fs->dirbase = fs->fatbase + fsize;				/* Root directory start sector (lba) */
	ld	l, -16 (ix)
	ld	h, -15 (ix)
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	ld	a, c
	add	a, -20 (ix)
	ld	c, a
	ld	a, b
	adc	a, -19 (ix)
	ld	b, a
	ld	a, e
	adc	a, -18 (ix)
	ld	e, a
	ld	a, d
	adc	a, -17 (ix)
	ld	d, a
	ld	l, -4 (ix)
	ld	h, -3 (ix)
	ld	(hl), c
	inc	hl
	ld	(hl), b
	inc	hl
	ld	(hl), e
	inc	hl
	ld	(hl), d
00134$:
;pff/pff.c:879: fs->database = fs->fatbase + fsize + fs->n_rootdir / 16;	/* Data start sector (lba) */
	ld	a, -2 (ix)
	add	a, #0x12
	ld	e, a
	ld	a, -1 (ix)
	adc	a, #0x00
	ld	d, a
	ld	l, -16 (ix)
	ld	h, -15 (ix)
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	hl
	ld	l, (hl)
;	spillPairReg hl
	ld	h, a
;	spillPairReg hl
;	spillPairReg hl
	ld	a, c
	add	a, -20 (ix)
	ld	-6 (ix), a
	ld	a, b
	adc	a, -19 (ix)
	ld	-5 (ix), a
	ld	a, l
	adc	a, -18 (ix)
	ld	-4 (ix), a
	ld	a, h
	adc	a, -17 (ix)
	ld	-3 (ix), a
	ld	l, -12 (ix)
	ld	h, -11 (ix)
	ld	a, (hl)
	inc	hl
	ld	h, (hl)
;	spillPairReg hl
	ld	l, a
;	spillPairReg hl
;	spillPairReg hl
	ld	b, #0x04
00217$:
	srl	h
	rr	l
	djnz	00217$
	ld	bc, #0x0000
	ld	a, l
	add	a, -6 (ix)
	ld	-10 (ix), a
	ld	a, h
	adc	a, -5 (ix)
	ld	-9 (ix), a
	ld	a, c
	adc	a, -4 (ix)
	ld	-8 (ix), a
	ld	a, b
	adc	a, -3 (ix)
	ld	-7 (ix), a
	ld	hl, #46
	add	hl, sp
	ld	bc, #0x0004
	ldir
;pff/pff.c:881: fs->flag = 0;
	ld	c, -2 (ix)
	ld	b, -1 (ix)
	inc	bc
	xor	a, a
	ld	(bc), a
;pff/pff.c:882: FatFs = fs;
	ld	l, -2 (ix)
	ld	h, -1 (ix)
	ld	(_FatFs), hl
;pff/pff.c:884: return FR_OK;
	xor	a, a
00137$:
;pff/pff.c:885: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:894: FRESULT pf_open (
;	---------------------------------
; Function pf_open
; ---------------------------------
_pf_open::
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-66
	add	iy, sp
	ld	sp, iy
	ex	de, hl
;pff/pff.c:901: FATFS *fs = FatFs;
	ld	bc, (_FatFs)
;pff/pff.c:904: if (!fs) return FR_NOT_ENABLED;		/* Check file system */
	ld	a, b
	or	a, c
	jr	NZ, 00102$
	ld	a, #0x05
	jp	00108$
00102$:
;pff/pff.c:906: fs->flag = 0;
	ld	l, c
	ld	h, b
	inc	hl
	ld	-6 (ix), l
	ld	-5 (ix), h
	ld	(hl), #0x00
;pff/pff.c:907: dj.fn = sp;
	ld	hl, #16
	add	hl, sp
	ld	-64 (ix), l
	ld	-63 (ix), h
;pff/pff.c:908: res = follow_path(&dj, dir, path);	/* Follow the file path */
	push	bc
	push	de
	ld	hl, #32
	add	hl, sp
	ex	de, hl
	ld	hl, #4
	add	hl, sp
	call	_follow_path
	pop	bc
;pff/pff.c:909: if (res != FR_OK) return res;		/* Follow failed */
	or	a,a
	jr	NZ, 00108$
;pff/pff.c:910: if (!dir[0] || (dir[DIR_Attr] & AM_DIR)) return FR_NO_FILE;	/* It is a directory */
	ld	a, -38 (ix)
	or	a, a
	jr	Z, 00105$
	bit	4, -27 (ix)
	jr	Z, 00106$
00105$:
	ld	a, #0x03
	jr	00108$
00106$:
;pff/pff.c:912: fs->org_clust = get_clust(dir);		/* File start cluster */
	ld	hl, #0x001e
	add	hl, bc
	push	bc
	push	hl
	ld	hl, #32
	add	hl, sp
	call	_get_clust
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	-2 (ix), l
	ld	-1 (ix), h
	pop	de
	ld	hl, #64
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
;pff/pff.c:913: fs->fsize = ld_dword(dir+DIR_FileSize);	/* File size */
	ld	hl, #0x001a
	add	hl, bc
	push	bc
	push	hl
	ld	hl, #60
	add	hl, sp
	call	_ld_dword
	ld	-4 (ix), e
	ld	-3 (ix), d
	ld	-2 (ix), l
	ld	-1 (ix), h
	pop	de
	ld	hl, #64
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
;pff/pff.c:914: fs->fptr = 0;						/* File pointer */
	ld	hl, #0x0016
	add	hl, bc
	xor	a, a
	ld	(hl), a
	inc	hl
	ld	(hl), a
	inc	hl
	ld	(hl), a
	inc	hl
	ld	(hl), a
;pff/pff.c:915: fs->flag = FA_OPENED;
	ld	l, -6 (ix)
	ld	h, -5 (ix)
	ld	(hl), #0x01
;pff/pff.c:917: return FR_OK;
	xor	a, a
00108$:
;pff/pff.c:918: }
	ld	sp, ix
	pop	ix
	ret
;pff/pff.c:928: FRESULT pf_read (
;	---------------------------------
; Function pf_read
; ---------------------------------
_pf_read::
	push	ix
	ld	ix,#0
	add	ix,sp
	ld	iy, #-34
	add	iy, sp
	ld	sp, iy
	ld	-4 (ix), l
	ld	-3 (ix), h
	ld	-6 (ix), e
	ld	-5 (ix), d
;pff/pff.c:938: BYTE cs, *rbuff = buff;
	ld	a, -4 (ix)
	ld	-2 (ix), a
	ld	a, -3 (ix)
	ld	-1 (ix), a
;pff/pff.c:939: FATFS *fs = FatFs;
	ld	hl, (_FatFs)
	ld	-8 (ix), l
	ld	-7 (ix), h
;pff/pff.c:942: *br = 0;
	ld	a, 4 (ix)
	ld	-34 (ix), a
	ld	a, 5 (ix)
	ld	-33 (ix), a
	pop	hl
	push	hl
	xor	a, a
	ld	(hl), a
	inc	hl
	ld	(hl), a
;pff/pff.c:943: if (!fs) return FR_NOT_ENABLED;		/* Check file system */
	ld	a, -7 (ix)
	or	a, -8 (ix)
	jr	NZ, 00102$
	ld	a, #0x05
	jp	00127$
00102$:
;pff/pff.c:944: if (!(fs->flag & FA_OPENED)) return FR_NOT_OPENED;	/* Check if opened */
	ld	a, -8 (ix)
	add	a, #0x01
	ld	-32 (ix), a
	ld	a, -7 (ix)
	adc	a, #0x00
	ld	-31 (ix), a
	ld	l, -32 (ix)
	ld	h, -31 (ix)
	ld	a, (hl)
	rrca
	jr	C, 00104$
	ld	a, #0x04
	jp	00127$
00104$:
;pff/pff.c:946: remain = fs->fsize - fs->fptr;
	ld	e, -8 (ix)
	ld	d, -7 (ix)
	ld	hl, #14
	add	hl, sp
	ex	de, hl
	ld	bc, #0x001a
	add	hl, bc
	ld	bc, #0x0004
	ldir
	ld	a, -8 (ix)
	add	a, #0x16
	ld	-30 (ix), a
	ld	a, -7 (ix)
	adc	a, #0x00
	ld	-29 (ix), a
	ld	e, -30 (ix)
	ld	d, -29 (ix)
	ld	hl, #18
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	a, -20 (ix)
	sub	a, -16 (ix)
	ld	-12 (ix), a
	ld	a, -19 (ix)
	sbc	a, -15 (ix)
	ld	-11 (ix), a
	ld	a, -18 (ix)
	sbc	a, -14 (ix)
	ld	-10 (ix), a
	ld	a, -17 (ix)
	sbc	a, -13 (ix)
	ld	-9 (ix), a
;pff/pff.c:947: if (btr > remain) btr = (UINT)remain;			/* Truncate btr by remaining bytes */
	ld	a, -6 (ix)
	ld	-16 (ix), a
	ld	a, -5 (ix)
	ld	-15 (ix), a
	xor	a, a
	ld	-14 (ix), a
	ld	-13 (ix), a
	ld	a, -12 (ix)
	sub	a, -16 (ix)
	ld	a, -11 (ix)
	sbc	a, -15 (ix)
	ld	a, -10 (ix)
	sbc	a, -14 (ix)
	ld	a, -9 (ix)
	sbc	a, -13 (ix)
	jr	NC, 00140$
	ld	a, -12 (ix)
	ld	-6 (ix), a
	ld	a, -11 (ix)
	ld	-5 (ix), a
;pff/pff.c:949: while (btr)	{									/* Repeat until all data transferred */
00140$:
	ld	a, -8 (ix)
	add	a, #0x22
	ld	-28 (ix), a
	ld	a, -7 (ix)
	adc	a, #0x00
	ld	-27 (ix), a
	ld	a, -8 (ix)
	ld	-26 (ix), a
	ld	a, -7 (ix)
	ld	-25 (ix), a
	ld	a, -8 (ix)
	ld	-24 (ix), a
	ld	a, -7 (ix)
	ld	-23 (ix), a
	ld	a, -8 (ix)
	add	a, #0x26
	ld	-22 (ix), a
	ld	a, -7 (ix)
	adc	a, #0x00
	ld	-21 (ix), a
00124$:
	ld	a, -5 (ix)
	or	a, -6 (ix)
	jp	Z, 00126$
;pff/pff.c:950: if ((fs->fptr % 512) == 0) {				/* On the sector boundary? */
	ld	e, -30 (ix)
	ld	d, -29 (ix)
	ld	hl, #24
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	a, -10 (ix)
	or	a, a
	jp	NZ,00117$
	bit	0, -9 (ix)
	jp	NZ,00117$
;pff/pff.c:951: cs = (BYTE)(fs->fptr / 512 & (fs->csize - 1));	/* Sector offset in the cluster */
	ld	c, -9 (ix)
	ld	b, -8 (ix)
	ld	e, -7 (ix)
	srl	e
	rr	b
	rr	c
	ld	l, -24 (ix)
	ld	h, -23 (ix)
	inc	hl
	inc	hl
	ld	a, (hl)
	dec	a
	and	a, c
	ld	c, a
;pff/pff.c:952: if (!cs) {								/* On the cluster boundary? */
	or	a, a
	jr	NZ, 00113$
;pff/pff.c:953: if (fs->fptr == 0) {				/* On the top of the file? */
	ld	a, -7 (ix)
	or	a, -8 (ix)
	or	a, -9 (ix)
	or	a, -10 (ix)
	jr	NZ, 00108$
;pff/pff.c:954: clst = fs->org_clust;
	push	bc
	ld	e, -26 (ix)
	ld	d, -25 (ix)
	ld	hl, #26
	add	hl, sp
	ex	de, hl
	ld	bc, #0x001e
	add	hl, bc
	ld	bc, #0x0004
	ldir
	pop	bc
	jr	00109$
00108$:
;pff/pff.c:956: clst = get_fat(fs->curr_clust);
	ld	l, -28 (ix)
	ld	h, -27 (ix)
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	ld	h, (hl)
;	spillPairReg hl
	push	bc
	ld	l, b
;	spillPairReg hl
;	spillPairReg hl
	call	_get_fat
	ld	-10 (ix), e
	ld	-9 (ix), d
	ld	-8 (ix), l
	ld	-7 (ix), h
	pop	bc
00109$:
;pff/pff.c:958: if (clst <= 1) ABORT(FR_DISK_ERR);
	ld	a, #0x01
	cp	a, -10 (ix)
	ld	a, #0x00
	sbc	a, -9 (ix)
	ld	a, #0x00
	sbc	a, -8 (ix)
	ld	a, #0x00
	sbc	a, -7 (ix)
	jr	C, 00111$
	pop	bc
	pop	hl
	push	hl
	push	bc
	ld	(hl), #0x00
	ld	a, #0x01
	jp	00127$
00111$:
;pff/pff.c:959: fs->curr_clust = clst;				/* Update current cluster */
	push	bc
	ld	e, -28 (ix)
	ld	d, -27 (ix)
	ld	hl, #26
	add	hl, sp
	ld	bc, #0x0004
	ldir
	pop	bc
00113$:
;pff/pff.c:961: sect = clust2sect(fs->curr_clust);		/* Get current sector */
	ld	l, -28 (ix)
	ld	h, -27 (ix)
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	ld	h, (hl)
;	spillPairReg hl
	push	bc
	ld	l, b
;	spillPairReg hl
;	spillPairReg hl
	call	_clust2sect
	pop	bc
	ld	-10 (ix), e
	ld	-9 (ix), d
	ld	-8 (ix), l
	ld	-7 (ix), h
;pff/pff.c:962: if (!sect) ABORT(FR_DISK_ERR);
	ld	a, h
	or	a, l
	or	a, d
	or	a, e
	jr	NZ, 00115$
	pop	bc
	pop	hl
	push	hl
	push	bc
	ld	(hl), #0x00
	ld	a, #0x01
	jp	00127$
00115$:
;pff/pff.c:963: fs->dsect = sect + cs;
	ld	b, #0x00
	ld	de, #0x0000
	ld	a, c
	add	a, -10 (ix)
	ld	c, a
	ld	a, b
	adc	a, -9 (ix)
	ld	b, a
	ld	a, e
	adc	a, -8 (ix)
	ld	e, a
	ld	a, d
	adc	a, -7 (ix)
	ld	d, a
	ld	l, -22 (ix)
	ld	h, -21 (ix)
	ld	(hl), c
	inc	hl
	ld	(hl), b
	inc	hl
	ld	(hl), e
	inc	hl
	ld	(hl), d
00117$:
;pff/pff.c:946: remain = fs->fsize - fs->fptr;
	ld	l, -30 (ix)
	ld	h, -29 (ix)
	ld	c, (hl)
	inc	hl
	ld	a, (hl)
;pff/pff.c:965: rcnt = 512 - (UINT)fs->fptr % 512;			/* Get partial sector data from sector buffer */
	ld	-12 (ix), c
	and	a, #0x01
	ld	-11 (ix), a
	xor	a, a
	sub	a, -12 (ix)
	ld	-20 (ix), a
	ld	a, #0x02
	sbc	a, -11 (ix)
	ld	-19 (ix), a
;pff/pff.c:966: if (rcnt > btr) rcnt = btr;
	ld	a, -6 (ix)
	sub	a, -20 (ix)
	ld	a, -5 (ix)
	sbc	a, -19 (ix)
	jr	NC, 00119$
	ld	a, -6 (ix)
	ld	-20 (ix), a
	ld	a, -5 (ix)
	ld	-19 (ix), a
00119$:
;pff/pff.c:967: dr = disk_readp(rbuff, fs->dsect, (UINT)fs->fptr % 512, rcnt);
	ld	e, -22 (ix)
	ld	d, -21 (ix)
	ld	hl, #24
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	l, -20 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -19 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, -12 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -11 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, -8 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -7 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, -10 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -9 (ix)
;	spillPairReg hl
;	spillPairReg hl
	push	hl
	ld	l, -2 (ix)
;	spillPairReg hl
;	spillPairReg hl
	ld	h, -1 (ix)
;	spillPairReg hl
;	spillPairReg hl
	call	_disk_readp
;pff/pff.c:968: if (dr) ABORT(FR_DISK_ERR);
	or	a, a
	jr	Z, 00121$
	pop	bc
	pop	hl
	push	hl
	push	bc
	ld	(hl), #0x00
	ld	a, #0x01
	jp	00127$
00121$:
;pff/pff.c:969: fs->fptr += rcnt;							/* Advances file read pointer */
	ld	e, -30 (ix)
	ld	d, -29 (ix)
	ld	hl, #16
	add	hl, sp
	ex	de, hl
	ld	bc, #0x0004
	ldir
	ld	a, -20 (ix)
	ld	-14 (ix), a
	ld	a, -19 (ix)
	ld	-13 (ix), a
	xor	a, a
	ld	-12 (ix), a
	ld	-11 (ix), a
	ld	a, -14 (ix)
	add	a, -18 (ix)
	ld	-10 (ix), a
	ld	a, -13 (ix)
	adc	a, -17 (ix)
	ld	-9 (ix), a
	ld	a, -12 (ix)
	adc	a, -16 (ix)
	ld	-8 (ix), a
	ld	a, -11 (ix)
	adc	a, -15 (ix)
	ld	-7 (ix), a
	ld	e, -30 (ix)
	ld	d, -29 (ix)
	ld	hl, #24
	add	hl, sp
	ld	bc, #0x0004
	ldir
;pff/pff.c:970: btr -= rcnt; *br += rcnt;					/* Update read counter */
	ld	a, -6 (ix)
	sub	a, -20 (ix)
	ld	-6 (ix), a
	ld	a, -5 (ix)
	sbc	a, -19 (ix)
	ld	-5 (ix), a
	pop	hl
	push	hl
	ld	a, (hl)
	ld	-10 (ix), a
	inc	hl
	ld	a, (hl)
	ld	-9 (ix), a
	ld	a, -10 (ix)
	add	a, -20 (ix)
	ld	-8 (ix), a
	ld	a, -9 (ix)
	adc	a, -19 (ix)
	ld	-7 (ix), a
	pop	hl
	push	hl
	ld	a, -8 (ix)
	ld	(hl), a
	inc	hl
	ld	a, -7 (ix)
	ld	(hl), a
;pff/pff.c:971: if (rbuff) rbuff += rcnt;					/* Advances the data pointer if destination is memory */
	ld	a, -1 (ix)
	or	a, -2 (ix)
	jp	Z, 00124$
	ld	a, -20 (ix)
	add	a, -2 (ix)
	ld	-2 (ix), a
	ld	a, -19 (ix)
	adc	a, -1 (ix)
	ld	-1 (ix), a
	jp	00124$
00126$:
;pff/pff.c:974: return FR_OK;
	xor	a, a
00127$:
;pff/pff.c:975: }
	ld	sp, ix
	pop	ix
	pop	hl
	pop	bc
	jp	(hl)
	.area _CODE
	.area _INITIALIZER
	.area _CABS (ABS)
