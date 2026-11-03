# Verilator simulation of the Phoenix Mr. Do! core.
#
#   make             build the simulator (obj_dir/Vmrdo_phoenix)
#   make sd.img      SD card image with the ROM set in MRDOFIX/
#   make run         boot and run 600 frames, every 30th frame to out/
#
# Needs Verilator 5 (the OSS CAD Suite, also in the docked-ise-147 image).
# The ROMs are read from ROMSET.

VERILATOR ?= verilator
PYTHON    ?= python3
ROMSET    ?= ../..

RTL  := ../rtl
SRCS := $(RTL)/mrdo_phoenix.v $(RTL)/mrdo_main.v $(RTL)/mrdo_video.v \
        $(RTL)/sn76489.v $(wildcard $(RTL)/tv80/*.v)
BOOTHEX := mrdo_boot0.hex mrdo_boot1.hex mrdo_boot2.hex mrdo_boot3.hex
ROMFILES := $(filter-out $(ROMSET)/core,$(wildcard $(ROMSET)/*))

SIM  := obj_dir/Vmrdo_phoenix

all: $(SIM)

$(BOOTHEX): mrdo_boot%.hex: $(RTL)/mrdo_boot%.hex
	cp $< $@
font64.hex: $(RTL)/font64.hex
	cp $< $@

# Two steps, so the C++ can be compiled with another compiler than the one
# next to Verilator (the docked-ise-147 image's g++ 7 is too old):
#   make gen              (where Verilator is)
#   make VERILATOR_ROOT=... (anywhere with a recent g++ and Verilator's
#                          include/ and bin/ directories)
gen: obj_dir/Vmrdo_phoenix.mk

obj_dir/Vmrdo_phoenix.mk: $(SRCS) tb.cpp $(BOOTHEX) font64.hex
	$(VERILATOR) --cc --exe -O3 -Wno-fatal -Wno-lint -Wno-style \
	  --top-module mrdo_phoenix $(SRCS) tb.cpp
	touch $@

$(SIM): obj_dir/Vmrdo_phoenix.mk tb.cpp
	$(MAKE) -C obj_dir -f Vmrdo_phoenix.mk

sd.img: mkimg.py
	$(PYTHON) mkimg.py $@ $(foreach f,$(ROMFILES),MRDOFIX/$(notdir $(f))=$(f))

run: $(SIM) sd.img
	mkdir -p out
	$(SIM) --sd sd.img --frames 600 --ppm out/f --ppm-every 30 --wav out/audio.wav

clean:
	rm -rf obj_dir obj_vhdl out *.img *.hex

.PHONY: all gen run clean
