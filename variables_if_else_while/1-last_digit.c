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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is greater than 5", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	if (last_digit > 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}

	/* your code goes there */
	return (0);
}
