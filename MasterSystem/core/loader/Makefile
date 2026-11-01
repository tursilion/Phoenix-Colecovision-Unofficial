# Phoenix Master System boot loader and menu (SDCC 4.2, Z80).  Output:
# sms_boot.bin (16K boot ROM) and ../rtl/sms_loader.hex (for the HDL).

SDCC := sdcc -mz80 --std-sdcc99 --opt-code-size
LINK := --no-std-crt0 --code-loc 0x0100 --data-loc 0xC000
OBJS := crt0.rel main.rel font.rel diskio.rel spi.rel pff.rel

all: ../rtl/sms_loader.hex

crt0.rel: crt0.s
	sdasz80 -plosgff $@ $<
spi.rel: spi.s
	sdasz80 -plosgff $@ $<
%.rel: %.c phoenix.h pff/pff.h pff/pffconf.h pff/diskio.h
	$(SDCC) -c -o $@ $<
pff.rel: pff/pff.c pff/pff.h pff/pffconf.h pff/diskio.h
	$(SDCC) -c -o $@ $<

sms_boot.ihx: $(OBJS)
	$(SDCC) $(LINK) -o $@ $(OBJS)

sms_boot.bin: sms_boot.ihx
	makebin -s 16384 $< $@

../rtl/sms_loader.hex: sms_boot.bin bin2hex.py
	python3 bin2hex.py $< $@

clean:
	rm -f *.rel *.lst *.sym *.asm *.ihx *.map *.noi *.lk *.bin pff/*.rel

.PHONY: all clean
