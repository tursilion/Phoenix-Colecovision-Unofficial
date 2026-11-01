# Verilator simulation of the Phoenix Lynx core.
#
#   make           gen/lynx_core.v (GHDL + Yosys), obj_dir/Vlynx_phoenix and
#                  the ROM images (lynxboot.hex from ../../lynxboot.img)
#   make loader    loader ROM = the real menu (../rtl/lynx_loader.hex)
#   make sd.img    an SD card with hello/hello.lnx and the cache test (FAT16)
#   make stub      loader ROM = a stub that starts the game (STUB_BANK0 =
#                  the cart's page size, 0x0400 for hello.lnx)
#
#   obj_dir/Vlynx_phoenix --cart hello/hello.lnx --frames 120 --ppm out/f --ppm-every 30
#
# Tools run in the docked-ise-147 Docker image; the C++ is compiled here
# against tools/verilator.

ROOT           := $(abspath ../../..)
DOCKER_IMAGE   ?= docked-ise-147
VERILATOR_ROOT ?= $(ROOT)/tools/verilator
DOCKER := docker run --rm -u $$(id -u):$$(id -g) -v $(ROOT):/w -w /w/lynx/core/sim $(DOCKER_IMAGE)

M := ../rtl/mister
VHDL := $(addprefix $(M)/, registerpackage.vhd reg_mikey.vhd reg_suzy.vhd bus_savestates.vhd \
        reg_savestates.vhd export.vhd SyncFifoFallThrough.vhd dummyregs.vhd timer_module.vhd \
        timer.vhd sound_module.vhd sound.vhd display_dma.vhd cart.vhd math.vhd joypad.vhd \
        serial.vhd gpu.vhd cpu.vhd memorymux.vhd lynx_core.vhd)
VSRC := gen/lynx_core.v ../rtl/lynx_phoenix.v

SIM := obj_dir/Vlynx_phoenix

all: $(SIM) lynxboot.hex

gen/lynx_core.v: $(VHDL)
	mkdir -p gen
	$(DOCKER) bash -c 'export PATH=/opt/oss-cad-suite/bin:$$PATH; yosys -q -m ghdl -p "ghdl --std=08 -fsynopsys -frelaxed $(VHDL) -e lynx_core; write_verilog -noattr gen/lynx_core.v"'

lynxboot.hex: ../../lynxboot.img
	python3 -c "d=open('$<','rb').read(); open('$@','w').write('\n'.join('%02x' % b for b in d) + '\n')"

# Stub loader: set the page size, start the game, loop.
STUB_BANK0 ?= 0x0400
stub:
	python3 mkstub.py $(STUB_BANK0) lynx_loader.hex

loader:
	cp ../rtl/lynx_loader.hex lynx_loader.hex

PYTHON ?= $(if $(wildcard $(ROOT)/tools/python/venv/bin/python),$(ROOT)/tools/python/venv/bin/python,python3)
sd.img: hello/hello.lnx tests/cachetest/CACHE512.LNX mksd.py
	$(PYTHON) mksd.py $@ fat16 HELLO.LNX=hello/hello.lnx GAMES/HELLO2.LNX=hello/hello.lnx \
	  CACHE512.LNX=tests/cachetest/CACHE512.LNX

tests/cachetest/CACHE512.LNX:
	$(MAKE) -C tests/cachetest

$(SIM): $(VSRC) tb.cpp
	$(DOCKER) verilator --cc --exe -O3 -Wno-fatal -Wno-lint -Wno-style --top-module lynx_phoenix \
	  -GLOADER_FILE='"lynx_loader.hex"' -GBOOT_FILE='"lynxboot.hex"' $(VSRC) tb.cpp
	$(MAKE) -C obj_dir -f Vlynx_phoenix.mk -j 8 VERILATOR_ROOT=$(VERILATOR_ROOT)

clean:
	rm -rf obj_dir gen lynxboot.hex

.PHONY: all clean stub loader
