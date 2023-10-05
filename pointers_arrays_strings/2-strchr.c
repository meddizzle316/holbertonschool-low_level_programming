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

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c) return (char *) s + i;
	}
	return (" ");
}
