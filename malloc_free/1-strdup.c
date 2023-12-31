#include "main.h"
#include "5-strlen.c"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated copied string given
 * @str: string given
 * Return: a pointer to the copied string
 */
char *_strdup(char *str)
{
	int i;
	char *new_string;
	int len = _strlen(str);

	new_string = malloc(sizeof(char) * (len + 1));
	if (str == NULL || new_string == NULL)
	{
		return ('\0');
	}
	for (i = 0; str[i]; i++)
	{
		new_string[i] = str[i];
	}
	new_string[i] = '\0';
	return (new_string);
}
