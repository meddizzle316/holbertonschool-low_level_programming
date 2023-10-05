#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
char *_strchr(char *s, char c)
{
	int i;
	int hasChar;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			hasChar = 1;
			break;
		}
	}

	if (hasChar == 1)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
