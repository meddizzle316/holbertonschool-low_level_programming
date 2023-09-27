#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 - 14 with newline
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar ('\n');
	}
}
