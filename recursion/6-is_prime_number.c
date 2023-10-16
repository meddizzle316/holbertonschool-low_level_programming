#include "main.h"
/**
 * helper - finds if n is a prime number, 0 if not
 * @n: given number
 * @m: counter starts at 2
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
/**
 * is_prime_number - finds if number is prime
 * @n: given number
 *
 * Return: true (1) or false (0)
 */
int is_prime_number(int n)
{
	int m = helper(n, 2);

	return (m);
}
