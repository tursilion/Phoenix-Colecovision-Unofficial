# Phoenix Mr. Do! core boot loader (sdcc, Z80).
# Output: mrdo_boot.bin (8K, the sprite ROM block RAMs' initial contents)
# and ../rtl/mrdo_boot0-3.hex (the four sprite ROM RAMs hold the bytes at
# addresses 0-3 mod 4).

SDCC   ?= sdcc
SDAS   ?= sdasz80
MAKEBIN ?= makebin

CFLAGS := -mz80 --opt-code-size --std-sdcc11
OBJS   := crt0.rel spi.rel main.rel diskio.rel pff.rel

all: ../rtl/mrdo_boot0.hex

%.rel: %.s
	$(SDAS) -plosgff $@ $<

main.rel: main.c phoenix.h loader.h pff/pff.h pff/diskio.h pff/pffconf.h
	$(SDCC) $(CFLAGS) -c $< -o $@
diskio.rel: diskio.c phoenix.h loader.h pff/pff.h pff/diskio.h pff/pffconf.h
	$(SDCC) $(CFLAGS) -c $< -o $@
pff.rel: pff/pff.c pff/pff.h pff/diskio.h pff/pffconf.h
	$(SDCC) $(CFLAGS) -c $< -o $@

mrdo_boot.ihx: $(OBJS)
	$(SDCC) -mz80 --no-std-crt0 --code-loc 0x0200 --data-loc 0xE000 -o $@ $(OBJS)
	@python3 -c "import re,sys; m=open('mrdo_boot.map').read(); \
	  ends=[int(a,16)+int(l,16) for n,a,l in re.findall(r'^(_CODE|_INITIALIZER|_GSINIT|_GSFINAL|_HOME)\s+([0-9A-F]{8})\s+([0-9A-F]{8})',m,re.M)]; \
	  e=max(ends); print('boot code ends at %04X' % e); sys.exit(e > 0x2000)"

mrdo_boot.bin: mrdo_boot.ihx
	$(MAKEBIN) -s 8192 $< $@

../rtl/mrdo_boot0.hex: mrdo_boot.bin bin2hex.py
	python3 bin2hex.py $< ../rtl/mrdo_boot%d.hex 4

clean:
	rm -f *.rel *.lst *.sym *.asm *.ihx *.map *.noi *.lk *.bin *.rst

.PHONY: all clean
