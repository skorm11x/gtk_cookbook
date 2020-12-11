cc=GCC

SRCDIR = ./src
BINDIR = ./bin
XMLDIR = ./xml

glade1: $(SRCDIR)/glade1.c
	$(CC) $(SRCDIR)/glade1.c -rdynamic  -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic -o $(BINDIR)/glade1

run:
	./bin/glade1

clean:
	rm -f $(BINDIR)/glade1