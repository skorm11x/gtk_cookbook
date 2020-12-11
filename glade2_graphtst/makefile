# HemoFlux V0.0.1
#
#Current Basic Makefile for HemoFlux Desktop Xplat app
#TODO: Include/configure a cmake build system to solve the directory build
#challenges from plain makefile
cc=GCC

SRCDIR = ./src
BINDIR = ./bin
XMLDIR = ./xml
CFLAG = -Wall -g -rdynamic
LIBS = -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic
OBJ = main.o main_el.o

hemoflux: ${OBJ}
	${CC} ./bin/main.o ./bin/main_el.o ${LIBS} -o ${BINDIR}/hemoflux

main.o:
	${CC} ${LIBS} -c ${SRCDIR}/main.c -o ${BINDIR}/main.o

main_el.o:
	${CC} ${LIBS} -c ${SRCDIR}/main_el.c -o ${BINDIR}/main_el.o

run:
	./bin/hemoflux

clean:
	rm -rf ${BINDIR} && mkdir bin