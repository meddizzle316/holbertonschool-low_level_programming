#include "search_algos.h"
/**
 * print_array - my function that prints arrays in the specified format
 * @array: given array of ints to be printed
 * @size: size of array
 *
 * Return: always void
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
		printf("Searching in array: ");
		while (array && i < size)
		{
			if (i > 0)
			{
				printf(", ");
			}
			printf("%d", array[i]);
			++i;
		}
		printf("\n");
}

/**
 * binary_search_recursion - subfunction of binary_search,
 * @array: array to be searched
 * @low: low index of array to be searched
 * @high: high index of array to be searched
 * @value: value we're searching for
 *
 * Return: index of array that value is located, or -1 if value is not found
 */
int binary_search_recursion(int *array, size_t low, size_t high, int value)
{
	int mid = 0;
	size_t new_size = (high - low);

	if (new_size == 0)
		new_size = 1;
	print_array(&array[low], new_size);
	if (new_size == 1 || new_size == 0)
		mid = (high + low) / 2;
	else if (new_size % 2 == 0)
		mid = ((high + low) / 2) - 1;
	else if (new_size % 2 == 1)
		mid = low + (high - low) / 2;
	if (array[mid] == value)
		return (mid);
	if (low > high || new_size <= 1)
		return (-1);
	if (array[mid] > value)
		return (binary_search_recursion(array, low, mid - 1, value));
	if (array[mid] < value)
		return (binary_search_recursion(array, mid + 1, high, value));
	return (-1);
}

/**
 * binary_search - the entry point where high and low are initialized
 * @array: array to be searched
 * @size: size of array
 * @value: value we're searching for
 *
 * Return: -1 if failed or index of array value is found at
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high;

	if (array == NULL)
		return (-1);
	high = size;
	low = 0;
	return (binary_search_recursion(array, low, high, value));
}
