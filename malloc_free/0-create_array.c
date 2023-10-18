#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * *create_array - creates an array of chars and initializes it with a char
 * @size: size of array
 * @c: char to fill entire array
 * Return: array of char with c of size size
 */
char *create_array(unsigned int size, char c)
{

	char *new_array;
	unsigned int i;

	new_array = malloc(sizeof(char) * (size));

	if (size <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}

	return (new_array);
}
