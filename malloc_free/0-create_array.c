#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * *create_array - creates an array of chars and initializes it with a specific char
 * @size: size of array
 * @c: char to fill entire array
 * Return: array of char with c of size size
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;

	x = size;
	if (size <= 0)
	{
		return (NULL);
	}
	char new_array[x];
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}
	char *ptr = new_array;

	return (ptr);
}
