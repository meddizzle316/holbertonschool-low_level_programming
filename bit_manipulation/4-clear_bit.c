#include "main.h"
/**
 * clear_bit - function that clears a bit (sets it to 0) at a bin index
 * @n: pointer to number to modify
 * @index: binary index to clear bit
 * Return: 1 if works, -1 if doesn't work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	mask = ~(1 << index);
	if (index < 32)
	{
		*n = *n & mask;
		return (1);
	}
	return (-1);
}
