#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @src: a given string
 * Return: the newly capitalized string
 */
char *cap_string(char *src)
{
	int i;

	for (i = 0; src[i]; )
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] -= 32;
			i++;
		}
		else if (src[i] < 97 || src[i] > 122)
		{
			i++;
		}
	}
	return (src);
}
