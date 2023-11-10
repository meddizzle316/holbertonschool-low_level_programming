#include "main.h"
/**
 * exponentInt - returns a exponential equation
 * @base: exponential base
 * @n: power to multiply base to
 * Return: result of operation
 */
int exponentInt(const int base, int n)
{
	int i;
	int p = base;

	for (i = 1; i < n; ++i)
	{
		p *= base;
	}
	return (p);
}
/**
 * binary_to_uint - converts from binary to unsigned integer
 * @b: string that contains binary
 * Return: an unsigned int converted from binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;
	int x;

	result = 0;
	if (b == NULL)
	{
		return (0);
	}
	i = strlen(b) - 1;
	x = 0;
	while (b[i] == '1' || b[i] == '0')
	{
		if (b[i] == '1' && x > 0)
		{
			result += exponentInt(2, x);
		}
		else if (b[i] == '1' && x == 0)
		{
			result += 1;
		}
		i--;
		x++;
		if (i < 0)
		{
			return (result);
		}
	}
	return (0);
}
