# Phoenix Williams cores' boot loader (gcc6809, 6809), one per game:
#   make GAME=0   Robotron  -> williams_boot_0.hex
#   make GAME=1   Joust     -> williams_boot_1.hex
#   make GAME=6   Sinistar  -> williams_boot_6.hex
# The hex is the boot ROM's $readmemh file (rtl/williams_phoenix.v,
# LOADER_FILE); the code is at $D000-$FFFF.
#
# No libgcc: Vide's is built for another ABI (its 16-bit helpers crash
# here), so the link fails on any helper call; libsi.s has the 32-bit ones.

GCC09 ?= /mnt/d/work/vectrex/Vide.w64/C/Linux64/bin
CC1    := $(GCC09)/cc1
AS     := $(GCC09)/as6809
LD     := $(GCC09)/aslink

GAME   ?= 0
OUT    := obj$(GAME)
CFLAGS := -quiet -Os -W -Wall -I pff -DGAME=$(GAME)
OBJS   := $(addprefix $(OUT)/,crt0.rel libsi.rel screen.rel main.rel diskio.rel pff.rel font.rel)
HDRS   := phoenix.h loader.h pff/pff.h pff/diskio.h pff/pffconf.h

all: williams_boot_$(GAME).hex

$(OUT):
	mkdir -p $@

$(OUT)/%.rel: %.s | $(OUT)
	$(AS) -g -o $@ $<
$(OUT)/%.s: %.c $(HDRS) $(wildcard cmos_*.h) | $(OUT)
	$(CC1) $(CFLAGS) $< -o $@
$(OUT)/pff.s: pff/pff.c $(HDRS) | $(OUT)
	$(CC1) $(CFLAGS) $< -o $@
$(OUT)/%.rel: $(OUT)/%.s
	$(AS) -g -o $@ $<

$(OUT)/boot.ihx: $(OBJS)
	$(LD) -n -m -w -i -b .text=0xD000 -b .bss=0xB400 $@ $(OBJS) > $(OUT)/link.log 2>&1; \
	  cat $(OUT)/link.log; ! grep -q Undefined $(OUT)/link.log || (rm -f $@; false)
	@grep -E "^\.(text|bss) " $(OUT)/boot.map
	@python3 -c "import re,sys; m=open('$(OUT)/boot.map').read(); \
	  a,l=[int(x,16) for x in re.search(r'^\.text\s+([0-9A-F]+)\s+([0-9A-F]+)',m,re.M).groups()]; \
	  print('boot code ends at %04X' % (a+l)); \
	  b,n=[int(x,16) for x in re.search(r'^\.bss\s+([0-9A-F]+)\s+([0-9A-F]+)',m,re.M).groups()]; \
	  sys.exit(a+l > 0xFFF0 or b+n > 0xB600)"

williams_boot_$(GAME).hex: $(OUT)/boot.ihx ihx2hex.py
	python3 ihx2hex.py $< $@

clean:
	rm -rf obj* williams_boot_*.hex

.PHONY: all clean
