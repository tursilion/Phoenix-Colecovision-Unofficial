/* Phoenix Williams cores: boot loader.
 *
 * Loads the MAME ROM files of Robotron: 2084, Joust or Sinistar (one game
 * per build, GAME as in rtl/williams_phoenix.v) from the SD card into the
 * core, in the MiSTer MRA's layout, then starts the game.  Runs on the
 * game's own 6809 in boot mode (1MHz), from the boot ROM at $D000.
 *
 * The files may be in a folder named after the game or in the root folder,
 * under MAME's current names (long file names) or its older 8.3 names.
 * In boot mode the core bypasses the decoder PROMs (see put_char).  An
 * error before the screen is cleared (no card, no file system, no decoder
 * PROMs) turns the whole screen red.
 */

#include "pff/pff.h"
#include "pff/diskio.h"
#include "phoenix.h"
#include "loader.h"

#define G_ROBOTRON  0
#define G_JOUST     1
#define G_SINISTAR  6

#ifndef GAME
#define GAME G_ROBOTRON
#endif

/* One ROM: its load address (MRA layout), size, current and old MAME name */
struct rom {
    DWORD addr;
    UINT size;
    const char *name;
    const char *old;
};

#define DEC4 { 0xD400UL, 512, "decoder_rom_4.3g", "decoder.4" }
#define DEC6 { 0xD600UL, 512, "decoder_rom_6.3c", "decoder.6" }

