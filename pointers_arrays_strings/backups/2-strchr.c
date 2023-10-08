#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr: locates a character in a string
 * @s: given string
 * @c: given character
 *
 * Return: return value
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return (NULL);
}
