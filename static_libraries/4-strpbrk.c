#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: given string
 * @accept: set of bytes we're looking for in s
 *
 * Return: return value
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i]; i++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[i] == accept[x])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
