#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @src: a given string (do I need to give it a name?)
 * Return: returns a new string with all uppercase
 */
char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] -= 32;
		}
	}
	return (src);
}
