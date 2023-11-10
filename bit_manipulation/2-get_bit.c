#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int get_bit(unsigned long int n, unsigned int index)
{	
	if (index < 32)
	{
		return ((n & (1 << index)) != 0);
	}
	return (-1);
}
