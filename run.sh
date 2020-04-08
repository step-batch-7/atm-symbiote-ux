#! /bin/bash

rm -rf bin/*
rm -rf *.o
gcc -c *.c
gcc -o bin/$1 *.c
rm -rf *.o