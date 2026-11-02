#!/usr/bin/env python3
"""Turn the loader's Intel hex (code at $D000-$FFFF) into the boot ROM's
$readmemh file: 16K, index = address - $C000 ($C000-$CFFF unused, $FF)."""
import sys

rom = bytearray(b'\xff' * 0x4000)
for line in open(sys.argv[1]):
    line = line.strip()
    if not line.startswith(':'):
        continue
    b = bytes.fromhex(line[1:])
    n, addr, typ = b[0], (b[1] << 8) | b[2], b[3]
    if typ != 0:
        continue
    for i in range(n):
        a = addr + i
        if a < 0xD000:
            sys.exit('loader byte at %04X, below $D000' % a)
        rom[a - 0xC000] = b[4 + i]
with open(sys.argv[2], 'w') as f:
    f.writelines('%02x\n' % x for x in rom)
