#! /bin/bash

rm -rf *.o
gcc -c *.c
gcc -o main.out *.c
rm -rf *.o