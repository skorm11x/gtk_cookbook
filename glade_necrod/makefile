CC=gcc
SRCDIR = /src


all: necrod child

necrod: necrod.c
	$(CC) -std=c11 -pedantic necrod.c -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic -o necrod

child: child.c
	$(CC) -std=c11 -pedantic child.c -o child

clean:
	rm -f necrod child