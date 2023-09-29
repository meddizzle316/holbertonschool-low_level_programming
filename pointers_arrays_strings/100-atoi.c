#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the given string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int result;
	int hasInteger;

	hasInteger = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			_putchar(s[i]);
			hasInteger = 1;
		        result += s[i];	
		}
	}
	if (hasInteger == 1)
	{
		return (result);
	}
	else
	{
		return (0);
	}
}
