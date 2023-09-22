#include "main.h"
/**
 * print_alphabet_x10 -- do stuff
 *
 * Return: prints x10 the lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int i;

	int x;

	i = 97;
	x = 1;
	for ( ; x < 5; x++)
	{
		for ( ; i < 123; )
		{
			_putchar(i);
			i++;
		}
		i = 97;
		_putchar('\n');
	}
}
