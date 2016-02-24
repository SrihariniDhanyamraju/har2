all: harini

harini: sort.o sortmethod.o
	gcc sort.o sortmethod.o -o harini.o

sort.o: sort.c
	gcc -c sort.c

sortmethod.o: sortmethod.c
	gcc -c sortmethod.c
