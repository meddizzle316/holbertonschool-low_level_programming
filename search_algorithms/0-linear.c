#include "search_algos.h"
/**
 * linear_search - a function that does a linear search on a set of integers
 * @array: given array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: either index value was found at or -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
