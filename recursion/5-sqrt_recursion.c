#include "main.h"
/**
 * _sqrt_recursio? - finds the natural square root of n, else -1
 * @n: given number
 * Return: the square root or -1
 */
int helper(int n, int m)
{
	if (n == 1)
	{
		return (n);
	}
	else if (m <= 1)
	{
		return (-1);
	}
	else if (n / m == m && n % m == 0)
	{
		return (m);
	}
	else
	{
		return (helper(n, m - 1));
	}
}

int _sqrt_recursion(int n)
{
	int m = helper(n, n);

	return (m);
}
