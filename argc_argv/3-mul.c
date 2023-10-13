#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * mai? - multiplies two numbers
 * @argc: number of arguments including program name
 * @argv: array in which arguments are held of size argc
 * Return: result of two multiplied numbers or Error and -1 if no numbers
 */
int main(int argc, char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n -1");
	}
	else
	{
		int res, num1, num2;

		num1 = strtol(argv[argc - 2],NULL,10);
		num2 = strtol(argv[argc - 1],NULL,10);
		res = num1 * num2;
		printf("%d\n", res);
	}
	return (0);
}