#if GAME == G_ROBOTRON
#include "cmos_robotron.h"
static const char title[] = "ROBOTRON: 2084";
static const char folder[] = "ROBOTRON";
static const struct rom roms[] = {
    DEC4, DEC6,
    { 0x0000UL, 4096, "2084_rom_1b_3005-13.e4",       "robotron.sb1" },
    { 0x1000UL, 4096, "2084_rom_2b_3005-14.c4",       "robotron.sb2" },
    { 0x2000UL, 4096, "2084_rom_3b_3005-15.a4",       "robotron.sb3" },
    { 0x3000UL, 4096, "2084_rom_4b_3005-16.e5",       "robotron.sb4" },
    { 0x4000UL, 4096, "2084_rom_5b_3005-17.c5",       "robotron.sb5" },
    { 0x5000UL, 4096, "2084_rom_6b_3005-18.a5",       "robotron.sb6" },
    { 0x6000UL, 4096, "2084_rom_7b_3005-19.e6",       "robotron.sb7" },
    { 0x7000UL, 4096, "2084_rom_8b_3005-20.c6",       "robotron.sb8" },
    { 0x8000UL, 4096, "2084_rom_9b_3005-21.a6",       "robotron.sb9" },
    { 0x9000UL, 4096, "2084_rom_10b_3005-22.a7",      "robotron.sba" },
    { 0xA000UL, 4096, "2084_rom_11b_3005-23.c7",      "robotron.sbb" },
    { 0xB000UL, 4096, "2084_rom_12b_3005-24.e7",      "robotron.sbc" },
    { 0xC000UL, 4096, "video_sound_rom_3_std_767.ic12", "robotron.snd" },
};
#elif GAME == G_JOUST
#include "cmos_joust.h"
static const char title[] = "JOUST";
static const char folder[] = "JOUST";
static const struct rom roms[] = {
    DEC4, DEC6,
    { 0x0000UL, 4096, "joust_rom_1b_3006-13.e4",      "3006-13.1b" },
    { 0x1000UL, 4096, "joust_rom_2b_3006-14.c4",      "3006-14.2b" },
    { 0x2000UL, 4096, "joust_rom_3b_3006-15.a4",      "3006-15.3b" },
    { 0x3000UL, 4096, "joust_rom_4b_3006-16.e5",      "3006-16.4b" },
    { 0x4000UL, 4096, "joust_rom_5b_3006-17.c5",      "3006-17.5b" },
    { 0x5000UL, 4096, "joust_rom_6b_3006-18.a5",      "3006-18.6b" },
    { 0x6000UL, 4096, "joust_rom_7b_3006-19.e6",      "3006-19.7b" },
    { 0x7000UL, 4096, "joust_rom_8b_3006-20.c6",      "3006-20.8b" },
    { 0x8000UL, 4096, "joust_rom_9b_3006-21.a6",      "3006-21.9b" },
    { 0x9000UL, 4096, "joust_rom_10b_3006-22.a7",     "3006-22.10b" },
    { 0xA000UL, 4096, "joust_rom_11b_3006-23.c7",     "3006-23.11b" },
    { 0xB000UL, 4096, "joust_rom_12b_3006-24.e7",     "3006-24.12b" },
    { 0xC000UL, 4096, "video_sound_rom_4_std_780.ic12", "joust.snd" },
};
#elif GAME == G_SINISTAR
#include "cmos_sinistar.h"
static const char title[] = "SINISTAR";
static const char folder[] = "SINISTAR";
static const struct rom roms[] = {
    DEC4, DEC6,
    { 0x0000UL, 4096, "sinistar_rom_1-b_16-3004-53.1d",  "sinistar.01" },
    { 0x1000UL, 4096, "sinistar_rom_2-b_16-3004-54.1c",  "sinistar.02" },
    { 0x2000UL, 4096, "sinistar_rom_3-b_16-3004-55.1a",  "sinistar.03" },
    { 0x3000UL, 4096, "sinistar_rom_4-b_16-3004-56.2d",  "sinistar.04" },
    { 0x4000UL, 4096, "sinistar_rom_5-b_16-3004-57.2c",  "sinistar.05" },
    { 0x5000UL, 4096, "sinistar_rom_6-b_16-3004-58.2a",  "sinistar.06" },
    { 0x6000UL, 4096, "sinistar_rom_7-b_16-3004-59.3d",  "sinistar.07" },
    { 0x7000UL, 4096, "sinistar_rom_8-b_16-3004-60.3c",  "sinistar.08" },
    { 0x8000UL, 4096, "sinistar_rom_9-b_16-3004-61.3a",  "sinistar.09" },
    { 0x9000UL, 4096, "sinistar_rom_10-b_16-3004-62.4c", "sinistar.10" },
    { 0xA000UL, 4096, "sinistar_rom_10-b_16-3004-62.4c", "sinistar.10" },  /* twice, as in the MRA */
    { 0xB000UL, 4096, "sinistar_rom_11-b_16-3004-63.4a", "sinistar.11" },
    { 0xC000UL, 4096, "video_sound_rom_9_std.808.ic12",  "sinistar.snd" },
    { 0xE000UL, 4096, "3004_speech_ic7_r1_16-3004-52.ic7", "speech.ic7" },
    { 0xF000UL, 4096, "3004_speech_ic5_r1_16-3004-50.ic5", "speech.ic5" },
    { 0x10000UL, 4096, "3004_speech_ic6_r1_16-3004-51.ic6", "speech.ic6" },
    { 0x11000UL, 4096, "3004_speech_ic4_r1_16-3004-49.ic4", "speech.ic4" },
};
#else
#error unknown GAME
#endif

#define NROMS (sizeof roms / sizeof roms[0])
#define CMOS_ADDR 0xD000UL

extern const unsigned char font[];

static FATFS fs;
static DIR dir;
static FILINFO fno;
static char found[NROMS][13];   /* 8.3 name of each file found, or "" */
static BYTE where[NROMS];       /* 0: in the folder, 1: in the root */
static char path[24];

/* ------------------------------------------------------------------------ */
/* Small helpers (no C library) */

void mem_copy(BYTE *dst, const BYTE *src, UINT count)
{
    while (count--)
        *dst++ = *src++;
}

static char lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;
}

