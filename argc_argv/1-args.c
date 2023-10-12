#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: the array in which arguments are kept, of size argc
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
	}
	printf("%d\n", argc - 1);
	return (0);
}
