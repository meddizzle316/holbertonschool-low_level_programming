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
		int spaces;

		if (size > 0)
		{
			for (height = 0; height < size; height++)
			{
				for (width = 0; width < size; width++)
				{
					for (spaces = size; spaces > 0; spaces--)
					{
						if (width <= spaces)
						{
							_putchar(35);
						}
						else 
						{
							_putchar(' ');
						}
					}
				}
				_putchar('\n');
			}
		}
	}
	else 
	{
		_putchar('\n');
	}
}
