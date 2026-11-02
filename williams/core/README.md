# Phoenix Williams cores: Robotron: 2084, Joust, Sinistar

Three Williams arcade games for the CollectorVision Phoenix. All three are
built from one RTL, and each has its own core slot:

| Game | Core file | Slot | Issue |
|---|---|---|---|
| Robotron: 2084 | `build/CORE14.PHX` | 14 | 0x0101 |
| Joust | `build/CORE15.PHX` | 15 | 0x0101 |
| Sinistar (with speech) | `build/CORE16.PHX` | 16 | 0x0101 |

The board is the MiSTer Robotron core (`rtl/mister`, GPL3; see
`rtl/mister/SOURCE.txt`), with its cycle-accurate mc6809is CPU. The ROMs
are loaded from the SD card at power-on by a loader that runs on the game's
own 6809.

Status:

- **Simulation:** see "Simulation" below for what has been run.
- **ISE:** timing met for all three.

  | | LUTs | RAMB16 | RAMB8 |
  |---|---|---|---|
  | Robotron | 75% | 12 | 4 |
  | Joust | 74% | 12 | 4 |
  | Sinistar | 77% | 20 | 5 |

  XST must keep the hierarchy (`-keep_hierarchy soft`, in
  `build/Makefile`). Its flattened netlist of this design is wrong: the
  board's SRAM writes go to scrambled addresses, so the loader never
  starts. On hardware that gave a blank screen. `sim/postsyn` shows it.

- **Hardware:** all three work on the Phoenix, including Sinistar's speech
  and rotation.

## Using it

1. Copy the MAME ROM files, unzipped, to a FAT16 or FAT32 SD card. Put them
   in a folder named after the game (`ROBOTRON`, `JOUST`, `SINISTAR`) or in
   the root folder.
   - The current MAME names work (long file names, such as
     `2084_rom_1b_3005-13.e4`).
   - So do the older 8.3 names (`robotron.sb1`, `3006-13.1b`,
     `sinistar.01`, `speech.ic7`).
   - The sets are `robotron`, `joust` and `sinistar`; each game needs
     `decoder_rom_4.3g` and `decoder_rom_6.3c` too.
2. Install the core files with the Phoenix boot loader.
3. Power up with the card inserted. The loader lists each file as it loads
   it, then starts the game. Loading takes about 5 seconds for Robotron and
   Joust and 7 for Sinistar.
   - A file that is missing, the wrong size or unreadable is marked `--`,
     `SZ` or `RD` in red, and the loader stops.
   - The whole screen turns red if there is no card, no FAT file system,
     or no decoder PROM files.
4. Like the arcade boards, each game first runs its own RAM and ROM test.
   The screen shows random colours for about ten seconds before the
   attract mode starts.

### Controls

| | ColecoVision | SNES pad | PS/2 keyboard |
|---|---|---|---|
| coin | keypad 5 | Select | |
| start 1 / 2 | keypad 1 / 2 | Start (1) | 1 / 2 |

- **Robotron:**
  - Move: port 1 stick, the D-pad, or the arrow keys.
  - Fire: port 2 stick, or the SNES buttons (X up, B down, Y left,
    A right).
- **Joust:**
  - Player 1: port 1 stick (left and right), the D-pad or the arrow keys.
    Flap with either fire button, A, B, X or Y, or Z or X on the keyboard.
  - Player 2: port 2 stick and fire buttons.
- **Sinistar:**
  - Fly: port 1 stick, the D-pad or the arrows. The 49-way stick is driven
    to its ends.
  - Fire: left fire button, B or Y, or Z on the keyboard.
  - Sinibomb: right fire button, A or X, or X on the keyboard.
  - Rotate the picture: keypad 0, L or R, or 0 on the keyboard. The
    picture starts in the game's native orientation, on its side. Rotated,
    it stands upright: 240 pixels wide, doubled, and 292 lines tall, spread
    over the 480 lines.

The reset button or ESC resets the game. Hold either for a second to load
it again.

