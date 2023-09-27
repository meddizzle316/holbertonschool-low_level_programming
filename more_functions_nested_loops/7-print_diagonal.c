#include "main.h"
/**
 * print_diagonal - draws diagonal line on terminal
 * @n: number of diagonals
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int x;
	int spaces;

	spaces = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
			spaces++;
			if (i < (n - 1))
			{
				for (x = 0; x < spaces; x++)
				{
				_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
