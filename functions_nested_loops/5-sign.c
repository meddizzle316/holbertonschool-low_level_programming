#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the given number
 * Return: 0 if 0 and 1 if positive and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{	_putchar(0);
		return (0);
	}
}
