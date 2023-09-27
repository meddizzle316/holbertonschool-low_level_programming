#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 101; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz\n");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz\n");
		}
		else if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz\n");
		}
		else 
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
