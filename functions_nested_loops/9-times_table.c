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
			if (y == 0)
			{
				_putchar('0' + sum);
			}
			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (sum < 10 && y != 9 && y != 0)
			{
				_putchar(' ');
				_putchar('0' + sum);
			}
			else if (sum > 9)
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
