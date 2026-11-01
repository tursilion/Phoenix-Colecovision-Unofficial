/* Phoenix Master System / Game Gear boot loader and menu (SDCC, Z80).
 *
 * Mounts the SD card and shows the folders and *.SMS / *.GG files of the
 * current folder, folders first, sorted by name.  The selected cartridge
 * is copied to the SRAM (without a 512-byte copier header) and started:
 * the core then resets the system into game mode, as a Game Gear for a
 * .GG file.
 *
 * Controls: Up/Down move, Left/Right page, button 1 or Pause open,
 * button 2 parent folder.
 *
 * The menu runs from the core's boot ROM at $0000 and draws with the VDP
 * in mode 4: 32 x 24 characters.
 */

#include <string.h>
#include "pff/pff.h"
#include "phoenix.h"

typedef unsigned char u8;
typedef unsigned int  u16;

/* ------------------------------------------------------------------------ */
/* Hardware */

__sfr __at 0xBE VDP_DATA;
__sfr __at 0xBF VDP_CTRL;
__sfr __at 0xDC PAD1;           /* active low: up down left right 1 2 */

#define PAD_UP     0x01
#define PAD_DOWN   0x02
#define PAD_LEFT   0x04
#define PAD_RIGHT  0x08
#define PAD_1      0x10
#define PAD_2      0x20
#define PAD_PAUSE  0x40          /* the NMI flag */

volatile u8 nmi_flag;           /* crt0.s: set by the Pause button's NMI */

extern const unsigned char font[];     /* ASCII 32-122, 8 bytes each */

/* ------------------------------------------------------------------------ */
/* Memory: the directory listing and the sector cache (diskio.c) in the
 * work RAM above the C data */

#define MAX_ENTRIES 200

struct entry {
    char name[12];          /* 8.3 name, not terminated if 12 characters */
    u8 kind;                /* KIND_* */
};

#define KIND_PARENT 0       /* ".." */
#define KIND_DIR    1
#define KIND_FILE   2

#define ENTRIES ((struct entry *)0xC800)    /* 200 x 13 = $0A28 bytes */
#define ORDER   ((u8 *)0xD300)              /* sorted entry numbers */
                                            /* $D400-$D5FF: sector cache */
static u16 count;

/* ------------------------------------------------------------------------ */
/* Screen: 32 x 24 characters */

#define COLS        32
#define LIST_ROW    2
#define LIST_ROWS   20
#define STATUS_ROW  23

#define PAL_NORMAL  0x00        /* name table entry high byte */
#define PAL_BAR     0x08        /* the second palette: the highlight */

#define ERR_NO_CARD     1
#define ERR_MOUNT       2
#define ERR_DIR         3
#define ERR_READ        4
#define ERR_TOO_BIG     5
#define ERR_EMPTY       6
#define ERR_FRAGMENTED  7

static const char *const errors[] = {
    "",
    "NO SD CARD",
    "CANNOT READ THE SD CARD",
    "CANNOT READ THE FOLDER",
    "READ ERROR",
    "TOO BIG (MAX 4M)",
    "EMPTY FILE",
    "FRAGMENTED: COPY IT AGAIN",
};

static FATFS fs;
static DIR dir;
static FILINFO fno;
static char path[80];       /* current folder, "" is the root */

static void vdp_reg(u8 r, u8 v)
{
    VDP_CTRL = v;
    VDP_CTRL = 0x80 | r;
}

static void vdp_addr(u16 a)
{
    VDP_CTRL = (u8)a;
    VDP_CTRL = (u8)(a >> 8) | 0x40;
}

/* The Pause button's NMI as a button */
static u8 pause_pressed(void)
{
    u8 p = nmi_flag;
    nmi_flag = 0;
    return p;
}

static void wait_frame(void)
{
    while (!(VDP_CTRL & 0x80))
        ;
}

