#include "main.h"
/**
 * _memcpyn - copies memory area
 * @dest: the pointer to the output
 * @src: the pointer to the input
 * @n: the amount of bytes to copy
 *
 * Return: a return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
