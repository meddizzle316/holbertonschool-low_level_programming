#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * function name - function description
 * @parameters: description
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
