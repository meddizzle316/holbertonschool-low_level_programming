#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of int with newline
 * @a: array of int
 * @n: starting point 
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i ++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
			printf("%d", a[i]);
	}
	_putchar('\n');	
}
