#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: number of arguments received
 * @...: variable number of arguments
 * Return: return value
 */
int sum_them_all(const unsigned int n, ...)
{
	int x;
	unsigned int i;

	va_list(args);
	x = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}
	va_end(args);
	return (x);
}
