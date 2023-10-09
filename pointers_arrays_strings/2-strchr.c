#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strch - locates a character in a string
 * @s: given string
 * @c: given character
 *
 * Return: returns pointer to location of character in string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
