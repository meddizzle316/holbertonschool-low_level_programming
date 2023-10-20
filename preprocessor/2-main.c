#include <stdio.h>
/**
 * main - entry point
 *
 * Return: name of file it was compiled from
 */
int main (int argc, char ** argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
