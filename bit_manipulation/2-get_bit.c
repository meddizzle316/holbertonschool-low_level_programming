#include "main.h"
/**
 * get_bit - returns value of bit at specified index
 * @n: int value
 * @index: index of binary to find value
 * Return: return 1, 0 or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 32)
	{
		return ((n & (1 << index)) != 0);
	}
	return (-1);
}
