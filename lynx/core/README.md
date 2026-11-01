# Atari Lynx core for the CollectorVision Phoenix

Slot 12 (`CORE12.PHX`, "ATARI LYNX", issue 0x0101).  The Lynx itself is
the MiSTer core by Robert Peip (https://github.com/MiSTer-devel/AtariLynx_MiSTer,
GPL-2.0), trimmed to fit the LX16: see `rtl/mister/SOURCE.txt`.

## Using it

Put `.LNX` cartridge images (or headerless `.LYX`) on a FAT16/FAT32 SD
card.  At power-on the menu lists the folders and cartridges.

| | Menu | Game |
|---|---|---|
| ColecoVision pad | stick, left fire = A (open), right fire = B (back), # = open | stick, left fire A, right fire B, 1 Option 1, 2 Option 2, # Pause |
| SNES pad | d-pad, A/X open, B/Y back, Start open | d-pad, A/X A, B/Y B, L Option 1, R Option 2, Start Pause |
| PS/2 keyboard | arrows, X open, Z back, Q open | arrows, X A, Z B, 1 Option 1, 2 Option 2, Q Pause |

Left/right in the menu turn pages.  The reset button (or ESC) restarts
the game; hold it for a second to go back to the menu.  Changing cores is
a power cycle.

Many games rotate the picture with Option 2 + Pause (the game does it).

## Limits

- Cartridges up to 512K, the Lynx's bank 0 limit (256 pages of 2K) and
  the largest commercial size.  The core (like the MiSTer one) has no
  bank 1 and no AUDIN banking, so bigger homebrew carts don't work.
- Above 448K the cartridge plays from an SD page cache (see below); the
  card must stay in, and the file must not be fragmented ("FRAGMENTED:
  COPY IT AGAIN").  A page read takes about 6ms; the Lynx keeps running
  meanwhile and only waits if it needs that page's byte.
- The Lynx's frame rate (50-79Hz, often 75Hz) is not the HDMI's 60Hz:
  the picture can tear.
- Cartridges with a save EEPROM don't save; no ComLynx.
- Games meant to be held sideways show sideways (no screen rotation).

## How it works

- Clocks: 25MHz for HDMI, 32MHz (DCM, 25 x 32/25) for the Lynx with its
  16MHz tick on every second clock.
- SRAM: Lynx RAM at 00000-0FFFF, the cartridge at 10000 (448K).
- ROM cache: 64 cartridge pages of 8K in 56 SRAM pages; a miss reads the
  page from the SD card (CMD18, CRC-checked) into the page not used
  lately.  The menu gives the SD sector of every page (`pf_pages`) and
  the 64-byte LNX header offset.  Test: `sim/tests/cachetest`
  (`CACHE512.LNX`).
- Audio: the average of each 2us (64 clocks, which cancels tones at
  multiples of 500kHz that games park channels at), then three one-pole
  low-pass stages (about 5kHz together), so high tones don't fold into
  whistles or rumble at HDMI's 48kHz.  Test: `sim/lptest`.
- The MiSTer CPU starts at $FF80 after a reset (where the Lynx boot ROM's
  code is), not at the reset vector: the menu ROM has a JMP there.
- Bring-up tools: `sim/postsyn` simulates the XST netlist (netgen, Icarus)
  and prints the CPU's bus requests to compare with the Verilator run
  (`TB_TRACE=n`); the testbench fills the SRAM with random bytes.  In each tick
  the Lynx's RAM port (a block-RAM-like port in the MiSTer core) gets the
  first 31ns clock, and a cartridge byte read can take the second unless
  the first was a write.  See `rtl/lynx_phoenix.v`.
- Video: the Lynx writes its 160x102 pixels (12-bit colour) into a block
  RAM frame buffer; HDMI shows it 4x (640x408, centred).
- Menu: in boot mode the Lynx's own CPU runs `loader/` (cc65, Petit
  FatFs) from a 16K block RAM at $C000, with an I/O window at $FE00 for
  the SD card and a forward engine that streams file data into the SRAM.
  It draws on the Lynx's own screen.  Starting a game resets the Lynx
  into game mode; the real boot ROM then starts the cartridge.

## Building

- `loader/`: `make` (cc65) writes `rtl/lynx_loader.hex`.
- `build/`: `make` (ISE 14.7, in Docker if not installed).  Needs the
  Lynx boot ROM at `lynx/lynxboot.img` (512 bytes, MD5
  fcd403db69f54290b51035d82f835e7b); it is not part of the sources.
- `sim/`: Verilator simulation, see its Makefile.  `sim/hello` is a cc65
  test cartridge (`cl65 -t lynx -O -o hello.lnx hello.c`).

Hardware-verified 2026-10-31, including 512K carts through the cache.
ISE: 93% of the LUTs, 20 block RAMs, timing met at 32MHz.
