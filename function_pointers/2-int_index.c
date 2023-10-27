#include "function_pointers.h"
/**
 * int_index - function that searches for a specified integer
 * @array: given array
 * @size: size of array
 * @cmp: function pointer
 * Return: return value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size && size > 0; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
