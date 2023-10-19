#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: return value
 */
void *malloc_checked(unsigned int b)
{
	char * ptr;

	ptr = (char *) malloc(sizeof(char) * b);
	if (ptr == NULL)
	{
		return (0);
	}
	return (ptr);
}
