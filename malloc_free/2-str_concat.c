#include "main.h"
#include "5-strlen.c"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function description
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new string with both
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, totallen, i, x;
	char *concat_string;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	totallen = len1 + len2;

	concat_string = malloc(sizeof(char) * (totallen + 1));

	if (concat_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		concat_string[i] = s1[i];
	}
	for (x = 0; s2[x]; x++, i++)
	{
		concat_string[i] = s2[x];
	}
	return (concat_string);

}
