#!/usr/bin/env bash
touch "$1"
echo "#include \"function_pointers.h\"" >> "$1"
echo "#include <stdio.h>" >> "$1"
echo "#include <stdlib.h>" >> "$1"
echo "#include <stddef.h>" >> "$1"
echo "/**" >> "$1"
echo " * function name - function description" >> "$1"
echo " * @parameters: description" >> "$1"
echo " * Return: return value" >> "$1"
echo " */" >> "$1"

