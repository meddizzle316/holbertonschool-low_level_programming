#include "main.h"
#include "2-strlen.c"
/**
 * _strcat - concatenates two strings
 * @dest: output
 * @src: input
 * Return: concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x;
	int dlen;
	int slen;
	int totlen;

	x = 0;
	slen = _strlen(src);
	dlen = _strlen(dest);
	totlen = slen + dlen;
	for (i = dlen; i < totlen; i++)
	{
		if (x < slen) 
		{
			dest[i] = src[x];
			x++;
		}
	}
	return (dest);
}
