# Phoenix Mr. Do! core

Universal's Mr. Do! (1982) for the CollectorVision Phoenix. The ROMs are
loaded from the SD card at power-on. The core shell (SRAM, loader, frame
lock, rotation, top level) is the Galaga core's (`../../galaga/core`); the
board is new.

Status:

- **Simulation:** it loads the ROMs, runs the attract mode with sound, takes
  a coin and starts a game; Mr. Do digs, scores, and the monsters come out.
  The rotated picture works.
- **ISE:** 37% of the LUTs, 15 of 32 block RAMs and 5 RAMB8s, with timing
  met.

## Using it

1. Copy the MAME ROM files, unzipped, to a folder on a FAT16 or FAT32 SD
   card:
   - `MRDOFIX` for the `mrdofix` set (bugfixed, Taito licence),
   - `MRDOT` for `mrdot` (Taito licence).

   Files in the root folder also work. Both sets use the Taito version of
   the protection PAL, which the core has. The original Universal set
   (`mrdo`) uses a different protection that MAME only fakes, so it is not
   supported.
2. Install `build/CORE17.PHX` with the Phoenix boot loader.
3. Power up with the card inserted. The loader lists each file as it loads
   it, then the game starts.

| | ColecoVision | SNES pad | PS/2 keyboard |
|---|---|---|---|
| player 1 | port 1 stick | D-pad | arrows |
| fire | either fire button | A, B, X or Y | Z or X |
| player 2 (cocktail only) | port 2 stick and fires | | |
| coin | keypad 5 | Select | 5 |
| start 1 / 2 | keypad 1 / 2 | Start | 1 / 2 |
| rotate picture | keypad 0 | L or R | 0 |

The reset button or ESC restarts the game. Hold either for a second to load
it again. The picture starts in the game's native sideways orientation; the
rotate key switches to an upright picture and back.

The DIP switches are MAME's defaults, set in `loader/main.c`:

- Easy difficulty, rack test off, special and extra easy, 3 lives,
  upright cabinet.
- 1 coin 1 credit on both coin slots.

## How it works

The design follows MAME's `mrdo.cpp` / `mrdo_v.cpp` (the `mrdot_state`
protection) and `sn76496.cpp`.

- **CPU board** (`rtl/mrdo_main.v`):
  - Z80 (tv80) at 4.1MHz, work RAM, inputs and DIP switches.
  - Vertical blank interrupt (RST 38) at line 224, held until acknowledged.
  - The protection PAL U001: every foreground RAM write latches a value
    (MAME's equations), read at 9803.
  - Two SN76489 (`rtl/sn76489.v`, 15-bit noise LFSR) at 4.1MHz, mixed,
    box-filtered over 512 clocks, two low-pass stages and a DC blocker.
- **Video board** (`rtl/mrdo_video.v`):
  - 312 x 262 at 4.9MHz, visible 240 x 192 (MAME's coordinates x 8-247,
    y 32-223).
  - The picture is made a line ahead at 25MHz: a sprite engine draws the
    64 sprites into a line buffer (clear, then sprites 63 to 0), and a
    composer makes one pixel every 5 clocks from the background (scrolled),
    the foreground and the sprite line.
  - Tile attribute bit 6 makes pen 0 opaque (MAME's `TILE_FORCE_LAYER0`).
- **Clocks, frame lock, SRAM, rotation and video output**
  (`rtl/mrdo_phoenix.v`):
  - The game runs at 59.52Hz, locked to the HDMI output: it waits at the
    end of each frame for HDMI line 504.
  - An 8-line buffer doubles the native picture to 480 x 384.
  - Rotated, frames are double-buffered in the SRAM and shown 384 x 480,
    turned 90 degrees counter-clockwise (MAME's ROT270): an exact 2x.
  - The palette is the two palette PROMs through MAME's resistor weights.
- **Memory:**
  - The CPU ROM is in the external SRAM at 00000.
  - The graphics ROMs are block RAM; the PROMs are LUT RAM.
- **Boot loader** (`loader/`, Z80 C with sdcc and Petit FatFs):
  - It starts in the sprite ROM's block RAMs (the four RAMs hold bytes
    0-3 mod 4, so `mrdo_boot0-3.hex`), copies itself to the SRAM at 20000
    and continues from there.
  - Variables and stack in the work RAM (E000), sector buffer at E800.
    Its text goes to the background attribute RAM (8000).

## Layout

- `rtl/mrdo_phoenix_top.vhd`: the top level, with clocks, resets,
  controllers and HDMI. It uses the shared `rtl/phoenix.ucf`.
- `rtl/mrdo_phoenix.v`: clocks, frame lock, SRAM, loader registers, SPI
  and video output.
- `rtl/mrdo_main.v`, `rtl/mrdo_video.v`: the boards.
- `rtl/sn76489.v`: the PSG (from the Time Pilot '84 core, with a 15-bit
  noise option).
- `rtl/cv_pads.vhd`: the ColecoVision controllers.
- `rtl/tv80/`: tv80, MIT license.
- `rtl/mrdo_boot0-3.hex`: the loader, built from `loader/`.
- `sim/`: the Verilator testbench, with SRAM and SD card models.
- `build/`: the ISE command-line build. The output is `CORE17.PHX`, issue
  0x0101.

## Building

- **Core**: use ISE 14.7, the same way as the other cores:

      docker run --rm -v "$REPO":/workspace -v /path/to/Xilinx.lic:/root/.Xilinx/Xilinx.lic \
        -w /workspace/MrDo/core/build docked-ise-147 make SHELL=/bin/bash

- **Loader**: needs sdcc 4.x. Run `make -C loader`.
- **Simulation**:
  1. Run `make gen` where Verilator is installed.
  2. Run `make VERILATOR_ROOT=...` with a recent g++ (or plain `make` with
     the OSS CAD Suite on the path).
  3. Run `make run`.

  The ROM set is read from `../..` (the `MrDo` folder).
  - `-DMD_SIM_PC` prints every instruction fetch and write.
  - `-DMD_SIM_FB` reports frame-buffer overruns in the rotated mode.
