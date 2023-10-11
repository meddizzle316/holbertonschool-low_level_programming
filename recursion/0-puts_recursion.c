#include "main.h"
/**
 * _puts_recursio? - prints a string followed by a new line
 * @s: given string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