static void screen_init(void)
{
    static const u8 regs[11] = { 0x04, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x00, 0x00, 0x00, 0xFF };
    /* palettes, --BBGGRR: dark blue / white, blue bar / white */
    static const u8 pal[4] = { 0x10, 0x3F, 0x24, 0x3F };
    const u8 *f = font;
    u16 i;
    u8 c, j, g;

    for (i = 0; i < 11; ++i)
        vdp_reg((u8)i, regs[i]);            /* mode 4, display off */

    VDP_CTRL = 0;                           /* CRAM 0 */
    VDP_CTRL = 0xC0;
    for (i = 0; i < 32; ++i)
        VDP_DATA = (i == 0) ? pal[0] : (i == 1) ? pal[1] : (i == 16) ? pal[2] : (i == 17) ? pal[3] : 0;

    /* tiles 32-122: the font in colour 1 (plane 0) */
    vdp_addr(0x0000);
    for (i = 0; i < 32 * 32; ++i)
        VDP_DATA = 0;
    for (c = 32; c <= 122; ++c)
        for (j = 0; j < 8; ++j) {
            g = *f++;
            VDP_DATA = g;
            VDP_DATA = 0;
            VDP_DATA = 0;
            VDP_DATA = 0;
        }

    /* name table: spaces */
    vdp_addr(0x3800);
    for (i = 0; i < 32 * 24; ++i) {
        VDP_DATA = ' ';
        VDP_DATA = 0;
    }
    vdp_addr(0x3F00);
    VDP_DATA = 0xD0;                        /* no sprites */

    vdp_reg(1, 0xC0);                       /* display on */
}

/* Write a string at (col, row) and pad it with spaces up to column end. */
static void text(u8 col, u8 row, const char *s, u8 end, u8 pal)
{
    char c;

    vdp_addr(0x3800 + ((u16)row * 32 + col) * 2);
    for (; col < end; ++col) {
        c = *s ? *s++ : ' ';
        if (c >= 'a' && c <= 'z')
            c -= 32;
        if (c < 32 || c > 122)
            c = '?';
        VDP_DATA = c;
        VDP_DATA = pal;
    }
}

static void status(const char *s)
{
    text(0, STATUS_ROW, s, COLS, PAL_BAR);
}

/* ------------------------------------------------------------------------ */
/* Controller */

static u8 read_pad(void)
{
    return (~PAD1 & 0x3F) | (pause_pressed() ? PAD_PAUSE : 0);
}

static u8 pad_last;
static u8 pad_timer;

/* Newly pressed buttons, with auto-repeat for the directions.  Call once
 * per frame. */
static u8 pad_pressed(void)
{
    u8 now = read_pad();
    u8 pressed = now & ~pad_last;

    if (now & (PAD_UP | PAD_DOWN | PAD_LEFT | PAD_RIGHT)) {
        if (pressed)
            pad_timer = 20;
        else if (--pad_timer == 0) {
            pad_timer = 4;
            pressed |= now & (PAD_UP | PAD_DOWN | PAD_LEFT | PAD_RIGHT);
        }
    }
    pad_last = now & ~PAD_PAUSE;
    return pressed;
}

static void wait_button(void)
{
    u8 b;
    do {
        wait_frame();
        b = pad_pressed();
    } while (!(b & (PAD_1 | PAD_2 | PAD_PAUSE)));
}

/* ------------------------------------------------------------------------ */
/* Directory */

/* Is the 8.3 name a cartridge?  1 Master System, 2 Game Gear. */
static u8 cart_type(const char *name)
{
    const char *dot = strchr(name, '.');
    if (dot == 0)
        return 0;
    if (strcmp(dot, ".SMS") == 0)
        return 1;
    if (strcmp(dot, ".GG") == 0)
        return 2;
    return 0;
}

static const char *entry_name(u8 n)
{
    static char s[14];
    memcpy(s, ENTRIES[n].name, 12);
    s[12] = 0;
    return s;
}

static signed char entry_cmp(u8 a, u8 b)
{
    const struct entry *ea = &ENTRIES[a];
    const struct entry *eb = &ENTRIES[b];
    int r;
    if (ea->kind != eb->kind)
        return ea->kind < eb->kind ? -1 : 1;
    r = strncmp(ea->name, eb->name, 12);
    return r < 0 ? -1 : r > 0 ? 1 : 0;
}

/* Shell sort of ORDER[0..count-1] */
static void sort_entries(void)
{
    static const u8 gaps[] = { 57, 23, 10, 4, 1 };
    u8 g, gap, t;
    u16 i, j;

    for (g = 0; g < sizeof(gaps); ++g) {
        gap = gaps[g];
        for (i = gap; i < count; ++i) {
            t = ORDER[i];
            for (j = i; j >= gap && entry_cmp(ORDER[j - gap], t) > 0; j -= gap)
                ORDER[j] = ORDER[j - gap];
            ORDER[j] = t;
        }
    }
}

