#include <stddef.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string, array of char
 * Return: 0
 */
int _strlen(char *s)
{
	int length;
	
	if (s == NULL)
	{
		return (0);
	}
	for (length = 0; s[length] != 0; length++)
	{
	}
	return (length);
}
