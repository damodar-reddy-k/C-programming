runme.out:lmain.o lstack.o
	gcc -o run lmain.o lstack.o
lmain.o:lmain.c
	gcc -c lmain.c
lstack.o:lstack.c
	gcc -c lstack.c
clean:lstack.o lmain.o
	rm lstack.o lmain.o
