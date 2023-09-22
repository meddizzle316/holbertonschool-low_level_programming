#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: giving the minute of every day
 */
void jack_bauer(void)
{
	int hour;

	int min; 

	hour = 0;
	min = 0;
	for ( ; hour < 24; hour++)
	{
		for ( ; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
	
		}
	}
}	
