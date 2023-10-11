#include "main.h"
#include "_strlen.c"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: the given string
 * Return: NOTHING it's void
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = _strlen(s) - 1;
	if (*s != '\0')
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s);
	}
}
