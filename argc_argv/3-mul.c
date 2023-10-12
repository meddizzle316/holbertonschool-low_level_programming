#include <stdio.h>
#include "main.h"
#include <stddef.h>
/**
 * main - multiplies two numbers
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
		long int res, num1, num2;

		num1 = (long int) argv[1];
		num2 = (long int) argv[2];
		res = num1 + num2;
		printf("%ld\n", res);

	}
	return (0);
}
