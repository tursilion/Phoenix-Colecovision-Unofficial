# Verilator simulation of the Phoenix Master System / Game Gear core.
#
#   make            gen/system.v and gen/video.v (GHDL + Yosys), the
#                   simulator obj_dir/Vsms_phoenix, the loader ROM image
#   make sd.img     an SD card with the test cartridges (FAT16)
#
#   obj_dir/Vsms_phoenix --sd sd.img --frames 60 --ppm out/f --ppm-every 20
#
# Tools run in the docked-ise-147 Docker image; the C++ is compiled here
# against tools/verilator.

ROOT           := $(abspath ../../..)
DOCKER_IMAGE   ?= docked-ise-147
VERILATOR_ROOT ?= $(ROOT)/tools/verilator
DOCKER := docker run --rm -u $$(id -u):$$(id -g) -v $(ROOT):/w -w /w/MasterSystem/core/sim $(DOCKER_IMAGE)
PYTHON ?= $(if $(wildcard $(ROOT)/tools/python/venv/bin/python),$(ROOT)/tools/python/venv/bin/python,python3)

M := ../rtl/mister
SYSVHDL := $(addprefix $(M)/, T80/T80_Reg.vhd T80/T80_MCode.vhd T80/T80_ALU.vhd T80/T80.vhd T80/T80s.vhd) \
           vhdl/dpram.vhd vhdl/vdp_cram.vhd $(addprefix $(M)/, \
           vdp_sprite_shifter.vhd vdp_sprites.vhd vdp_background.vhd vdp_main.vhd \
           vdp.vhd io.vhd system.vhd)
VSRC := gen/system.v gen/video.v ../rtl/sms_phoenix.v ../rtl/fm_ym2413.v \
        $(wildcard ../rtl/jtopl/*.v) $(wildcard $(M)/jt89/*.v)

SIM := obj_dir/Vsms_phoenix

all: $(SIM) sms_loader.hex

gen/system.v: $(SYSVHDL)
	mkdir -p gen
	$(DOCKER) bash -c 'export PATH=/opt/oss-cad-suite/bin:$$PATH; yosys -q -m ghdl -p "ghdl --std=08 -fsynopsys -frelaxed -gFM_EN=1 -gMAX_SPPL=7 $(SYSVHDL) -e system; write_verilog -noattr gen/system.v"'

gen/video.v: $(M)/video.vhd
	mkdir -p gen
	$(DOCKER) bash -c 'export PATH=/opt/oss-cad-suite/bin:$$PATH; yosys -q -m ghdl -p "ghdl --std=08 -fsynopsys -frelaxed $(M)/video.vhd -e video; write_verilog -noattr gen/video.v"'

sms_loader.hex: ../rtl/sms_loader.hex
	cp $< $@

sd.img: mksd.py $(wildcard tests/*/*.sms)
	$(PYTHON) mksd.py $@ fat16 $(foreach f,$(wildcard tests/*/*.sms),$(shell basename $(f) | tr a-z A-Z)=$(f))

$(SIM): $(VSRC) tb.cpp
	$(DOCKER) verilator --cc --exe -O3 -Wno-fatal -Wno-lint -Wno-style --top-module sms_phoenix \
	  -DSIM_NETLIST -GLOADER_FILE='"sms_loader.hex"' $(VSRC) tb.cpp
	$(MAKE) -C obj_dir -f Vsms_phoenix.mk -j 8 VERILATOR_ROOT=$(VERILATOR_ROOT)

clean:
	rm -rf obj_dir gen sms_loader.hex

.PHONY: all clean
