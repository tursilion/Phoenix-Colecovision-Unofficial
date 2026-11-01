/* Phoenix Master System core boot I/O window, ports $F8-$FF, present only
 * in boot mode.  See rtl/sms_phoenix.v. */

#ifndef PHOENIX_H
#define PHOENIX_H

__sfr __at 0xF8 PH_SPI_DATA;    /* R: received byte, W: transfer byte */
__sfr __at 0xF9 PH_CTRL;        /* W: control, R: status */
__sfr __at 0xFA PH_LOAD_DATA;   /* W: byte to the SRAM at the load address */
__sfr __at 0xFB PH_START;       /* W: start the game, bit 0 = Game Gear */
__sfr __at 0xFC PH_FWD_LO;      /* W: forward count, low byte */
__sfr __at 0xFD PH_FWD_HI;      /* W: forward count, high byte, starts */
__sfr __at 0xFE PH_ADDR0;       /* W: the load address goes to 0 */
__sfr __at 0xFF PH_ROM_MASK;    /* W: ROM size in 16K banks - 1; R: SPI byte, next starts */
__sfr __at 0xE8 PH_PAGE_LO;     /* W: ROM cache: page (8K) for PH_ARG0-3, bits 7:0 */
__sfr __at 0xE9 PH_PAGE_HI;     /* W: bit 0: its bit 8 */
__sfr __at 0xEA PH_ARG0;        /* W: its SD argument, bits 7:0 */
__sfr __at 0xEB PH_ARG1;
__sfr __at 0xEC PH_ARG2;
__sfr __at 0xED PH_ARG3;        /* W: bits 31:24; stores it */

/* PH_CTRL write bits */
#define PH_CTRL_SELECT   0x01  /* SD card selected */
#define PH_CTRL_SLOW     0x02  /* slow SPI clock, for card init */
#define PH_CTRL_DISCARD  0x04  /* forward engine skips bytes instead */

/* PH_CTRL read bits */
#define PH_STAT_BUSY     0x80  /* SPI or forward transfer in progress */
#define PH_STAT_CARD     0x40  /* card present */

#endif
