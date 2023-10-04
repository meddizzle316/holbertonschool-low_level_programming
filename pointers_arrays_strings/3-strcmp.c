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
	int isEqual;

	i = 0; 
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			isEqual = 0;

		}
		else 
		{	
			output = s1[i] - s2[i];
			isEqual = -1;
			break;
		}		
	i++;
	}
	if (isEqual == 0)
	{
		return (0);
	}
	else
	{
		return (output);
	}
}
