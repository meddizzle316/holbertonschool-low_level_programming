#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
#include <stdbool.h>
/**
 * get_op_func - function pointer selects the correct function to perform
 * @s: operator that indicates which function is performed
 *
 * Return: return value
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && strlen(s) == strlen(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
