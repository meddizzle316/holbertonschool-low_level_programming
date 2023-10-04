#include "main.h"
/**
 * reverse_array - function description
 * @a: a given array
 * @n: given size of array
 * Return: return value
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int j;
	
	j = n - 1;
       	temp = 0;	
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp; 
		j--;
	}	
}
