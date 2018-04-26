  #!/bin/bash
for file in { vowel1 sudoku1 times11 }
do
  echo $file.c
  gcc $file.c  -o $file
done


