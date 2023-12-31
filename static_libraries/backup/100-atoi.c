#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the given string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int res, i, hasNumber, isMin, lastAdd;
	int isNegative = 1;

	res = i = hasNumber = isMin = lastAdd = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 48 && s[i] <= 57 && res > 214748362 && isNegative == -1)
		{
			res =  -48 + (res * 10);
			lastAdd = s[i] - 1;
			isMin = 1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
			{
			res = res * 10 + (s[i] - '0');
			hasNumber = 1;
			}
		if (s[i] == '-' && isNegative == 1)
		{
			isNegative = -1;
		}
		else if (s[i] == '-' && isNegative == -1)
		{
			isNegative = 1;
		}
		else if (s[i] == ' ' && hasNumber == 1)
			break;
	}
	if (isMin == 1)
	{
		return ((isNegative * (res + lastAdd)) - 1);
	}
	else
	{
		return (isNegative * res);
	}
}
