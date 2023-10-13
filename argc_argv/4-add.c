#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc -- number of arguments
 * @argv - array in which arguments are stored
 * Return: result of positive numbers
 */
int main(int argc, char *argv[])
{
	int i, x, res;

	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
		res += x;
	}
	printf("%d", res);
	return (0);
}
