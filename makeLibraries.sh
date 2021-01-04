#!/bin/bash
for file in ihex.o byte_utils.o srec.o
do
 echo $file
 gcc shared -o lib$file.so $file
done

