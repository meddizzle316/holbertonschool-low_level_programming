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
	unsigned int i;
	void **new_array;
	int *ptr;
	int zero;

	zero = 0;
	ptr = &zero;
	new_array = malloc((size * nmemb));
	if (new_array == NULL || nmemb <= 0 || size <= 0)
	{
		free(new_array);
		return (NULL);
	}
	for (i = 0; i < nmemb; new_array++)
	{
		new_array[i] = ptr;
	}
	return (new_array);
}
