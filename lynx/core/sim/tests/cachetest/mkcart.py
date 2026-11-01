#!/usr/bin/env python3
# Pad the cc65 test program (an LNX file with 2K blocks) to a 512K
# cartridge: blocks 0-7 the program, blocks 8-255 the test pattern (see
# main.c).   mkcart.py prog.lnx CACHE512.LNX
import sys
d = open(sys.argv[1], 'rb').read()
hdr, body = bytearray(d[:64]), d[64:]
assert hdr[:4] == b'LYNX' and hdr[4] | hdr[5] << 8 == 0x800, 'needs 2K blocks'
assert len(body) <= 8 * 2048, 'program over 16K'
out = bytearray(body) + bytes(8 * 2048 - len(body))
for b in range(8, 256):
    blk = bytearray(2048)
    blk[0], blk[1] = b, b ^ 0xFF
    for i in range(2, 2048):
        blk[i] = (b * 13 + (i >> 8) * 7 + (i & 255)) & 0xFF
    out += blk
assert len(out) == 512 * 1024
hdr[10:42] = b'CACHE TEST'.ljust(32, b'\0')
open(sys.argv[2], 'wb').write(hdr + out)
