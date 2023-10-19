#include <stdio.h>
#include "main.h"
#include "5-strlen.c"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to add on to s1
 * Return: s1 and s2 concatenated to the size of n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x;
	int len1;
	int len2;
	int totlen;
	char *new_string;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	totlen = len1 + n;
  	if (n >= len2)
	{
		n = len2;
	}

	new_string = (char *) malloc(sizeof(char) * totlen);
	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new_string[i] = s1[i];
	}
	for (x = 0; x < n; x++)
	{
		new_string[i] = s2[x];
	}
	return (new_string);
}
