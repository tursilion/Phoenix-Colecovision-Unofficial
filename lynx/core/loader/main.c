/* Phoenix Lynx boot loader and menu.
 *
 * Mounts the SD card and shows the folders and *.LNX / *.LYX files of the
 * current folder, folders first, sorted by name.  The selected cartridge
 * is copied to the SRAM (without its LNX header) and started: the core
 * then resets the Lynx, whose boot ROM runs it like a real cartridge.
 *
 * Controls: Up/Down move, Left/Right page, A or Pause open, B parent folder.
 *
 * The menu runs on the Lynx's own CPU in boot mode (this ROM at $C000) and
 * draws on the Lynx's own screen: 26 x 12 characters of 6 x 8 pixels.
 */

#include <string.h>
#include "pff/pff.h"
#include "phoenix.h"

/* ------------------------------------------------------------------------ */
/* Lynx hardware */

#define REG(a) (*(volatile BYTE *)(a))

#define TIM0BKUP  REG(0xFD00)       /* horizontal timer */
#define TIM0CTLA  REG(0xFD01)
#define TIM2BKUP  REG(0xFD08)       /* vertical timer */
#define TIM2CTLA  REG(0xFD09)
#define TIM2CNT   REG(0xFD0A)
#define DISPCTL   REG(0xFD92)
#define PBKUP     REG(0xFD93)
#define DISPADRL  REG(0xFD94)
#define DISPADRH  REG(0xFD95)
#define GREEN(n)  REG(0xFDA0 + (n))
#define BLUERED(n) REG(0xFDB0 + (n))
#define JOYSTICK  REG(0xFCB0)
#define SWITCHES  REG(0xFCB1)

/* JOYSTICK bits */
#define PAD_A      0x01
#define PAD_B      0x02
#define PAD_OPT2   0x04
#define PAD_OPT1   0x08
#define PAD_RIGHT  0x10
#define PAD_LEFT   0x20
#define PAD_DOWN   0x40
#define PAD_UP     0x80
#define PAD_PAUSE  0x100            /* SWITCHES bit 0, moved up */

extern const unsigned char font[];     /* ASCII 32-122, 8 bytes each */

/* glyph.s: draw a character cell */
extern const BYTE *gptr;
#pragma zpsym("gptr")
extern BYTE gt0[64], gt1[64], gt2[64];
void __fastcall__ glyph_put(BYTE *dst);

/* ------------------------------------------------------------------------ */
/* Memory: the directory listing, the sector cache (diskio.c) and the
 * screen, in the Lynx RAM */

#define MAX_ENTRIES 256

struct entry {
    char name[12];          /* 8.3 name, not terminated if 12 characters */
    BYTE kind;              /* KIND_* */
};

#define KIND_PARENT 0       /* ".." */
#define KIND_DIR    1
#define KIND_FILE   2

#define ENTRIES ((struct entry *)0x2000)    /* 256 x 13 = $0D00 bytes */
#define ORDER   ((BYTE *)0x2D00)            /* sorted entry numbers */
                                            /* $2E00-$2FFF: sector cache */
#define SCREEN  ((BYTE *)0xA000)            /* 160 x 102, 4 bits a pixel */

static WORD count;

/* ------------------------------------------------------------------------ */
/* Screen layout: 26 x 12 characters */

#define COLS        26
#define LIST_ROW    1
#define LIST_ROWS   10
#define STATUS_ROW  11

/* Colours (palette entries) */
#define C_BACK      0
#define C_TEXT      1
#define C_SEL       2               /* the selected line's background */
#define C_TITLE     3
#define C_DIM       4

#define ERR_NO_CARD     1
#define ERR_MOUNT       2
#define ERR_DIR         3
#define ERR_READ        4
#define ERR_BAD_HEADER  5
#define ERR_TOO_BIG     6
#define ERR_FRAGMENTED  7

static const char *const errors[] = {
    "",
    "NO SD CARD",
    "CANNOT READ THE SD CARD",
    "CANNOT READ THE FOLDER",
    "READ ERROR",
    "NOT A LYNX CARTRIDGE",
    "TOO BIG (MAX 512K)",
    "FRAGMENTED: COPY IT AGAIN",
};

static FATFS fs;
static DIR dir;
static FILINFO fno;
static char path[80];       /* current folder, "" is the root */
static BYTE hdr[64];

/* ------------------------------------------------------------------------ */
/* Display */

/* Palette: green in GREEN, blue (high) and red (low) in BLUERED */
static const BYTE pal_green[5]   = { 0x00, 0x0F, 0x04, 0x0E, 0x08 };
static const BYTE pal_bluered[5] = { 0x40, 0xFF, 0xB2, 0x0F, 0x88 };

