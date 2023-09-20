#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - does stuff
 *
 * Return: gets a zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%lu is positive", n);
	}
	else if (n == 0)
	{
		printf("%lu is zero", n);
	}
	else if (n < 0)
	{
		printf("%lu is negative", n);
	}
	return (0);
}
