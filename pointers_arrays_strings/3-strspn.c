#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: given pointer to a string
 * @accept: substring
 *
 * Return: the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, noMatch;
	unsigned int j;

	j = 0;
	noMatch = 0;
	for (i = 0; s[i]; i++)
	{
		if (noMatch == 1)
		{
			break;
		}
			for (x = 0; accept[x]; x++)
			{
				if (s[i] == accept[x])
				{
					j++;
					noMatch = 0;
					break;
				}
				else
				{
					noMatch = 1;
				}
			}
	}
	return (j);
}
