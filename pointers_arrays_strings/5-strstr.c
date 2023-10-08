#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strst - locates a substring
 * @haystack: a string
 * @needle: the substring we're checking the string to see if it's in there
 *
 * Return: the pointer to the location the string is
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	char *thimble;

	while(*haystack)
	{
		temp = haystack;
		thimble = needle;
		if (*haystack != *needle)
		{
			continue;
		}
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (temp);
		}
		if (*haystack != *needle)
		{
			haystack = temp;
			needle = thimble;
		}
		haystack++;
	}
	return (0);
}
