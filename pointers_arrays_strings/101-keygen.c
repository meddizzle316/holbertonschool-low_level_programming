#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */

int main (void)
{
	int i;

	srand(time(NULL));
	for (i = 0; i < 15; i++)
	{
		printf("%d\n", rand());
	}
	return (0);
}
