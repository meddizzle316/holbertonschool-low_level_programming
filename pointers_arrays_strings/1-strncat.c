#include "main.h"
#include "2-strlen.c"
/**
 * _strncat - concatenates two strings
 * @dest: output
 * @src: input
 * @n: limit of bytes/characters to use from src
 * Return: dest -- new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
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
		if (x < slen && x < n)
		{
			dest[i] = src[x];
			x++;
			n++;
		}
	}
	return (dest);
}
