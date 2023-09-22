#include "main.h"
/**
 * print_alphabet - printing the alphabet
 *
 * Return: the lowercase alphabet
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	for ( ; i < 123; )
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
