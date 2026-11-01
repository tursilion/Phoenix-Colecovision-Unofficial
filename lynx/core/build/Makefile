# Command-line ISE 14.7 build of the Phoenix Atari Lynx core.
#
#   make            synthesize, implement, and make the bitstream and core file
#   make loader     rebuild the boot loader (needs cc65)
#   make clean
#
# ISE_SETTINGS points at ISE's settings script; without it every ISE tool
# runs in the docked-ise-147 Docker image.  The core file goes to
# $(CORE_FILE); its slot number is in the name.
#
# Outputs (in this directory):
#   lynx_phoenix_top.bit  for JTAG (iMPACT)
#   lynx_phoenix_top.bin  raw bitstream
#   $(CORE_FILE)            for the Phoenix boot loader (SD card update)

ISE_SETTINGS ?= /opt/Xilinx/14.7/ISE_DS/settings64.sh
PART         := xc6slx16-2-csg324
TOP          := lynx_phoenix_top
CORE_FILE    ?= CORE12.PHX
CORE_NAME    := ATARI LYNX
CORE_ISSUE   ?= 257          # 0x0101 (bin2phx takes decimal)

REPO := ../../..
RTL  := $(REPO)/rtl
NRTL := ../rtl
LYNX := $(NRTL)/mister
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
  $(LYNX)/registerpackage.vhd \
  $(LYNX)/reg_mikey.vhd \
  $(LYNX)/reg_suzy.vhd \
  $(LYNX)/bus_savestates.vhd \
  $(LYNX)/reg_savestates.vhd \
  $(LYNX)/export.vhd \
  $(LYNX)/SyncFifoFallThrough.vhd \
  $(LYNX)/dummyregs.vhd \
  $(LYNX)/timer_module.vhd \
  $(LYNX)/timer.vhd \
  $(LYNX)/sound_module.vhd \
  $(LYNX)/sound.vhd \
  $(LYNX)/display_dma.vhd \
  $(LYNX)/cart.vhd \
  $(LYNX)/math.vhd \
  $(LYNX)/joypad.vhd \
  $(LYNX)/serial.vhd \
  $(LYNX)/gpu.vhd \
  $(LYNX)/cpu.vhd \
  $(LYNX)/memorymux.vhd \
  $(LYNX)/lynx_core.vhd \
  $(NRTL)/lynx_phoenix_top.vhd

VERILOG := \
  $(RTL)/HDMI/hdmidataencoder.v \
  $(NRTL)/lynx_phoenix.v

# Loaded with $readmemh by bare name, so they must be in the XST directory.
MEMFILES := lynx_loader.hex lynxboot.hex

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

all: $(CORE_FILE)

lynx_loader.hex: $(NRTL)/lynx_loader.hex
	cp $< $@

# The Lynx boot ROM (not in the repo's sources: lynx/lynxboot.img, 512
# bytes, MD5 fcd403db69f54290b51035d82f835e7b)
lynxboot.hex: $(REPO)/lynx/lynxboot.img
	python3 -c "d=open('$<','rb').read(); assert len(d)==512; open('$@','w').write('\\n'.join('%02x' % b for b in d) + '\\n')"


$(TOP).prj: Makefile
	rm -f $@
	for f in $(VHDL); do echo "vhdl work \"$$f\"" >> $@; done
	for f in $(VERILOG); do echo "verilog work \"$$f\"" >> $@; done

$(TOP).xst: Makefile
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
	  > $@

$(TOP).ngc: $(TOP).prj $(TOP).xst $(VHDL) $(VERILOG) $(MEMFILES)
	mkdir -p xst_tmp xst_hdp
	$(ISE) xst -ifn $(TOP).xst -ofn $(TOP).syr

$(TOP).ngd: $(TOP).ngc $(UCF) lynx.ucf
	cat $(UCF) lynx.ucf > $(TOP).ucf
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

loader:
	$(MAKE) -C ../loader

clean:
	rm -rf xst_tmp xst_hdp _xmsgs xlnx_auto_0_xdb *.prj *.xst *.syr *.ngc *.ngr *.lso \
	  *.ngd *.bld *.ncd *.pcf *.map *.mrp *.ngm *.par *.pad *.unroutes *.xpi *.ptwx \
	  *.twr *.twx *.bgn *.drc *.bit *.bin *.xml *.xrpt *.html *.csv *.txt \
	  *_pad.* *.PHX bin2phx $(MEMFILES) $(TOP).ucf \
	  webtalk.log usage_statistics_webtalk.html

.PHONY: all loader clean
