# Command-line ISE 14.7 build of the Phoenix Williams cores: one RTL, three
# games, each in its own core slot.
#
#   make            all three: CORE14.PHX (Robotron), CORE15.PHX (Joust),
#                   CORE16.PHX (Sinistar)
#   make robotron   (or joust, sinistar) just one
#   make clean
#
# Each game builds in its own directory (robotron/, joust/, sinistar/),
# with GAME set on the top level and its own loader (../loader, gcc6809).
# ISE_SETTINGS points at ISE's settings script; without it every ISE tool
# runs in the docked-ise-147 Docker image.
#
# Outputs (in each game's directory):
#   williams_phoenix_top.bit  for JTAG (iMPACT)
#   williams_phoenix_top.bin  raw bitstream
#   COREnn.PHX                for the Phoenix boot loader (SD card update);
#                             also copied here

ISE_SETTINGS ?= /opt/Xilinx/14.7/ISE_DS/settings64.sh
PART         := xc6slx16-2-csg324
TOP          := williams_phoenix_top
CORE_ISSUE   ?= 257          # 0x0101 (bin2phx takes decimal)

# The game (set by the top-level targets for the sub-make in its directory)
GAME         ?= 0
ifeq ($(GAME),0)
CORE_FILE    := CORE14.PHX
CORE_NAME    := ROBOTRON
else ifeq ($(GAME),1)
CORE_FILE    := CORE15.PHX
CORE_NAME    := JOUST
else
CORE_FILE    := CORE16.PHX
CORE_NAME    := SINISTAR
endif

ifeq ($(SUB),1)
REPO := ../../../..
NRTL := ../../rtl
LOADER := ../../loader
else
REPO := ../../..
endif
RTL  := $(REPO)/rtl
MIS  := $(NRTL)/mister
UCF  := $(RTL)/phoenix.ucf

VHDL := \
  $(RTL)/dcm_pll/clk_sys_pll.vhd \
  $(RTL)/HDMI/encoder.vhd \
  $(RTL)/HDMI/hdmidelay.vhd \
  $(RTL)/HDMI/hdmi.vhd \
  $(RTL)/HDMI/hdmi_out_xilinx.vhd \
  $(RTL)/peripheral/ps2kbd_pkg.vhd \
  $(RTL)/peripheral/ps2kbd.vhd \
  $(RTL)/peripheral/keyboard.vhd \
  $(RTL)/peripheral/snespad/snespad_pack-p.vhd \
  $(RTL)/peripheral/snespad/snespad_comp-pack.vhd \
  $(RTL)/peripheral/snespad/snespad_ctrl.vhd \
  $(RTL)/peripheral/snespad/snespad_pad.vhd \
  $(RTL)/peripheral/snespad/snespad.vhd \
  $(NRTL)/cv_pads.vhd \
  $(NRTL)/cpu09/cpu09.vhd \
  $(MIS)/gen_ram.vhd \
  $(MIS)/dpram.vhd \
  $(MIS)/CEGen.vhd \
  $(MIS)/pia6821.vhd \
  $(MIS)/sc1.vhd \
  $(MIS)/cpu68.vhd \
  $(MIS)/hc55564.vhd \
  $(MIS)/williams_sound_board.vhd \
  $(MIS)/williams_cpu.vhd \
  $(MIS)/williams_soc.vhd \
  $(NRTL)/williams_phoenix_top.vhd

VERILOG := \
  $(RTL)/HDMI/hdmidataencoder.v \
  $(MIS)/mc6809is.v \
  $(NRTL)/williams_phoenix.v

# Loaded with $readmemh by bare name, so they must be in the XST directory.
MEMFILES := williams_loader.hex

# Bitstream options for the Phoenix multiboot loader.  These reproduce the
# configuration words of the shipped ColecoVision core (CORE01.PHX), which
# differ slightly from Utils/src_bin2phx/README.md: no Reset_on_err, the
# default watchdog (0xFFFF), and DonePipe.
BITGEN_OPTS := \
  -g CRC:Enable \
  -g DonePipe:Yes \
  -g next_config_register_write:Enable \
  -g SPI_buswidth:1 \
  -g Binary:Yes \
  -g ConfigRate:26 \
  -g UnusedPin:Pullnone

