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
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			if (*(needle - 1) == *(haystack - 1))
			{
				haystack++;
				needle++;
			}
		}
		if (*needle == '\0')
		{
			return (temp);
		}
		haystack++;
	}
	return (0);
}
