#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - just doing the thing
 *
 * Return: returning a zero and maybe some comparisons
 */
int main(void)
{
	int n;

	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	if (last_d < 6 && last_d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}

	/* your code goes there */
	return (0);
}
