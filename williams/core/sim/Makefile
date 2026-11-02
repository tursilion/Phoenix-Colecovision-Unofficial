# Verilator simulation of the Phoenix Williams cores.
#
#   make            gen/williams_soc.v (GHDL + Yosys), obj_dir/Vwilliams_phoenix
#                   for GAME (0 Robotron, 1 Joust, 6 Sinistar) and its loader
#   make sd<GAME>.img  an SD card with the ROM files (from ../../../<game>/roms)
#
#   obj_dir0/Vwilliams_phoenix --sd sd0.img --frames 120 --ppm out/f --ppm-every 30
#
# Each game has its own simulator (obj_dir<GAME>), loader image and card.
#
# Tools run in the docked-ise-147 Docker image; the C++ is compiled here
# against tools/verilator.

ROOT           := $(abspath ../../..)
DOCKER_IMAGE   ?= docked-ise-147
VERILATOR_ROOT ?= $(ROOT)/tools/verilator
DOCKER := docker run --rm -u $$(id -u):$$(id -g) -v $(ROOT):/w -w /w/williams/core/sim $(DOCKER_IMAGE)
PYTHON ?= $(if $(wildcard $(ROOT)/tools/python/venv/bin/python),$(ROOT)/tools/python/venv/bin/python,python3)

GAME ?= 0
M := ../rtl/mister
VHDL := ../rtl/cpu09/cpu09.vhd $(addprefix $(M)/, gen_ram.vhd CEGen.vhd pia6821.vhd sc1.vhd \
        cpu68.vhd hc55564.vhd williams_sound_board.vhd williams_cpu.vhd williams_soc.vhd)
# The board has mc6809is (as the cores); CPU09=1 builds it with cpu09 instead
# (half the size, but it breaks Robotron: kept for comparisons).
CPU09 ?= 0
ifeq ($(CPU09),1)
MC := 0
else
MC := 1
endif
ifeq ($(MC),1)
SOCV := gen/williams_soc_mc.v
VSRC := debug.vlt gen/williams_soc_mc.v dpram.v ../rtl/mister/mc6809is.v ../rtl/williams_phoenix.v
TBDEF :=
else
SOCV := gen/williams_soc.v
VSRC := debug.vlt debug_cpu09.vlt gen/williams_soc.v dpram.v ../rtl/williams_phoenix.v
TBDEF := -CFLAGS -DTB_CPU09
endif

OBJ ?= obj_dir$(GAME)
VFLAGS ?=
SIM := $(OBJ)/Vwilliams_phoenix

all: $(SIM) williams_loader$(GAME).hex

gen/williams_soc.v: $(VHDL)
	mkdir -p gen
	$(DOCKER) bash -c 'export PATH=/opt/oss-cad-suite/bin:$$PATH; yosys -q -m ghdl -p "ghdl --std=08 -fsynopsys -frelaxed -gSPEECH=1 $(VHDL) -e williams_soc; write_verilog -noattr gen/williams_soc.v"'

gen/williams_soc_mc.v: $(VHDL)
	mkdir -p gen
	$(DOCKER) bash -c 'export PATH=/opt/oss-cad-suite/bin:$$PATH; yosys -q -m ghdl -p "ghdl --std=08 -fsynopsys -frelaxed -gSPEECH=1 -gCPU09=0 $(VHDL) -e williams_soc; write_verilog -noattr gen/williams_soc_mc.v"'

williams_loader$(GAME).hex: FORCE
	$(MAKE) -C ../loader GAME=$(GAME)
	cmp -s ../loader/williams_boot_$(GAME).hex $@ || cp ../loader/williams_boot_$(GAME).hex $@

ROMDIR_0 := Robotron
ROMDIR_1 := joust
ROMDIR_6 := Sinistar
FOLDER_0 := ROBOTRON
FOLDER_1 := JOUST
FOLDER_6 := SINISTAR
sd$(GAME).img: mksd.py
	$(PYTHON) mksd.py $@ fat16 $(foreach f,$(wildcard $(ROOT)/$(ROMDIR_$(GAME))/roms/*),$(FOLDER_$(GAME))/$(notdir $(f))=$(f))

$(SIM): $(VSRC) tb.cpp
	$(DOCKER) verilator --cc --exe -O3 -Wno-fatal -Wno-lint -Wno-style --top-module williams_phoenix --Mdir $(OBJ) \
	  -DSIM_NETLIST $(VFLAGS) $(TBDEF) -GGAME=$(GAME) -GLOADER_FILE='"williams_loader$(GAME).hex"' $(VSRC) tb.cpp
	$(MAKE) -C $(OBJ) -f Vwilliams_phoenix.mk -j 8 VERILATOR_ROOT=$(VERILATOR_ROOT)

clean:
	rm -rf obj_dir* gen williams_loader*.hex game.txt

FORCE:
.PHONY: all clean FORCE
