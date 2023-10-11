#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1));
	}
}
