#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -- prints a chessboard
 * @a: pointer to the chessboard
 *
 * Return: a chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			printf("%c", a[i][x]);
			if (x == 7)
			{
				printf("\n");
			}
		}
	}
}
