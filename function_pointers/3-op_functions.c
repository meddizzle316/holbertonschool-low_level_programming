#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the multiplication of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of a / b
 * @a: first integer
 * @b: second integer
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of division a / b
 * @a: first integer
 * @b: second integer
 *
 * Return: a % b (remainder of a / b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
