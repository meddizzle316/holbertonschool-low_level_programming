#include "3-calc.h"
/**
 * main - running the code for basic cal program
 * @argc: number of arguments
 * @argv: array in which arguments are stored
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	int (*op)(int, int);

	if (argc == 4)	
	{
		a = atoi(argv[1]);
		printf("%d\n", a);
		b = atoi(argv[argc - 1]);
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", b);
		printf("%s\n", argv[2]);
		op = get_op_func(argv[2]);
		if (op == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		result = op(a, b);
		printf("%d\n", result);
	}
	else 
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
