#include "variadic_functions.h"

int main (void)
{
	int result;

	result = sum_them_all(5, 1, 2, 3, 4, 5);
	printf("%d\n", result);
	return (0);
}
