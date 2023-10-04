#include "main.h"
#include "2-strlen.c"
/**
 * _strncpy- copies a given string
 * @dest: output -- the copied string
 * @src: input -- string to be copied
 * @n: number of bytes/characters from src to be copied to dest?
 * Return: return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && i < (src[i] - '0'); i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
