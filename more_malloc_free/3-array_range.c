#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *new_array;
	int length;

	if (max >= 0 && min >= 0)
	{
		length = (max - min) + 1;
	}
	if (max < 0 && min < 0)
	{
		length = -((max - min) - 1);
	}

	new_array = (int *)malloc(sizeof(int) * length);
	if (min > max || new_array == NULL)
	{
		free(new_array);
		new_array = NULL;
		return (new_array);
	}
	for (i = 0; i < length; i++, min++)
	{
		new_array[i] = min;
	}
	return (new_array);
}
