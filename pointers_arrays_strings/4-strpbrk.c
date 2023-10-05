#include "main.h"
#include <stdio.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;
	char *j;

	for (i = 0; s[i]; i++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[i] == accept[x])
			{
				j = &s[i];
				return (j);
			}
		}
	}
	return (NULL);
}
