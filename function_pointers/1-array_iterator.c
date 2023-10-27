#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a paremeter
 * @array: given array
 * @size: size of array
 * @action: function pointer to execute
 * Return: return value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
