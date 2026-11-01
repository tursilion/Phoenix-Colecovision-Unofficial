# Command-line ISE 14.7 build of the Phoenix Master System / Game Gear core.
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
#   sms_phoenix_top.bit  for JTAG (iMPACT)
#   sms_phoenix_top.bin  raw bitstream
#   $(CORE_FILE)            for the Phoenix boot loader (SD card update)

ISE_SETTINGS ?= /opt/Xilinx/14.7/ISE_DS/settings64.sh
PART         := xc6slx16-2-csg324
TOP          := sms_phoenix_top
CORE_FILE    ?= CORE13.PHX
CORE_NAME    := MASTER SYSTEM
CORE_ISSUE   ?= 257          # 0x0101 (bin2phx takes decimal)

REPO := ../../..
RTL  := $(REPO)/rtl
NRTL := ../rtl
SMS  := $(NRTL)/mister
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
  $(SMS)/T80/T80_Reg.vhd \
  $(SMS)/T80/T80_MCode.vhd \
  $(SMS)/T80/T80_ALU.vhd \
  $(SMS)/T80/T80.vhd \
  $(SMS)/T80/T80s.vhd \
  $(SMS)/dpram.vhd \
  $(SMS)/vdp_cram.vhd \
  $(SMS)/vdp_sprite_shifter.vhd \
  $(SMS)/vdp_sprites.vhd \
  $(SMS)/vdp_background.vhd \
  $(SMS)/vdp_main.vhd \
  $(SMS)/vdp.vhd \
  $(SMS)/io.vhd \
  $(SMS)/video.vhd \
  $(SMS)/system.vhd \
  $(NRTL)/sms_phoenix_top.vhd

VERILOG := \
  $(RTL)/HDMI/hdmidataencoder.v \
  $(SMS)/jt89/jt89.v \
  $(SMS)/jt89/jt89_mixer.v \
  $(SMS)/jt89/jt89_noise.v \
  $(SMS)/jt89/jt89_tone.v \
  $(SMS)/jt89/jt89_vol.v \
  $(NRTL)/jtopl/jt2413.v \
  $(NRTL)/jtopl/jtopl_acc.v \
  $(NRTL)/jtopl/jtopl_csr.v \
  $(NRTL)/jtopl/jtopl_div.v \
  $(NRTL)/jtopl/jtopl_eg.v \
  $(NRTL)/jtopl/jtopl_eg_cnt.v \
  $(NRTL)/jtopl/jtopl_eg_comb.v \
  $(NRTL)/jtopl/jtopl_eg_ctrl.v \
  $(NRTL)/jtopl/jtopl_eg_final.v \
  $(NRTL)/jtopl/jtopl_eg_pure.v \
  $(NRTL)/jtopl/jtopl_eg_step.v \
  $(NRTL)/jtopl/jtopl_exprom.v \
  $(NRTL)/jtopl/jtopl_lfo.v \
  $(NRTL)/jtopl/jtopl_logsin.v \
  $(NRTL)/jtopl/jtopl_noise.v \
  $(NRTL)/jtopl/jtopl_op.v \
  $(NRTL)/jtopl/jtopl_pg.v \
  $(NRTL)/jtopl/jtopl_pg_comb.v \
  $(NRTL)/jtopl/jtopl_pg_inc.v \
  $(NRTL)/jtopl/jtopl_pg_rhy.v \
  $(NRTL)/jtopl/jtopl_pg_sum.v \
  $(NRTL)/jtopl/jtopl_pm.v \
  $(NRTL)/jtopl/jtopl_sh.v \
  $(NRTL)/jtopl/jtopl_sh_rst.v \
  $(NRTL)/jtopl/jtopl_single_acc.v \
  $(NRTL)/jtopl/jtopl_slot_cnt.v \
  $(NRTL)/jtopl/jtopl_timers.v \
  $(NRTL)/jtopl/jtopll_mmr.v \
  $(NRTL)/jtopl/jtopll_reg.v \
  $(NRTL)/jtopl/jtopll_reg_ch.v \
  $(NRTL)/fm_ym2413.v \
  $(NRTL)/sms_phoenix.v

# Loaded with $readmemh by bare name, so they must be in the XST directory.
MEMFILES := sms_loader.hex

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

sms_loader.hex: $(NRTL)/sms_loader.hex
	cp $< $@


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

$(TOP).ngd: $(TOP).ngc $(UCF) sms.ucf
	cat $(UCF) sms.ucf > $(TOP).ucf
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
