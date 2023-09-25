#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98 with new line
 * @n: starting number
 *
 * Return: return nothing
 */
void print_to_98(int n)
{
	int i;

	i = n; 
	if (i > 98)
	{
		for (i = n; i < 99; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (i < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}
