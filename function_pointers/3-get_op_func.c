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
		printf("The result of s: %s and the length is %lu\n", s, strlen(s));
		printf("The result of ops[%d] is %s and the length is %lu\n", i, ops[i].op, strlen(ops[i].op));
		printf("Result of comparison s == ops[i].op: %d\n", (s[0] == ops[i].op[0]));
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f); 
		}
		i++;
	}
	return (ops[i].f);
}
