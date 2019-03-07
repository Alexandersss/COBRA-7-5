
clean:
	rm -f *DEBUG *.o *.elf *.self *.483 *.bin *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

all:
	rm -f *.o *.elf *.self *.483 *.bin *.483c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_483C --no-print-directory

	rm -f *.o *.elf *.483 *.bin *.483c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_483C_dbg --no-print-directory

	rm -f *.o *.elf  *.483 *.bin *.483c *.483d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

dbg:
	rm -f *.o *.elf *.self *.483 *.bin *.483c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_483C_dbg --no-print-directory

	rm -f *.o *.elf  *.483 *.bin *.483c *.483d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o

re:
	rm -f *.o *.elf *.self *.483 *.bin *.483c *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
	make -f Makefile_483C --no-print-directory

	rm -f *.o *.elf  *.483 *.bin *.483c *.483d *.map ../lv1/src/*.o ../debug/src/*.o ../lv2/src/*.o