# ISE tools come from ISE_SETTINGS when ISE is installed; otherwise each
# tool runs in the docked-ise-147 Docker image with the repo mounted.
ifneq ($(wildcard $(ISE_SETTINGS)),)
ISE = . $(ISE_SETTINGS) > /dev/null &&
else
ISE_IMAGE ?= docked-ise-147
ISE_LIC   ?= $(HOME)/Docked-ISE-147/Xilinx.lic
REPO_ABS  := $(abspath $(REPO))
ISE = docker run --rm -u 0 -v $(REPO_ABS):/workspace \
  -v $(ISE_LIC):/root/.Xilinx/Xilinx.lic \
  -w /workspace/$(patsubst $(REPO_ABS)/%,%,$(CURDIR)) $(ISE_IMAGE)
endif

ifneq ($(SUB),1)
# Top level: each game in its own directory

GAMES := robotron joust sinistar
G_robotron := 0
G_joust    := 1
G_sinistar := 6

all: $(GAMES)

$(GAMES):
	mkdir -p $@
	$(MAKE) -C $@ -f ../Makefile SUB=1 GAME=$(G_$@) one
	cp $@/CORE*.PHX .

clean:
	rm -rf $(GAMES) CORE*.PHX

.PHONY: all clean $(GAMES)

else
# Sub-make: one game, in its directory

one: $(CORE_FILE)

williams_loader.hex: FORCE
	$(MAKE) -C $(LOADER) GAME=$(GAME)
	cmp -s $(LOADER)/williams_boot_$(GAME).hex $@ || cp $(LOADER)/williams_boot_$(GAME).hex $@

$(TOP).prj: ../Makefile
	rm -f $@
	for f in $(VHDL); do echo "vhdl work \"$$f\"" >> $@; done
	for f in $(VERILOG); do echo "verilog work \"$$f\"" >> $@; done

# keep_hierarchy soft: XST's flattened netlist of this design is wrong (the
# board's SRAM addresses come out scrambled: sim/postsyn shows it), while
# the same design kept in hierarchy matches the RTL.
$(TOP).xst: ../Makefile
	printf '%s\n' \
	  'set -tmpdir xst_tmp' \
	  'set -xsthdpdir xst_hdp' \
	  'run' \
	  '-ifn $(TOP).prj' \
	  '-ofn $(TOP)' \
	  '-ofmt NGC' \
	  '-p $(PART)' \
	  '-top $(TOP)' \
	  '-opt_mode Speed' \
	  '-opt_level 1' \
	  '-generics {GAME=$(GAME)}' \
	  '-keep_hierarchy soft' \
	  > $@

$(TOP).ngc: $(TOP).prj $(TOP).xst $(VHDL) $(VERILOG) $(MEMFILES)
	mkdir -p xst_tmp xst_hdp
	$(ISE) xst -ifn $(TOP).xst -ofn $(TOP).syr

$(TOP).ngd: $(TOP).ngc $(UCF) ../williams.ucf
	cat $(UCF) ../williams.ucf > $(TOP).ucf
	$(ISE) ngdbuild -p $(PART) -uc $(TOP).ucf $(TOP).ngc $@

$(TOP)_map.ncd: $(TOP).ngd
	$(ISE) map -p $(PART) -w -ol high -pr b -o $@ $< $(TOP).pcf

$(TOP).ncd: $(TOP)_map.ncd
	$(ISE) par -w -ol high $< $@ $(TOP).pcf
	$(ISE) trce -v 3 -u 10 $@ $(TOP).pcf -o $(TOP).twr

$(TOP).bit: $(TOP).ncd
	$(ISE) bitgen -w $(BITGEN_OPTS) $< $@ $(TOP).pcf

$(TOP).bin: $(TOP).bit

bin2phx: $(REPO)/Utils/src_bin2phx/bin2phx.c
	gcc -Wall -O2 -o $@ $<

$(CORE_FILE): $(TOP).bit bin2phx
	./bin2phx $(TOP).bin $@ "$(CORE_NAME)" $(CORE_ISSUE)

FORCE:

.PHONY: one FORCE

endif
