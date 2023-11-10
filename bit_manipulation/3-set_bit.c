#include "main.h"
/**
 * set_bit - turns a bit at index to 1
 * @n: number to be modified
 * @index: bit index to switch to 1
 * Return: 1 if works, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
