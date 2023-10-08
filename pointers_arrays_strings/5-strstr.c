#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: the substring we're checking the string to see if it's in there
 *
 * Return: the pointer to the location the string is
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;
	int storei, storex, lenofneedle, lenofhaystack;

	lenofneedle = _strlen(needle);
	lenofhaystack = _strlen(haystack);
	for (i = 0; i <= lenofhaystack; i++)
	{
		if (haystack[i] != needle[x])
		{
			break;
		}
		while (haystack[i] == needle[x])
		{
			storei = i;
			storex = x;
			if (haystack [i - 1] == needle[x - 1] && x == lenofneedle - 1)
			{
				return (char *) (haystack + storei);
			}
			i = storei;
			x = storex;
		}
		if (lenofneedle == 0)
		{
			return (char *) (haystack);
		}
	}
	return (NULL);
}
