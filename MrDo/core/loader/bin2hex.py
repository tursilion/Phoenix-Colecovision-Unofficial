#!/usr/bin/env python3
"""Write a binary as one hex byte per line, for Verilog $readmemh.

  bin2hex.py BIN OUT [N]

With N, writes N files (OUT is a pattern with %d): file k holds the bytes
at addresses k mod N.
"""
import sys

with open(sys.argv[1], 'rb') as f:
    data = f.read()
n = int(sys.argv[3]) if len(sys.argv) > 3 else 0
if n:
    for k in range(n):
        with open(sys.argv[2] % k, 'w') as f:
            f.writelines('%02x\n' % b for b in data[k::n])
else:
    with open(sys.argv[2], 'w') as f:
        f.writelines('%02x\n' % b for b in data)
