#include "main.h"
#include <stdio.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i]; i++)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[i] == needle[x])
			{
				if (haystack[i + 1] == needle[x + 1])
				{
					if (haystack[i + 2] == needle[x + 2])
					{
						return (char *) haystack +  i;
					}
				}
			}
		}
	}
	while (haystack[i] == '\0' && needle[x] == '\0')
	{
		return (char *) haystack +  i;
	}
	return (NULL);
}
