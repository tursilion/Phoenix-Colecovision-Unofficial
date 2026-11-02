/* Phoenix Williams cores: boot mode registers (see rtl/williams_phoenix.v). */

#ifndef PHOENIX_H
#define PHOENIX_H

#define REG(a) (*(volatile unsigned char *)(a))

#define PH_SPI_DATA   REG(0xC400)  /* W: transfer a byte; R: the last byte received */
#define PH_CTRL       REG(0xC401)  /* W: b0 select, b1 slow, b2 discard; R: status */
#define PH_LOAD_DATA  REG(0xC402)  /* W: load a byte, then the address + 1 */
#define PH_START      REG(0xC403)  /* W: start the game */
#define PH_FWD_LO     REG(0xC404)  /* W: forward count 7:0 */
#define PH_FWD_HI     REG(0xC405)  /* W: forward count 15:8, starts */
#define PH_LOAD_A0    REG(0xC406)  /* W: load address 7:0 */
#define PH_LOAD_A1    REG(0xC407)  /* W: load address 15:8 */
#define PH_LOAD_A2    REG(0xC408)  /* W: load address 19:16 */
#define PH_LOAD_BUSY  REG(0xC409)  /* R: b0 a load byte is pending */
#define PH_GAME       REG(0xC40A)  /* R: the build's GAME */
#define PH_SPI_NEXT   REG(0xC40F)  /* R: the last byte received, and the next transfer starts */

#define PH_CTRL_SELECT   0x01
#define PH_CTRL_SLOW     0x02
#define PH_CTRL_FAST     0x00

#define PH_STAT_BUSY     0x80
#define PH_STAT_CARD     0x40

/* The board */
#define PALETTE       ((volatile unsigned char *)0xC000)  /* 16 x BBGGGRRR */
#define VIDEO         ((volatile unsigned char *)0x0000)  /* (x / 2) * 256 + y, even x high */

#endif
