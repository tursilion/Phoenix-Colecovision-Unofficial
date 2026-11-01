# Master System test cartridge (SDCC 4.2): hello.sms, 32K.
SDCC := sdcc -mz80 --std-sdcc99
hello.sms: crt0.s hello.c font.c
	sdasz80 -plosgff crt0.rel crt0.s
	$(SDCC) -c -o hello.rel hello.c
	$(SDCC) -c -o font.rel font.c
	$(SDCC) --no-std-crt0 --code-loc 0x0100 --data-loc 0xC000 -o hello.ihx crt0.rel hello.rel font.rel
	makebin -s 32768 hello.ihx $@
clean:
	rm -f *.rel *.lst *.sym *.asm *.ihx *.map *.noi *.lk *.sms
