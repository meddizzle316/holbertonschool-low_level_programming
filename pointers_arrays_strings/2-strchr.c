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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c) return (char *) s + i;
		else if (s[i + 1] == '\0' && c == '\0') return (char *) s + (i + 1);
	}
	return (NULL);
}
