#all: sudoku1

IDIR =../include
# Which compiler
#CC=gcc
CC=tcc
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

vowel1: vowel1.c  
	$(CC) -o vowel1  vowel1.c -I.

sudoku1: sudoku1.c  
	$(CC) -o sudoku1 sudoku1.c  -I.


hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~  $(hellomake)

# DO NOT DELETE
