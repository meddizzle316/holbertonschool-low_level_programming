#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: given integer
 * Return: ditto
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else (n < 0)
	{
		return (n * -1);
	}
}
