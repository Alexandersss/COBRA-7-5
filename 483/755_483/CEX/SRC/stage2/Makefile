
clean:
	rm -f *~ *.*~ *.o *.elf *.bin *.release *.debug *.map *.lzma ../lv2/src/*.o ../lv1/src/*.o ../debug/src/*.o

all:
	rm -f *.o *.elf *.bin *.release *.debug *.cex *.dex *.map *.lzma ../lv2/src/*.o ../lv1/src/*.o ../debug/src/*.o
	make -f Makefile_483C --no-print-directory
	

	rm -f *.o *.elf *.bin *.map *.lzma ../lv2/src/*.o ../lv1/src/*.o ../debug/src/*.o
	make -f Makefile_483C_DEBUG --no-print-directory


re:
	rm -f *.o *.elf *.bin *.release *.map *.lzma ../lv2/src/*.o ../lv1/src/*.o ../debug/src/*.o
	make -f Makefile_483C --no-print-directory
	

dbg:
	rm -f *.o *.elf *.bin *.debug *.map *.lzma ../lv2/src/*.o ../lv1/src/*.o ../debug/src/*.o
	make -f Makefile_483C_DEBUG --no-print-directory
	rm -f *.o *.elf *.bin  *.map *.lzma ../lv2/src/*.o ../lv1/src/*.o ../debug/src/*.o
