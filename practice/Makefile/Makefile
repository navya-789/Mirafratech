cc=gcc

all:m.o 1.o 2.o
	$(cc)  m.o 1.o ./nav/2.o -o navya
m.o:m.c
	$(cc) -c m.c

1.o:1.c
	$(cc) -c 1.c

2.o:
	$(MAKE) -C ./nav/