static void display_init(void)
{
    BYTE i;

    /* Video timing as the Lynx boot ROM sets it: 159us lines, 105 lines */
    TIM0BKUP = 158;
    TIM0CTLA = 0x18;        /* reload, count, 1us clock */
    TIM2BKUP = 104;
    TIM2CTLA = 0x1F;        /* reload, count, linked to timer 0 */
    PBKUP    = 0x29;
    for (i = 0; i < 16; ++i) {
        GREEN(i)   = i < 5 ? pal_green[i] : 0;
        BLUERED(i) = i < 5 ? pal_bluered[i] : 0;
    }
    memset(SCREEN, (C_BACK << 4) | C_BACK, 8160);
    DISPADRL = (BYTE)(WORD)SCREEN;
    DISPADRH = (BYTE)((WORD)SCREEN >> 8);
    DISPCTL  = 0x0D;        /* colour, 4 bits a pixel, DMA on */
}

/* One frame: the vertical timer counts each frame down to 0 */
static void wait_frame(void)
{
    while (TIM2CNT == 0)
        ;
    while (TIM2CNT != 0)
        ;
}

/* Draw a string at (col, row) and pad it with spaces up to column end.
 * A character is 6 pixels (3 bytes) wide; the text area starts 2 pixels
 * and 3 lines in. */
static BYTE gt_fg = 0xFF, gt_bg = 0xFF;

static void text(BYTE col, BYTE row, const char *s, BYTE end, BYTE fg, BYTE bg)
{
    BYTE pair[4];
    BYTE *line = SCREEN + (WORD)(3 + row * 8) * 80 + 1 + col * 3;
    BYTE i;
    char c;

    /* The screen bytes of each 6-pixel pattern, for these colours */
    if (fg != gt_fg || bg != gt_bg) {
        pair[0] = (bg << 4) | bg;
        pair[1] = (bg << 4) | fg;
        pair[2] = (fg << 4) | bg;
        pair[3] = (fg << 4) | fg;
        for (i = 0; i < 64; ++i) {
            gt0[i] = pair[i >> 4];
            gt1[i] = pair[(i >> 2) & 3];
            gt2[i] = pair[i & 3];
        }
        gt_fg = fg;
        gt_bg = bg;
    }

    for (; col < end; ++col) {
        c = *s ? *s++ : ' ';
        if (c >= 'a' && c <= 'z')
            c -= 32;
        if (c < 32 || c > 122)
            c = '?';
        gptr = font + (c - 32) * 8;
        glyph_put(line);
        line += 3;
    }
}

static void status(const char *s)
{
    text(0, STATUS_ROW, s, COLS, C_TITLE, C_BACK);
}

/* ------------------------------------------------------------------------ */
/* Controller */

static WORD read_pad(void)
{
    return JOYSTICK | ((SWITCHES & 1) ? PAD_PAUSE : 0);
}

static WORD pad_last;
static BYTE pad_timer;

/* Newly pressed buttons, with auto-repeat for the directions.  Call once
 * per frame. */
static WORD pad_pressed(void)
{
    WORD now = read_pad();
    WORD pressed = now & ~pad_last;

    if (now & (PAD_UP | PAD_DOWN | PAD_LEFT | PAD_RIGHT)) {
        if (pressed)
            pad_timer = 20;
        else if (--pad_timer == 0) {
            pad_timer = 4;
            pressed |= now & (PAD_UP | PAD_DOWN | PAD_LEFT | PAD_RIGHT);
        }
    }
    pad_last = now;
    return pressed;
}

static void wait_button(void)
{
    WORD b;
    do {
        wait_frame();
        b = pad_pressed();
    } while (!(b & (PAD_A | PAD_B | PAD_PAUSE)));
}

/* ------------------------------------------------------------------------ */
/* Directory */

/* Is the 8.3 name a .LNX or .LYX file?  Returns 1 for LNX, 2 for LYX. */
static BYTE cart_type(const char *name)
{
    const char *dot = strchr(name, '.');
    if (dot == 0)
        return 0;
    if (strcmp(dot, ".LNX") == 0)
        return 1;
    if (strcmp(dot, ".LYX") == 0)
        return 2;
    return 0;
}

/* Entry name as a terminated string */
static const char *entry_name(BYTE n)
{
    static char s[14];
    memcpy(s, ENTRIES[n].name, 12);
    s[12] = 0;
    return s;
}

static signed char entry_cmp(BYTE a, BYTE b)
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
    static const BYTE gaps[] = { 57, 23, 10, 4, 1 };
    BYTE g, gap, t;
    WORD i, j;

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

static BYTE read_dir(void)
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
        ORDER[count] = (BYTE)count;
        ++count;
    }
    sort_entries();
    return 1;
}

