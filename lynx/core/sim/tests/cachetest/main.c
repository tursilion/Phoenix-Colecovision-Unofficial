/* Phoenix Lynx ROM cache test cartridge (cc65 -t lynx), 512K.
 *
 * 256 blocks of 2K (bank 0 page size 0x800).  Blocks 0-7 hold this
 * program; block b (8-255) holds b, b ^ $FF, then for byte i >= 2 the
 * value b * 13 + (i >> 8) * 7 + (i & 255).  The core keeps 448K of the
 * cartridge in the SRAM and reads the rest (the top 64K, blocks 224-255,
 * and any page it has had to drop) from the SD card through its ROM
 * cache.
 *
 * Each pass reads blocks 224-255 first (all cache misses at the start),
 * then all blocks in order, then 64 random ones, and checks every byte.
 * On an error the screen shows the block, the bytes wrong, which block's
 * data it had (HAS) and how many bytes differ from that block's (DIFF:
 * 0000 means a whole other block, a bookkeeping error).  It runs until
 * reset.
 */

#include <tgi.h>
#include <lynx.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char BYTE;
typedef unsigned int  WORD;

void __fastcall__ cart_block(BYTE b);
BYTE __fastcall__ cart_cmp(BYTE n);
extern BYTE cmp_val;

#define FIRST 8

static WORD passes, blocks, errors;
static BYTE last_bad, has0, has1;
static WORD bad_bytes, diff;
static BYTE have_bad;
static char s[32];

/* Bytes of block b that differ from block p's pattern (p's own pattern,
 * read from block b's place in the cartridge). */
static WORD check(BYTE b, BYTE p)
{
    WORD bad = 0;
    BYTE c;

    cart_block(b);
    cmp_val = p;
    bad += cart_cmp(1);
    cmp_val = p ^ 0xFF;
    bad += cart_cmp(1);
    cmp_val = (BYTE)(p * 13 + 2);
    bad += cart_cmp(254);
    for (c = 1; c < 8; ++c) {
        cmp_val = (BYTE)(p * 13 + c * 7);
        bad += cart_cmp(0);
    }
    return bad;
}

static void line(BYTE y, const char *t)
{
    tgi_outtextxy(4, y, t);
}

static void show(const char *state)
{
    tgi_clear();
    tgi_setcolor(15);
    line(2,  "LYNX CACHE TEST");
    line(12, "512K, 256 2K BLOCKS");
    sprintf(s, "PASSES   %u", passes);       line(26, s);
    sprintf(s, "BLOCKS   %u", blocks);       line(36, s);
    sprintf(s, "ERRORS   %u", errors);       line(46, s);
    if (have_bad) {
        sprintf(s, "BAD BLK  %02X  %u BYTES", last_bad, bad_bytes); line(58, s);
        sprintf(s, "HAS %02X %02X  DIFF %04X", has0, has1, diff);   line(68, s);
    }
    line(82, state);
    tgi_updatedisplay();
    while (tgi_busy())
        ;
}

static void test(BYTE b)
{
    WORD bad;

    bad = check(b, b);
    ++blocks;
    if (bad) {
        ++errors;
        have_bad = 1;
        last_bad = b;
        bad_bytes = bad;
        /* which block's data it had: its first two bytes */
        cart_block(b);
        has0 = *(volatile BYTE *)0xFCB2;
        has1 = *(volatile BYTE *)0xFCB2;
        diff = (has1 == (BYTE)(has0 ^ 0xFF) && has0 >= FIRST) ? check(b, has0) : 0xFFFF;
    }
    if ((blocks & 15) == 0)
        show(errors ? "STATUS   ERRORS" : "STATUS   RUNNING");
}

void main(void)
{
    WORD i;
    BYTE r = 1;

    tgi_install(tgi_static_stddrv);
    tgi_init();
    asm("cli");
    while (tgi_busy())
        ;
    tgi_setbgcolor(0);
    show("STATUS   START");

    for (;;) {
        for (i = 224; i < 256; ++i)
            test((BYTE)i);
        for (i = FIRST; i < 256; ++i)
            test((BYTE)i);
        for (i = 0; i < 64; ++i) {
            r = (BYTE)(r * 5 + 17);
            test(r < FIRST ? r + FIRST : r);
        }
        ++passes;
        show(errors ? "STATUS   ERRORS" : "STATUS   ALL OK");
    }
}
