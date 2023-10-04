#include "main.h"
/**
 * leet - switchs out certain characters in a string
 * @scr: the given string
 * Return: the modified string
 */
char *leet(char *src)
{
	int i, x;
	char s2[] = {"o0lLeEaAtT"};
	int s3[] = {0, 0, 1, 1, 3, 3, 4, 4, 7, 7};

	for (i = 0; src[i]; i++ )
	{
		for (x = 0; s2[x]; x++)
		{
			if (src[i] == s2[x])
			{
				src[i] = s3[x] + '0';
			}
		}
	}
	return (src);
}
