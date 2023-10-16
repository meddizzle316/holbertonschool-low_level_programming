#include "main.h"
/**
 * _sqrt_recursio? - finds the natural square root of n, else -1
 * @n: given number
 * Return: the square root or -1
 */
float helper(int n, float m, float temp)
{
	if (m == temp)
	{
		return (m);
	}
	else
	{
		temp = m;
		m = (n / temp + temp) / 2;
		return (helper(n, m, temp));
	}
}

int _sqrt_recursion(int n)
{
	float temp = 0;

	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (n);
	}
	else
	{
		float m = helper(n, (n / 2), temp);

		return (m);
	}
}
