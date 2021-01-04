all: sudoku1

IDIR =../include
# Which compiler
CC=gcc

CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

# Options for development
CFLAGS=-g -Wall -ansi

# Options for release
# CFLAGS=-O -Wall -ansi

# Local Libraries
MYLIB=mylib.a

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

sudoku1: sudoku1.c hellofunc.c sudoku1.h
	gcc -o sudoku1 sudoku1.c hellofunc.c -I.

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~  $(hellomake)

