#include <stdlib.h>
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
		puts("is positive");
	}
	else if (n == 0)
	{
		puts("is zero");
	}
	else if (n < 0)
	{
		puts("is negative");
	}
	return (0);
}
