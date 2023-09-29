#include "main.h"
/**
 * *_strcopy - copies a string from src and puts it in dest
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; src[i] != 0; i++)
	{

	}
	for (x = 0; x < i; x++)
	{
		if (src[x] != 0)
		{
			dest[x] = src[x];
		}
	}
	return dest; 
}	
