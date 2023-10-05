#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;
	int storei, storex, lenofneedle;

	lenofneedle = _strlen(needle);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[i] == needle[x])
			{
				storei = i;
				storex = x;
				while (haystack[i] == needle[x])
				{
					if (haystack[i - 1] == needle[x - 1] && x == lenofneedle - 1)
					{
						return (char *) haystack + storei;
					}
					i++;
					x++;
				}
				i = storei;
				x = storex;
			}
		}
	}
	return (NULL);
}
