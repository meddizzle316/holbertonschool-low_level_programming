#include "main.h"
#include <stdio.h>

/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			printf("%c", a[i][x]);
		}
		_putchar('\n');
	}
}
