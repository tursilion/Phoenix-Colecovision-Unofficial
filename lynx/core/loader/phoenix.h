/* Phoenix Lynx core boot I/O window ($FE00), present only in boot mode.
 * See rtl/lynx_phoenix.v. */

#ifndef PHOENIX_H
#define PHOENIX_H

#define PH_SPI_DATA   (*(volatile unsigned char *)0xFE00) /* R: received byte, W: transfer byte */
#define PH_CTRL       (*(volatile unsigned char *)0xFE01) /* W: control, R: status */
#define PH_LOAD_DATA  (*(volatile unsigned char *)0xFE02) /* W: byte to the SRAM at the load address */
#define PH_START      (*(volatile unsigned char *)0xFE04) /* W: start the game */
#define PH_FWD_LO     (*(volatile unsigned char *)0xFE06) /* W: forward count, low byte */
#define PH_FWD_HI     (*(volatile unsigned char *)0xFE07) /* W: forward count, high byte, starts */
#define PH_ADDR       ((volatile unsigned char *)0xFE08)  /* W: load address, 3 bytes, low first */
#define PH_BANK0_LO   (*(volatile unsigned char *)0xFE0B) /* W: cartridge page size, low byte */
#define PH_BANK0_HI   (*(volatile unsigned char *)0xFE0C) /* W: its high byte */
#define PH_PAGE       (*(volatile unsigned char *)0xFE10) /* W: ROM cache: cartridge page (8K) for PH_ARG */
#define PH_ARG        ((volatile unsigned char *)0xFE11)  /* W: its SD argument, low first; the 4th byte stores it */
#define PH_SKIP_LO    (*(volatile unsigned char *)0xFE16) /* W: bytes of a page's first sector before it, 7:0 */
#define PH_SKIP_HI    (*(volatile unsigned char *)0xFE17) /* W: bit 0: bit 8 */

/* PH_CTRL write bits */
#define PH_CTRL_SELECT   0x01  /* SD card selected */
#define PH_CTRL_SLOW     0x02  /* slow SPI clock, for card init */
#define PH_CTRL_DISCARD  0x04  /* forward engine skips bytes instead */

/* PH_CTRL read bits */
#define PH_STAT_BUSY     0x80  /* SPI or forward transfer in progress */
#define PH_STAT_CARD     0x40  /* card present */

#endif
