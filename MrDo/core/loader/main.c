/* Phoenix Mr. Do! core: boot loader.
 *
 * Loads the MAME ROM files of Mr. Do! from the SD card into the core and
 * starts the game.  The files are looked for in the folders MRDOFIX, MRDOT
 * and MRDO, then in the root, under the names of the mrdofix (bugfixed) or
 * mrdot (Taito) ROM sets.  These two sets use the protection PAL the core
 * has (U001, Taito version).  Runs on the Z80.
 */

#include <string.h>
#include "pff/pff.h"
#include "pff/diskio.h"
#include "phoenix.h"
#include "loader.h"

/* One ROM: where it goes (load address, see rtl/mrdo_phoenix.v), its size,
 * and its names in the two sets (or 0). */
struct rom {
    unsigned long addr;
    unsigned int  size;
    const char   *name[2];          /* mrdofix, mrdot */
};

static const struct rom roms[] = {
    { 0x00000UL, 0x2000, { "D1",         0          } },   /* CPU */
    { 0x02000UL, 0x2000, { "D2",         0          } },
    { 0x04000UL, 0x2000, { "DOFIX.D3",   "D3"       } },
    { 0x06000UL, 0x2000, { "DOFIX.D4",   "D4"       } },
    { 0x10000UL, 0x1000, { "D9",         0          } },   /* foreground */
    { 0x11000UL, 0x1000, { "D10",        0          } },
    { 0x12000UL, 0x1000, { "R8-08.BIN",  0          } },   /* background */
    { 0x13000UL, 0x1000, { "N8-07.BIN",  0          } },
    { 0x14000UL, 0x1000, { "H5-05.BIN",  0          } },   /* sprites */
    { 0x15000UL, 0x1000, { "K5-06.BIN",  0          } },
    { 0x16000UL, 0x0020, { "U02--2.BIN", 0          } },   /* palette */
    { 0x16020UL, 0x0020, { "T02--3.BIN", 0          } },
    { 0x16040UL, 0x0020, { "F10--1.BIN", 0          } },   /* sprite colours */
};

#define NROMS (sizeof(roms) / sizeof(roms[0]))

static const char *const folders[] = { "MRDOFIX/", "MRDOT/", "MRDO/", "" };

/* DIP switches as the game reads them (MAME defaults): easy, rack test
 * off, special and extra easy, upright, 3 lives; 1 coin 1 credit. */
#define DSW1 0xDF
#define DSW2 0xFF

static FATFS fs;
static char path[32];
static const char *folder;

/* ------------------------------------------------------------------------ */
/* Text */

static void text(BYTE col, BYTE row, const char *s, BYTE attr)
{
    volatile BYTE *p = PH_TEXT + (WORD)row * TEXT_COLS + col;
    while (*s && col < TEXT_COLS) {
        *p++ = *s++ | attr;
        ++col;
    }
}

static void cls(void)
{
    volatile BYTE *p = PH_TEXT;
    WORD n;
    for (n = 0; n < TEXT_COLS * TEXT_ROWS; ++n)
        *p++ = ' ';
}

static void fail(BYTE row, const char *a, const char *b)
{
    text(2, row, a, 0x80);
    if (b)
        text(2, row + 1, b, 0x80);
    text(1, 22, "PUT THE MAME ROM FILES OF", 0);
    text(1, 23, "MRDOFIX OR MRDOT (UNZIPPED)", 0);
    text(1, 24, "IN A FOLDER MRDOFIX.", 0);
    PH_LED = 1;
    for (;;)
        ;
}

/* ------------------------------------------------------------------------ */

static FRESULT try_open(const char *dir, const char *name)
{
    if (!name)
        return FR_NO_FILE;
    strcpy(path, dir);
    strcat(path, name);
    return pf_open(path);
}

/* Open a ROM under any of its names in one folder. */
static BYTE open_in(const char *dir, const struct rom *r)
{
    BYTE n;

    for (n = 0; n < 2; ++n)
        if (try_open(dir, r->name[n]) == FR_OK)
            return 1;
    return 0;
}

/* Open a ROM in the current folder, or find the folder first. */
static BYTE open_rom(const struct rom *r)
{
    BYTE i;

    if (folder)
        return open_in(folder, r);
    for (i = 0; i < sizeof(folders) / sizeof(folders[0]); ++i) {
        if (open_in(folders[i], r)) {
            folder = folders[i];
            return 1;
        }
    }
    return 0;
}

static void set_load_addr(unsigned long a)
{
    PH_LOAD_A0 = (BYTE)a;
    PH_LOAD_A1 = (BYTE)(a >> 8);
    PH_LOAD_A2 = (BYTE)(a >> 16);
}

void main(void)
{
    BYTE i, row, tries;
    UINT br;
    const char *err;
    const struct rom *r;

    cls();
    text(9, 1, "MR. DO! LOADER", 0);

    if (disk_initialize() & STA_NODISK)
        fail(3, "NO SD CARD", 0);
    if (pf_mount(&fs) != FR_OK)
        fail(3, "CANNOT READ THE SD CARD", 0);

    row = 3;
    for (i = 0; i < NROMS; ++i) {
        r = &roms[i];
        text(2, row, r->name[0], 0);
        /* A failed card read can look like a missing file: try 3 times. */
        for (tries = 0; ; ++tries) {
            err = 0;
            if (!open_rom(r))
                err = "NOT FOUND:";
            else if (fs.fsize != r->size)
                err = "WRONG SIZE:";
            else {
                set_load_addr(r->addr);
                if (pf_read(0, r->size, &br) != FR_OK || br != r->size)
                    err = "READ ERROR:";
            }
            if (!err)
                break;
            if (tries == 2)
                fail(row + 1, err, path);
        }
        text(14, row, "OK", 0);
        ++row;
    }
    while (PH_LOAD_A0 & 1)          /* last SRAM write */
        ;

    PH_DSW1 = DSW1;
    PH_DSW2 = DSW2;
    PH_START = 1;
    for (;;)
        ;
}
