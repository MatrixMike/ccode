#!/bin/bash
# Fri Apr 27 23:49:28 AEST 2018 
for file in { vowel1 sudoku1 times11 diagonal facebook1 test modulus helloworld including }
do
  echo $file.c
  rm $file
# -std=99 for 
# -lm for diagonal
  gcc $file.c  -o $file -std=c99 -lm
done
tcc including.c  -vv -run -trigraphs
gcc including.c  -o including   -MMD  -MF test1.txt
gcc including.c  -o including   -MMD  -MF test1.txt    -H


