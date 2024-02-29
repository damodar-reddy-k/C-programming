runme.out:amain.o astack.o
	gcc -o run amain.o astack.o
amain.o:amain.c
	gcc -c amain.c
astack.o:astack.c
	gcc -c astack.c
clean:astack.o amain.o
	rm astack.o amain.o
