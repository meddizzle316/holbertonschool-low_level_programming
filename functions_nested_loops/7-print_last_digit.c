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
	_putchar(last_d);
	return (last_d);
}
