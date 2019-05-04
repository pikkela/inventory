inventory: main.o print.o ask.o
	gcc main.o print.o ask.o -o inventory

main.o: main.c Header.h
	gcc -c main.c

print.o: print.c Header.h
	gcc -c print.c

ask.o: ask.c Header.h
	gcc -c ask.c

clean:
	rm -f *.o inventory


