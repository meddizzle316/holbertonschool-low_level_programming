#!/usr/bin/env bash
touch $1
echo "#include \"hash_tables.h\"" >> $1
echo "/**" >> $1
echo " * function name - function description" >> $1
echo " * @parameters: description" >> $1
echo " * Return: return value" >> $1
echo " */" >> $1
echo "$2" >> $1
