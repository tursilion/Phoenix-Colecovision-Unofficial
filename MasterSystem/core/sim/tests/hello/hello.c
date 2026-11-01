/* Master System test cartridge for the Phoenix core simulation: colour
 * bars, text, a frame counter, pad 1's bits, and a PSG tone. */

typedef unsigned char u8;
typedef unsigned int  u16;

__sfr __at 0xBE VDP_DATA;
__sfr __at 0xBF VDP_CTRL;
__sfr __at 0x7F PSG;
__sfr __at 0xDC PAD1;

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

void main(void)
{
    static const u8 regs[11] = { 0x04, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x00, 0x00, 0x00, 0xFF };
    const u8 *f = font;
    u16 i, frame = 0;
    u8 c, j, k;

    for (i = 0; i < 11; ++i) vdp_reg((u8)i, regs[i]);
    /* palette 0: 16 colours, --BBGGRR */
    VDP_CTRL = 0; VDP_CTRL = 0xC0;
    for (i = 0; i < 16; ++i) VDP_DATA = (u8)((i & 3) | ((i & 3) << 2) * ((i >> 2) & 1) | ((i >> 2) << 4));
    VDP_DATA = 0;
    /* tiles 0-15: solid colour n; 32-122: the font in colour 15 */
    vdp_addr(0x0000);
    for (c = 0; c < 32; ++c)
        for (j = 0; j < 8; ++j)
            for (k = 0; k < 4; ++k) VDP_DATA = (c < 16 && (c >> k) & 1) ? 0xFF : 0;
    for (c = 32; c <= 122; ++c)
        for (j = 0; j < 8; ++j) {
            u8 g = *f++;
            VDP_DATA = g; VDP_DATA = g; VDP_DATA = g; VDP_DATA = g;
        }
    /* name table: bars in rows 0-5, spaces below */
    vdp_addr(0x3800);
    for (i = 0; i < 32 * 24; ++i) {
        VDP_DATA = (i < 32 * 6) ? (u8)((i & 31) >> 1) : ' ';
        VDP_DATA = 0;
    }
    vdp_addr(0x3F00);
    VDP_DATA = 0xD0;
    put(2, 8, "PHOENIX MASTER SYSTEM");
    put(2, 10, "FRAME");
    put(2, 12, "PAD 1");
    vdp_reg(1, 0xC0);

    /* PSG: channel 0 at about 440Hz, volume full */
    PSG = 0x80 | 0x0E; PSG = 0x0F;
    PSG = 0x90;

    for (;;) {
        while (!(VDP_CTRL & 0x80))
            ;
        hex(10, 10, frame++, 4);
        hex(10, 12, (u8)~PAD1, 2);
    }
}
