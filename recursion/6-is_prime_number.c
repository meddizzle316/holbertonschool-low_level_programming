#include "main.h"
/**
 * is_prime_number - finds if n is a prime number, 0 if not
 * @n: given number
 * Return: 1 if prime, 0 if not
 */
int helper(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % m == 0)
	{
		return (0);
	}
	else if (m > n / 2)
	{
		return (1);
	}
	else
	{
		return (helper(n, m + 1));
	}
}

int is_prime_number(int n)
{
	int m = helper(n, 2);

	return (m);
}