static u8 read_dir(void)
{
    struct entry *e;

    count = 0;
    if (path[0]) {
        e = &ENTRIES[0];
        memset(e->name, 0, 12);
        memcpy(e->name, "..", 2);
        e->kind = KIND_PARENT;
        ORDER[0] = 0;
        count = 1;
    }

    if (pf_opendir(&dir, path) != FR_OK)
        return 0;
    while (count < MAX_ENTRIES) {
        if (pf_readdir(&dir, &fno) != FR_OK)
            return 0;
        if (fno.fname[0] == 0)
            break;
        if (fno.fname[0] == '.' || (fno.fattrib & (AM_HID | AM_SYS)))
            continue;
        if (!(fno.fattrib & AM_DIR) && !cart_type(fno.fname))
            continue;
        e = &ENTRIES[count];
        memset(e->name, 0, 12);
        memcpy(e->name, fno.fname, strlen(fno.fname));
        e->kind = (fno.fattrib & AM_DIR) ? KIND_DIR : KIND_FILE;
        ORDER[count] = (u8)count;
        ++count;
    }
    sort_entries();
    return 1;
}

static u8 path_enter(const char *name)
{
    u16 l = strlen(path);
    if (l + 1 + strlen(name) >= sizeof(path))
        return 0;
    path[l] = '/';
    strcpy(path + l + 1, name);
    return 1;
}

static void path_leave(void)
{
    char *p = strrchr(path, '/');
    if (p)
        *p = 0;
    else
        path[0] = 0;
}

/* ------------------------------------------------------------------------ */
/* Menu */

static u16 top, sel;

static void draw_row(u8 row)
{
    u16 n = top + row;
    char line[16];
    u8 l;

    if (n < count) {
        strcpy(line, entry_name(ORDER[n]));
        if (ENTRIES[ORDER[n]].kind != KIND_FILE) {
            l = strlen(line);
            line[l] = '/';
            line[l + 1] = 0;
        }
    } else {
        line[0] = 0;
    }
    text(0, LIST_ROW + row, " ", 1, PAL_NORMAL);
    text(1, LIST_ROW + row, line, COLS - 1,
         (n == sel && n < count) ? PAL_BAR : PAL_NORMAL);
}

static const char help[] = " 1:OPEN  2:BACK  LEFT/RIGHT:PAGE";

static void draw_page(void)
{
    u8 r;
    char title[40];

    strcpy(title, " PHOENIX MASTER SYSTEM  ");
    strncat(title, path[0] ? path : "/", sizeof(title) - 26);
    text(0, 0, title, COLS, PAL_BAR);
    for (r = 0; r < LIST_ROWS; ++r)
        draw_row(r);
    if (!count)
        text(1, LIST_ROW, "NO .SMS OR .GG FILES HERE", COLS, PAL_NORMAL);
    status(help);
}

static void show_folder(void)
{
    top = sel = 0;
    if (!read_dir()) {
        count = 0;
        draw_page();
        status(errors[ERR_DIR]);
        return;
    }
    draw_page();
}

static void move_to(u16 n)
{
    u16 new_top, old;

    if (!count)
        return;
    if (n >= count)
        n = count - 1;
    new_top = n - n % LIST_ROWS;
    if (new_top != top) {
        top = new_top;
        sel = n;
        draw_page();
    } else if (n != sel) {
        old = sel;
        sel = n;
        draw_row((u8)(old - top));
        draw_row((u8)(sel - top));
    }
}

/* ------------------------------------------------------------------------ */
/* Loading */

#define ROM_MAX  (4096UL * 1024)    /* 512 pages of 8K */
#define ROM_SRAM (480UL * 1024)     /* the cartridge RAM is in the top 32K */

BYTE disk_block_addr(void);

/* pf_pages: ROM page n (8K) starts in SD sector sect */
static void set_page(UINT n, DWORD sect)
{
    DWORD arg = disk_block_addr() ? sect : sect << 9;
    PH_PAGE_LO = (u8)n;
    PH_PAGE_HI = (u8)(n >> 8);
    PH_ARG0 = (u8)arg;
    PH_ARG1 = (u8)(arg >> 8);
    PH_ARG2 = (u8)(arg >> 16);
    PH_ARG3 = (u8)(arg >> 24);
}