/* Append a name to, or remove the last name from, the current path. */
static BYTE path_enter(const char *name)
{
    WORD l = strlen(path);
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

static WORD top, sel;

static void draw_row(BYTE row)
{
    WORD n = top + row;
    char line[16];
    BYTE l;

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
    text(0, LIST_ROW + row, " ", 1, C_TEXT, C_BACK);
    text(1, LIST_ROW + row, line, COLS,
         C_TEXT, (n == sel && n < count) ? C_SEL : C_BACK);
}

static const char help[] = "A:OPEN  B:BACK  <>:PAGE";

/* Redraw the whole screen. */
static void draw_page(void)
{
    BYTE r;
    char title[40];

    strcpy(title, "PHOENIX LYNX ");
    strncat(title, path[0] ? path : "/", sizeof(title) - 14);
    text(0, 0, title, COLS, C_TITLE, C_BACK);
    for (r = 0; r < LIST_ROWS; ++r)
        draw_row(r);
    if (!count)
        text(1, LIST_ROW, "NO .LNX FILES HERE", COLS, C_DIM, C_BACK);
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

/* Move the cursor to n, scrolling by whole pages. */
static void move_to(WORD n)
{
    WORD new_top, old;

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
        draw_row((BYTE)(old - top));
        draw_row((BYTE)(sel - top));
    }
}

/* ------------------------------------------------------------------------ */
/* Loading */

#define ROM_MAX  (512UL * 1024)     /* 256 pages of 2K */
#define ROM_SRAM (448UL * 1024)     /* SRAM above the Lynx's 64K RAM */

BYTE disk_block_addr(void);

/* pf_pages: cartridge page n (8K) starts in SD sector sect */
static void set_page(UINT n, DWORD sect)
{
    DWORD arg = disk_block_addr() ? sect : sect << 9;
    PH_PAGE = (BYTE)n;
    PH_ARG[0] = (BYTE)arg;
    PH_ARG[1] = (BYTE)(arg >> 8);
    PH_ARG[2] = (BYTE)(arg >> 16);
    PH_ARG[3] = (BYTE)(arg >> 24);
}

/* Copy the cartridge to the SRAM at 10000 and start it; returns an error
 * code if it cannot.  A cartridge bigger than the SRAM's 448K plays from
 * the core's ROM cache: the loader gives it the SD sector of every 8K
 * page (each starts 64 bytes into a sector after an LNX header). */
static BYTE load_game(const char *file, BYTE type)
{
    UINT br, n;
    DWORD left, size;
    WORD bank0, skip = 0;

    if (pf_open(file) != FR_OK)
        return ERR_READ;
    left = fs.fsize;

    if (type == 1) {
        /* LNX: "LYNX", bank 0 page size, bank 1 page size, ... */
        if (pf_read(hdr, 64, &br) != FR_OK || br != 64)
            return ERR_READ;
        if (memcmp(hdr, "LYNX", 4) != 0)
            return ERR_BAD_HEADER;
        bank0 = hdr[4] | ((WORD)hdr[5] << 8);
        left -= 64;
        skip = 64;
    } else {
        /* LYX: no header; the page size from the size */
        bank0 = left <= 0x10000UL ? 0x100 : left <= 0x20000UL ? 0x200 :
                left <= 0x40000UL ? 0x400 : 0x800;
    }
    if (bank0 != 0x100 && bank0 != 0x200 && bank0 != 0x400 && bank0 != 0x800)
        return ERR_BAD_HEADER;
    if (left > ROM_MAX)
        return ERR_TOO_BIG;

    PH_BANK0_LO = (BYTE)bank0;
    PH_BANK0_HI = (BYTE)(bank0 >> 8);
    PH_ADDR[0] = 0x00;
    PH_ADDR[1] = 0x00;
    PH_ADDR[2] = 0x01;

    size = left;
    if (left > ROM_SRAM)
        left = ROM_SRAM;
    while (left) {
        n = left > 0x4000 ? 0x4000 : (UINT)left;
        if (pf_read(0, n, &br) != FR_OK || br != n)
            return ERR_READ;
        left -= n;
    }

    if (size > ROM_SRAM) {
        status("MAPPING...");
        PH_SKIP_LO = (BYTE)skip;
        PH_SKIP_HI = 0;
        switch (pf_pages(0, (UINT)((size + 8191) >> 13), set_page)) {
        case 1: return ERR_READ;
        case 2: return ERR_FRAGMENTED;
        }
    }

    memset(SCREEN, (C_BACK << 4) | C_BACK, 8160);
    PH_START = 0;
    for (;;)
        ;
}

static void open_selected(void)
{
    const struct entry *e;
    char file[96];
    BYTE err;

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
        status("LOADING...");
        err = load_game(file[0] == '/' ? file + 1 : file, cart_type(entry_name(ORDER[sel])));
        status(errors[err]);
        wait_button();
        status(help);
    }
}

/* ------------------------------------------------------------------------ */

static void fatal(BYTE code)
{
    BYTE r;

    for (r = 0; r < 12; ++r)
        text(0, r, "", COLS, C_TEXT, C_BACK);
    text(0, 0, "PHOENIX LYNX", COLS, C_TITLE, C_BACK);
    text(0, 3, errors[code], COLS, C_TEXT, C_BACK);
    text(0, 5, "INSERT A FAT16 OR FAT32", COLS, C_TEXT, C_BACK);
    text(0, 6, "CARD AND PRESS A BUTTON", COLS, C_TEXT, C_BACK);
    wait_button();
    text(0, 3, "", COLS, C_TEXT, C_BACK);
    text(0, 5, "", COLS, C_TEXT, C_BACK);
    text(0, 6, "", COLS, C_TEXT, C_BACK);
}

void main(void)
{
    WORD b;
    BYTE n;

    display_init();

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
        else if (b & (PAD_A | PAD_PAUSE))
            open_selected();
        else if ((b & PAD_B) && path[0]) {
            path_leave();
            show_folder();
        }
    }
}
