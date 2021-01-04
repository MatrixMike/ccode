all: sudoku1

IDIR =../include
# Which compiler
CC=gcc

#CFLAGS=-I$(IDIR)

ODIR =obj
LDIR =../lib

# Options for development : check -ansi for comment style
CFLAGS=-g -Wall  -lm 


# Local Libraries
MYLIB=mylib.a

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sudoku1: sudoku1.c hellofunc.c sudoku1.h
	gcc -o sudoku1 sudoku1.c hellofunc.c -I.

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~  $(hellomake)

