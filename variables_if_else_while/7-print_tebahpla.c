#include <stdio.h>
/**
 * main - stuff
 *
 * Return: ditto
 */
int main(void)
{
	int i;

	i = 122;
	for ( ; i > 96; )
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
