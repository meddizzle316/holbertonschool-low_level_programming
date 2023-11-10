#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;
	unsigned long int length;
	
	length = 0;
	x = n;
	while (x != 0)
	{
		x /= 10;
		length++;
	}
	if (length > index)
	{
		return ((n & (1 << index)) != 0);
	}
	return (-1);
}
