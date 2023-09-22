#include "main.h"
/**
 * times_table - printing the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int x;
	int y;
	int sum; 

	for (x = 0; x < 10; x++)
        {
                for (y = 0; y < 10; y++)
		{
			sum = x * y;
			_putchar('0' + sum);
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
