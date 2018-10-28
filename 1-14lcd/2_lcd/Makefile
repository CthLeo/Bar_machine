lcd_2.bin: start.o led.o sdram_init.o lcd.o main.o
	arm-linux-ld -Tlink.lds -o lcd_2.elf $^
	arm-linux-objcopy -O binary lcd_2.elf lcd_2.bin
	arm-linux-objdump -D lcd_2.elf > lcd_2_elf.dis
	gcc mkv210_image.c -o mkx210
	./mkx210 lcd_2.bin 210.bin
	
%.o : %.S
	arm-linux-gcc -o $@ $< -c -nostdlib

%.o : %.c
	arm-linux-gcc -o $@ $< -c -nostdlib

clean:
	rm *.o *.elf *.bin *.dis mkx210 -f

	
	