#include "main.h"
#include <stdio.h>
/**
 * main - prints the first argument given
 * @argc: number of arguments given
 * @argv: array in which arguments are kept, of size argc
 * Return: name of program
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
