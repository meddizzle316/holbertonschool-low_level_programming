#include "3-calc.h"
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
	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f); 
		}
		i++;
	}
	return (NULL);
}
