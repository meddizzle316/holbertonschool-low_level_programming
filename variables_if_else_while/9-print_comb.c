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
		if (i != 57)
		{
			putchar(',');
		}
		putchar(' ');
		i++;
	}
	putchar('\n')
	return (0);
}
