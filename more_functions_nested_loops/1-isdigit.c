#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: int value
 * Return: 1 if c is a digit and
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

