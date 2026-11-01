# Master System ROM cache test cartridge (SDCC 4.2): CACHE1M.SMS, 1M.
SDCC := sdcc -mz80 --std-sdcc99
CACHE1M.SMS: crt0.s main.c font.c mkcart.py
	sdasz80 -plosgff crt0.rel crt0.s
	$(SDCC) -c -o main.rel main.c
	$(SDCC) -c -o font.rel font.c
	$(SDCC) --no-std-crt0 --code-loc 0x0100 --data-loc 0xC000 -o prog.ihx crt0.rel main.rel font.rel
	makebin -s 16384 prog.ihx prog.bin
	python3 mkcart.py prog.bin $@
clean:
	rm -f *.rel *.lst *.sym *.asm *.ihx *.map *.noi *.lk *.bin *.SMS