The CMOS RAM (settings and high scores) starts from the MiSTer MRA's
defaults every time; it is not saved.

## How it works

- **Board** (`rtl/mister`): the MiSTer core's `williams_soc`, with its
  `williams_cpu` (video, blitter, PIAs, CMOS), the sound board (cpu68) and,
  for Sinistar, the HC55564 speech chip. Phoenix changes:
  - **CPU:** MiSTer's mc6809is (about 4400 LUTs).
    - cpu09 (from the Gyruss core) is half that size. With it, the loader
      and the attract modes ran, but Robotron's game corrupted its object
      list at the first wave, and a bad blit then wrote over its variables.
      The same game ran correctly with mc6809is, and mc6809is fits.
    - `williams_soc`'s `CPU09` generic still builds the cpu09 version, for
      comparisons. For that, cpu09 steps once per microsecond (`hold`) and
      has a `halted` output for the blitter's bus request.
  - **Ports:**
    - The phase and video counter go out to the frame lock and the line
      buffer.
    - Boot mode adds a loader I/O window at `$C400-$C7FF`, and maps the boot
      ROM at `$D000-$FFFF`.
  - **Decoder PROMs:** both are bypassed in boot mode, so the loader can
    use its RAM and draw text before they are loaded.
  - **Portability:**
    - `dpram` is a portable two-clock block RAM, instantiated as a
      component.
    - The speech ROM exists only in the Sinistar build (`SPEECH`).
    - The second sound board is removed.
    - The phase ring is a plain rotate, because XST dropped the initial
      value of the `rol` form and with it the whole board.
- **Clocks** (`rtl/williams_phoenix_top.vhd`): a DCM_CLKGEN makes 48 MHz
  (the SRAM controller, SD card and loader I/O) and 12 MHz from the 25 MHz
  pixel clock. The board runs on the 12 MHz clock through a BUFGCE.
- **Frame lock** (`rtl/williams_phoenix.v`):
  - The board's frame is 260 lines of 64 us, 16.64 ms. That is a little
    shorter than the HDMI frame.
  - At its end the BUFGCE stops the board until HDMI line 506. The game
    runs at 59.5 Hz instead of 60.1.
  - Each board line is two HDMI lines. An 8-line buffer holds them, and
    the 292 visible pixels are shown doubled, 584 wide and centred.
- **SRAM** (48 MHz controller):
  - Each board access (one per 12 MHz clock): the address goes out, the
    data is taken 41.7 ns later.
  - A board write writes the merged byte (nibble enables) at the same
    time.
  - The free slot in the same board clock takes a loader write or a
    rotation read.
  - Map:
    - `00000-0FFFF`: the board's RAM (screen, work RAM, CMOS at `CC00`).
    - `10000-1BFFF`: the program ROM.
  - The sound ROM, speech ROMs and decoder PROMs are block RAM.
- **Audio:** the sound board's 8-bit DAC, plus the speech for Sinistar.
  - It is averaged over each 2 us and low-pass filtered (two IIR stages).
  - A DC blocker (5 Hz) follows, as the arcade's output is AC coupled. The
    DAC rests at 00 or FF for seconds between sounds.
- **Sinistar rotation:**
  - Each HDMI line shows one screen column. It is read straight from the
    screen RAM in the SRAM, in the free slots, into one half of a column
    buffer while the other half is shown.
  - The palette is a copy that follows the CPU's palette writes.
  - There is no frame buffer, so like the arcade monitor the picture is
    drawn as the game draws it.
- **Loader** (`loader/`, C with gcc6809 and Petit FatFs):
  - It runs on the game's 6809 from a block RAM at `$D000`, with its
    variables at `$B400`. That area is screen RAM that isn't shown in boot
    mode.
  - Directory scans match the long file names, from a small patch to
    Petit FatFs that keeps them.
  - Whole sectors go through the core's forward engine. The 1 MHz CPU
    only sends the read command.
  - It writes the CMOS defaults (`cmos_*.h`, made by `gen_cmos.py` from the
    MRAs), then starts the game.
  - Vide's libgcc is built for another ABI, and its 16-bit helpers crash
    here. The loader links without it: `libsi.s` has the 32-bit multiply
    and divide, and the C avoids the others.

