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
	int i, res, x;
	long conv;
	char *end;

	for (i = 1; i < argc; i++)
	{
		conv = strtol(argv[i], &end, 10);
		if (*end != '\0')
		{
			printf("Error");
			break;
		}
		else
		{
			x = conv;
			res += x;
		}
	}
	printf("%d\n", res);
	return (0);
}
