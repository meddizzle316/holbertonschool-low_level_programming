#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}
