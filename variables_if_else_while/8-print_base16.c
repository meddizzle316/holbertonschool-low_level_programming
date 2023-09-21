#include <stdio.h>
/**
 * main - stuff
 *
 * Return: prints asll numbers in base 16 followed by a new line
 */
int main(void)
{
	int i;

	i = 48;
	for ( ; i < 58; )
	{
		putchar(i);
		i++;
	}
	i = 97;
	for ( ; i < 103; )
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
