#!/bin/bash
# Fri Apr 27 23:49:28 AEST 2018 
for file in diagonal facebook1 helloworld modulus sudoku1 test times11 vowel1 fgetsTest strcpy1 times11 seqTestB
do
  echo $file.c
  rm $file
# -std=99 for 
# -lm for diagonal
  gcc $file.c  -o $file -std=c99 -lm -fpic -Wall
done
# tcc including.c  -vv -run -trigraphs
#gcc including.c  -o including   -MMD  -MF test1.txt
#gcc including.c  -o including   -MMD  -MF test1.txt    -H


