#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the given string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int res = 0;
	int i, isNegative, hasNumber;

	hasNumber = 0; 
	isNegative = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
		      res = res*10 + s[i] - '0';
		      hasNumber = 1;
		}
		if (s[i] == '-' && isNegative == 0)
		{
			isNegative = 1;
		}
		else if (s[i] == '-' && isNegative == 1)
		{
			isNegative = 0; 
		}
		else if (s[i] == ' ' && hasNumber == 1)
		{
			break;
		}
	}  
	if (isNegative == 1)
	{
		return (-res);
	}
	else 
	{
		return (res);
	}
}
