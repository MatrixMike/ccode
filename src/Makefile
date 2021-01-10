IDIR =../include
# Which compiler
CC=gcc
#CC=tcc
#CFLAGS=-I$(IDIR)
C99MODE=-std=c99
LFLAGS=-lm
ODIR =obj
LDIR =../lib

# Options for development : check -ansi for comment style
CFLAGS=-g -Wall  -lm 

all:	times11 test sudoku1 vowel1 seqTestB logicAnd facebook1 diagonal hellomake

# Local Libraries
MYLIB=mylib.a

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: test.c  
	$(CC) -o $(ODIR)/test  test.c -I.

vowel1: vowel1.c  
	$(CC) -o $(ODIR)/vowel1  vowel1.c -I.

logicAnd: logicAnd.c  
	$(CC) $(C99MODE) -o $(ODIR)/logicAnd  logicAnd.c -I.

facebook1: facebook1.c  
	$(CC) -o $(ODIR)/facebook1  facebook1.c -I.

diagonal: diagonal.c  
	$(CC) -o $(ODIR)/diagonal  diagonal.c $(LFLAGS) -I.

seqTestB: seqTestB.c  
	$(CC) $(C99MODE) -o $(ODIR)/seqTestB seqTestB.c  -I.

sudoku1: sudoku1.c  
	$(CC) -o $(ODIR)/sudoku1 sudoku1.c  -I.

times11: times11.c  
	$(CC) -o $(ODIR)/times11 times11.c  -I.

hellomake: helloworld.c
	$(CC) -o $(ODIR)/hellomake helloworld.c 

#hellomake: $(OBJ)
#	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~  $(hellomake)

# DO NOT DELETE
