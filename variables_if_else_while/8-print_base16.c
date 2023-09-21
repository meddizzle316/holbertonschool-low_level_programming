#include <stdio.h>
/**
 * main - stuff
 *
 * Return: prints asll numbers in base 16 followed by a new line
 */
int main(void)
{
	int i;

	i = 49;
	for ( ; i < 58; )
	{
		putchar(i);
		i++;
	}
	i = 65;
	for ( ; i < 71; )
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
