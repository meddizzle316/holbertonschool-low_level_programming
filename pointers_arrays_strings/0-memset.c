#include "main.h"
/**
 * function name - function description
 * @parameters: description
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
