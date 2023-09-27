#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: size of square
 * Return: printing a square
 */
void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 0; height <= size; height++)
		{
			for (width = 0; width <= size; width++)
			{
				_putchar(35);
			}
		}
	}
	else 
	{
		_putchar('\n');
	}
}
