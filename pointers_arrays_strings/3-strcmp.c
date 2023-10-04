#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: ?
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int output;

	i = 0; 
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			output = 0;
		}
		else if (s1[i] > s2[i])
		{
			output = 1;
		}		
		else 
		{
			output = -1;
		}
	}
	return (output);
}
