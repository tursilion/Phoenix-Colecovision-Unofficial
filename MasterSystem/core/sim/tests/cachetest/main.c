/* Phoenix Master System ROM cache test cartridge (SDCC), 1M.
 *
 * 64 banks of 16K (Sega mapper).  Bank 0 holds this program; bank b
 * (1-63) starts with LD A,b / RET, then byte i holds b * 13 + (i >> 8) * 7
 * + (i & 255).  The core keeps 480K in the SRAM and reads the rest
 * through its ROM cache.  Each visit maps a bank at $8000 ($FFFF), calls
 * its code and checks a 1K block (the pass picks which: 16 passes check
 * every byte).  Each pass visits 64 random banks, then all in order.  On
 * an error it shows the bank, the bytes wrong, which bank's data it had
 * (HAS) and how many bytes of the block differ from that bank's (DIFF:
 * 0000 means a whole other bank, a bookkeeping error).  It runs until
 * reset.
 */

typedef unsigned char u8;
typedef unsigned int  u16;

__sfr __at 0xBE VDP_DATA;
__sfr __at 0xBF VDP_CTRL;

#define BANK2   (*(volatile u8 *)0xFFFF)
#define WINDOW  ((volatile u8 *)0x8000)

extern const unsigned char font[];

static void vdp_reg(u8 r, u8 v) { VDP_CTRL = v; VDP_CTRL = 0x80 | r; }
static void vdp_addr(u16 a) { VDP_CTRL = (u8)a; VDP_CTRL = (u8)(a >> 8) | 0x40; }

static void put(u8 col, u8 row, const char *s)
{
    vdp_addr(0x3800 + ((u16)row * 32 + col) * 2);
    while (*s) { VDP_DATA = *s++; VDP_DATA = 0; }
}

static const char hexd[] = "0123456789ABCDEF";
static void hex(u8 col, u8 row, u16 v, u8 n)
{
    char s[5];
    u8 i;
    for (i = 0; i < n; ++i) { s[n - 1 - i] = hexd[v & 15]; v >>= 4; }
    s[n] = 0;
    put(col, row, s);
}

static void screen_init(void)
{
    static const u8 regs[11] = { 0x04, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x00, 0x00, 0x00, 0xFF };
    const u8 *f = font;
    u16 i;
    u8 c, j;

    for (i = 0; i < 11; ++i) vdp_reg((u8)i, regs[i]);
    VDP_CTRL = 0; VDP_CTRL = 0xC0;
    VDP_DATA = 0x10; VDP_DATA = 0x3F;           /* dark blue, white */
    vdp_addr(0x0000);
    for (i = 0; i < 32 * 32; ++i) VDP_DATA = 0;
    for (c = 32; c <= 122; ++c)
        for (j = 0; j < 8; ++j) { VDP_DATA = *f++; VDP_DATA = 0; VDP_DATA = 0; VDP_DATA = 0; }
    vdp_addr(0x3800);
    for (i = 0; i < 32 * 24; ++i) { VDP_DATA = ' '; VDP_DATA = 0; }
    vdp_addr(0x3F00);
    VDP_DATA = 0xD0;
    put(2, 1, "PHOENIX SMS CACHE TEST");
    put(2, 2, "1M, 64 BANKS OF 16K");
    put(2, 5, "PASSES");
    put(2, 6, "BANKS");
    put(2, 8, "DATA ERRORS");
    put(2, 9, "CODE ERRORS");
    put(2, 11, "LAST BAD BANK");
    put(2, 12, "  BAD BYTES");
    put(2, 13, "  HAS / DIFF");
    put(2, 15, "STATUS");
    vdp_reg(1, 0xC0);
}

static u16 passes, visits, data_err, code_err, bad_bytes, diff;
static u8 last_bad, has;

/* Bytes of 1K block k of the window that differ from bank p's pattern */
static u16 count_bad(u8 p, u8 k)
{
    volatile u8 *w = WINDOW + ((u16)k << 10);
    u16 bad = 0;
    u8 c, i, e;

    for (c = 0; c < 4; ++c) {
        e = (u8)(p * 13 + ((k << 2) + c) * 7);
        i = 0;
        if (k == 0 && c == 0) {             /* skip LD A,b / RET */
            w += 3;
            e += 3;
            i = 3;
        }
        do {
            if (*w++ != e) ++bad;
            ++e;
        } while (++i);
    }
    return bad;
}

typedef u8 (*code_fn)(void);

static void test_bank(u8 b)
{
    u8 k = (u8)(passes & 15);
    u16 bad;

    BANK2 = b;
    if (((code_fn)0x8000)() != b) {
        ++code_err;
        last_bad = b;
        has = WINDOW[1];
    }
    bad = count_bad(b, k);
    if (bad) {
        ++data_err;
        last_bad = b;
        bad_bytes = bad;
        has = WINDOW[1];
        diff = (has != b && has < 64) ? count_bad(has, k) : 0xFFFF;
    }
    ++visits;
}

static void show(const char *s)
{
    while (!(VDP_CTRL & 0x80))
        ;
    hex(18, 5, passes, 4);
    hex(18, 6, visits, 4);
    hex(18, 8, data_err, 4);
    hex(18, 9, code_err, 4);
    if (data_err || code_err) {
        hex(18, 11, last_bad, 2);
        hex(18, 12, bad_bytes, 4);
        hex(18, 13, has, 2);
        hex(21, 13, diff, 4);
    }
    put(18, 15, s);
}

void main(void)
{
    u8 i, r = 1;

    screen_init();
    show("START  ");
    for (;;) {
        for (i = 0; i < 64; ++i) {
            r = (u8)(r * 5 + 17);
            test_bank((r & 63) ? (r & 63) : 1);
            if ((i & 7) == 7)
                show(data_err || code_err ? "ERRORS " : "RUNNING");
        }
        for (i = 1; i < 64; ++i) {
            test_bank(i);
            if ((i & 7) == 7)
                show(data_err || code_err ? "ERRORS " : "RUNNING");
        }
        ++passes;
        show(data_err || code_err ? "ERRORS " : "ALL OK ");
    }
}
