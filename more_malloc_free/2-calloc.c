#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: the amount of elements in the array
 * @size: the size of the elements
 * Return: an initialized array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array;

	new_array = (char *) malloc((size * nmemb) + 1);
	if (new_array == NULL || nmemb <= 0 || size <= 0)
	{
		free(new_array);
		return (NULL);
	}
	for ( ; new_array; new_array++)
	{
		*new_array = 0;
	}
	*new_array = '\0';
	return (new_array);
}
