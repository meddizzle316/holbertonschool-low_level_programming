#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first int pointer
 * @b: second int pointer
 * Return: return value
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