/* Copy the cartridge to the SRAM and start it; returns an error code if
 * it cannot.  A cartridge bigger than the SRAM's 480K plays from the
 * core's ROM cache: the loader gives it the SD sector of every 8K page. */
static u8 load_game(const char *file, u8 type)
{
    UINT br, n, first = 0;
    DWORD left, size;
    u16 banks, mask;

    if (pf_open(file) != FR_OK)
        return ERR_READ;
    left = fs.fsize;

    /* a 512-byte copier header */
    if ((left & 0x3FFF) == 512) {
        if (pf_read(0, 512, &br) != FR_OK || br != 512)
            return ERR_READ;
        left -= 512;
        first = 1;
    }
    if (left == 0)
        return ERR_EMPTY;
    if (left > ROM_MAX)
        return ERR_TOO_BIG;

    /* the mapper's bank number is masked to the ROM size (a power of two) */
    banks = (u16)((left + 0x3FFF) >> 14);
    for (mask = 1; mask < banks; mask <<= 1)
        ;
    PH_ROM_MASK = (u8)(mask - 1);

    size = left;
    if (left > ROM_SRAM)
        left = ROM_SRAM;
    PH_ADDR0 = 0;
    while (left) {
        n = left > 0x4000 ? 0x4000 : (UINT)left;
        if (pf_read(0, n, &br) != FR_OK || br != n)
            return ERR_READ;
        left -= n;
    }

    if (size > ROM_SRAM) {
        status(" MAPPING...");
        switch (pf_pages(first, (UINT)((size + 8191) >> 13), set_page)) {
        case 1: return ERR_READ;
        case 2: return ERR_FRAGMENTED;
        }
    }

    vdp_reg(1, 0x80);                       /* display off */
    PH_START = (type == 2) ? 1 : 0;
    for (;;)
        ;
}

static void open_selected(void)
{
    const struct entry *e;
    char file[96];
    u8 err;

    if (!count)
        return;
    e = &ENTRIES[ORDER[sel]];

    if (e->kind == KIND_PARENT) {
        path_leave();
        show_folder();
    } else if (e->kind == KIND_DIR) {
        if (path_enter(entry_name(ORDER[sel])))
            show_folder();
    } else {
        strcpy(file, path);
        strcat(file, "/");
        strcat(file, entry_name(ORDER[sel]));
        status(" LOADING...");
        err = load_game(file[0] == '/' ? file + 1 : file, cart_type(entry_name(ORDER[sel])));
        status(errors[err]);
        wait_button();
        status(help);
    }
}

/* ------------------------------------------------------------------------ */

static void fatal(u8 code)
{
    u8 r;

    for (r = 0; r < 24; ++r)
        text(0, r, "", COLS, PAL_NORMAL);
    text(0, 0, " PHOENIX MASTER SYSTEM", COLS, PAL_BAR);
    text(1, 4, errors[code], COLS, PAL_NORMAL);
    text(1, 6, "INSERT A FAT16 OR FAT32 CARD", COLS, PAL_NORMAL);
    text(1, 7, "AND PRESS A BUTTON", COLS, PAL_NORMAL);
    wait_button();
}

void main(void)
{
    u8 b, n;

    screen_init();

    for (;;) {
        if (!(PH_CTRL & PH_STAT_CARD)) {
            fatal(ERR_NO_CARD);
            continue;
        }
        for (n = 0; n < 3 && pf_mount(&fs) != FR_OK; ++n)
            ;
        if (n == 3) {
            fatal(ERR_MOUNT);
            continue;
        }
        break;
    }

    path[0] = 0;
    show_folder();

    for (;;) {
        wait_frame();
        b = pad_pressed();
        if (b & PAD_DOWN)
            move_to(sel + 1);
        else if (b & PAD_UP)
            move_to(sel ? sel - 1 : 0);
        else if (b & PAD_RIGHT)
            move_to(sel + LIST_ROWS);
        else if (b & PAD_LEFT)
            move_to(sel >= LIST_ROWS ? sel - LIST_ROWS : 0);
        else if (b & (PAD_1 | PAD_PAUSE))
            open_selected();
        else if ((b & PAD_2) && path[0]) {
            path_leave();
            show_folder();
        }
    }
}
