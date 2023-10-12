#!/bin/bash
gcc -c "*.c" -o main.o   
ar -rcs liball.a main.o
