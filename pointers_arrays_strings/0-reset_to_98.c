#include "main.h"
/**
 * reset_to_98 - takes a pointer as an int and updates its value to 98
 * @n: the first int parameter
 * Return: 0
 */
void reset_to_98(int *n)
{
	int *ptr = n;
	*ptr = 98;
}
