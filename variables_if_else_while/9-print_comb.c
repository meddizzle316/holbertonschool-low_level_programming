#include <stdio.h>
/**
 * main - writing 0-9
 *
 * Return: writing
 */
int main(void)
{
	int i;

	i = 48;
	for ( ; i < 58; )
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
