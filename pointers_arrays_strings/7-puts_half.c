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
	
	i = _strlen(str) / 2; 
	for (x = 0; x < i; x++)
	{
		_putchar(str[x]);
	}	
	_putchar('\n');
}