static BYTE same_name(const char *a, const char *b)
{
    while (*a && lower(*a) == lower(*b)) {
        ++a;
        ++b;
    }
    return *a == 0 && *b == 0;
}

static void load_addr(DWORD a)
{
    while (PH_LOAD_BUSY & 1)
        ;
    PH_LOAD_A0 = (BYTE)a;
    PH_LOAD_A1 = (BYTE)(a >> 8);
    PH_LOAD_A2 = (BYTE)(a >> 16);
}

void load_write(const BYTE *src, UINT count)
{
    /* A load byte takes well under a microsecond; this loop is slower. */
    while (count--)
        PH_LOAD_DATA = *src++;
}

static void delay(UINT n)
{
    volatile UINT i;

    while (n--)
        for (i = 0; i < 100; ++i)
            ;
}

/* ------------------------------------------------------------------------ */
/* Text: 34 x 29 characters of 8x8 pixels */

#define C_BLACK  0
#define C_WHITE  1
#define C_RED    2
#define C_GREEN  3
#define C_YELLOW 4

static void palette(BYTE all)
{
    BYTE i;

    for (i = 0; i < 16; ++i)
        PALETTE[i] = all;
    if (all == 0) {
        PALETTE[C_WHITE]  = 0xFF;
        PALETTE[C_RED]    = 0x07;
        PALETTE[C_GREEN]  = 0x38;
        PALETTE[C_YELLOW] = 0x3F;
    }
}

/* In boot mode the core bypasses the decoder PROMs, so a byte of the screen
   (two pixels, the left one high) is at CPU address bank << 14 | col << 8 | y,
   with the byte x = col * 3 + bank (columns 3-50 are visible) on line y
   (7-246).  Columns 52-63 are invisible: the loader's RAM is at $B400-$BFFF
   (bank 2, columns 52-63). */


void clear_screen(void);       /* screen.s */

static void put_char(BYTE col, BYTE row, char ch, BYTE color)
{
    const unsigned char *f;
    volatile BYTE *v;
    BYTE i, k, x, bank, bits[8], pair[4];

    if (ch < 32 || ch > 122)
        ch = '?';
    f = font + (UINT)(ch - 32) * 8;
    for (i = 0; i < 8; ++i)
        bits[i] = f[i];
    pair[0] = 0;
    pair[1] = color;
    pair[2] = color << 4;
    pair[3] = color * 0x11;

    /* Screen byte 12 + col * 4: column x, bank (no divisions: libgcc's
       16-bit helpers don't match this compiler's ABI) */
    x = 4;
    bank = 0;
    for (i = 0; i < col; ++i) {         /* + 4 = + 1 column, + 1 bank */
        ++x;
        if (++bank == 3) {
            bank = 0;
            ++x;
        }
    }
    for (k = 0; k < 4; ++k) {
        v = VIDEO + ((UINT)bank << 14) + ((UINT)x << 8) + 8 + row * 8;
        for (i = 0; i < 8; ++i) {
            v[i] = pair[bits[i] >> 6];
            bits[i] <<= 2;
        }
        if (++bank == 3) {
            bank = 0;
            ++x;
        }
    }
}

static BYTE text(BYTE col, BYTE row, const char *s, BYTE color)
{
    while (*s && col < 34)
        put_char(col++, row, *s++, color);
    return col;
}

static void hex2(BYTE col, BYTE row, BYTE b, BYTE color)
{
    static const char digits[] = "0123456789ABCDEF";

    put_char(col, row, digits[b >> 4], color);
    put_char(col + 1, row, digits[b & 15], color);
}

/* ------------------------------------------------------------------------ */
/* Files */

