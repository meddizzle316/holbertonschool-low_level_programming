#!/bin/bash
gcc -c *.c -o $1.o 
ar -rcs liball.a *.o
