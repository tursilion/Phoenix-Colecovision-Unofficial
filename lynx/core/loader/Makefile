# Phoenix Lynx boot loader and menu.  Needs cc65 (cl65) on the PATH, or
# CC65_HOME set.  Output: lynx_boot.bin (16K ROM image for $C000) and
# ../rtl/lynx_loader.hex (for the HDL).

ifdef CC65_HOME
CL65 := $(CC65_HOME)/bin/cl65
else
CL65 := cl65
endif

CFLAGS := -t none -Oirs --cpu 65sc02
SRCS   := crt0.s main.c font.c diskio.c spi.s glyph.s pff/pff.c

all: ../rtl/lynx_loader.hex

lynx_boot.bin: $(SRCS) boot.cfg phoenix.h pff/pff.h pff/pffconf.h pff/diskio.h
	$(CL65) $(CFLAGS) -C boot.cfg -m lynx_boot.map -o $@ $(SRCS)

../rtl/lynx_loader.hex: lynx_boot.bin bin2hex.py
	python3 bin2hex.py $< $@

clean:
	rm -f lynx_boot.bin lynx_boot.map *.o pff/*.o

.PHONY: all clean
