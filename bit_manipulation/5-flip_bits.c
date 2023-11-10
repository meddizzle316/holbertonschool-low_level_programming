#include "main.h"
/**
 * flip_bits - tells you how many bits need to be flipped in n to get m
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char binArray1[32];
	char binArray2[32];
	int i, x, big, small;
	unsigned int result;

	i = x = big = small = 0;
	result = 0;
	if (n > m)
	{
		big = n;
		small = m;
	}
	else
	{
		big = m;
		small = n;
	}
	while (big > 0)
	{
		binArray1[i] = (big & 1) + '0';
		big = big >> 1;
		i++;
		binArray2[x] = (small & 1) + '0';
		small = small >> 1;
		x++;
	}
	binArray1[i] = '\0';
	binArray2[x] = '\0';
	for (x = x - 1, i = i - 1; i >= 0; i--, x--)
	{
		if (binArray1[i] != binArray2[x])
		{
			result++;
		}
	}
	return (result);
}
