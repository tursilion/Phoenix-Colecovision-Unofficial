# Phoenix Lynx ROM cache test cartridge: CACHE512.LNX (512K, cc65).
CL65 := cl65 -t lynx -O -Wl -D,__BANK0BLOCKSIZE__=0x800

all: CACHE512.LNX

prog.lnx: main.c cart.s
	$(CL65) -o $@ main.c cart.s

CACHE512.LNX: prog.lnx mkcart.py
	python3 mkcart.py $< $@

clean:
	rm -f prog.lnx CACHE512.LNX *.o

.PHONY: all clean
