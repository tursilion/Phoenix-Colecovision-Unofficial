# Sega Master System / Game Gear core for the CollectorVision Phoenix

Slot 13 (`CORE13.PHX`, "MASTER SYSTEM", issue 0x0101).  The system is the
MiSTer SMS core (release 20210210, from Ben's Papilio core; see
`rtl/mister/SOURCE.txt`) with the FM sound chip replaced by Jotego's
jt2413 (`rtl/jtopl`, GPL-3.0). 

## Using it

Put `.SMS` and `.GG` files on a FAT16/FAT32 SD card.  At power-on the menu
lists the folders and cartridges; a `.GG` file runs as a Game Gear.

| | Menu | Game |
|---|---|---|
| ColecoVision pads | stick, left fire = open, right fire = back, # = open | port 1 player 1, port 2 player 2: stick, left fire button 1, right fire button 2, # Pause (Game Gear: Start) |
| SNES pad | d-pad, B/Y open, A/X back, Start open | player 1: d-pad, B/Y button 1, A/X button 2, Start Pause / Start |
| PS/2 keyboard | arrows, Z open, X back, Q open | player 1: arrows, Z button 1, X button 2, Q Pause / Start |

Left/right in the menu turn pages.  The reset button (or ESC) restarts the
game; hold it for a second to go back to the menu.  Changing cores is a
power cycle.

## Limits

- Cartridges up to 4M.  480K stays in the SRAM (the top 32K holds the
  cartridge RAM); a bigger cartridge plays from an SD page cache, so the
  card must stay in and the file must not be fragmented ("FRAGMENTED:
  COPY IT AGAIN").  A page read takes about 6ms, during which the Z80
  waits (the picture and sound go on).
- Cartridge RAM (battery saves) is not written back to the card.
- NTSC timing only; no SG-1000 / SC-3000, light gun, paddle or 3D glasses.
- The FM chip is on for Master System games (games detect it at port
  $F2, as with the Japanese FM unit), off for Game Gear ones.

## How it works

- Clocks: 25MHz for HDMI; 32.22MHz (DCM, 25 x 58/45) = 9 x the Z80's
  3.58MHz for the system: VDP every 3 clocks, pixels every 6, the CPU
  every 9 (`rtl/sms_phoenix.v`).
- Video: the system stops at the top of each frame until the HDMI frame
  reaches the release line (frame lock: no tearing, 59.52 frames a
  second), and each line goes through an 8-line buffer, shown 2x:
  512 x 384 (or x 448 in 224-line mode), centred; Game Gear 320 x 288.
- SRAM: read every clock, alternately at the ROM address and the
  cartridge RAM address; a cartridge RAM write takes three clocks.
- ROM cache: 512 pages of 8K in 60 SRAM pages, a page table between the
  mapper's ROM address and the SRAM.  A read of a page that is not there
  stops the Z80's clock enable while the page is read from the SD card
  (CMD18, CRC-checked) into the page not used lately; hits never stop it.
  The menu gives every page's SD sector (`pf_pages`) through write-only
  ports $E8-$ED.  Test: `sim/tests/cachetest` (`CACHE1M.SMS`).
- Menu: the Z80 runs `loader/` (SDCC, Petit FatFs) from the system's
  boot ROM at $0000 (16K block RAM), with an I/O window at ports
  $F8-$FF (boot mode only) and a forward engine that streams file data
  into the SRAM.  Starting a game resets the system into game mode
  without a BIOS.
- Audio: each 2us averaged, then a two-stage low-pass (about 13kHz).

## Building

- `loader/`: `make` (SDCC 4.2) writes `rtl/sms_loader.hex`.
- `build/`: `make` (ISE 14.7, in Docker if not installed).
- `sim/`: Verilator simulation of the whole core (HDMI output to PPM),
  see its Makefile; `sim/tests/hello` is a small test cartridge.

Hardware-verified 2026-11-01, including the cache (test cart, 512K, 800K and 1M ROMs).
ISE: 65% of the LUTs, 22 block RAMs, timing met.
