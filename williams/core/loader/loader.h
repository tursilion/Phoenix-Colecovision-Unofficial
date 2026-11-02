/* Shared definitions of the boot loader. */

#ifndef LOADER_H
#define LOADER_H

#include "pff/pff.h"

#define SECTOR_CACHE  ((BYTE *)0xB600)      /* 512 bytes, in screen columns not shown */

extern BYTE sd_block_addr;
void load_write(const BYTE *src, UINT count);
void mem_copy(BYTE *dst, const BYTE *src, UINT count);

#endif