## Layout

- `rtl/williams_phoenix_top.vhd`: clocks, resets, controllers and HDMI.
  It uses the shared `rtl/phoenix.ucf`.
- `rtl/williams_phoenix.v`: the glue: resets, inputs, loader I/O and SPI,
  SRAM controller, frame lock, line buffer, rotation and audio.
- `rtl/mister/`: the MiSTer board (GPL3), with the changes above.
- `rtl/cpu09/`: cpu09, with a `halted` output.
- `loader/`: the boot loader (one build per game: `make GAME=0|1|6`).
- `build/`: the ISE build. `make` builds all three games in
  `robotron/`, `joust/` and `sinistar/`, and copies the `.PHX` files
  here. `make robotron` builds just one.
- `sim/`: the Verilator testbench, with SRAM and SD card models.

## Building

- **Core:** ISE 14.7 in the docked-ise-147 image, as for the other cores:
  `make -C build` (or `make -C build sinistar`). `CORE_ISSUE` sets the
  issue (default 257 = 0x0101).
- **Loader:** gcc6809 from Vide
  (`GCC09=/mnt/d/work/vectrex/Vide.w64/C/Linux64/bin`), `make -C loader
  GAME=6`. The core build runs it.

## Simulation

`sim/`, per game (`GAME=0`, `1` or `6`):

    make GAME=6 all sd6.img     # sd6.img holds the ROM files: keep it out of git
    obj_dir6/Vwilliams_phoenix --sd sd6.img --frames 1500 --ppm out/f --ppm-every 100 \
      --pad 1000:100,1003:0 --wav out/sinistar.wav

- `--pad frame:bits` holds pad bits from that frame on: 1 up, 2 down, 4 left,
  8 right, 10 and 20 fire, 40 start, 80 coin, 100 L (rotate).
- `--trace n` prints the loader's I/O accesses, and with `--trace-all` all
  the CPU's accesses from `$C000` up. `--trace-from clock` prints every
  board access from that board clock on.
- `--dump-sram file` writes the SRAM at the end.
- `--watch addr` prints each write to that SRAM address (hex), with the
  blitter's registers when the blitter wrote it. The control register's
  flip and window bits are printed when they change.
- `CPU09=1 OBJ=obj_dir0c` builds the cpu09 board instead (its PC, opcode
  and state are then traced too).
- `sim/postsyn`: simulates XST's netlist (netgen, Icarus) and prints the
  first SRAM writes and the SD card selects, to compare with
  `--cd-only --log-writes n` here. With `-DPROBE` it also prints the 6809's
  bus cycles; the same testbench runs on the RTL netlist
  (`-DSIM_NETLIST` with `gen/williams_soc_mc.v`). The netgen command and
  the XST options are in `ps.xst`.
- The board netlist comes from GHDL + Yosys (`gen/`). The two-clock
  `dpram` stays a black box, and `dpram.v` models it, since Yosys can't
  map it.

Results (with mc6809is):

- The loader screen and the loading are right, for long and 8.3 names.
- Robotron: the power-on test, the attract mode, and a game. A coin and
  start give wave 1 with the player, the family and the robots.
- Joust: the attract mode (high scores), and a game. Wave 1 has "PREPARE
  TO JOUST" and the player's ostrich; the sound plays.
- Sinistar: the power-on test ("ALL SYSTEMS GO"), the attract mode,
  native and rotated (upright), and a game: the ship flies and fires,
  workers come, the score and the scanner work, and the sound plays. No
  speech came in the simulated time (it works on hardware).
- The rotation was also checked on the loader screen with
  `VFLAGS=-DSIM_ROT_BOOT`.
- The picture's position was measured against the screen RAM: the 292
  visible pixels and 240 lines are shown, centred.
- Each game's power-on test takes about 15 seconds of simulated time
  (about 1000 frames).
