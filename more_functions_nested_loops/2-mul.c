#include "main.h"
/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: 1
 */
int mul(int a, int b)
{
	int sum;

	if (a > 47 && a < 58 && b > 47 && b < 58)
	{
		return (a * b);
	}
	else 
	{
		return (0);
	}
}
