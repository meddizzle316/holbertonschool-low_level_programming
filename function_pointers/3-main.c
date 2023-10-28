#include "3-calc.h"
/**
 * main - running the code for basic cal program
 * @argc: number of arguments
 * @argv: array in which arguments are stored
 * Return: Always 0.
 */
int main(int argc, char **argv)
{

	int a;
	int b;
	int (*op)(int, int);
	int result;
	if (argc < 5)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = get_op_func(argv[2]);
		result = op(a, b);
		printf("%d\n", result);
	}
	return (0);
}
