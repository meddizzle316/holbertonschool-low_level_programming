#include "main.h"
/**
 * puts_half - prints half of a string, followed by new line
 * @str: description
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int x;
	
	for (i = 0; str[i] != 0; i++)
	{

	}
	i = i + 1;	
	for (x = i / 2; str[x] != 0; x++)
	{
		_putchar(str[x]);
	}	
	_putchar('\n');
}
