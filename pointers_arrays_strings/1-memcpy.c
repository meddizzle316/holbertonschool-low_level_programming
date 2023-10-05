#include "main.h"
/**
 * function name - function description
 * @parameters: description
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
