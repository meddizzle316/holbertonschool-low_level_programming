#!/bin/bash

for i in *.c
do
	gcc -c "$i" -o "${i%.c}.o"
	ar -rcs liball.a "${i%.c}.o"
done
