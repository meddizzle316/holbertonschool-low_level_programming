#include "main.h"
/**
 * print_binary - prints a binary without arrays, /, % or malloc
 * @n: integer to be printed into binary
 * Return: always void
 */
void print_binary(unsigned long int n)
{
	unsigned int x;

	x = 0;
	if (n > 0)
	{
		x = n & 1;
		n = n >> 1;
		if (n != 0)
		{
			print_binary(n);
		}
	}
	_putchar('0' + x);
}
