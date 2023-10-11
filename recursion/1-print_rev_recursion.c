#include "main.h"
#include "_strlen.c"
#include "0-puts_recursion.c"
/**
 * _print_rev_recursio? - a function that prints a string in reverse
 * @s: the given string
 * Return: NOTHING it's void
 */
void _print_rev_recursion(char *s)
{
	char *temp;

	temp = s;
	if (*temp != '\0')
	{
		_puts_recursion(temp);
	}
	else if (*temp == '\0')
	{
		s = temp;
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}

}
