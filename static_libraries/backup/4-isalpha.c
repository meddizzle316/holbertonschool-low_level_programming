#include "main.h"
/**
 * _isalpha - finds if an given input is a letter
 * @c: ascii value of character
 * Return: 1 if letter and 0 if not
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 65 && c < 91)
		return (1);
	else
		return (0);
}
