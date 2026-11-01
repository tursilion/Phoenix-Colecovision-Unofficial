#!/usr/bin/env python3
# Stub loader ROM for the simulation: 16K at $C000 that sets the cartridge
# page size and starts the game.   mkstub.py <bank0size> <out.hex>
import sys
b0 = int(sys.argv[1], 0)
code = bytes([0xA9, b0 & 0xFF, 0x8D, 0x0B, 0xFE,         # LDA #lo / STA $FE0B
              0xA9, b0 >> 8,   0x8D, 0x0C, 0xFE,         # LDA #hi / STA $FE0C
              0x8D, 0x04, 0xFE,                          # STA $FE04: start
              0x4C, 0x0D, 0xC0])                         # JMP *
rom = bytearray([0xFF] * 16384)
rom[0:len(code)] = code
rom[0x3FFA:0x4000] = bytes([0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0])
open(sys.argv[2], 'w').write('\n'.join('%02x' % b for b in rom) + '\n')
