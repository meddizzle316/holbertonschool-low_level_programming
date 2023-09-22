#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the given input
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;
	if (last_d < 0)
	{
		last_d *= -1;
	}
	_putchar('0' + last_d);
	return (last_d);
}
