#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
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
			for (x = 0; accept[x]; x++)
			{
				if (s[i] == accept[x])
				{
					j++;
					break;
				}
				else
				{
					noMatch = 1;
				}
			}
		}
	}
	return (j);
}