/* Look through one folder for files not found yet. */
static void scan(const char *dirname, BYTE w)
{
    BYTE i;

    if (pf_opendir(&dir, dirname) != FR_OK)
        return;
    while (pf_readdir(&dir, &fno) == FR_OK && fno.fname[0]) {
        if (fno.fattrib & AM_DIR)
            continue;
        for (i = 0; i < NROMS; ++i)
            if (!found[i][0] &&
                (same_name(roms[i].old, fno.fname) ||
                 (pf_lfn[0] && same_name(roms[i].name, pf_lfn)))) {
                mem_copy((BYTE *)found[i], (const BYTE *)fno.fname, 13);
                where[i] = w;
            }
    }
}

/* Open file i: "/FOLDER/NAME.EXT" or "/NAME.EXT" */
static FRESULT open_rom(BYTE i)
{
    char *p = path;
    const char *s;

    *p++ = '/';
    if (where[i] == 0) {
        for (s = folder; *s; )
            *p++ = *s++;
        *p++ = '/';
    }
    for (s = found[i]; *s; )
        *p++ = *s++;
    *p = 0;
    return pf_open(path);
}

/* Load file i; 0 if it worked, else the reason. */
#define E_MISSING 1
#define E_SIZE    2
#define E_READ    3

static BYTE load_rom(BYTE i)
{
    UINT n;

    if (!found[i][0])
        return E_MISSING;
    if (open_rom(i) != FR_OK)
        return E_READ;
    if (fs.fsize != roms[i].size)
        return E_SIZE;
    load_addr(roms[i].addr);
    if (pf_read(0, roms[i].size, &n) != FR_OK || n != roms[i].size)
        return E_READ;
    return 0;
}

static void load_cmos(void)
{
    BYTE i = 0, b;

    load_addr(CMOS_ADDR);
    do {
        b = cmos_default[i];
        PH_LOAD_DATA = b >> 4;
        PH_LOAD_DATA = b;
    } while (++i);
    do {
        b = cmos_default[256 + i];
        PH_LOAD_DATA = b >> 4;
        PH_LOAD_DATA = b;
    } while (++i);
}

/* ------------------------------------------------------------------------ */

static void halt(void)
{
    for (;;)
        ;
}

int main(void)
{
    BYTE i, e, row, bad = 0;

    palette(0);
    if (disk_initialize() || pf_mount(&fs) != FR_OK) {
        palette(0x07);          /* no card or no FAT file system: red */
        halt();
    }

    for (i = 0; i < NROMS; ++i)
        found[i][0] = 0;
    path[0] = '/';
    mem_copy((BYTE *)path + 1, (const BYTE *)folder, sizeof folder);
    scan(path, 0);
    scan("/", 1);

    /* The decoder PROMs first, then the screen works */
    if (load_rom(0) || load_rom(1)) {
        palette(0x07);
        halt();
    }
    clear_screen();
    text(2, 1, "PHOENIX WILLIAMS LOADER", C_YELLOW);
    text(2, 2, title, C_WHITE);

    row = 4;
    for (i = 0; i < NROMS; ++i, ++row) {
        e = (i < 2) ? 0 : load_rom(i);
        text(0, row, e == 0 ? "OK" : e == E_MISSING ? "--" : e == E_SIZE ? "SZ" : "RD",
             e ? C_RED : C_GREEN);
        text(3, row, roms[i].name, e ? C_RED : C_WHITE);
        if (e)
            bad = 1;
    }

    if (bad) {
        ++row;
        text(0, row++, "MISSING (--), WRONG SIZE (SZ) OR", C_RED);
        text(0, row++, "UNREADABLE (RD) FILES.  PUT THE", C_RED);
        text(0, row++, "MAME ROM FILES IN THE FOLDER", C_RED);
        e = text(0, row, "/", C_YELLOW);
        e = text(e, row, folder, C_YELLOW);
        text(e + 1, row, "OR THE ROOT.", C_RED);
        halt();
    }

    load_cmos();
    text(0, row + 1, "STARTING", C_GREEN);
    hex2(9, row + 1, PH_GAME, C_GREEN);
    delay(300);
    while (PH_LOAD_BUSY & 1)
        ;
    PH_START = 1;
    halt();
    return 0;
}
