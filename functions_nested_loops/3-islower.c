#include "main.h"
/**
 * _islower - checks for a lowercase character
 *
 * Return: gives a lower case letter
 */
int _islower(int c)
{	
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
