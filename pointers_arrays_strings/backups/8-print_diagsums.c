#include "main.h"
#include <stdio.h>
/**
 * print_diagsu -- prints the diagonals in an array of ints
 * @a: pointer to arrays of ints
 * @size: size of arrays
 *
 * Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int leftresult, rightresult, i, x, row, col;

	leftresult = rightresult = x = 0;
	for (i = 0; i < size * size; i++)
	{
		row = i / (size + 1);
		col = i % (size);
		if (row == x)
		{
			leftresult += a[i];
			x++;
		}
	}
	x = size - 1;
	for (i = 0; i < size * size; i++)
	{
		row = i / (size + 1);
		col = i % (size);

		if (col == x)
		{
			rightresult += a[i];
			x--;
		}
	}
	printf("%d, %d\n", leftresult, rightresult);
}
