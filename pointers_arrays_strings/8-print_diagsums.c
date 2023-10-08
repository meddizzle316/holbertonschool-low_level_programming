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
	int leftresult, rightresult, i, x, y;

	leftresult = rightresult = x = 0;
	y = size - 1;
	for (i = 0; i < size * size; i++)
	{
		leftresult += *(a + i * size + x);
		rightresult += *(a + i * size + y);
		x++;
		y--;
	}
	printf("%d, %d\n", leftresult, rightresult);
}
