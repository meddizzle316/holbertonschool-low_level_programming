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

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = get_op_func(argv[2]);
		result = op(a, b);
		if (result == 0)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
