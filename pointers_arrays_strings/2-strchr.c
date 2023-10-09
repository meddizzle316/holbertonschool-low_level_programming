#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: given string
 * @c: given character
 *
 * Return: returns pointer to location of character in string
 */
char *_strchr(char *s, char c)
{
	for ( ; *s >= 0; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
