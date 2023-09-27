#include "main.h"
/**
 * print_triangle - printing a triangle followed by new line
 * @size: size of triangle
 * Return: a triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int height;
		int width;
		int row;
		int spaces;
		int hashtags;

		row = 1;
		for (height = size; height > 0; height--)
		{
			spaces = size - row;
			hashtags = row;
			for ( ; spaces > 0; spaces++)
			{
				_putchar(' ');
			}
			for ( ; hashtags > 0; hashtags--)
			{
				_putchar(35);
			}
			row++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
