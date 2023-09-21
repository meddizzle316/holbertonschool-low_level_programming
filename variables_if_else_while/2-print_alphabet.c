#include <stdio.h>
/**
 * main - function
 *
 * Return: getting the whole alphabet, in lowercase
 */
int main(void)
{
	int i;

	char convert;

	i = 97;

	for ( ; i < 123;)
	{
		i++;
		convert = i;
		putchar(convert);
	}
	return (0);
}
