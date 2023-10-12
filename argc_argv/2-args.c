#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments including the program name
 * @argv: the array in which the arguments are held, of size argc
 * Return: all arguments should be printed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
