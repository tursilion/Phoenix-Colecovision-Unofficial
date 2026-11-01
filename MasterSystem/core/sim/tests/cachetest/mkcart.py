#!/usr/bin/env python3
# Make the 1M cache test cartridge: bank 0 the program (16K), banks 1-63
# LD A,b / RET then the pattern (see main.c).   mkcart.py prog.bin CACHE1M.SMS
import sys
prog = open(sys.argv[1], 'rb').read()[:16384]
assert len(prog) <= 16384
out = bytearray(prog) + bytes(16384 - len(prog))
for b in range(1, 64):
    bank = bytearray(16384)
    for i in range(16384):
        bank[i] = (b * 13 + (i >> 8) * 7 + (i & 255)) & 0xFF
    bank[0:3] = bytes([0x3E, b, 0xC9])
    out += bank
assert len(out) == 1024 * 1024
open(sys.argv[2], 'wb').write(out)
