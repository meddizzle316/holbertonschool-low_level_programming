#include "main.h"
#include <stdio.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
void print_diagsums(int *a, int size)
{
	int result, i, x;

	result = x = 0;
	for (i = 0; i < size * size; i++)
	{

			if (a[i] == a[x])
			{
				result += a[i];
				x++;
			}
	}
}
