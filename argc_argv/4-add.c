#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - adds positive numbers
 * @argc -- number of arguments
 * @argv - array in which arguments are stored
 * Return: result of positive numbers
 */
int main(int argc, char *argv[])
{
	int i, x;

	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 10);
		if (isdigit(x))
		{
			x += x + x;
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}
