#include <stdio.h>
/**
 * main - function
 *
 * Return: prints all single digits (base 10) starting from zero with new line
 */
int main(void)
{
	int i;

	i = 0;
	for ( ; i < 10; )
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
